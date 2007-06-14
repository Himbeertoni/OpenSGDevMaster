/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class GeoStatsAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOSTATSATTACHMENTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGGeoStatsAttachmentBase.h"
#include "OSGGeoStatsAttachment.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoStatsAttachment
    The base class for geometry statistics.

    The GeoStatsAttachment keeps track of some core Geometry Characteristics like
    the number of vertices used, the number of points, lines or triangles created
    and some information about memory consumption.

    It is designed as an attachment so that it can be kept inside the graph. It
    can also be used to keep aggregated information about subtrees, by adding up
    the contributions of the underlying nodes. It can invalidate itself by using
    changed callbacks, so that no manual bookkeeping is necessary.

    \warning To use the automatic update you have to use the
    osg::GeoStatsAttachment::addTo() or osg::GeoStatsAttachment::attachTo()
    methods! Otherwise the necessary callbacks are not set!

    \warning Before accessing the data osg::GeoStatsAttachment::validate() needs
    to be called to calculate and aggregate the results.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var UInt32          GeoStatsAttachmentBase::_sfVertices
    The number of vertices in the subtree.
*/

/*! \var UInt32          GeoStatsAttachmentBase::_sfPoints
    The number of points in the subtree.
*/

/*! \var UInt32          GeoStatsAttachmentBase::_sfLines
    The number of lines in the subtree.
*/

/*! \var UInt32          GeoStatsAttachmentBase::_sfTriangles
    The number of triangles in the subtree.
*/

/*! \var UInt32          GeoStatsAttachmentBase::_sfProcessedAttributeBytes
    The number of bytes in vertex attribute data that are processed while rendering.
*/

/*! \var UInt32          GeoStatsAttachmentBase::_sfStoredAttributeBytes
    The number of bytes in vertex attribute data that are stored.
*/

/*! \var bool            GeoStatsAttachmentBase::_sfValid
    Flags whether the data is valid or needs to be updated.
*/


void GeoStatsAttachmentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(GeoStatsAttachmentBase::*GetSFVerticesF)(void) const;

    GetSFVerticesF GetSFVertices = &GeoStatsAttachmentBase::getSFVertices;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "vertices",
        "The number of vertices in the subtree.\n",
        VerticesFieldId, VerticesFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&GeoStatsAttachmentBase::editSFVertices),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFVertices));
#else
        reinterpret_cast<FieldGetMethodSig >(&GeoStatsAttachmentBase::getSFVertices));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(GeoStatsAttachmentBase::*GetSFPointsF)(void) const;

    GetSFPointsF GetSFPoints = &GeoStatsAttachmentBase::getSFPoints;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "points",
        "The number of points in the subtree.\n",
        PointsFieldId, PointsFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&GeoStatsAttachmentBase::editSFPoints),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPoints));
#else
        reinterpret_cast<FieldGetMethodSig >(&GeoStatsAttachmentBase::getSFPoints));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(GeoStatsAttachmentBase::*GetSFLinesF)(void) const;

    GetSFLinesF GetSFLines = &GeoStatsAttachmentBase::getSFLines;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "lines",
        "The number of lines in the subtree.\n",
        LinesFieldId, LinesFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&GeoStatsAttachmentBase::editSFLines),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLines));
#else
        reinterpret_cast<FieldGetMethodSig >(&GeoStatsAttachmentBase::getSFLines));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(GeoStatsAttachmentBase::*GetSFTrianglesF)(void) const;

    GetSFTrianglesF GetSFTriangles = &GeoStatsAttachmentBase::getSFTriangles;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "triangles",
        "The number of triangles in the subtree.\n",
        TrianglesFieldId, TrianglesFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&GeoStatsAttachmentBase::editSFTriangles),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTriangles));
