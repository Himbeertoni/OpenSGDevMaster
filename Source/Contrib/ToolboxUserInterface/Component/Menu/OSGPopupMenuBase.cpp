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
 **     class PopupMenu!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGComponent.h"               // Invoker Class
#include "OSGSeparator.h"               // DefaultSeparator Class
#include "OSGSingleSelectionModel.h"    // SelectionModel Class

#include "OSGPopupMenuBase.h"
#include "OSGPopupMenu.h"
#include "OSGPopupMenuEventSource.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PopupMenu
    A UI PopupMenu.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          PopupMenuBase::_sfSubMenuDelay
    
*/

/*! \var Component *     PopupMenuBase::_sfInvoker
    
*/

/*! \var Separator *     PopupMenuBase::_sfDefaultSeparator
    
*/

/*! \var SingleSelectionModel * PopupMenuBase::_sfSelectionModel
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<PopupMenu *, nsOSG>::_type(
    "PopupMenuPtr", 
    "ComponentContainerPtr", 
    PopupMenu::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(PopupMenu *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PopupMenu *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PopupMenu *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PopupMenuBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "SubMenuDelay",
        "",
        SubMenuDelayFieldId, SubMenuDelayFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PopupMenu::editHandleSubMenuDelay),
        static_cast<FieldGetMethodSig >(&PopupMenu::getHandleSubMenuDelay));

    oType.addInitialDesc(pDesc);

    pDesc = new SFWeakComponentPtr::Description(
        SFWeakComponentPtr::getClassType(),
        "Invoker",
        "",
        InvokerFieldId, InvokerFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PopupMenu::editHandleInvoker),
        static_cast<FieldGetMethodSig >(&PopupMenu::getHandleInvoker));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecSeparatorPtr::Description(
        SFUnrecSeparatorPtr::getClassType(),
        "DefaultSeparator",
        "",
        DefaultSeparatorFieldId, DefaultSeparatorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PopupMenu::editHandleDefaultSeparator),
        static_cast<FieldGetMethodSig >(&PopupMenu::getHandleDefaultSeparator));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecSingleSelectionModelPtr::Description(
        SFUnrecSingleSelectionModelPtr::getClassType(),
        "SelectionModel",
        "",
        SelectionModelFieldId, SelectionModelFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PopupMenu::editHandleSelectionModel),
        static_cast<FieldGetMethodSig >(&PopupMenu::getHandleSelectionModel));

    oType.addInitialDesc(pDesc);
}


PopupMenuBase::TypeObject PopupMenuBase::_type(
    PopupMenuBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&PopupMenuBase::createEmptyLocal),
    PopupMenu::initMethod,
    PopupMenu::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PopupMenu::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"PopupMenu\"\n"
    "    parent=\"ComponentContainer\"\n"
    "    library=\"ContribToolboxUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    parentProducer=\"Component\"\n"
    " >\n"
    "A UI PopupMenu.\n"
    "    <Field\n"
    "        name=\"SubMenuDelay\"\n"
    "        type=\"Real32\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"0.5\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"Invoker\"\n"
    "        type=\"Component\"\n"
    "        category=\"weakpointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"DefaultSeparator\"\n"
    "        type=\"Separator\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"SelectionModel\"\n"
    "        type=\"SingleSelectionModel\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <ProducedEvent\n"
    "        name=\"PopupMenuWillBecomeVisible\"\n"
    "        detailsType=\"PopupMenuEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"PopupMenuWillBecomeInvisible\"\n"
    "        detailsType=\"PopupMenuEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"PopupMenuCanceled\"\n"
    "        detailsType=\"PopupMenuEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"PopupMenuContentsChanged\"\n"
    "        detailsType=\"PopupMenuEventDetails\"\n"
    "        consumable=\"true\"\n"
    "    >\n"
    "    </ProducedEvent>\n"
    "</FieldContainer>\n",
    "A UI PopupMenu.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PopupMenuBase::getType(void)
{
    return _type;
}

const FieldContainerType &PopupMenuBase::getType(void) const
{
    return _type;
}

UInt32 PopupMenuBase::getContainerSize(void) const
{
    return sizeof(PopupMenu);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *PopupMenuBase::editSFSubMenuDelay(void)
{
    editSField(SubMenuDelayFieldMask);

    return &_sfSubMenuDelay;
}

const SFReal32 *PopupMenuBase::getSFSubMenuDelay(void) const
{
    return &_sfSubMenuDelay;
}


//! Get the PopupMenu::_sfInvoker field.
const SFWeakComponentPtr *PopupMenuBase::getSFInvoker(void) const
{
    return &_sfInvoker;
}

SFWeakComponentPtr  *PopupMenuBase::editSFInvoker        (void)
{
    editSField(InvokerFieldMask);

    return &_sfInvoker;
}


//! Get the PopupMenu::_sfDefaultSeparator field.
const SFUnrecSeparatorPtr *PopupMenuBase::getSFDefaultSeparator(void) const
{
    return &_sfDefaultSeparator;
}

SFUnrecSeparatorPtr *PopupMenuBase::editSFDefaultSeparator(void)
{
    editSField(DefaultSeparatorFieldMask);

    return &_sfDefaultSeparator;
}


//! Get the PopupMenu::_sfSelectionModel field.
const SFUnrecSingleSelectionModelPtr *PopupMenuBase::getSFSelectionModel(void) const
{
    return &_sfSelectionModel;
}

SFUnrecSingleSelectionModelPtr *PopupMenuBase::editSFSelectionModel (void)
{
    editSField(SelectionModelFieldMask);

    return &_sfSelectionModel;
}






/*------------------------------ access -----------------------------------*/

