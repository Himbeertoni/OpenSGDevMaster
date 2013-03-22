/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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
 **     class ComponentEventSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGComponentEventSourceBase.h"
#include "OSGComponentEventSource.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ComponentEventSource
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ComponentEventSource *, nsOSG>::_type(
    "ComponentEventSourcePtr", 
    "EventContainerPtr", 
    ComponentEventSource::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ComponentEventSource *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ComponentEventSource *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ComponentEventSource *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ComponentEventSourceBase::classDescInserter(TypeObject &oType)
{
}


ComponentEventSourceBase::TypeObject ComponentEventSourceBase::_type(
    ComponentEventSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ComponentEventSourceBase::createEmptyLocal),
    ComponentEventSource::initMethod,
    ComponentEventSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ComponentEventSource::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ComponentEventSource\"\n"
    "    parent=\"EventContainer\"\n"
    "    library=\"ContribToolboxUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    >\n"
    "<!--\n"
    "    <ProducedEvent\n"
    "        name=\"MouseMoved\"\n"
    "        detailsType=\"MouseEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when the mouse is hovering over this Component and moves.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"MouseDragged\"\n"
    "        detailsType=\"MouseEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when the mouse is hovering over this Component and moves \n"
    "        when a mouse button is down.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"MouseClicked\"\n"
    "        detailsType=\"MouseEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when the mouse is hovering over this Component and a \n"
    "        mouse button is clicked.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"MouseEntered\"\n"
    "        detailsType=\"MouseEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when the mouse enters this Component.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"MouseExited\"\n"
    "        detailsType=\"MouseEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when the mouse exits this Component.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"MousePressed\"\n"
    "        detailsType=\"MouseEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when the mouse is hovering over this Component and a \n"
    "        mouse button is pressed.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"MouseReleased\"\n"
    "        detailsType=\"MouseEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when the mouse is hovering over this Component and a \n"
    "        mouse button is released.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"MouseWheelMoved\"\n"
    "        detailsType=\"MouseWheelEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when the mouse is hovering over this Component and the\n"
    "        mouse wheel is moved.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"KeyPressed\"\n"
    "        detailsType=\"KeyEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when this Component has focused and a keyboard key is \n"
    "        pressed.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"KeyReleased\"\n"
    "        detailsType=\"KeyEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when this Component has focused and a keyboard key is \n"
    "        released.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"KeyTyped\"\n"
    "        detailsType=\"KeyEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when this Component has focused and a keyboard key is \n"
    "        typed.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"FocusGained\"\n"
    "        detailsType=\"FocusEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when this Component gains focus.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"FocusLost\"\n"
    "        detailsType=\"FocusEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when this Component loses focus.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ComponentHidden\"\n"
    "        detailsType=\"ComponentEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when this Component's Visible field is set to false.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ComponentVisible\"\n"
    "        detailsType=\"ComponentEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when this Component's Visible field is set to true.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ComponentMoved\"\n"
    "        detailsType=\"ComponentEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when this Component's Position field changes.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ComponentResized\"\n"
    "        detailsType=\"ComponentEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when this Component's Size field changes.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ComponentEnabled\"\n"
    "        detailsType=\"ComponentEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when this Component's Enabled field is set to true.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ComponentDisabled\"\n"
    "        detailsType=\"ComponentEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when this Component's Enabled field is set to false.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ToolTipActivated\"\n"
    "        detailsType=\"ComponentEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when the ToolTip for this Component is activated.\n"
    "    </ProducedEvent>\n"
    "    <ProducedEvent\n"
    "        name=\"ToolTipDeactivated\"\n"
    "        detailsType=\"ComponentEventDetails\"\n"
    "        consumable=\"true\"\n"
    "        >\n"
    "        Event produced when the ToolTip for this Component is deactivated.\n"
    "    </ProducedEvent>\n"
    "-->\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ComponentEventSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &ComponentEventSourceBase::getType(void) const
{
    return _type;
}

UInt32 ComponentEventSourceBase::getContainerSize(void) const
{
    return sizeof(ComponentEventSource);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT ComponentEventSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void ComponentEventSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void ComponentEventSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
ComponentEventSourceTransitPtr ComponentEventSourceBase::createLocal(BitVector bFlags)
{
    ComponentEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ComponentEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ComponentEventSourceTransitPtr ComponentEventSourceBase::createDependent(BitVector bFlags)
{
    ComponentEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ComponentEventSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ComponentEventSourceTransitPtr ComponentEventSourceBase::create(void)
{
    ComponentEventSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ComponentEventSource>(tmpPtr);
    }

    return fc;
}

ComponentEventSource *ComponentEventSourceBase::createEmptyLocal(BitVector bFlags)
{
    ComponentEventSource *returnValue;

    newPtr<ComponentEventSource>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ComponentEventSource *ComponentEventSourceBase::createEmpty(void)
{
    ComponentEventSource *returnValue;

    newPtr<ComponentEventSource>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ComponentEventSourceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ComponentEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComponentEventSource *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComponentEventSourceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ComponentEventSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComponentEventSource *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComponentEventSourceBase::shallowCopy(void) const
{
    ComponentEventSource *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ComponentEventSource *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ComponentEventSourceBase::ComponentEventSourceBase(void) :
    Inherited()
{
}

ComponentEventSourceBase::ComponentEventSourceBase(const ComponentEventSourceBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

ComponentEventSourceBase::~ComponentEventSourceBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void ComponentEventSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ComponentEventSource *pThis = static_cast<ComponentEventSource *>(this);

    pThis->execSync(static_cast<ComponentEventSource *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ComponentEventSourceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ComponentEventSource *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ComponentEventSource *>(pRefAspect),
                  dynamic_cast<const ComponentEventSource *>(this));

    return returnValue;
}
#endif

void ComponentEventSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
