/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>
#include <boost/bind.hpp>

#include "OSGConfig.h"

#include "OSGGeometry.h"
#include "OSGGeoImmediatePumpGroup.h"

#include <OSGAction.h>
#include <OSGRenderAction.h>
#include <OSGIntersectAction.h>
#include <OSGDrawEnv.h>

//#include <OSGIntersectActor.h>

#include "OSGTriangleIterator.h"
#include "OSGPrimitiveIterator.h"
#include "OSGFaceIterator.h"
#include "OSGLineIterator.h"
#include "OSGEdgeIterator.h"
#include "OSGDrawableStatsAttachment.h"

OSG_USING_NAMESPACE

// Documentation for this class is emited in the
// OSGGeometryBase.cpp file.
// To modify it, please change the .fcd file (OSGGeometry.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

Geometry::PumpGroupStorage Geometry::_pumps;

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void Geometry::initMethod(InitPhase ePhase)
{
    if(ePhase == TypeObject::SystemPost)
    {
        IntersectAction::registerEnterDefault(
            getClassType(),
            reinterpret_cast<Action::Callback>(&Geometry::intersect));

        RenderAction::registerEnterDefault(
            getClassType(),
            reinterpret_cast<Action::Callback>(
                &MaterialDrawable::renderActionEnterHandler));
                
        RenderAction::registerLeaveDefault(
            getClassType(),
            reinterpret_cast<Action::Callback>(
                &MaterialDrawable::renderActionLeaveHandler));
    }
}


