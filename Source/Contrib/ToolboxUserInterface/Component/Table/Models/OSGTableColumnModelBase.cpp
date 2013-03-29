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
 **     class TableColumnModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGListSelectionModel.h"      // SelectionModel Class
#include "OSGTableColumnModelEventSource.h" // EventSource Class

#include "OSGTableColumnModelBase.h"
#include "OSGTableColumnModel.h"
#include "OSGTableColumnModelEventSource.h"
#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TableColumnModel
    A UI TableColumnModel.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ListSelectionModel * TableColumnModelBase::_sfSelectionModel
    
*/

/*! \var TableColumnModelEventSource * TableColumnModelBase::_sfEventSource
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<TableColumnModel *, nsOSG>::_type(
    "TableColumnModelPtr", 
    "FieldContainerPtr", 
    TableColumnModel::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(TableColumnModel *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TableColumnModel *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TableColumnModel *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TableColumnModelBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecListSelectionModelPtr::Description(
        SFUnrecListSelectionModelPtr::getClassType(),
        "SelectionModel",
        "",
        SelectionModelFieldId, SelectionModelFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableColumnModel::editHandleSelectionModel),
        static_cast<FieldGetMethodSig >(&TableColumnModel::getHandleSelectionModel));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTableColumnModelEventSourcePtr::Description(
        SFUnrecTableColumnModelEventSourcePtr::getClassType(),
        "EventSource",
        "",
        EventSourceFieldId, EventSourceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableColumnModel::editHandleEventSource),
        static_cast<FieldGetMethodSig >(&TableColumnModel::getHandleEventSource));

    oType.addInitialDesc(pDesc);
}


TableColumnModelBase::TypeObject TableColumnModelBase::_type(
    TableColumnModelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    TableColumnModel::initMethod,
    TableColumnModel::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TableColumnModel::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"TableColumnModel\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"ContribToolboxUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI TableColumnModel.\n"
    "    <Field\n"
    "        name=\"SelectionModel\"\n"
    "        type=\"ListSelectionModel\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"EventSource\"\n"
    "        type=\"TableColumnModelEventSource\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <ProducedEvent\n"
    "        name=\"ColumnAdded\"\n"
    "        detailsType=\"TableColumnModelEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ColumnMoved\"\n"
    "        detailsType=\"TableColumnModelEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ColumnRemoved\"\n"
    "        detailsType=\"TableColumnModelEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ColumnMarginChanged\"\n"
    "        detailsType=\"ChangeEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ColumnSelectionChanged\"\n"
    "        detailsType=\"ListSelectionEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "</FieldContainer>\n",
    "A UI TableColumnModel.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TableColumnModelBase::getType(void)
{
    return _type;
}

const FieldContainerType &TableColumnModelBase::getType(void) const
{
    return _type;
}

UInt32 TableColumnModelBase::getContainerSize(void) const
{
    return sizeof(TableColumnModel);
}

/*------------------------- decorator get ------------------------------*/


//! Get the TableColumnModel::_sfSelectionModel field.
const SFUnrecListSelectionModelPtr *TableColumnModelBase::getSFSelectionModel(void) const
{
    return &_sfSelectionModel;
}

SFUnrecListSelectionModelPtr *TableColumnModelBase::editSFSelectionModel (void)
{
    editSField(SelectionModelFieldMask);

    return &_sfSelectionModel;
}

//! Get the value of the TableColumnModel::_sfSelectionModel field.
ListSelectionModel * TableColumnModelBase::getSelectionModel(void) const
{
    return _sfSelectionModel.getValue();
}

//! Set the value of the TableColumnModel::_sfSelectionModel field.
void TableColumnModelBase::setSelectionModel(ListSelectionModel * const value)
{
    editSField(SelectionModelFieldMask);

    _sfSelectionModel.setValue(value);
}


//! Get the TableColumnModel::_sfEventSource field.
const SFUnrecTableColumnModelEventSourcePtr *TableColumnModelBase::getSFEventSource(void) const
{
    return &_sfEventSource;
}

SFUnrecTableColumnModelEventSourcePtr *TableColumnModelBase::editSFEventSource    (void)
{
    editSField(EventSourceFieldMask);

    return &_sfEventSource;
}

