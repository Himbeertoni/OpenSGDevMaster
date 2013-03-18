/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class DiscUIDrawObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGDiscUIDrawObjectBase.h"
#include "OSGDiscUIDrawObject.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DiscUIDrawObject
    A UI DiscDrawObject.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt2f           DiscUIDrawObjectBase::_sfCenter
    
*/

/*! \var Real32          DiscUIDrawObjectBase::_sfWidth
    
*/

/*! \var Real32          DiscUIDrawObjectBase::_sfHeight
    
*/

/*! \var Real32          DiscUIDrawObjectBase::_sfStartAngleRad
    
*/

/*! \var Real32          DiscUIDrawObjectBase::_sfEndAngleRad
    
*/

/*! \var UInt16          DiscUIDrawObjectBase::_sfSubDivisions
    
*/

/*! \var Color4f         DiscUIDrawObjectBase::_sfCenterColor
    
*/

/*! \var Color4f         DiscUIDrawObjectBase::_sfOuterColor
    
*/

/*! \var Real32          DiscUIDrawObjectBase::_sfOpacity
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DiscUIDrawObject *>::_type("DiscUIDrawObjectPtr", "UIDrawObjectPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DiscUIDrawObject *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DiscUIDrawObject *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DiscUIDrawObject *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DiscUIDrawObjectBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt2f::Description(
        SFPnt2f::getClassType(),
        "Center",
        "",
        CenterFieldId, CenterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DiscUIDrawObject::editHandleCenter),
        static_cast<FieldGetMethodSig >(&DiscUIDrawObject::getHandleCenter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DiscUIDrawObject::editHandleWidth),
        static_cast<FieldGetMethodSig >(&DiscUIDrawObject::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DiscUIDrawObject::editHandleHeight),
        static_cast<FieldGetMethodSig >(&DiscUIDrawObject::getHandleHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "StartAngleRad",
        "",
        StartAngleRadFieldId, StartAngleRadFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DiscUIDrawObject::editHandleStartAngleRad),
        static_cast<FieldGetMethodSig >(&DiscUIDrawObject::getHandleStartAngleRad));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "EndAngleRad",
        "",
        EndAngleRadFieldId, EndAngleRadFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DiscUIDrawObject::editHandleEndAngleRad),
        static_cast<FieldGetMethodSig >(&DiscUIDrawObject::getHandleEndAngleRad));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "SubDivisions",
        "",
        SubDivisionsFieldId, SubDivisionsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DiscUIDrawObject::editHandleSubDivisions),
        static_cast<FieldGetMethodSig >(&DiscUIDrawObject::getHandleSubDivisions));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "CenterColor",
        "",
        CenterColorFieldId, CenterColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DiscUIDrawObject::editHandleCenterColor),
        static_cast<FieldGetMethodSig >(&DiscUIDrawObject::getHandleCenterColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "OuterColor",
        "",
        OuterColorFieldId, OuterColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DiscUIDrawObject::editHandleOuterColor),
        static_cast<FieldGetMethodSig >(&DiscUIDrawObject::getHandleOuterColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Opacity",
        "",
        OpacityFieldId, OpacityFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DiscUIDrawObject::editHandleOpacity),
        static_cast<FieldGetMethodSig >(&DiscUIDrawObject::getHandleOpacity));

    oType.addInitialDesc(pDesc);
}


DiscUIDrawObjectBase::TypeObject DiscUIDrawObjectBase::_type(
    DiscUIDrawObjectBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DiscUIDrawObjectBase::createEmptyLocal),
    DiscUIDrawObject::initMethod,
    DiscUIDrawObject::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DiscUIDrawObject::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"DiscUIDrawObject\"\n"
    "\tparent=\"UIDrawObject\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI DiscDrawObject.\n"
    "\t<Field\n"
    "\t\tname=\"Center\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0,0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Width\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Height\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"StartAngleRad\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"EndAngleRad\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"6.283185307\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"SubDivisions\"\n"
    "\t\ttype=\"UInt16\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"24\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"CenterColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0,1.0,1.0,1.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"OuterColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0,1.0,1.0,1.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Opacity\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A UI DiscDrawObject.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DiscUIDrawObjectBase::getType(void)
{
    return _type;
}

const FieldContainerType &DiscUIDrawObjectBase::getType(void) const
{
    return _type;
}

UInt32 DiscUIDrawObjectBase::getContainerSize(void) const
{
    return sizeof(DiscUIDrawObject);
}

/*------------------------- decorator get ------------------------------*/


