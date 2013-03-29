/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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
 **     class PopupMenuEventSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"


#include "OSGPopupMenuEventSourceBase.h"
#include "OSGPopupMenuEventSource.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PopupMenuEventSource
    A UI PopupMenu.
 */



/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<PopupMenuEventSource *, nsOSG>::_type(
    "PopupMenuEventSourcePtr",
    "ComponentEventSourcePtr",
    PopupMenuEventSource::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(PopupMenuEventSource *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PopupMenuEventSource *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PopupMenuEventSource *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PopupMenuEventSourceBase::classDescInserter(TypeObject &oType)
{
}


PopupMenuEventSourceBase::TypeObject PopupMenuEventSourceBase::_type(
    PopupMenuEventSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&PopupMenuEventSourceBase::createEmptyLocal),
    PopupMenuEventSource::initMethod,
    PopupMenuEventSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PopupMenuEventSource::classDescInserter),
    false,
    0,
    "",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PopupMenuEventSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &PopupMenuEventSourceBase::getType(void) const
{
    return _type;
}

UInt32 PopupMenuEventSourceBase::getContainerSize(void) const
{
    return sizeof(PopupMenuEventSource);
}



/*------------------------------ access -----------------------------------*/

SizeT PopupMenuEventSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    return returnValue;
}

void PopupMenuEventSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);
}

void PopupMenuEventSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);
}

//! create a new instance of the class
PopupMenuEventSourceTransitPtr PopupMenuEventSourceBase::createLocal(BitVector bFlags)
{
    PopupMenuEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PopupMenuEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PopupMenuEventSourceTransitPtr PopupMenuEventSourceBase::createDependent(BitVector bFlags)
{
    PopupMenuEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PopupMenuEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PopupMenuEventSourceTransitPtr PopupMenuEventSourceBase::create(void)
{
    PopupMenuEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PopupMenuEventSource>(tmpPtr);
    }

    return fc;
}

PopupMenuEventSource *PopupMenuEventSourceBase::createEmptyLocal(BitVector bFlags)
{
    PopupMenuEventSource *returnValue;

    newPtr<PopupMenuEventSource>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PopupMenuEventSource *PopupMenuEventSourceBase::createEmpty(void)
{
    PopupMenuEventSource *returnValue;

    newPtr<PopupMenuEventSource>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PopupMenuEventSourceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PopupMenuEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PopupMenuEventSource *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PopupMenuEventSourceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PopupMenuEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PopupMenuEventSource *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PopupMenuEventSourceBase::shallowCopy(void) const
{
    PopupMenuEventSource *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PopupMenuEventSource *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PopupMenuEventSourceBase::PopupMenuEventSourceBase(void) :
    Inherited()
{
}

PopupMenuEventSourceBase::PopupMenuEventSourceBase(const PopupMenuEventSourceBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

PopupMenuEventSourceBase::~PopupMenuEventSourceBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void PopupMenuEventSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PopupMenuEventSource *pThis = static_cast<PopupMenuEventSource *>(this);

    pThis->execSync(static_cast<PopupMenuEventSource *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PopupMenuEventSourceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PopupMenuEventSource *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PopupMenuEventSource *>(pRefAspect),
                  dynamic_cast<const PopupMenuEventSource *>(this));

    return returnValue;
}
#endif

void PopupMenuEventSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();

}

OSG_END_NAMESPACE