SizeT PopupMenuBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SubMenuDelayFieldMask & whichField))
    {
        returnValue += _sfSubMenuDelay.getBinSize();
    }
    if(FieldBits::NoField != (InvokerFieldMask & whichField))
    {
        returnValue += _sfInvoker.getBinSize();
    }
    if(FieldBits::NoField != (DefaultSeparatorFieldMask & whichField))
    {
        returnValue += _sfDefaultSeparator.getBinSize();
    }
    if(FieldBits::NoField != (SelectionModelFieldMask & whichField))
    {
        returnValue += _sfSelectionModel.getBinSize();
    }

    return returnValue;
}

void PopupMenuBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SubMenuDelayFieldMask & whichField))
    {
        _sfSubMenuDelay.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InvokerFieldMask & whichField))
    {
        _sfInvoker.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DefaultSeparatorFieldMask & whichField))
    {
        _sfDefaultSeparator.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SelectionModelFieldMask & whichField))
    {
        _sfSelectionModel.copyToBin(pMem);
    }
}

void PopupMenuBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SubMenuDelayFieldMask & whichField))
    {
        editSField(SubMenuDelayFieldMask);
        _sfSubMenuDelay.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InvokerFieldMask & whichField))
    {
        editSField(InvokerFieldMask);
        _sfInvoker.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DefaultSeparatorFieldMask & whichField))
    {
        editSField(DefaultSeparatorFieldMask);
        _sfDefaultSeparator.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SelectionModelFieldMask & whichField))
    {
        editSField(SelectionModelFieldMask);
        _sfSelectionModel.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PopupMenuTransitPtr PopupMenuBase::createLocal(BitVector bFlags)
{
    PopupMenuTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PopupMenu>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PopupMenuTransitPtr PopupMenuBase::createDependent(BitVector bFlags)
{
    PopupMenuTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PopupMenu>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PopupMenuTransitPtr PopupMenuBase::create(void)
{
    PopupMenuTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PopupMenu>(tmpPtr);
    }

    return fc;
}

PopupMenu *PopupMenuBase::createEmptyLocal(BitVector bFlags)
{
    PopupMenu *returnValue;

    newPtr<PopupMenu>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PopupMenu *PopupMenuBase::createEmpty(void)
{
    PopupMenu *returnValue;

    newPtr<PopupMenu>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PopupMenuBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PopupMenu *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PopupMenu *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PopupMenuBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PopupMenu *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PopupMenu *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PopupMenuBase::shallowCopy(void) const
{
    PopupMenu *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PopupMenu *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PopupMenuBase::PopupMenuBase(void) :
    Inherited(),
    _sfSubMenuDelay           (Real32(0.5)),
    _sfInvoker                (NULL),
    _sfDefaultSeparator       (NULL),
    _sfSelectionModel         (NULL)
{
}

PopupMenuBase::PopupMenuBase(const PopupMenuBase &source) :
    Inherited(source),
    _sfSubMenuDelay           (source._sfSubMenuDelay           ),
    _sfInvoker                (NULL),
    _sfDefaultSeparator       (NULL),
    _sfSelectionModel         (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

PopupMenuBase::~PopupMenuBase(void)
{
}

void PopupMenuBase::onCreate(const PopupMenu *source)
{
    Inherited::onCreate(source);

    if(source)
    {
        PopupMenu *pThis = static_cast<PopupMenu *>(this);

        pThis->setInvoker(source->getInvoker());

        pThis->setDefaultSeparator(source->getDefaultSeparator());

        pThis->setSelectionModel(source->getSelectionModel());
    }
    
    {
        PopupMenuEventSourceUnrecPtr evSrc = PopupMenuEventSource::create();
        setEventSource( evSrc );
    }
}

GetFieldHandlePtr PopupMenuBase::getHandleSubMenuDelay    (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSubMenuDelay,
             this->getType().getFieldDesc(SubMenuDelayFieldId),
             const_cast<PopupMenuBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PopupMenuBase::editHandleSubMenuDelay   (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSubMenuDelay,
             this->getType().getFieldDesc(SubMenuDelayFieldId),
             this));


    editSField(SubMenuDelayFieldMask);

    return returnValue;
}

GetFieldHandlePtr PopupMenuBase::getHandleInvoker         (void) const
{
    SFWeakComponentPtr::GetHandlePtr returnValue(
        new  SFWeakComponentPtr::GetHandle(
             &_sfInvoker,
             this->getType().getFieldDesc(InvokerFieldId),
             const_cast<PopupMenuBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PopupMenuBase::editHandleInvoker        (void)
{
    SFWeakComponentPtr::EditHandlePtr returnValue(
        new  SFWeakComponentPtr::EditHandle(
             &_sfInvoker,
             this->getType().getFieldDesc(InvokerFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&PopupMenu::setInvoker,
                    static_cast<PopupMenu *>(this), _1));

    editSField(InvokerFieldMask);

    return returnValue;
}

GetFieldHandlePtr PopupMenuBase::getHandleDefaultSeparator (void) const
{
    SFUnrecSeparatorPtr::GetHandlePtr returnValue(
        new  SFUnrecSeparatorPtr::GetHandle(
             &_sfDefaultSeparator,
             this->getType().getFieldDesc(DefaultSeparatorFieldId),
             const_cast<PopupMenuBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PopupMenuBase::editHandleDefaultSeparator(void)
{
    SFUnrecSeparatorPtr::EditHandlePtr returnValue(
        new  SFUnrecSeparatorPtr::EditHandle(
             &_sfDefaultSeparator,
             this->getType().getFieldDesc(DefaultSeparatorFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&PopupMenu::setDefaultSeparator,
                    static_cast<PopupMenu *>(this), _1));

    editSField(DefaultSeparatorFieldMask);

    return returnValue;
}

GetFieldHandlePtr PopupMenuBase::getHandleSelectionModel  (void) const
{
    SFUnrecSingleSelectionModelPtr::GetHandlePtr returnValue(
        new  SFUnrecSingleSelectionModelPtr::GetHandle(
             &_sfSelectionModel,
             this->getType().getFieldDesc(SelectionModelFieldId),
             const_cast<PopupMenuBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PopupMenuBase::editHandleSelectionModel (void)
{
    SFUnrecSingleSelectionModelPtr::EditHandlePtr returnValue(
        new  SFUnrecSingleSelectionModelPtr::EditHandle(
             &_sfSelectionModel,
             this->getType().getFieldDesc(SelectionModelFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&PopupMenu::setSelectionModel,
                    static_cast<PopupMenu *>(this), _1));

    editSField(SelectionModelFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PopupMenuBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PopupMenu *pThis = static_cast<PopupMenu *>(this);

    pThis->execSync(static_cast<PopupMenu *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PopupMenuBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PopupMenu *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PopupMenu *>(pRefAspect),
                  dynamic_cast<const PopupMenu *>(this));

    return returnValue;
}
#endif

void PopupMenuBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<PopupMenu *>(this)->setInvoker(NULL);

    static_cast<PopupMenu *>(this)->setDefaultSeparator(NULL);

    static_cast<PopupMenu *>(this)->setSelectionModel(NULL);


}


boost::signals2::connection  PopupMenuBase::connectPopupMenuWillBecomeVisible(
                                                    const PopupMenuEventSource::PopupMenuWillBecomeVisibleEventType::slot_type &listener, 
                                                    boost::signals2::connect_position at)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->connectPopupMenuWillBecomeVisible( listener, at );
    }
    return boost::signals2::connection();
}

boost::signals2::connection  PopupMenuBase::connectPopupMenuWillBecomeVisible(
                                                    const PopupMenuEventSource::PopupMenuWillBecomeVisibleEventType::group_type &group,
                                                    const PopupMenuEventSource::PopupMenuWillBecomeVisibleEventType::slot_type &listener, 
                                                    boost::signals2::connect_position at)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->connectPopupMenuWillBecomeVisible( group, listener, at );
    }
    return boost::signals2::connection();
}

void  PopupMenuBase::disconnectPopupMenuWillBecomeVisible(
                                                    const PopupMenuEventSource::PopupMenuWillBecomeVisibleEventType::group_type &group
)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        evSrc->disconnectPopupMenuWillBecomeVisible( group );
    }
}

void  PopupMenuBase::disconnectAllSlotsPopupMenuWillBecomeVisible(void)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        evSrc->disconnectAllSlotsPopupMenuWillBecomeVisible();
    }
}

bool  PopupMenuBase::isEmptyPopupMenuWillBecomeVisible(void) const
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->isEmptyPopupMenuWillBecomeVisible();
    }
    return true;
}

UInt32  PopupMenuBase::numSlotsPopupMenuWillBecomeVisible(void) const
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->numSlotsPopupMenuWillBecomeVisible();
    }
    return 0u;
}

boost::signals2::connection  PopupMenuBase::connectPopupMenuWillBecomeInvisible(
                                                    const PopupMenuEventSource::PopupMenuWillBecomeInvisibleEventType::slot_type &listener, 
                                                    boost::signals2::connect_position at)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->connectPopupMenuWillBecomeInvisible( listener, at );
    }
    return boost::signals2::connection();
}

boost::signals2::connection  PopupMenuBase::connectPopupMenuWillBecomeInvisible(
                                                    const PopupMenuEventSource::PopupMenuWillBecomeInvisibleEventType::group_type &group,
                                                    const PopupMenuEventSource::PopupMenuWillBecomeInvisibleEventType::slot_type &listener, 
                                                    boost::signals2::connect_position at)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->connectPopupMenuWillBecomeInvisible( group, listener, at );
    }
    return boost::signals2::connection();
}

void  PopupMenuBase::disconnectPopupMenuWillBecomeInvisible(
                                                    const PopupMenuEventSource::PopupMenuWillBecomeInvisibleEventType::group_type &group
)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        evSrc->disconnectPopupMenuWillBecomeInvisible( group );
    }
}

