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
 **     class ComboBoxModelEventSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"


#include "OSGComboBoxModelEventSourceBase.h"
#include "OSGComboBoxModelEventSource.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ComboBoxModelEventSource
    A UI ComboBoxModel.
 */



/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ComboBoxModelEventSource *, nsOSG>::_type(
    "ComboBoxModelEventSourcePtr",
    "ListModelEventSourcePtr",
    ComboBoxModelEventSource::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ComboBoxModelEventSource *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ComboBoxModelEventSource *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ComboBoxModelEventSource *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ComboBoxModelEventSourceBase::classDescInserter(TypeObject &oType)
{
}


ComboBoxModelEventSourceBase::TypeObject ComboBoxModelEventSourceBase::_type(
    ComboBoxModelEventSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ComboBoxModelEventSourceBase::createEmptyLocal),
    ComboBoxModelEventSource::initMethod,
    ComboBoxModelEventSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ComboBoxModelEventSource::classDescInserter),
    false,
    0,
    "",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ComboBoxModelEventSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &ComboBoxModelEventSourceBase::getType(void) const
{
    return _type;
}

UInt32 ComboBoxModelEventSourceBase::getContainerSize(void) const
{
    return sizeof(ComboBoxModelEventSource);
}



/*------------------------------ access -----------------------------------*/

SizeT ComboBoxModelEventSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    return returnValue;
}

void ComboBoxModelEventSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);
}

void ComboBoxModelEventSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);
}

//! create a new instance of the class
ComboBoxModelEventSourceTransitPtr ComboBoxModelEventSourceBase::createLocal(BitVector bFlags)
{
    ComboBoxModelEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ComboBoxModelEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ComboBoxModelEventSourceTransitPtr ComboBoxModelEventSourceBase::createDependent(BitVector bFlags)
{
    ComboBoxModelEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ComboBoxModelEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ComboBoxModelEventSourceTransitPtr ComboBoxModelEventSourceBase::create(void)
{
    ComboBoxModelEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ComboBoxModelEventSource>(tmpPtr);
    }

    return fc;
}

ComboBoxModelEventSource *ComboBoxModelEventSourceBase::createEmptyLocal(BitVector bFlags)
{
    ComboBoxModelEventSource *returnValue;

    newPtr<ComboBoxModelEventSource>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ComboBoxModelEventSource *ComboBoxModelEventSourceBase::createEmpty(void)
{
    ComboBoxModelEventSource *returnValue;

    newPtr<ComboBoxModelEventSource>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ComboBoxModelEventSourceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ComboBoxModelEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComboBoxModelEventSource *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComboBoxModelEventSourceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ComboBoxModelEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComboBoxModelEventSource *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComboBoxModelEventSourceBase::shallowCopy(void) const
{
    ComboBoxModelEventSource *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ComboBoxModelEventSource *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ComboBoxModelEventSourceBase::ComboBoxModelEventSourceBase(void) :
    Inherited()
{
}

ComboBoxModelEventSourceBase::ComboBoxModelEventSourceBase(const ComboBoxModelEventSourceBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

ComboBoxModelEventSourceBase::~ComboBoxModelEventSourceBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void ComboBoxModelEventSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ComboBoxModelEventSource *pThis = static_cast<ComboBoxModelEventSource *>(this);

    pThis->execSync(static_cast<ComboBoxModelEventSource *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ComboBoxModelEventSourceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ComboBoxModelEventSource *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ComboBoxModelEventSource *>(pRefAspect),
                  dynamic_cast<const ComboBoxModelEventSource *>(this));

    return returnValue;
}
#endif

void ComboBoxModelEventSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();

}

OSG_END_NAMESPACE
