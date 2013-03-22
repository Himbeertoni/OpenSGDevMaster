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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGComponentEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGComponentEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGComponentEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! Component Produced Events

EventDescription *ComponentEventSource::_eventDesc[] =
{
    new EventDescription("MouseMoved", 
                          "Event produced when the mouse is hovering over this Component and moves.\n",
                          MouseMovedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleMouseMovedSignal)),

    new EventDescription("MouseDragged", 
                          "Event produced when the mouse is hovering over this Component and moves \n"
                          "when a mouse button is down.\n",
                          MouseDraggedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleMouseDraggedSignal)),

    new EventDescription("MouseClicked", 
                          "Event produced when the mouse is hovering over this Component and a \n"
                          "mouse button is clicked.\n",
                          MouseClickedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleMouseClickedSignal)),

    new EventDescription("MouseEntered", 
                          "Event produced when the mouse enters this Component.\n",
                          MouseEnteredEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleMouseEnteredSignal)),

    new EventDescription("MouseExited", 
                          "Event produced when the mouse exits this Component.\n",
                          MouseExitedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleMouseExitedSignal)),

    new EventDescription("MousePressed", 
                          "Event produced when the mouse is hovering over this Component and a \n"
                          "mouse button is pressed.\n",
                          MousePressedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleMousePressedSignal)),

    new EventDescription("MouseReleased", 
                          "Event produced when the mouse is hovering over this Component and a \n"
                          "mouse button is released.\n",
                          MouseReleasedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleMouseReleasedSignal)),

    new EventDescription("MouseWheelMoved", 
                          "Event produced when the mouse is hovering over this Component and the\n"
                          "mouse wheel is moved.\n",
                          MouseWheelMovedEventId, 
                          FieldTraits<MouseWheelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleMouseWheelMovedSignal)),

    new EventDescription("KeyPressed", 
                          "Event produced when this Component has focused and a keyboard key is \n"
                          "pressed.\n",
                          KeyPressedEventId, 
                          FieldTraits<KeyEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleKeyPressedSignal)),

    new EventDescription("KeyReleased", 
                          "Event produced when this Component has focused and a keyboard key is \n"
                          "released.\n",
                          KeyReleasedEventId, 
                          FieldTraits<KeyEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleKeyReleasedSignal)),

    new EventDescription("KeyTyped", 
                          "Event produced when this Component has focused and a keyboard key is \n"
                          "typed.\n",
                          KeyTypedEventId, 
                          FieldTraits<KeyEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleKeyTypedSignal)),

    new EventDescription("FocusGained", 
                          "Event produced when this Component gains focus.\n",
                          FocusGainedEventId, 
                          FieldTraits<FocusEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleFocusGainedSignal)),

    new EventDescription("FocusLost", 
                          "Event produced when this Component loses focus.\n",
                          FocusLostEventId, 
                          FieldTraits<FocusEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleFocusLostSignal)),

    new EventDescription("ComponentHidden", 
                          "Event produced when this Component's Visible field is set to false.\n",
                          ComponentHiddenEventId, 
                          FieldTraits<ComponentEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleComponentHiddenSignal)),

    new EventDescription("ComponentVisible", 
                          "Event produced when this Component's Visible field is set to true.\n",
                          ComponentVisibleEventId, 
                          FieldTraits<ComponentEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleComponentVisibleSignal)),

    new EventDescription("ComponentMoved", 
                          "Event produced when this Component's Position field changes.\n",
                          ComponentMovedEventId, 
                          FieldTraits<ComponentEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleComponentMovedSignal)),

    new EventDescription("ComponentResized", 
                          "Event produced when this Component's Size field changes.\n",
                          ComponentResizedEventId, 
                          FieldTraits<ComponentEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleComponentResizedSignal)),

    new EventDescription("ComponentEnabled", 
                          "Event produced when this Component's Enabled field is set to true.\n",
                          ComponentEnabledEventId, 
                          FieldTraits<ComponentEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleComponentEnabledSignal)),

    new EventDescription("ComponentDisabled", 
                          "Event produced when this Component's Enabled field is set to false.\n",
                          ComponentDisabledEventId, 
                          FieldTraits<ComponentEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleComponentDisabledSignal)),

    new EventDescription("ToolTipActivated", 
                          "Event produced when the ToolTip for this Component is activated.\n",
                          ToolTipActivatedEventId, 
                          FieldTraits<ComponentEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleToolTipActivatedSignal)),

    new EventDescription("ToolTipDeactivated", 
                          "Event produced when the ToolTip for this Component is deactivated.\n",
                          ToolTipDeactivatedEventId, 
                          FieldTraits<ComponentEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComponentEventSource::getHandleToolTipDeactivatedSignal))

};