/*! A little helper function to map the OpenGL primitive type to a name.
*/
const char *Geometry::mapType(UInt8 type)
{
    switch(type)
    {
    case GL_POINTS:         return "Points";
    case GL_LINES:          return "Lines";
    case GL_LINE_LOOP:      return "LineLoop";
    case GL_LINE_STRIP:     return "LineStrip";
    case GL_TRIANGLES:      return "Triangles";
    case GL_TRIANGLE_STRIP: return "TriangleStrip";
    case GL_TRIANGLE_FAN:   return "TriangleFan";
    case GL_QUADS:          return "Quads";
    case GL_QUAD_STRIP:     return "QuadStrip";
    case GL_POLYGON:        return "Polygon";
    }

    return "Unknown Primitive";
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

Geometry::Geometry(void) :
    Inherited()
{
}

Geometry::Geometry(const Geometry &source) :
    Inherited(source)
{
}

Geometry::~Geometry(void)
{
}

void Geometry::onCreate(const Geometry *)
{
    // if we're in startup this is the prototype, which shouldn't have an id
    if(GlobalSystemState == Startup)
        return;

    setClassicGLId(               
        Window::registerGLObject(
            boost::bind(&Geometry::handleClassicGL, this, 
                            _1, _2, _3),
            &Geometry::handleClassicDestroyGL
            ));

    setAttGLId(               
        Window::registerGLObject(
            boost::bind(&Geometry::handleAttGL, this, 
                            _1, _2, _3),
            &Geometry::handleAttDestroyGL
            ));
}

void Geometry::onDestroy(UInt32)
{
    if(getClassicGLId() > 0)
        Window::destroyGLObject(getClassicGLId(), 1);
    if(getAttGLId() > 0)
        Window::destroyGLObject(getAttGLId(), 1);
}

/*------------------------------ access -----------------------------------*/

void Geometry::adjustVolume(Volume & volume)
{
    GeoVectorProperty *pos = getPositions();

    if(pos == NULL)
        return;                  // Node has no points, no volume

    volume.setValid();
        
    PrimitiveIterator it  = this->beginPrimitives();
    PrimitiveIterator end = this->endPrimitives  ();

    for(; it != end; ++it)
    {
        for(UInt32 v = 0; v < it.getLength(); ++v)
        {
            volume.extendBy(it.getPosition(v));
        }
    }
}


/*! OpenGL object handler. Used for DisplayList caching.
*/
void Geometry::handleClassicGL(DrawEnv                 *pEnv, 
                               UInt32                   id, 
                               Window::GLObjectStatusE  mode)
{
    UInt32                   glid;
    Window                  *pWin = pEnv->getWindow();

    if(mode == Window::initialize || mode == Window::needrefresh ||
       mode == Window::reinitialize)
    {
        if(mode == Window::initialize)
        {
            glid = glGenLists(1);
            pWin->setGLObjectId(id, glid);
        }
        else
        {
            glid = pWin->getGLObjectId(id);
        }

        glNewList(glid, GL_COMPILE);

        GeoPumpGroup::PropertyCharacteristics prop;

        prop = GeoPumpGroup::characterizeGeometry(this);

        GeoPumpGroup::GeoPump pump;

        pump = GeoPumpGroup::findGeoPump(pEnv, prop);

        if (pump)
        {
            pump(pEnv, this);
        }
        else
        {
            SWARNING << "Geometry::handleGL: no Pump found for geometry "
                     << this
                     << std::endl;
        }

        glEndList();
    }
    else
    {
        SWARNING << "Geometry(" << this << "::handleGL: Illegal mode: "
                 << mode << " for id " << id << std::endl;
    }

}

void Geometry::handleClassicDestroyGL(DrawEnv                 *pEnv, 
                        UInt32                   id, 
                        Window::GLObjectStatusE  mode)
{
    UInt32                   glid;
    Window                  *pWin = pEnv->getWindow();

    if(mode == Window::destroy)
    {
        glid = pWin->getGLObjectId(id);

        glDeleteLists(glid, 1);
    }
    else if(mode == Window::finaldestroy)
    {
        //SWARNING << "Last geometry user destroyed" << std::endl;
    }
    else
    {
        SWARNING << "Geometry::handleClassicDestroyGL: Illegal mode: "
                 << mode << " for id " << id << std::endl;
    }

}

void Geometry::handleAttGL(DrawEnv                 *pEnv, 
                           UInt32                   id, 
                           Window::GLObjectStatusE  mode)
{
    UInt32                   glid;
    Window                  *pWin = pEnv->getWindow();

    if(mode == Window::initialize || mode == Window::needrefresh ||
       mode == Window::reinitialize)
    {
        if(mode == Window::initialize)
        {
            glid = glGenLists(1);
            pWin->setGLObjectId(id, glid);
        }
        else
        {
            glid = pWin->getGLObjectId(id);
        }

        glNewList(glid, GL_COMPILE);

        GeoPumpGroup::PropertyCharacteristics prop;

        prop = GeoPumpGroup::characterizeGeometry(this);
        prop |= GeoPumpGroup::UsesShader;

        GeoPumpGroup::GeoPump pump;

        pump = GeoPumpGroup::findGeoPump(pEnv, prop);

        if (pump)
        {
            pump(pEnv, this);
        }
        else
        {
            SWARNING << "Geometry::handleGL: no Pump found for geometry "
                     << this
                     << std::endl;
        }

        glEndList();
    }
    else
    {
        SWARNING << "Geometry(" << this << "::handleGL: Illegal mode: "
                 << mode << " for id " << id << std::endl;
    }

}

void Geometry::handleAttDestroyGL(DrawEnv                 *pEnv, 
                                  UInt32                   id, 
                                  Window::GLObjectStatusE  mode)
{
    UInt32                   glid;
    Window                  *pWin = pEnv->getWindow();

    if(mode == Window::destroy)
    {
        glid = pWin->getGLObjectId(id);

        glDeleteLists(glid, 1);
    }
    else if(mode == Window::finaldestroy)
    {
        //SWARNING << "Last geometry user destroyed" << std::endl;
    }
    else
    {
        SWARNING << "Geometry::handleAttDestroyGL: Illegal mode: "
                 << mode << " for id " << id << std::endl;
    }

}

Action::ResultE Geometry::drawPrimitives(DrawEnv *pEnv)
{
    // !!! HACK this needs to be decided by the used material/state
    bool usesShader = false;

    // store glColor.
    Color4f color;

    if(getColors() != NULL)
        glGetFloatv(GL_CURRENT_COLOR, color.getValuesRGBA());

    if(getDlistCache() == true)
    {
        Int32 glid;

        if(usesShader)
        {
            glid = getAttGLId();
        }
        else
        {
            glid = getClassicGLId();
        }

        pEnv->getWindow()->validateGLObject(glid, pEnv);
        glCallList(pEnv->getWindow()->getGLObjectId(glid));
    }
    else
    {
        GeoPumpGroup::PropertyCharacteristics prop;

        prop = GeoPumpGroup::characterizeGeometry(this);

        if(usesShader)
            prop |= GeoPumpGroup::UsesShader;

        GeoPumpGroup::GeoPump pump;
        pump = GeoPumpGroup::findGeoPump(pEnv, prop);

        if (pump)
        {
            pump(pEnv, this);
        }
        else
        {
            SWARNING << "Geometry::drawPrimitives: no Pump found for geometry "
                     << this
                     << std::endl;
        }
    }

    // restore glColor.
    if(getColors() != NULL)
        glColor4fv(color.getValuesRGBA());

/*
    StatCollector *coll = action->getStatistics();

    if(coll != NULL)
    {
        StatIntElem *el = coll->getElem(Drawable::statNTriangles,false);
        if(el)
        {
            GeometryPtr geo(this);
            UInt32 ntri,nl,np,is;

            calcPrimitiveCount(geo, ntri, nl, np);
            el->add(ntri);
            coll->getElem(Drawable::statNLines)->add(nl);
            coll->getElem(Drawable::statNLines)->add(np);

            if(getIndices() == NULL)
            {
                if(getPositions() != NULL)
                {
                    is = getPositions()->getSize();
                }
                else
                {
                    is = 0;
                }
            }
            else
            {
                is = getIndexMapping().size();
                is = getIndices()->getSize() /(is ? is : 1);
            }
            coll->getElem(Drawable::statNVertices)->add(is);
        }
    }
*/
    return Action::Continue;
}

/*! The IntersectAction callback for Geometry. It computes if the ray used in
    the IntersectAction \a action hits this object and if that is the case,
    which triangle is hit.

    \param[in] action IntersectAction performing the intersect test.
    \return Action result code, \see OSG::Action.

    \note This method is registered with the IntersectAction and automatically
    called from there, you probably never have to call it manually.
*/
Action::ResultE Geometry::intersect(Action * action)
{
    IntersectAction      *ia = dynamic_cast<IntersectAction*>(action);
    ia->getActNode()->updateVolume();
    const DynamicVolume  &dv = ia->getActNode()->getVolume();

    if(dv.isValid() && !dv.intersect(ia->getLine()))
    {
        return Action::Skip; //bv missed -> can not hit children
    }

    TriangleIterator it  = this->beginTriangles();
    TriangleIterator end = this->endTriangles  ();
    Real32           t;
    Vec3f            norm;

    for(; it != end; ++it)
    {
        if(ia->getLine().intersect(it.getPosition(0),
                                   it.getPosition(1),
                                   it.getPosition(2), t, &norm))
        {
            ia->setHit(t, ia->getActNode(), it.getIndex(), norm);
        }
    }

    return Action::Continue;
}

/*----------------------------- class specific ----------------------------*/

void Geometry::changed(ConstFieldMaskArg whichField, 
                       UInt32            origin,
                       BitVector         details)
{

    // invalidate the dlist cache
    if(getDlistCache())
    {
        if(getClassicGLId() == 0)
        {
            setClassicGLId(               
                Window::registerGLObject(
                    boost::bind(&Geometry::handleClassicGL, this, 
                                    _1, _2, _3),
                    &Geometry::handleClassicDestroyGL
                    ));
        }
        if(getAttGLId() == 0)
        {
            setAttGLId(               
                Window::registerGLObject(
                    boost::bind(&Geometry::handleAttGL, this, 
                                    _1, _2, _3),
                    &Geometry::handleAttDestroyGL
                    ));
        }

        Window::refreshGLObject(getClassicGLId());
        Window::refreshGLObject(getAttGLId    ());
    }
    else
    {
        if(getClassicGLId() != 0)
        {
            Window::destroyGLObject(getClassicGLId(), 1);

            setClassicGLId(0);
        }
        if(getAttGLId() != 0)
        {
            Window::destroyGLObject(getAttGLId(), 1);

            setAttGLId(0);
        }
    }

    Inherited::changed(whichField, origin, details);
}

void Geometry::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump Geometry NI" << std::endl;
}