//! Get the value of the TableColumnModel::_sfEventSource field.
TableColumnModelEventSource * TableColumnModelBase::getEventSource(void) const
{
    return _sfEventSource.getValue();
}

//! Set the value of the TableColumnModel::_sfEventSource field.
void TableColumnModelBase::setEventSource(TableColumnModelEventSource * const value)
{
    editSField(EventSourceFieldMask);

    _sfEventSource.setValue(value);
}






/*------------------------------ access -----------------------------------*/

SizeT TableColumnModelBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SelectionModelFieldMask & whichField))
    {
        returnValue += _sfSelectionModel.getBinSize();
    }
    if(FieldBits::NoField != (EventSourceFieldMask & whichField))
    {
        returnValue += _sfEventSource.getBinSize();
    }

    return returnValue;
}

void TableColumnModelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SelectionModelFieldMask & whichField))
    {
        _sfSelectionModel.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EventSourceFieldMask & whichField))
    {
        _sfEventSource.copyToBin(pMem);
    }
}

void TableColumnModelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SelectionModelFieldMask & whichField))
    {
        editSField(SelectionModelFieldMask);
        _sfSelectionModel.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EventSourceFieldMask & whichField))
    {
        editSField(EventSourceFieldMask);
        _sfEventSource.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

TableColumnModelBase::TableColumnModelBase(void) :
    Inherited(),
    _sfSelectionModel         (NULL),
    _sfEventSource            (NULL)
{
}

TableColumnModelBase::TableColumnModelBase(const TableColumnModelBase &source) :
    Inherited(source),
    _sfSelectionModel         (NULL),
    _sfEventSource            (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

TableColumnModelBase::~TableColumnModelBase(void)
{
}

void TableColumnModelBase::onCreate(const TableColumnModel *source)
{
    Inherited::onCreate(source);

    if(source)
    {
        TableColumnModel *pThis = static_cast<TableColumnModel *>(this);

        pThis->setSelectionModel(source->getSelectionModel());

        pThis->setEventSource(source->getEventSource());
    }
    else
    {
        TableColumnModelEventSourceUnrecPtr evSrc = TableColumnModelEventSource::create();
        setEventSource( evSrc );
    }
}

GetFieldHandlePtr TableColumnModelBase::getHandleSelectionModel  (void) const
{
    SFUnrecListSelectionModelPtr::GetHandlePtr returnValue(
        new  SFUnrecListSelectionModelPtr::GetHandle(
             &_sfSelectionModel,
             this->getType().getFieldDesc(SelectionModelFieldId),
             const_cast<TableColumnModelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnModelBase::editHandleSelectionModel (void)
{
    SFUnrecListSelectionModelPtr::EditHandlePtr returnValue(
        new  SFUnrecListSelectionModelPtr::EditHandle(
             &_sfSelectionModel,
             this->getType().getFieldDesc(SelectionModelFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TableColumnModel::setSelectionModel,
                    static_cast<TableColumnModel *>(this), _1));

    editSField(SelectionModelFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableColumnModelBase::getHandleEventSource     (void) const
{
    SFUnrecTableColumnModelEventSourcePtr::GetHandlePtr returnValue(
        new  SFUnrecTableColumnModelEventSourcePtr::GetHandle(
             &_sfEventSource,
             this->getType().getFieldDesc(EventSourceFieldId),
             const_cast<TableColumnModelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnModelBase::editHandleEventSource    (void)
{
    SFUnrecTableColumnModelEventSourcePtr::EditHandlePtr returnValue(
        new  SFUnrecTableColumnModelEventSourcePtr::EditHandle(
             &_sfEventSource,
             this->getType().getFieldDesc(EventSourceFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TableColumnModel::setEventSource,
                    static_cast<TableColumnModel *>(this), _1));

    editSField(EventSourceFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TableColumnModelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TableColumnModel *pThis = static_cast<TableColumnModel *>(this);

    pThis->execSync(static_cast<TableColumnModel *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void TableColumnModelBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TableColumnModel *>(this)->setSelectionModel(NULL);

    static_cast<TableColumnModel *>(this)->setEventSource(NULL);


}


OSG_END_NAMESPACE
