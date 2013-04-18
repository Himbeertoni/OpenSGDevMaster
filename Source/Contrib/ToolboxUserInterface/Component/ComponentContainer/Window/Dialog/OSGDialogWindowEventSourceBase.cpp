/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
 *          Mark Stenerson                                                   *
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
 **     class DialogWindowEventSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"


#include "OSGDialogWindowEventSourceBase.h"
#include "OSGDialogWindowEventSource.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DialogWindowEventSource
    A UI Dialog Window.
 */



/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<DialogWindowEventSource *, nsOSG>::_type(
    "DialogWindowEventSourcePtr",
    "AbstractWindowEventSourcePtr",
    DialogWindowEventSource::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(DialogWindowEventSource *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DialogWindowEventSource *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DialogWindowEventSource *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DialogWindowEventSourceBase::classDescInserter(TypeObject &oType)
{
}


DialogWindowEventSourceBase::TypeObject DialogWindowEventSourceBase::_type(
    DialogWindowEventSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&DialogWindowEventSourceBase::createEmptyLocal),
    DialogWindowEventSource::initMethod,
    DialogWindowEventSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DialogWindowEventSource::classDescInserter),
    false,
    0,
    "",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DialogWindowEventSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &DialogWindowEventSourceBase::getType(void) const
{
    return _type;
}

UInt32 DialogWindowEventSourceBase::getContainerSize(void) const
{
    return sizeof(DialogWindowEventSource);
}



/*------------------------------ access -----------------------------------*/

SizeT DialogWindowEventSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    return returnValue;
}

void DialogWindowEventSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);
}

void DialogWindowEventSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);
}

//! create a new instance of the class
DialogWindowEventSourceTransitPtr DialogWindowEventSourceBase::createLocal(BitVector bFlags)
{
    DialogWindowEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DialogWindowEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DialogWindowEventSourceTransitPtr DialogWindowEventSourceBase::createDependent(BitVector bFlags)
{
    DialogWindowEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DialogWindowEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DialogWindowEventSourceTransitPtr DialogWindowEventSourceBase::create(void)
{
    DialogWindowEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DialogWindowEventSource>(tmpPtr);
    }

    return fc;
}

DialogWindowEventSource *DialogWindowEventSourceBase::createEmptyLocal(BitVector bFlags)
{
    DialogWindowEventSource *returnValue;

    newPtr<DialogWindowEventSource>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DialogWindowEventSource *DialogWindowEventSourceBase::createEmpty(void)
{
    DialogWindowEventSource *returnValue;

    newPtr<DialogWindowEventSource>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DialogWindowEventSourceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DialogWindowEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DialogWindowEventSource *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DialogWindowEventSourceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DialogWindowEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DialogWindowEventSource *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DialogWindowEventSourceBase::shallowCopy(void) const
{
    DialogWindowEventSource *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DialogWindowEventSource *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

DialogWindowEventSourceBase::DialogWindowEventSourceBase(void) :
    Inherited()
{
}

DialogWindowEventSourceBase::DialogWindowEventSourceBase(const DialogWindowEventSourceBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

DialogWindowEventSourceBase::~DialogWindowEventSourceBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void DialogWindowEventSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DialogWindowEventSource *pThis = static_cast<DialogWindowEventSource *>(this);

    pThis->execSync(static_cast<DialogWindowEventSource *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DialogWindowEventSourceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DialogWindowEventSource *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DialogWindowEventSource *>(pRefAspect),
                  dynamic_cast<const DialogWindowEventSource *>(this));

    return returnValue;
}
#endif

void DialogWindowEventSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();

}

OSG_END_NAMESPACE