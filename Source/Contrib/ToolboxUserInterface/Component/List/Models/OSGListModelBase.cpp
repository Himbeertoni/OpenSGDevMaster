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
 **     class ListModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGListModelEventSource.h"    // EventSource Class

#include "OSGListModelBase.h"
#include "OSGListModel.h"
#include "OSGListModelEventSource.h"
#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ListModel
    A UI ListModel.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ListModelEventSource * ListModelBase::_sfEventSource
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ListModel *, nsOSG>::_type(
    "ListModelPtr", 
    "AttachmentContainerPtr", 
    ListModel::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ListModel *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ListModel *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ListModel *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ListModelBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecListModelEventSourcePtr::Description(
        SFUnrecListModelEventSourcePtr::getClassType(),
        "EventSource",
        "",
        EventSourceFieldId, EventSourceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ListModel::editHandleEventSource),
        static_cast<FieldGetMethodSig >(&ListModel::getHandleEventSource));

    oType.addInitialDesc(pDesc);
}


ListModelBase::TypeObject ListModelBase::_type(
    ListModelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    ListModel::initMethod,
    ListModel::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ListModel::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ListModel\"\n"
    "    parent=\"AttachmentContainer\"\n"
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
    "A UI ListModel.\n"
    "    <Field\n"
    "        name=\"EventSource\"\n"
    "        type=\"ListModelEventSource\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"NULL\"\n"
    "        >\n"
    "    </Field>\n"
    "    <ProducedEvent\n"
    "        name=\"ListDataContentsChanged\"\n"
    "        detailsType=\"ListDataEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ListDataIntervalAdded\"\n"
    "        detailsType=\"ListDataEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ListDataIntervalRemoved\"\n"
    "        detailsType=\"ListDataEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "</FieldContainer>\n",
    "A UI ListModel.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ListModelBase::getType(void)
{
    return _type;
}

const FieldContainerType &ListModelBase::getType(void) const
{
    return _type;
}

UInt32 ListModelBase::getContainerSize(void) const
{
    return sizeof(ListModel);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ListModel::_sfEventSource field.
const SFUnrecListModelEventSourcePtr *ListModelBase::getSFEventSource(void) const
{
    return &_sfEventSource;
}

SFUnrecListModelEventSourcePtr *ListModelBase::editSFEventSource    (void)
{
    editSField(EventSourceFieldMask);

    return &_sfEventSource;
}

//! Get the value of the ListModel::_sfEventSource field.
ListModelEventSource * ListModelBase::getEventSource(void) const
{
    return _sfEventSource.getValue();
}

//! Set the value of the ListModel::_sfEventSource field.
void ListModelBase::setEventSource(ListModelEventSource * const value)
{
    editSField(EventSourceFieldMask);

    _sfEventSource.setValue(value);
}






/*------------------------------ access -----------------------------------*/

SizeT ListModelBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EventSourceFieldMask & whichField))
    {
        returnValue += _sfEventSource.getBinSize();
    }

    return returnValue;
}

void ListModelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EventSourceFieldMask & whichField))
    {
        _sfEventSource.copyToBin(pMem);
    }
}

void ListModelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EventSourceFieldMask & whichField))
    {
        editSField(EventSourceFieldMask);
        _sfEventSource.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

ListModelBase::ListModelBase(void) :
    Inherited(),
    _sfEventSource            (NULL)
{
}

ListModelBase::ListModelBase(const ListModelBase &source) :
    Inherited(source),
    _sfEventSource            (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

ListModelBase::~ListModelBase(void)
{
}

void ListModelBase::onCreate(const ListModel *source)
{
    Inherited::onCreate(source);

    if(source)
    {
        ListModel *pThis = static_cast<ListModel *>(this);

        pThis->setEventSource(source->getEventSource());
    }
    else
    {
        ListModelEventSourceUnrecPtr evSrc = ListModelEventSource::create();
        setEventSource( evSrc );
    }
}

GetFieldHandlePtr ListModelBase::getHandleEventSource     (void) const
{
    SFUnrecListModelEventSourcePtr::GetHandlePtr returnValue(
        new  SFUnrecListModelEventSourcePtr::GetHandle(
             &_sfEventSource,
             this->getType().getFieldDesc(EventSourceFieldId),
             const_cast<ListModelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ListModelBase::editHandleEventSource    (void)
{
    SFUnrecListModelEventSourcePtr::EditHandlePtr returnValue(
        new  SFUnrecListModelEventSourcePtr::EditHandle(
             &_sfEventSource,
             this->getType().getFieldDesc(EventSourceFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ListModel::setEventSource,
                    static_cast<ListModel *>(this), _1));

    editSField(EventSourceFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ListModelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ListModel *pThis = static_cast<ListModel *>(this);

    pThis->execSync(static_cast<ListModel *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void ListModelBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ListModel *>(this)->setEventSource(NULL);


}


OSG_END_NAMESPACE