void  PopupMenuBase::disconnectAllSlotsPopupMenuWillBecomeInvisible(void)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        evSrc->disconnectAllSlotsPopupMenuWillBecomeInvisible();
    }
}

bool  PopupMenuBase::isEmptyPopupMenuWillBecomeInvisible(void) const
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->isEmptyPopupMenuWillBecomeInvisible();
    }
    return true;
}

UInt32  PopupMenuBase::numSlotsPopupMenuWillBecomeInvisible(void) const
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->numSlotsPopupMenuWillBecomeInvisible();
    }
    return 0u;
}

boost::signals2::connection  PopupMenuBase::connectPopupMenuCanceled(
                                                    const PopupMenuEventSource::PopupMenuCanceledEventType::slot_type &listener, 
                                                    boost::signals2::connect_position at)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->connectPopupMenuCanceled( listener, at );
    }
    return boost::signals2::connection();
}

boost::signals2::connection  PopupMenuBase::connectPopupMenuCanceled(
                                                    const PopupMenuEventSource::PopupMenuCanceledEventType::group_type &group,
                                                    const PopupMenuEventSource::PopupMenuCanceledEventType::slot_type &listener, 
                                                    boost::signals2::connect_position at)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->connectPopupMenuCanceled( group, listener, at );
    }
    return boost::signals2::connection();
}