UInt32 Geometry::indexOccurrence(GeoIntegralProperty * const value)
{
    UInt32 returnValue = 0;

    for(UInt32 i = 0; i < _mfPropIndices.size(); ++i)
    {
        if(_mfPropIndices[i] != NULL && _mfPropIndices[i] == value)
        {
            ++returnValue;
        }
    }

    return returnValue;
}

bool Geometry::isSingleIndex(void)
{
    bool returnValue = true;

    for(UInt32 i = PositionsIndex; i < _mfPropIndices.size(); ++i)
    {
        if(_mfPropIndices[i] != _mfPropIndices[PositionsIndex])
        {
            returnValue = false;
            break;
        }
    }

    return returnValue;
}

Geometry::IndexBag Geometry::getUniqueIndexBag(void)
{
    IndexBag returnValue;
    UInt32   i;

    typedef std::pair<GeoIntegralProperty *, 
                      std::vector<UInt16>  > IndexBagEntry;

    // Find the first valid prop
    for(i = 0; i < _mfPropIndices.size(); ++i)
    {
        if(_mfPropIndices[i] != NULL)
        {
            break;
        }
    }

    if(i == _mfPropIndices.size())
        return returnValue;

    IndexBagEntry oEntry;

    oEntry.first = _mfPropIndices[i];
    oEntry.second.push_back(i);
    
    returnValue.push_back(oEntry);

    bool bFoundProp;

    for(UInt32 j = i + 1; j < _mfPropIndices.size(); j++)
    {
        bFoundProp = false;

        for(UInt32 k = 0; k < returnValue.size() && bFoundProp == false; ++k)
        {
            if(_mfPropIndices[j] == returnValue[k].first)
            {
                returnValue[k].second.push_back(j);

                bFoundProp = true;
            }            
        }

        if(bFoundProp == false && _mfPropIndices[j] != NULL)
        {
            IndexBagEntry oEntry;

            oEntry.first = _mfPropIndices[j];
            oEntry.second.push_back(j);
            
            returnValue.push_back(oEntry);
        }
    }

    return returnValue;
}