SFPnt2f *DiscUIDrawObjectBase::editSFCenter(void)
{
    editSField(CenterFieldMask);

    return &_sfCenter;
}

const SFPnt2f *DiscUIDrawObjectBase::getSFCenter(void) const
{
    return &_sfCenter;
}


SFReal32 *DiscUIDrawObjectBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFReal32 *DiscUIDrawObjectBase::getSFWidth(void) const
{
    return &_sfWidth;
}


SFReal32 *DiscUIDrawObjectBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFReal32 *DiscUIDrawObjectBase::getSFHeight(void) const
{
    return &_sfHeight;
}


SFReal32 *DiscUIDrawObjectBase::editSFStartAngleRad(void)
{
    editSField(StartAngleRadFieldMask);

    return &_sfStartAngleRad;
}

const SFReal32 *DiscUIDrawObjectBase::getSFStartAngleRad(void) const
{
    return &_sfStartAngleRad;
}


SFReal32 *DiscUIDrawObjectBase::editSFEndAngleRad(void)
{
    editSField(EndAngleRadFieldMask);

    return &_sfEndAngleRad;
}

const SFReal32 *DiscUIDrawObjectBase::getSFEndAngleRad(void) const
{
    return &_sfEndAngleRad;
}


SFUInt16 *DiscUIDrawObjectBase::editSFSubDivisions(void)
{
    editSField(SubDivisionsFieldMask);

    return &_sfSubDivisions;
}

const SFUInt16 *DiscUIDrawObjectBase::getSFSubDivisions(void) const
{
    return &_sfSubDivisions;
}


SFColor4f *DiscUIDrawObjectBase::editSFCenterColor(void)
{
    editSField(CenterColorFieldMask);

    return &_sfCenterColor;
}

const SFColor4f *DiscUIDrawObjectBase::getSFCenterColor(void) const
{
    return &_sfCenterColor;
}


SFColor4f *DiscUIDrawObjectBase::editSFOuterColor(void)
{
    editSField(OuterColorFieldMask);

    return &_sfOuterColor;
}

const SFColor4f *DiscUIDrawObjectBase::getSFOuterColor(void) const
{
    return &_sfOuterColor;
}


SFReal32 *DiscUIDrawObjectBase::editSFOpacity(void)
{
    editSField(OpacityFieldMask);

    return &_sfOpacity;
}

const SFReal32 *DiscUIDrawObjectBase::getSFOpacity(void) const
{
    return &_sfOpacity;
}






/*------------------------------ access -----------------------------------*/

UInt32 DiscUIDrawObjectBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        returnValue += _sfCenter.getBinSize();
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }
    if(FieldBits::NoField != (StartAngleRadFieldMask & whichField))
    {
        returnValue += _sfStartAngleRad.getBinSize();
    }
    if(FieldBits::NoField != (EndAngleRadFieldMask & whichField))
    {
        returnValue += _sfEndAngleRad.getBinSize();
    }
    if(FieldBits::NoField != (SubDivisionsFieldMask & whichField))
    {
        returnValue += _sfSubDivisions.getBinSize();
    }
    if(FieldBits::NoField != (CenterColorFieldMask & whichField))
    {
        returnValue += _sfCenterColor.getBinSize();
    }
    if(FieldBits::NoField != (OuterColorFieldMask & whichField))
    {
        returnValue += _sfOuterColor.getBinSize();
    }
    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        returnValue += _sfOpacity.getBinSize();
    }

    return returnValue;
}

void DiscUIDrawObjectBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StartAngleRadFieldMask & whichField))
    {
        _sfStartAngleRad.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EndAngleRadFieldMask & whichField))
    {
        _sfEndAngleRad.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SubDivisionsFieldMask & whichField))
    {
        _sfSubDivisions.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CenterColorFieldMask & whichField))
    {
        _sfCenterColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OuterColorFieldMask & whichField))
    {
        _sfOuterColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        _sfOpacity.copyToBin(pMem);
    }
}

void DiscUIDrawObjectBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StartAngleRadFieldMask & whichField))
    {
        _sfStartAngleRad.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EndAngleRadFieldMask & whichField))
    {
        _sfEndAngleRad.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SubDivisionsFieldMask & whichField))
    {
        _sfSubDivisions.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CenterColorFieldMask & whichField))
    {
        _sfCenterColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OuterColorFieldMask & whichField))
    {
        _sfOuterColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        _sfOpacity.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DiscUIDrawObjectTransitPtr DiscUIDrawObjectBase::createLocal(BitVector bFlags)
{
    DiscUIDrawObjectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DiscUIDrawObject>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DiscUIDrawObjectTransitPtr DiscUIDrawObjectBase::createDependent(BitVector bFlags)
{
    DiscUIDrawObjectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DiscUIDrawObject>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DiscUIDrawObjectTransitPtr DiscUIDrawObjectBase::create(void)
{
    DiscUIDrawObjectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DiscUIDrawObject>(tmpPtr);
    }

    return fc;
}

DiscUIDrawObject *DiscUIDrawObjectBase::createEmptyLocal(BitVector bFlags)
{
    DiscUIDrawObject *returnValue;

    newPtr<DiscUIDrawObject>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DiscUIDrawObject *DiscUIDrawObjectBase::createEmpty(void)
{
    DiscUIDrawObject *returnValue;

    newPtr<DiscUIDrawObject>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DiscUIDrawObjectBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DiscUIDrawObject *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DiscUIDrawObject *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DiscUIDrawObjectBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DiscUIDrawObject *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DiscUIDrawObject *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DiscUIDrawObjectBase::shallowCopy(void) const
{
    DiscUIDrawObject *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DiscUIDrawObject *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DiscUIDrawObjectBase::DiscUIDrawObjectBase(void) :
    Inherited(),
    _sfCenter                 (Pnt2f(0,0)),
    _sfWidth                  (Real32(1)),
    _sfHeight                 (Real32(1)),
    _sfStartAngleRad          (Real32(0.0)),
    _sfEndAngleRad            (Real32(6.283185307)),
    _sfSubDivisions           (UInt16(24)),
    _sfCenterColor            (Color4f(1.0,1.0,1.0,1.0)),
    _sfOuterColor             (Color4f(1.0,1.0,1.0,1.0)),
    _sfOpacity                (Real32(1.0))
{
}

DiscUIDrawObjectBase::DiscUIDrawObjectBase(const DiscUIDrawObjectBase &source) :
    Inherited(source),
    _sfCenter                 (source._sfCenter                 ),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 ),
    _sfStartAngleRad          (source._sfStartAngleRad          ),
    _sfEndAngleRad            (source._sfEndAngleRad            ),
    _sfSubDivisions           (source._sfSubDivisions           ),
    _sfCenterColor            (source._sfCenterColor            ),
    _sfOuterColor             (source._sfOuterColor             ),
    _sfOpacity                (source._sfOpacity                )
{
}


/*-------------------------- destructors ----------------------------------*/

DiscUIDrawObjectBase::~DiscUIDrawObjectBase(void)
{
}


GetFieldHandlePtr DiscUIDrawObjectBase::getHandleCenter          (void) const
{
    SFPnt2f::GetHandlePtr returnValue(
        new  SFPnt2f::GetHandle(
             &_sfCenter,
             this->getType().getFieldDesc(CenterFieldId),
             const_cast<DiscUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DiscUIDrawObjectBase::editHandleCenter         (void)
{
    SFPnt2f::EditHandlePtr returnValue(
        new  SFPnt2f::EditHandle(
             &_sfCenter,
             this->getType().getFieldDesc(CenterFieldId),
             this));


    editSField(CenterFieldMask);

    return returnValue;
}

GetFieldHandlePtr DiscUIDrawObjectBase::getHandleWidth           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             const_cast<DiscUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DiscUIDrawObjectBase::editHandleWidth          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             this));


    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr DiscUIDrawObjectBase::getHandleHeight          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             const_cast<DiscUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DiscUIDrawObjectBase::editHandleHeight         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             this));


    editSField(HeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr DiscUIDrawObjectBase::getHandleStartAngleRad   (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfStartAngleRad,
             this->getType().getFieldDesc(StartAngleRadFieldId),
             const_cast<DiscUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DiscUIDrawObjectBase::editHandleStartAngleRad  (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfStartAngleRad,
             this->getType().getFieldDesc(StartAngleRadFieldId),
             this));


    editSField(StartAngleRadFieldMask);

    return returnValue;
}

GetFieldHandlePtr DiscUIDrawObjectBase::getHandleEndAngleRad     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfEndAngleRad,
             this->getType().getFieldDesc(EndAngleRadFieldId),
             const_cast<DiscUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DiscUIDrawObjectBase::editHandleEndAngleRad    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfEndAngleRad,
             this->getType().getFieldDesc(EndAngleRadFieldId),
             this));


    editSField(EndAngleRadFieldMask);

    return returnValue;
}