EventProducerType ComponentEventSource::_producerType(
    "ComponentProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

const EventProducerType &ComponentEventSource::getProducerType(void) const
{
    return _producerType;
}

void ComponentEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/


/*------------------------- event producers ----------------------------------*/
void ComponentEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case MouseMovedEventId:
        OSG_ASSERT(dynamic_cast<MouseMovedEventDetailsType* const>(e));

        _MouseMovedEvent.set_combiner(ConsumableEventCombiner(e));
        _MouseMovedEvent(dynamic_cast<MouseMovedEventDetailsType* const>(e), MouseMovedEventId);
        break;
    case MouseDraggedEventId:
        OSG_ASSERT(dynamic_cast<MouseDraggedEventDetailsType* const>(e));

        _MouseDraggedEvent.set_combiner(ConsumableEventCombiner(e));
        _MouseDraggedEvent(dynamic_cast<MouseDraggedEventDetailsType* const>(e), MouseDraggedEventId);
        break;
    case MouseClickedEventId:
        OSG_ASSERT(dynamic_cast<MouseClickedEventDetailsType* const>(e));

        _MouseClickedEvent.set_combiner(ConsumableEventCombiner(e));
        _MouseClickedEvent(dynamic_cast<MouseClickedEventDetailsType* const>(e), MouseClickedEventId);
        break;
    case MouseEnteredEventId:
        OSG_ASSERT(dynamic_cast<MouseEnteredEventDetailsType* const>(e));

        _MouseEnteredEvent.set_combiner(ConsumableEventCombiner(e));
        _MouseEnteredEvent(dynamic_cast<MouseEnteredEventDetailsType* const>(e), MouseEnteredEventId);
        break;
    case MouseExitedEventId:
        OSG_ASSERT(dynamic_cast<MouseExitedEventDetailsType* const>(e));

        _MouseExitedEvent.set_combiner(ConsumableEventCombiner(e));
        _MouseExitedEvent(dynamic_cast<MouseExitedEventDetailsType* const>(e), MouseExitedEventId);
        break;
    case MousePressedEventId:
        OSG_ASSERT(dynamic_cast<MousePressedEventDetailsType* const>(e));

        _MousePressedEvent.set_combiner(ConsumableEventCombiner(e));
        _MousePressedEvent(dynamic_cast<MousePressedEventDetailsType* const>(e), MousePressedEventId);
        break;
    case MouseReleasedEventId:
        OSG_ASSERT(dynamic_cast<MouseReleasedEventDetailsType* const>(e));

        _MouseReleasedEvent.set_combiner(ConsumableEventCombiner(e));
        _MouseReleasedEvent(dynamic_cast<MouseReleasedEventDetailsType* const>(e), MouseReleasedEventId);
        break;
    case MouseWheelMovedEventId:
        OSG_ASSERT(dynamic_cast<MouseWheelMovedEventDetailsType* const>(e));

        _MouseWheelMovedEvent.set_combiner(ConsumableEventCombiner(e));
        _MouseWheelMovedEvent(dynamic_cast<MouseWheelMovedEventDetailsType* const>(e), MouseWheelMovedEventId);
        break;
    case KeyPressedEventId:
        OSG_ASSERT(dynamic_cast<KeyPressedEventDetailsType* const>(e));

        _KeyPressedEvent.set_combiner(ConsumableEventCombiner(e));
        _KeyPressedEvent(dynamic_cast<KeyPressedEventDetailsType* const>(e), KeyPressedEventId);
        break;
    case KeyReleasedEventId:
        OSG_ASSERT(dynamic_cast<KeyReleasedEventDetailsType* const>(e));

        _KeyReleasedEvent.set_combiner(ConsumableEventCombiner(e));
        _KeyReleasedEvent(dynamic_cast<KeyReleasedEventDetailsType* const>(e), KeyReleasedEventId);
        break;
    case KeyTypedEventId:
        OSG_ASSERT(dynamic_cast<KeyTypedEventDetailsType* const>(e));

        _KeyTypedEvent.set_combiner(ConsumableEventCombiner(e));
        _KeyTypedEvent(dynamic_cast<KeyTypedEventDetailsType* const>(e), KeyTypedEventId);
        break;
    case FocusGainedEventId:
        OSG_ASSERT(dynamic_cast<FocusGainedEventDetailsType* const>(e));

        _FocusGainedEvent.set_combiner(ConsumableEventCombiner(e));
        _FocusGainedEvent(dynamic_cast<FocusGainedEventDetailsType* const>(e), FocusGainedEventId);
        break;
    case FocusLostEventId:
        OSG_ASSERT(dynamic_cast<FocusLostEventDetailsType* const>(e));

        _FocusLostEvent.set_combiner(ConsumableEventCombiner(e));
        _FocusLostEvent(dynamic_cast<FocusLostEventDetailsType* const>(e), FocusLostEventId);
        break;
    case ComponentHiddenEventId:
        OSG_ASSERT(dynamic_cast<ComponentHiddenEventDetailsType* const>(e));

        _ComponentHiddenEvent.set_combiner(ConsumableEventCombiner(e));
        _ComponentHiddenEvent(dynamic_cast<ComponentHiddenEventDetailsType* const>(e), ComponentHiddenEventId);
        break;
    case ComponentVisibleEventId:
        OSG_ASSERT(dynamic_cast<ComponentVisibleEventDetailsType* const>(e));

        _ComponentVisibleEvent.set_combiner(ConsumableEventCombiner(e));
        _ComponentVisibleEvent(dynamic_cast<ComponentVisibleEventDetailsType* const>(e), ComponentVisibleEventId);
        break;
    case ComponentMovedEventId:
        OSG_ASSERT(dynamic_cast<ComponentMovedEventDetailsType* const>(e));

        _ComponentMovedEvent.set_combiner(ConsumableEventCombiner(e));
        _ComponentMovedEvent(dynamic_cast<ComponentMovedEventDetailsType* const>(e), ComponentMovedEventId);
        break;
    case ComponentResizedEventId:
        OSG_ASSERT(dynamic_cast<ComponentResizedEventDetailsType* const>(e));

        _ComponentResizedEvent.set_combiner(ConsumableEventCombiner(e));
        _ComponentResizedEvent(dynamic_cast<ComponentResizedEventDetailsType* const>(e), ComponentResizedEventId);
        break;
    case ComponentEnabledEventId:
        OSG_ASSERT(dynamic_cast<ComponentEnabledEventDetailsType* const>(e));

        _ComponentEnabledEvent.set_combiner(ConsumableEventCombiner(e));
        _ComponentEnabledEvent(dynamic_cast<ComponentEnabledEventDetailsType* const>(e), ComponentEnabledEventId);
        break;
    case ComponentDisabledEventId:
        OSG_ASSERT(dynamic_cast<ComponentDisabledEventDetailsType* const>(e));

        _ComponentDisabledEvent.set_combiner(ConsumableEventCombiner(e));
        _ComponentDisabledEvent(dynamic_cast<ComponentDisabledEventDetailsType* const>(e), ComponentDisabledEventId);
        break;
    case ToolTipActivatedEventId:
        OSG_ASSERT(dynamic_cast<ToolTipActivatedEventDetailsType* const>(e));

        _ToolTipActivatedEvent.set_combiner(ConsumableEventCombiner(e));
        _ToolTipActivatedEvent(dynamic_cast<ToolTipActivatedEventDetailsType* const>(e), ToolTipActivatedEventId);
        break;
    case ToolTipDeactivatedEventId:
        OSG_ASSERT(dynamic_cast<ToolTipDeactivatedEventDetailsType* const>(e));

        _ToolTipDeactivatedEvent.set_combiner(ConsumableEventCombiner(e));
        _ToolTipDeactivatedEvent(dynamic_cast<ToolTipDeactivatedEventDetailsType* const>(e), ToolTipDeactivatedEventId);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

boost::signals2::connection ComponentEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case MouseMovedEventId:
        return _MouseMovedEvent.connect(listener, at);
        break;
    case MouseDraggedEventId:
        return _MouseDraggedEvent.connect(listener, at);
        break;
    case MouseClickedEventId:
        return _MouseClickedEvent.connect(listener, at);
        break;
    case MouseEnteredEventId:
        return _MouseEnteredEvent.connect(listener, at);
        break;
    case MouseExitedEventId:
        return _MouseExitedEvent.connect(listener, at);
        break;
    case MousePressedEventId:
        return _MousePressedEvent.connect(listener, at);
        break;
    case MouseReleasedEventId:
        return _MouseReleasedEvent.connect(listener, at);
        break;
    case MouseWheelMovedEventId:
        return _MouseWheelMovedEvent.connect(listener, at);
        break;
    case KeyPressedEventId:
        return _KeyPressedEvent.connect(listener, at);
        break;
    case KeyReleasedEventId:
        return _KeyReleasedEvent.connect(listener, at);
        break;
    case KeyTypedEventId:
        return _KeyTypedEvent.connect(listener, at);
        break;
    case FocusGainedEventId:
        return _FocusGainedEvent.connect(listener, at);
        break;
    case FocusLostEventId:
        return _FocusLostEvent.connect(listener, at);
        break;
    case ComponentHiddenEventId:
        return _ComponentHiddenEvent.connect(listener, at);
        break;
    case ComponentVisibleEventId:
        return _ComponentVisibleEvent.connect(listener, at);
        break;
    case ComponentMovedEventId:
        return _ComponentMovedEvent.connect(listener, at);
        break;
    case ComponentResizedEventId:
        return _ComponentResizedEvent.connect(listener, at);
        break;
    case ComponentEnabledEventId:
        return _ComponentEnabledEvent.connect(listener, at);
        break;
    case ComponentDisabledEventId:
        return _ComponentDisabledEvent.connect(listener, at);
        break;
    case ToolTipActivatedEventId:
        return _ToolTipActivatedEvent.connect(listener, at);
        break;
    case ToolTipDeactivatedEventId:
        return _ToolTipDeactivatedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  ComponentEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case MouseMovedEventId:
        return _MouseMovedEvent.connect(group, listener, at);
        break;
    case MouseDraggedEventId:
        return _MouseDraggedEvent.connect(group, listener, at);
        break;
    case MouseClickedEventId:
        return _MouseClickedEvent.connect(group, listener, at);
        break;
    case MouseEnteredEventId:
        return _MouseEnteredEvent.connect(group, listener, at);
        break;
    case MouseExitedEventId:
        return _MouseExitedEvent.connect(group, listener, at);
        break;
    case MousePressedEventId:
        return _MousePressedEvent.connect(group, listener, at);
        break;
    case MouseReleasedEventId:
        return _MouseReleasedEvent.connect(group, listener, at);
        break;
    case MouseWheelMovedEventId:
        return _MouseWheelMovedEvent.connect(group, listener, at);
        break;
    case KeyPressedEventId:
        return _KeyPressedEvent.connect(group, listener, at);
        break;
    case KeyReleasedEventId:
        return _KeyReleasedEvent.connect(group, listener, at);
        break;
    case KeyTypedEventId:
        return _KeyTypedEvent.connect(group, listener, at);
        break;
    case FocusGainedEventId:
        return _FocusGainedEvent.connect(group, listener, at);
        break;
    case FocusLostEventId:
        return _FocusLostEvent.connect(group, listener, at);
        break;
    case ComponentHiddenEventId:
        return _ComponentHiddenEvent.connect(group, listener, at);
        break;
    case ComponentVisibleEventId:
        return _ComponentVisibleEvent.connect(group, listener, at);
        break;
    case ComponentMovedEventId:
        return _ComponentMovedEvent.connect(group, listener, at);
        break;
    case ComponentResizedEventId:
        return _ComponentResizedEvent.connect(group, listener, at);
        break;
    case ComponentEnabledEventId:
        return _ComponentEnabledEvent.connect(group, listener, at);
        break;
    case ComponentDisabledEventId:
        return _ComponentDisabledEvent.connect(group, listener, at);
        break;
    case ToolTipActivatedEventId:
        return _ToolTipActivatedEvent.connect(group, listener, at);
        break;
    case ToolTipDeactivatedEventId:
        return _ToolTipDeactivatedEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  ComponentEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case MouseMovedEventId:
        _MouseMovedEvent.disconnect(group);
        break;
    case MouseDraggedEventId:
        _MouseDraggedEvent.disconnect(group);
        break;
    case MouseClickedEventId:
        _MouseClickedEvent.disconnect(group);
        break;
    case MouseEnteredEventId:
        _MouseEnteredEvent.disconnect(group);
        break;
    case MouseExitedEventId:
        _MouseExitedEvent.disconnect(group);
        break;
    case MousePressedEventId:
        _MousePressedEvent.disconnect(group);
        break;
    case MouseReleasedEventId:
        _MouseReleasedEvent.disconnect(group);
        break;
    case MouseWheelMovedEventId:
        _MouseWheelMovedEvent.disconnect(group);
        break;
    case KeyPressedEventId:
        _KeyPressedEvent.disconnect(group);
        break;
    case KeyReleasedEventId:
        _KeyReleasedEvent.disconnect(group);
        break;
    case KeyTypedEventId:
        _KeyTypedEvent.disconnect(group);
        break;
    case FocusGainedEventId:
        _FocusGainedEvent.disconnect(group);
        break;
    case FocusLostEventId:
        _FocusLostEvent.disconnect(group);
        break;
    case ComponentHiddenEventId:
        _ComponentHiddenEvent.disconnect(group);
        break;
    case ComponentVisibleEventId:
        _ComponentVisibleEvent.disconnect(group);
        break;
    case ComponentMovedEventId:
        _ComponentMovedEvent.disconnect(group);
        break;
    case ComponentResizedEventId:
        _ComponentResizedEvent.disconnect(group);
        break;
    case ComponentEnabledEventId:
        _ComponentEnabledEvent.disconnect(group);
        break;
    case ComponentDisabledEventId:
        _ComponentDisabledEvent.disconnect(group);
        break;
    case ToolTipActivatedEventId:
        _ToolTipActivatedEvent.disconnect(group);
        break;
    case ToolTipDeactivatedEventId:
        _ToolTipDeactivatedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

void  ComponentEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case MouseMovedEventId:
        _MouseMovedEvent.disconnect_all_slots();
        break;
    case MouseDraggedEventId:
        _MouseDraggedEvent.disconnect_all_slots();
        break;
    case MouseClickedEventId:
        _MouseClickedEvent.disconnect_all_slots();
        break;
    case MouseEnteredEventId:
        _MouseEnteredEvent.disconnect_all_slots();
        break;
    case MouseExitedEventId:
        _MouseExitedEvent.disconnect_all_slots();
        break;
    case MousePressedEventId:
        _MousePressedEvent.disconnect_all_slots();
        break;
    case MouseReleasedEventId:
        _MouseReleasedEvent.disconnect_all_slots();
        break;
    case MouseWheelMovedEventId:
        _MouseWheelMovedEvent.disconnect_all_slots();
        break;
    case KeyPressedEventId:
        _KeyPressedEvent.disconnect_all_slots();
        break;
    case KeyReleasedEventId:
        _KeyReleasedEvent.disconnect_all_slots();
        break;
    case KeyTypedEventId:
        _KeyTypedEvent.disconnect_all_slots();
        break;
    case FocusGainedEventId:
        _FocusGainedEvent.disconnect_all_slots();
        break;
    case FocusLostEventId:
        _FocusLostEvent.disconnect_all_slots();
        break;
    case ComponentHiddenEventId:
        _ComponentHiddenEvent.disconnect_all_slots();
        break;
    case ComponentVisibleEventId:
        _ComponentVisibleEvent.disconnect_all_slots();
        break;
    case ComponentMovedEventId:
        _ComponentMovedEvent.disconnect_all_slots();
        break;
    case ComponentResizedEventId:
        _ComponentResizedEvent.disconnect_all_slots();
        break;
    case ComponentEnabledEventId:
        _ComponentEnabledEvent.disconnect_all_slots();
        break;
    case ComponentDisabledEventId:
        _ComponentDisabledEvent.disconnect_all_slots();
        break;
    case ToolTipActivatedEventId:
        _ToolTipActivatedEvent.disconnect_all_slots();
        break;
    case ToolTipDeactivatedEventId:
        _ToolTipDeactivatedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

bool  ComponentEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case MouseMovedEventId:
        return _MouseMovedEvent.empty();
        break;
    case MouseDraggedEventId:
        return _MouseDraggedEvent.empty();
        break;
    case MouseClickedEventId:
        return _MouseClickedEvent.empty();
        break;
    case MouseEnteredEventId:
        return _MouseEnteredEvent.empty();
        break;
    case MouseExitedEventId:
        return _MouseExitedEvent.empty();
        break;
    case MousePressedEventId:
        return _MousePressedEvent.empty();
        break;
    case MouseReleasedEventId:
        return _MouseReleasedEvent.empty();
        break;
    case MouseWheelMovedEventId:
        return _MouseWheelMovedEvent.empty();
        break;
    case KeyPressedEventId:
        return _KeyPressedEvent.empty();
        break;
    case KeyReleasedEventId:
        return _KeyReleasedEvent.empty();
        break;
    case KeyTypedEventId:
        return _KeyTypedEvent.empty();
        break;
    case FocusGainedEventId:
        return _FocusGainedEvent.empty();
        break;
    case FocusLostEventId:
        return _FocusLostEvent.empty();
        break;
    case ComponentHiddenEventId:
        return _ComponentHiddenEvent.empty();
        break;
    case ComponentVisibleEventId:
        return _ComponentVisibleEvent.empty();
        break;
    case ComponentMovedEventId:
        return _ComponentMovedEvent.empty();
        break;
    case ComponentResizedEventId:
        return _ComponentResizedEvent.empty();
        break;
    case ComponentEnabledEventId:
        return _ComponentEnabledEvent.empty();
        break;
    case ComponentDisabledEventId:
        return _ComponentDisabledEvent.empty();
        break;
    case ToolTipActivatedEventId:
        return _ToolTipActivatedEvent.empty();
        break;
    case ToolTipDeactivatedEventId:
        return _ToolTipDeactivatedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return true;
        break;
    }
}

