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
 **     class AbstractWindowEventSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"


#include "OSGAbstractWindowEventSourceBase.h"
#include "OSGAbstractWindowEventSource.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AbstractWindowEventSource
    A UI Abstract Window.
 */



/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<AbstractWindowEventSource *, nsOSG>::_type(
    "AbstractWindowEventSourcePtr",
    "ComponentEventSourcePtr",
    AbstractWindowEventSource::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(AbstractWindowEventSource *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AbstractWindowEventSource *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AbstractWindowEventSource *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AbstractWindowEventSourceBase::classDescInserter(TypeObject &oType)
{
}


AbstractWindowEventSourceBase::TypeObject AbstractWindowEventSourceBase::_type(
    AbstractWindowEventSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&AbstractWindowEventSourceBase::createEmptyLocal),
    AbstractWindowEventSource::initMethod,
    AbstractWindowEventSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AbstractWindowEventSource::classDescInserter),
    false,
    0,
    "",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AbstractWindowEventSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &AbstractWindowEventSourceBase::getType(void) const
{
    return _type;
}

UInt32 AbstractWindowEventSourceBase::getContainerSize(void) const
{
    return sizeof(AbstractWindowEventSource);
}



/*------------------------------ access -----------------------------------*/

SizeT AbstractWindowEventSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    return returnValue;
}

void AbstractWindowEventSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);
}

void AbstractWindowEventSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);
}

//! create a new instance of the class
AbstractWindowEventSourceTransitPtr AbstractWindowEventSourceBase::createLocal(BitVector bFlags)
{
    AbstractWindowEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AbstractWindowEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AbstractWindowEventSourceTransitPtr AbstractWindowEventSourceBase::createDependent(BitVector bFlags)
{
    AbstractWindowEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AbstractWindowEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AbstractWindowEventSourceTransitPtr AbstractWindowEventSourceBase::create(void)
{
    AbstractWindowEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AbstractWindowEventSource>(tmpPtr);
    }

    return fc;
}

AbstractWindowEventSource *AbstractWindowEventSourceBase::createEmptyLocal(BitVector bFlags)
{
    AbstractWindowEventSource *returnValue;

    newPtr<AbstractWindowEventSource>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AbstractWindowEventSource *AbstractWindowEventSourceBase::createEmpty(void)
{
    AbstractWindowEventSource *returnValue;

    newPtr<AbstractWindowEventSource>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr AbstractWindowEventSourceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AbstractWindowEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AbstractWindowEventSource *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AbstractWindowEventSourceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AbstractWindowEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AbstractWindowEventSource *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AbstractWindowEventSourceBase::shallowCopy(void) const
{
    AbstractWindowEventSource *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AbstractWindowEventSource *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

AbstractWindowEventSourceBase::AbstractWindowEventSourceBase(void) :
    Inherited()
{
}

AbstractWindowEventSourceBase::AbstractWindowEventSourceBase(const AbstractWindowEventSourceBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

AbstractWindowEventSourceBase::~AbstractWindowEventSourceBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void AbstractWindowEventSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AbstractWindowEventSource *pThis = static_cast<AbstractWindowEventSource *>(this);

    pThis->execSync(static_cast<AbstractWindowEventSource *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AbstractWindowEventSourceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AbstractWindowEventSource *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AbstractWindowEventSource *>(pRefAspect),
                  dynamic_cast<const AbstractWindowEventSource *>(this));

    return returnValue;
}
#endif

void AbstractWindowEventSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();

}

OSG_END_NAMESPACE