void Geometry::fill(DrawableStatsAttachment *pStat)
{
    if(pStat == NULL)
    {
        FINFO(("Geometry::fille StatsAttachment::"
               "calc: No attachment given.\n"));

        return;
    }

    // Att Bytes
    UInt32 storedAttBytes    = 0;
    UInt32 attBytesPerVertex = 0;

    for(UInt16 i = 0; i < Geometry::MaxAttribs; ++i)
    {
        if(this->getProperty(i) == NULL)
            continue;

        attBytesPerVertex += this->getProperty(i)->getFormatSize() *
                             this->getProperty(i)->getDimension();
        storedAttBytes    += this->getProperty(i)->getFormatSize() *
                             this->getProperty(i)->getDimension()  *
                             this->getProperty(i)->size();
    }


    GeoIntegralProperty *geoTypePtr = this->getTypes();
    GeoIntegralProperty *lensPtr    = this->getLengths();

    UInt32 lN, tN, len, type;

    lN = (lensPtr    == NULL) ? 0 : lensPtr   ->getSize();
    tN = (geoTypePtr == NULL) ? 0 : geoTypePtr->getSize();

    if((tN == 0) || (lN != 0 && tN != lN) || (lN == 0 && tN != 1))
    {
        FINFO(("GeoStatsAttachment::calc: "
               "Lengths and Types information mismatch.\n"));
        return;
    }

    UInt32 triangle = 0, line = 0, point = 0, vertices = 0,
           procAttBytes = 0;

    for(UInt32 i = 0; i < tN; ++i)
    {
        geoTypePtr->getValue(type, i);

        if(lN != 0)
        {
            lensPtr->getValue(len, i);
        }
        else
        {
            GeoVectorProperty *pos = this->getPositions();

            if(pos == NULL)
            {
                FINFO(("GeoStatsAttachment::calc: No Positions!\n"));
                return;
            }

            len = pos->size();
        }

        vertices     += len;
        procAttBytes += len * attBytesPerVertex;

        switch(type)
        {
            case GL_POINTS:
                point += len;
                break;
            case GL_LINES:
                line += len / 2;
                break;
            case GL_LINE_LOOP:
                line += len;
                break;
            case GL_LINE_STRIP:
                line += len - 1;
                break;
            case GL_TRIANGLES:
                triangle += len / 3;
                break;
            case GL_TRIANGLE_STRIP:
                triangle += len - 2;
                break;
            case GL_TRIANGLE_FAN:
                triangle += len - 2;
                break;
            case GL_QUADS:
                triangle += len / 2;
                break;
            case GL_QUAD_STRIP:
                triangle += len - 2;
                break;
            case GL_POLYGON:
                triangle += len - 2;
                break;
            default:
                FWARNING(("GeoStatsAttachment::calc: Invalid geoType: %d\n",
                          type));
                break;
        }
    }

    pStat->setVertices(vertices);
    pStat->setPoints(point);
    pStat->setLines(line);
    pStat->setTriangles(triangle);
    pStat->setStoredAttributeBytes(storedAttBytes);
    pStat->setProcessedAttributeBytes(procAttBytes);
    pStat->setValid(true);
}