UInt32  ComponentEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case MouseMovedEventId:
        return _MouseMovedEvent.num_slots();
        break;
    case MouseDraggedEventId:
        return _MouseDraggedEvent.num_slots();
        break;
    case MouseClickedEventId:
        return _MouseClickedEvent.num_slots();
        break;
    case MouseEnteredEventId:
        return _MouseEnteredEvent.num_slots();
        break;
    case MouseExitedEventId:
        return _MouseExitedEvent.num_slots();
        break;
    case MousePressedEventId:
        return _MousePressedEvent.num_slots();
        break;
    case MouseReleasedEventId:
        return _MouseReleasedEvent.num_slots();
        break;
    case MouseWheelMovedEventId:
        return _MouseWheelMovedEvent.num_slots();
        break;
    case KeyPressedEventId:
        return _KeyPressedEvent.num_slots();
        break;
    case KeyReleasedEventId:
        return _KeyReleasedEvent.num_slots();
        break;
    case KeyTypedEventId:
        return _KeyTypedEvent.num_slots();
        break;
    case FocusGainedEventId:
        return _FocusGainedEvent.num_slots();
        break;
    case FocusLostEventId:
        return _FocusLostEvent.num_slots();
        break;
    case ComponentHiddenEventId:
        return _ComponentHiddenEvent.num_slots();
        break;
    case ComponentVisibleEventId:
        return _ComponentVisibleEvent.num_slots();
        break;
    case ComponentMovedEventId:
        return _ComponentMovedEvent.num_slots();
        break;
    case ComponentResizedEventId:
        return _ComponentResizedEvent.num_slots();
        break;
    case ComponentEnabledEventId:
        return _ComponentEnabledEvent.num_slots();
        break;
    case ComponentDisabledEventId:
        return _ComponentDisabledEvent.num_slots();
        break;
    case ToolTipActivatedEventId:
        return _ToolTipActivatedEvent.num_slots();
        break;
    case ToolTipDeactivatedEventId:
        return _ToolTipDeactivatedEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return 0;
        break;
    }
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/


