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
 **     class EmptyBorder!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGEmptyBorderBase.h"
#include "OSGEmptyBorder.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::EmptyBorder
    UI Empty Border. A Empty border that takes up space on each side.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          EmptyBorderBase::_sfLeftWidth
    
*/

/*! \var Real32          EmptyBorderBase::_sfRightWidth
    
*/

/*! \var Real32          EmptyBorderBase::_sfTopWidth
    
*/

/*! \var Real32          EmptyBorderBase::_sfBottomWidth
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<EmptyBorder *>::_type("EmptyBorderPtr", "BorderPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(EmptyBorder *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           EmptyBorder *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           EmptyBorder *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void EmptyBorderBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "LeftWidth",
        "",
        LeftWidthFieldId, LeftWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&EmptyBorder::editHandleLeftWidth),
        static_cast<FieldGetMethodSig >(&EmptyBorder::getHandleLeftWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "RightWidth",
        "",
        RightWidthFieldId, RightWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&EmptyBorder::editHandleRightWidth),
        static_cast<FieldGetMethodSig >(&EmptyBorder::getHandleRightWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "TopWidth",
        "",
        TopWidthFieldId, TopWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&EmptyBorder::editHandleTopWidth),
        static_cast<FieldGetMethodSig >(&EmptyBorder::getHandleTopWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "BottomWidth",
        "",
        BottomWidthFieldId, BottomWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&EmptyBorder::editHandleBottomWidth),
        static_cast<FieldGetMethodSig >(&EmptyBorder::getHandleBottomWidth));

    oType.addInitialDesc(pDesc);
}


EmptyBorderBase::TypeObject EmptyBorderBase::_type(
    EmptyBorderBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&EmptyBorderBase::createEmptyLocal),
    EmptyBorder::initMethod,
    EmptyBorder::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&EmptyBorder::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"EmptyBorder\"\n"
    "\tparent=\"Border\"\n"
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
    "UI Empty Border. A Empty border that takes up space on each side.\n"
    "\t<Field\n"
    "\t\tname=\"LeftWidth\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"RightWidth\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"TopWidth\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"BottomWidth\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "UI Empty Border. A Empty border that takes up space on each side.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &EmptyBorderBase::getType(void)
{
    return _type;
}

const FieldContainerType &EmptyBorderBase::getType(void) const
{
    return _type;
}

UInt32 EmptyBorderBase::getContainerSize(void) const
{
    return sizeof(EmptyBorder);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *EmptyBorderBase::editSFLeftWidth(void)
{
    editSField(LeftWidthFieldMask);

    return &_sfLeftWidth;
}

const SFReal32 *EmptyBorderBase::getSFLeftWidth(void) const
{
    return &_sfLeftWidth;
}


SFReal32 *EmptyBorderBase::editSFRightWidth(void)
{
    editSField(RightWidthFieldMask);

    return &_sfRightWidth;
}

const SFReal32 *EmptyBorderBase::getSFRightWidth(void) const
{
    return &_sfRightWidth;
}


SFReal32 *EmptyBorderBase::editSFTopWidth(void)
{
    editSField(TopWidthFieldMask);

    return &_sfTopWidth;
}

const SFReal32 *EmptyBorderBase::getSFTopWidth(void) const
{
    return &_sfTopWidth;
}


SFReal32 *EmptyBorderBase::editSFBottomWidth(void)
{
    editSField(BottomWidthFieldMask);

    return &_sfBottomWidth;
}

const SFReal32 *EmptyBorderBase::getSFBottomWidth(void) const
{
    return &_sfBottomWidth;
}






/*------------------------------ access -----------------------------------*/

UInt32 EmptyBorderBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LeftWidthFieldMask & whichField))
    {
        returnValue += _sfLeftWidth.getBinSize();
    }
    if(FieldBits::NoField != (RightWidthFieldMask & whichField))
    {
        returnValue += _sfRightWidth.getBinSize();
    }
    if(FieldBits::NoField != (TopWidthFieldMask & whichField))
    {
        returnValue += _sfTopWidth.getBinSize();
    }
    if(FieldBits::NoField != (BottomWidthFieldMask & whichField))
    {
        returnValue += _sfBottomWidth.getBinSize();
    }

    return returnValue;
}

void EmptyBorderBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LeftWidthFieldMask & whichField))
    {
        _sfLeftWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RightWidthFieldMask & whichField))
    {
        _sfRightWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TopWidthFieldMask & whichField))
    {
        _sfTopWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BottomWidthFieldMask & whichField))
    {
        _sfBottomWidth.copyToBin(pMem);
    }
}

void EmptyBorderBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LeftWidthFieldMask & whichField))
    {
        _sfLeftWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RightWidthFieldMask & whichField))
    {
        _sfRightWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TopWidthFieldMask & whichField))
    {
        _sfTopWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BottomWidthFieldMask & whichField))
    {
        _sfBottomWidth.copyFromBin(pMem);
    }
}

//! create a new instance of the class
EmptyBorderTransitPtr EmptyBorderBase::createLocal(BitVector bFlags)
{
    EmptyBorderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<EmptyBorder>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
EmptyBorderTransitPtr EmptyBorderBase::createDependent(BitVector bFlags)
{
    EmptyBorderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<EmptyBorder>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
EmptyBorderTransitPtr EmptyBorderBase::create(void)
{
    EmptyBorderTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<EmptyBorder>(tmpPtr);
    }

    return fc;
}

EmptyBorder *EmptyBorderBase::createEmptyLocal(BitVector bFlags)
{
    EmptyBorder *returnValue;

    newPtr<EmptyBorder>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
EmptyBorder *EmptyBorderBase::createEmpty(void)
{
    EmptyBorder *returnValue;

    newPtr<EmptyBorder>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr EmptyBorderBase::shallowCopyLocal(
    BitVector bFlags) const
{
    EmptyBorder *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const EmptyBorder *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr EmptyBorderBase::shallowCopyDependent(
    BitVector bFlags) const
{
    EmptyBorder *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const EmptyBorder *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr EmptyBorderBase::shallowCopy(void) const
{
    EmptyBorder *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const EmptyBorder *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

EmptyBorderBase::EmptyBorderBase(void) :
    Inherited(),
    _sfLeftWidth              (Real32(0)),
    _sfRightWidth             (Real32(0)),
    _sfTopWidth               (Real32(0)),
    _sfBottomWidth            (Real32(0))
{
}

EmptyBorderBase::EmptyBorderBase(const EmptyBorderBase &source) :
    Inherited(source),
    _sfLeftWidth              (source._sfLeftWidth              ),
    _sfRightWidth             (source._sfRightWidth             ),
    _sfTopWidth               (source._sfTopWidth               ),
    _sfBottomWidth            (source._sfBottomWidth            )
{
}


/*-------------------------- destructors ----------------------------------*/

EmptyBorderBase::~EmptyBorderBase(void)
{
}


GetFieldHandlePtr EmptyBorderBase::getHandleLeftWidth       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfLeftWidth,
             this->getType().getFieldDesc(LeftWidthFieldId),
             const_cast<EmptyBorderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr EmptyBorderBase::editHandleLeftWidth      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfLeftWidth,
             this->getType().getFieldDesc(LeftWidthFieldId),
             this));


    editSField(LeftWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr EmptyBorderBase::getHandleRightWidth      (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfRightWidth,
             this->getType().getFieldDesc(RightWidthFieldId),
             const_cast<EmptyBorderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr EmptyBorderBase::editHandleRightWidth     (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfRightWidth,
             this->getType().getFieldDesc(RightWidthFieldId),
             this));


    editSField(RightWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr EmptyBorderBase::getHandleTopWidth        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfTopWidth,
             this->getType().getFieldDesc(TopWidthFieldId),
             const_cast<EmptyBorderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr EmptyBorderBase::editHandleTopWidth       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfTopWidth,
             this->getType().getFieldDesc(TopWidthFieldId),
             this));


    editSField(TopWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr EmptyBorderBase::getHandleBottomWidth     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfBottomWidth,
             this->getType().getFieldDesc(BottomWidthFieldId),
             const_cast<EmptyBorderBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr EmptyBorderBase::editHandleBottomWidth    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfBottomWidth,
             this->getType().getFieldDesc(BottomWidthFieldId),
             this));


    editSField(BottomWidthFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void EmptyBorderBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    EmptyBorder *pThis = static_cast<EmptyBorder *>(this);

    pThis->execSync(static_cast<EmptyBorder *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *EmptyBorderBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    EmptyBorder *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const EmptyBorder *>(pRefAspect),
                  dynamic_cast<const EmptyBorder *>(this));

    return returnValue;
}
#endif

void EmptyBorderBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