void  PopupMenuBase::disconnectPopupMenuCanceled(
                                                    const PopupMenuEventSource::PopupMenuCanceledEventType::group_type &group
)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        evSrc->disconnectPopupMenuCanceled( group );
    }
}

void  PopupMenuBase::disconnectAllSlotsPopupMenuCanceled(void)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        evSrc->disconnectAllSlotsPopupMenuCanceled();
    }
}

bool  PopupMenuBase::isEmptyPopupMenuCanceled(void) const
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->isEmptyPopupMenuCanceled();
    }
    return true;
}

UInt32  PopupMenuBase::numSlotsPopupMenuCanceled(void) const
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->numSlotsPopupMenuCanceled();
    }
    return 0u;
}

boost::signals2::connection  PopupMenuBase::connectPopupMenuContentsChanged(
                                                    const PopupMenuEventSource::PopupMenuContentsChangedEventType::slot_type &listener, 
                                                    boost::signals2::connect_position at)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->connectPopupMenuContentsChanged( listener, at );
    }
    return boost::signals2::connection();
}

boost::signals2::connection  PopupMenuBase::connectPopupMenuContentsChanged(
                                                    const PopupMenuEventSource::PopupMenuContentsChangedEventType::group_type &group,
                                                    const PopupMenuEventSource::PopupMenuContentsChangedEventType::slot_type &listener, 
                                                    boost::signals2::connect_position at)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->connectPopupMenuContentsChanged( group, listener, at );
    }
    return boost::signals2::connection();
}

void  PopupMenuBase::disconnectPopupMenuContentsChanged(
                                                    const PopupMenuEventSource::PopupMenuContentsChangedEventType::group_type &group
)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        evSrc->disconnectPopupMenuContentsChanged( group );
    }
}

void  PopupMenuBase::disconnectAllSlotsPopupMenuContentsChanged(void)
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        evSrc->disconnectAllSlotsPopupMenuContentsChanged();
    }
}

bool  PopupMenuBase::isEmptyPopupMenuContentsChanged(void) const
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->isEmptyPopupMenuContentsChanged();
    }
    return true;
}

UInt32  PopupMenuBase::numSlotsPopupMenuContentsChanged(void) const
{
    PopupMenuEventSource* evSrc = dynamic_cast<PopupMenuEventSource*>( getEventSource() );
    if ( evSrc )
    {
        return evSrc->numSlotsPopupMenuContentsChanged();
    }
    return 0u;
}

OSG_END_NAMESPACE