GetEventHandlePtr ComponentEventSource::getHandleMouseMovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseMovedEventType>(
             const_cast<MouseMovedEventType *>(&_MouseMovedEvent),
             _producerType.getEventDescription(MouseMovedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleMouseDraggedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseDraggedEventType>(
             const_cast<MouseDraggedEventType *>(&_MouseDraggedEvent),
             _producerType.getEventDescription(MouseDraggedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleMouseClickedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseClickedEventType>(
             const_cast<MouseClickedEventType *>(&_MouseClickedEvent),
             _producerType.getEventDescription(MouseClickedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleMouseEnteredSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseEnteredEventType>(
             const_cast<MouseEnteredEventType *>(&_MouseEnteredEvent),
             _producerType.getEventDescription(MouseEnteredEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleMouseExitedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseExitedEventType>(
             const_cast<MouseExitedEventType *>(&_MouseExitedEvent),
             _producerType.getEventDescription(MouseExitedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleMousePressedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MousePressedEventType>(
             const_cast<MousePressedEventType *>(&_MousePressedEvent),
             _producerType.getEventDescription(MousePressedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleMouseReleasedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseReleasedEventType>(
             const_cast<MouseReleasedEventType *>(&_MouseReleasedEvent),
             _producerType.getEventDescription(MouseReleasedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleMouseWheelMovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseWheelMovedEventType>(
             const_cast<MouseWheelMovedEventType *>(&_MouseWheelMovedEvent),
             _producerType.getEventDescription(MouseWheelMovedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleKeyPressedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<KeyPressedEventType>(
             const_cast<KeyPressedEventType *>(&_KeyPressedEvent),
             _producerType.getEventDescription(KeyPressedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleKeyReleasedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<KeyReleasedEventType>(
             const_cast<KeyReleasedEventType *>(&_KeyReleasedEvent),
             _producerType.getEventDescription(KeyReleasedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleKeyTypedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<KeyTypedEventType>(
             const_cast<KeyTypedEventType *>(&_KeyTypedEvent),
             _producerType.getEventDescription(KeyTypedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleFocusGainedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<FocusGainedEventType>(
             const_cast<FocusGainedEventType *>(&_FocusGainedEvent),
             _producerType.getEventDescription(FocusGainedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleFocusLostSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<FocusLostEventType>(
             const_cast<FocusLostEventType *>(&_FocusLostEvent),
             _producerType.getEventDescription(FocusLostEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleComponentHiddenSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ComponentHiddenEventType>(
             const_cast<ComponentHiddenEventType *>(&_ComponentHiddenEvent),
             _producerType.getEventDescription(ComponentHiddenEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleComponentVisibleSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ComponentVisibleEventType>(
             const_cast<ComponentVisibleEventType *>(&_ComponentVisibleEvent),
             _producerType.getEventDescription(ComponentVisibleEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleComponentMovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ComponentMovedEventType>(
             const_cast<ComponentMovedEventType *>(&_ComponentMovedEvent),
             _producerType.getEventDescription(ComponentMovedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleComponentResizedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ComponentResizedEventType>(
             const_cast<ComponentResizedEventType *>(&_ComponentResizedEvent),
             _producerType.getEventDescription(ComponentResizedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleComponentEnabledSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ComponentEnabledEventType>(
             const_cast<ComponentEnabledEventType *>(&_ComponentEnabledEvent),
             _producerType.getEventDescription(ComponentEnabledEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleComponentDisabledSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ComponentDisabledEventType>(
             const_cast<ComponentDisabledEventType *>(&_ComponentDisabledEvent),
             _producerType.getEventDescription(ComponentDisabledEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleToolTipActivatedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ToolTipActivatedEventType>(
             const_cast<ToolTipActivatedEventType *>(&_ToolTipActivatedEvent),
             _producerType.getEventDescription(ToolTipActivatedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ComponentEventSource::getHandleToolTipDeactivatedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ToolTipDeactivatedEventType>(
             const_cast<ToolTipDeactivatedEventType *>(&_ToolTipDeactivatedEvent),
             _producerType.getEventDescription(ToolTipDeactivatedEventId),
             const_cast<ComponentEventSource *>(this)));

    return returnValue;
}
/*----------------------- constructors & destructors ----------------------*/

ComponentEventSource::ComponentEventSource(void) :
    Inherited()
{
}

ComponentEventSource::ComponentEventSource(const ComponentEventSource &source) :
    Inherited(source)
{
}

ComponentEventSource::~ComponentEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ComponentEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void ComponentEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump ComponentEventSource NI" << std::endl;
}

OSG_END_NAMESPACE