// Iterators


/*-------------------------- Primitive Iterator --------------------------------*/

/*! Return a PrimitiveIterator poiting to the beginning of the Geometry.
*/
PrimitiveIterator Geometry::beginPrimitives(void) const
{
    PrimitiveIterator it(this);

    it.setToBegin();

    return it;
}

/*! Return a PrimitiveIterator poiting to the end of the Geometry.
*/
PrimitiveIterator Geometry::endPrimitives(void) const
{
    PrimitiveIterator it(this);

    it.setToEnd();

    return it;
}

/*! Return a TriangleIterator poiting to the beginning of the Geometry.
*/
TriangleIterator Geometry::beginTriangles(void) const
{
    TriangleIterator it(this);

    it.setToBegin();

    return it;
}

/*! Return a TriangleIterator poiting to the end of the Geometry.
*/
TriangleIterator Geometry::endTriangles(void) const
{
    TriangleIterator it(this);

    it.setToEnd();

    return it;
}

/*! Return a FaceIterator poiting to the beginning of the Geometry.
*/
FaceIterator Geometry::beginFaces(void) const
{
    FaceIterator it(this);

    it.setToBegin();

    return it;
}

/*! Return a FaceIterator poiting to the end of the Geometry.
*/
FaceIterator Geometry::endFaces(void) const
{
    FaceIterator it(this);

    it.setToEnd();

    return it;
}

/*! Return a LineIterator poiting to the beginning of the Geometry.
*/
LineIterator Geometry::beginLines(void) const
{
    LineIterator it(this);

    it.setToBegin();

    return it;
}

/*! Return a LineIterator poiting to the end of the Geometry.
*/
LineIterator Geometry::endLines(void) const
{
    LineIterator it(this);

    it.setToEnd();

    return it;
}

/*! Return a EdgeIterator poiting to the beginning of the Geometry.
*/
EdgeIterator Geometry::beginEdges(void) const
{
    EdgeIterator it(this);

    it.setToBegin();

    return it;
}

/*! Return a EdgeIterator poiting to the end of the Geometry.
*/
EdgeIterator Geometry::endEdges(void) const
{
    EdgeIterator it(this);

    it.setToEnd();

    return it;
}