#else
        reinterpret_cast<FieldGetMethodSig >(&GeoStatsAttachmentBase::getSFTriangles));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(GeoStatsAttachmentBase::*GetSFProcessedAttributeBytesF)(void) const;

    GetSFProcessedAttributeBytesF GetSFProcessedAttributeBytes = &GeoStatsAttachmentBase::getSFProcessedAttributeBytes;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "processedAttributeBytes",
        "The number of bytes in vertex attribute data that are processed while rendering.\n",
        ProcessedAttributeBytesFieldId, ProcessedAttributeBytesFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&GeoStatsAttachmentBase::editSFProcessedAttributeBytes),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFProcessedAttributeBytes));
#else
        reinterpret_cast<FieldGetMethodSig >(&GeoStatsAttachmentBase::getSFProcessedAttributeBytes));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(GeoStatsAttachmentBase::*GetSFStoredAttributeBytesF)(void) const;

    GetSFStoredAttributeBytesF GetSFStoredAttributeBytes = &GeoStatsAttachmentBase::getSFStoredAttributeBytes;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "storedAttributeBytes",
        "The number of bytes in vertex attribute data that are stored.\n",
        StoredAttributeBytesFieldId, StoredAttributeBytesFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&GeoStatsAttachmentBase::editSFStoredAttributeBytes),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFStoredAttributeBytes));
#else
        reinterpret_cast<FieldGetMethodSig >(&GeoStatsAttachmentBase::getSFStoredAttributeBytes));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFBool *(GeoStatsAttachmentBase::*GetSFValidF)(void) const;

    GetSFValidF GetSFValid = &GeoStatsAttachmentBase::getSFValid;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "valid",
        "Flags whether the data is valid or needs to be updated.\n",
        ValidFieldId, ValidFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&GeoStatsAttachmentBase::editSFValid),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFValid));
#else
        reinterpret_cast<FieldGetMethodSig >(&GeoStatsAttachmentBase::getSFValid));
#endif

    oType.addInitialDesc(pDesc);
}


