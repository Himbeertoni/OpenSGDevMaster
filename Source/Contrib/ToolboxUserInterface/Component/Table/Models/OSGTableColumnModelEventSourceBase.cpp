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
 **     class TableColumnModelEventSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"


#include "OSGTableColumnModelEventSourceBase.h"
#include "OSGTableColumnModelEventSource.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TableColumnModelEventSource
    A UI TableColumnModel.
 */



/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<TableColumnModelEventSource *, nsOSG>::_type(
    "TableColumnModelEventSourcePtr",
    "EventContainerPtr",
    TableColumnModelEventSource::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(TableColumnModelEventSource *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TableColumnModelEventSource *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TableColumnModelEventSource *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TableColumnModelEventSourceBase::classDescInserter(TypeObject &oType)
{
}


TableColumnModelEventSourceBase::TypeObject TableColumnModelEventSourceBase::_type(
    TableColumnModelEventSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&TableColumnModelEventSourceBase::createEmptyLocal),
    TableColumnModelEventSource::initMethod,
    TableColumnModelEventSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TableColumnModelEventSource::classDescInserter),
    false,
    0,
    "",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TableColumnModelEventSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &TableColumnModelEventSourceBase::getType(void) const
{
    return _type;
}

UInt32 TableColumnModelEventSourceBase::getContainerSize(void) const
{
    return sizeof(TableColumnModelEventSource);
}



/*------------------------------ access -----------------------------------*/

SizeT TableColumnModelEventSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    return returnValue;
}

void TableColumnModelEventSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);
}

void TableColumnModelEventSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);
}

//! create a new instance of the class
TableColumnModelEventSourceTransitPtr TableColumnModelEventSourceBase::createLocal(BitVector bFlags)
{
    TableColumnModelEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TableColumnModelEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TableColumnModelEventSourceTransitPtr TableColumnModelEventSourceBase::createDependent(BitVector bFlags)
{
    TableColumnModelEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TableColumnModelEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TableColumnModelEventSourceTransitPtr TableColumnModelEventSourceBase::create(void)
{
    TableColumnModelEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TableColumnModelEventSource>(tmpPtr);
    }

    return fc;
}

TableColumnModelEventSource *TableColumnModelEventSourceBase::createEmptyLocal(BitVector bFlags)
{
    TableColumnModelEventSource *returnValue;

    newPtr<TableColumnModelEventSource>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TableColumnModelEventSource *TableColumnModelEventSourceBase::createEmpty(void)
{
    TableColumnModelEventSource *returnValue;

    newPtr<TableColumnModelEventSource>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TableColumnModelEventSourceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TableColumnModelEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TableColumnModelEventSource *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TableColumnModelEventSourceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TableColumnModelEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TableColumnModelEventSource *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TableColumnModelEventSourceBase::shallowCopy(void) const
{
    TableColumnModelEventSource *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TableColumnModelEventSource *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TableColumnModelEventSourceBase::TableColumnModelEventSourceBase(void) :
    Inherited()
{
}

TableColumnModelEventSourceBase::TableColumnModelEventSourceBase(const TableColumnModelEventSourceBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

TableColumnModelEventSourceBase::~TableColumnModelEventSourceBase(void)
{
}


#ifdef OSG_MT_CPTR_ASPECT
void TableColumnModelEventSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TableColumnModelEventSource *pThis = static_cast<TableColumnModelEventSource *>(this);

    pThis->execSync(static_cast<TableColumnModelEventSource *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TableColumnModelEventSourceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TableColumnModelEventSource *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TableColumnModelEventSource *>(pRefAspect),
                  dynamic_cast<const TableColumnModelEventSource *>(this));

    return returnValue;
}
#endif

void TableColumnModelEventSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();

}

OSG_END_NAMESPACE