GetFieldHandlePtr DiscUIDrawObjectBase::getHandleSubDivisions    (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfSubDivisions,
             this->getType().getFieldDesc(SubDivisionsFieldId),
             const_cast<DiscUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DiscUIDrawObjectBase::editHandleSubDivisions   (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfSubDivisions,
             this->getType().getFieldDesc(SubDivisionsFieldId),
             this));


    editSField(SubDivisionsFieldMask);

    return returnValue;
}

GetFieldHandlePtr DiscUIDrawObjectBase::getHandleCenterColor     (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfCenterColor,
             this->getType().getFieldDesc(CenterColorFieldId),
             const_cast<DiscUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DiscUIDrawObjectBase::editHandleCenterColor    (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfCenterColor,
             this->getType().getFieldDesc(CenterColorFieldId),
             this));


    editSField(CenterColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr DiscUIDrawObjectBase::getHandleOuterColor      (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfOuterColor,
             this->getType().getFieldDesc(OuterColorFieldId),
             const_cast<DiscUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DiscUIDrawObjectBase::editHandleOuterColor     (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfOuterColor,
             this->getType().getFieldDesc(OuterColorFieldId),
             this));


    editSField(OuterColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr DiscUIDrawObjectBase::getHandleOpacity         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfOpacity,
             this->getType().getFieldDesc(OpacityFieldId),
             const_cast<DiscUIDrawObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DiscUIDrawObjectBase::editHandleOpacity        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfOpacity,
             this->getType().getFieldDesc(OpacityFieldId),
             this));


    editSField(OpacityFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DiscUIDrawObjectBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DiscUIDrawObject *pThis = static_cast<DiscUIDrawObject *>(this);

    pThis->execSync(static_cast<DiscUIDrawObject *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DiscUIDrawObjectBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DiscUIDrawObject *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DiscUIDrawObject *>(pRefAspect),
                  dynamic_cast<const DiscUIDrawObject *>(this));

    return returnValue;
}
#endif

void DiscUIDrawObjectBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