GeoStatsAttachmentBase::TypeObject GeoStatsAttachmentBase::_type(
    GeoStatsAttachmentBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &GeoStatsAttachmentBase::createEmpty,
    GeoStatsAttachment::initMethod,
    (InitalInsertDescFunc) &GeoStatsAttachmentBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GeoStatsAttachment\"\n"
    "\tparent=\"StatsAttachment\"\n"
    "\tlibrary=\"Drawable\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "The base class for geometry statistics.\n"
    "\n"
    "The GeoStatsAttachment keeps track of some core Geometry Characteristics like\n"
    "the number of vertices used, the number of points, lines or triangles created\n"
    "and some information about memory consumption.\n"
    "\n"
    "It is designed as an attachment so that it can be kept inside the graph. It\n"
    "can also be used to keep aggregated information about subtrees, by adding up\n"
    "the contributions of the underlying nodes. It can invalidate itself by using\n"
    "changed callbacks, so that no manual bookkeeping is necessary.\n"
    "\n"
    "\\warning To use the automatic update you have to use the\n"
    "osg::GeoStatsAttachment::addTo() or osg::GeoStatsAttachment::attachTo()\n"
    "methods! Otherwise the necessary callbacks are not set!\n"
    "\n"
    "\\warning Before accessing the data osg::GeoStatsAttachment::validate() needs\n"
    "to be called to calculate and aggregate the results.\n"
    "\t<Field\n"
    "\t\tname=\"vertices\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of vertices in the subtree.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"points\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of points in the subtree.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"lines\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of lines in the subtree.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"triangles\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of triangles in the subtree.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"processedAttributeBytes\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of bytes in vertex attribute data that are processed while rendering.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"storedAttributeBytes\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The number of bytes in vertex attribute data that are stored.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"valid\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "                defaultValue=\"false\"\n"
    "\t>\n"
    "        Flags whether the data is valid or needs to be updated.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The base class for geometry statistics.\n"
    "\n"
    "The GeoStatsAttachment keeps track of some core Geometry Characteristics like\n"
    "the number of vertices used, the number of points, lines or triangles created\n"
    "and some information about memory consumption.\n"
    "\n"
    "It is designed as an attachment so that it can be kept inside the graph. It\n"
    "can also be used to keep aggregated information about subtrees, by adding up\n"
    "the contributions of the underlying nodes. It can invalidate itself by using\n"
    "changed callbacks, so that no manual bookkeeping is necessary.\n"
    "\n"
    "\\warning To use the automatic update you have to use the\n"
    "osg::GeoStatsAttachment::addTo() or osg::GeoStatsAttachment::attachTo()\n"
    "methods! Otherwise the necessary callbacks are not set!\n"
    "\n"
    "\\warning Before accessing the data osg::GeoStatsAttachment::validate() needs\n"
    "to be called to calculate and aggregate the results.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoStatsAttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoStatsAttachmentBase::getType(void) const
{
    return _type;
}

UInt32 GeoStatsAttachmentBase::getContainerSize(void) const
{
    return sizeof(GeoStatsAttachment);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *GeoStatsAttachmentBase::editSFVertices(void)
{
    editSField(VerticesFieldMask);

    return &_sfVertices;
}

const SFUInt32 *GeoStatsAttachmentBase::getSFVertices(void) const
{
    return &_sfVertices;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoStatsAttachmentBase::getSFVertices       (void)
{
    return this->editSFVertices       ();
}
#endif

SFUInt32 *GeoStatsAttachmentBase::editSFPoints(void)
{
    editSField(PointsFieldMask);

    return &_sfPoints;
}

const SFUInt32 *GeoStatsAttachmentBase::getSFPoints(void) const
{
    return &_sfPoints;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoStatsAttachmentBase::getSFPoints         (void)
{
    return this->editSFPoints         ();
}
#endif

SFUInt32 *GeoStatsAttachmentBase::editSFLines(void)
{
    editSField(LinesFieldMask);

    return &_sfLines;
}

const SFUInt32 *GeoStatsAttachmentBase::getSFLines(void) const
{
    return &_sfLines;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoStatsAttachmentBase::getSFLines          (void)
{
    return this->editSFLines          ();
}
#endif

SFUInt32 *GeoStatsAttachmentBase::editSFTriangles(void)
{
    editSField(TrianglesFieldMask);

    return &_sfTriangles;
}

const SFUInt32 *GeoStatsAttachmentBase::getSFTriangles(void) const
{
    return &_sfTriangles;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoStatsAttachmentBase::getSFTriangles      (void)
{
    return this->editSFTriangles      ();
}
#endif

SFUInt32 *GeoStatsAttachmentBase::editSFProcessedAttributeBytes(void)
{
    editSField(ProcessedAttributeBytesFieldMask);

    return &_sfProcessedAttributeBytes;
}

const SFUInt32 *GeoStatsAttachmentBase::getSFProcessedAttributeBytes(void) const
{
    return &_sfProcessedAttributeBytes;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoStatsAttachmentBase::getSFProcessedAttributeBytes(void)
{
    return this->editSFProcessedAttributeBytes();
}
#endif

SFUInt32 *GeoStatsAttachmentBase::editSFStoredAttributeBytes(void)
{
    editSField(StoredAttributeBytesFieldMask);

    return &_sfStoredAttributeBytes;
}

const SFUInt32 *GeoStatsAttachmentBase::getSFStoredAttributeBytes(void) const
{
    return &_sfStoredAttributeBytes;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoStatsAttachmentBase::getSFStoredAttributeBytes(void)
{
    return this->editSFStoredAttributeBytes();
}
#endif

SFBool *GeoStatsAttachmentBase::editSFValid(void)
{
    editSField(ValidFieldMask);

    return &_sfValid;
}

const SFBool *GeoStatsAttachmentBase::getSFValid(void) const
{
    return &_sfValid;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *GeoStatsAttachmentBase::getSFValid          (void)
{
    return this->editSFValid          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 GeoStatsAttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VerticesFieldMask & whichField))
    {
        returnValue += _sfVertices.getBinSize();
    }
    if(FieldBits::NoField != (PointsFieldMask & whichField))
    {
        returnValue += _sfPoints.getBinSize();
    }
    if(FieldBits::NoField != (LinesFieldMask & whichField))
    {
        returnValue += _sfLines.getBinSize();
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        returnValue += _sfTriangles.getBinSize();
    }
    if(FieldBits::NoField != (ProcessedAttributeBytesFieldMask & whichField))
    {
        returnValue += _sfProcessedAttributeBytes.getBinSize();
    }
    if(FieldBits::NoField != (StoredAttributeBytesFieldMask & whichField))
    {
        returnValue += _sfStoredAttributeBytes.getBinSize();
    }
    if(FieldBits::NoField != (ValidFieldMask & whichField))
    {
        returnValue += _sfValid.getBinSize();
    }

    return returnValue;
}

void GeoStatsAttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VerticesFieldMask & whichField))
    {
        _sfVertices.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PointsFieldMask & whichField))
    {
        _sfPoints.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LinesFieldMask & whichField))
    {
        _sfLines.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        _sfTriangles.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ProcessedAttributeBytesFieldMask & whichField))
    {
        _sfProcessedAttributeBytes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StoredAttributeBytesFieldMask & whichField))
    {
        _sfStoredAttributeBytes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ValidFieldMask & whichField))
    {
        _sfValid.copyToBin(pMem);
    }
}

void GeoStatsAttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VerticesFieldMask & whichField))
    {
        _sfVertices.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PointsFieldMask & whichField))
    {
        _sfPoints.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LinesFieldMask & whichField))
    {
        _sfLines.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        _sfTriangles.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ProcessedAttributeBytesFieldMask & whichField))
    {
        _sfProcessedAttributeBytes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StoredAttributeBytesFieldMask & whichField))
    {
        _sfStoredAttributeBytes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ValidFieldMask & whichField))
    {
        _sfValid.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GeoStatsAttachmentPtr GeoStatsAttachmentBase::create(void)
{
    GeoStatsAttachmentPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<GeoStatsAttachment::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
GeoStatsAttachmentPtr GeoStatsAttachmentBase::createEmpty(void)
{
    GeoStatsAttachmentPtr returnValue;

    newPtr<GeoStatsAttachment>(returnValue);

    return returnValue;
}

FieldContainerPtr GeoStatsAttachmentBase::shallowCopy(void) const
{
    GeoStatsAttachmentPtr returnValue;

    newPtr(returnValue, dynamic_cast<const GeoStatsAttachment *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

GeoStatsAttachmentBase::GeoStatsAttachmentBase(void) :
    Inherited(),
    _sfVertices               (),
    _sfPoints                 (),
    _sfLines                  (),
    _sfTriangles              (),
    _sfProcessedAttributeBytes(),
    _sfStoredAttributeBytes   (),
    _sfValid                  (bool(false))
{
}

GeoStatsAttachmentBase::GeoStatsAttachmentBase(const GeoStatsAttachmentBase &source) :
    Inherited(source),
    _sfVertices               (source._sfVertices               ),
    _sfPoints                 (source._sfPoints                 ),
    _sfLines                  (source._sfLines                  ),
    _sfTriangles              (source._sfTriangles              ),
    _sfProcessedAttributeBytes(source._sfProcessedAttributeBytes),
    _sfStoredAttributeBytes   (source._sfStoredAttributeBytes   ),
    _sfValid                  (source._sfValid                  )
{
}

/*-------------------------- destructors ----------------------------------*/

GeoStatsAttachmentBase::~GeoStatsAttachmentBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void GeoStatsAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<GeoStatsAttachmentBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void GeoStatsAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GeoStatsAttachmentBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void GeoStatsAttachmentBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr GeoStatsAttachmentBase::createAspectCopy(void) const
{
    GeoStatsAttachmentPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GeoStatsAttachment *>(this));

    return returnValue;
}
#endif

void GeoStatsAttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GeoStatsAttachmentPtr>::_type("GeoStatsAttachmentPtr", "StatsAttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeoStatsAttachmentPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, GeoStatsAttachmentPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, GeoStatsAttachmentPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
