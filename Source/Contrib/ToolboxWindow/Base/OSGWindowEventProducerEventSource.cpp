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

#include "OSGWindowEventProducerEventSource.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGWindowEventProducerEventSource.cpp file.
// To modify it, please change the .fcd file (OSGWindowEventProducerEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void WindowEventProducerEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

//! WindowEventProducer Produced Events

EventDescription *WindowEventProducerEventSource::_eventDesc[] =
{
    new EventDescription("WindowOpened", 
                          "This Event is fired when this window has opened.",
                          WindowOpenedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleWindowOpenedSignal)),

    new EventDescription("WindowClosing", 
                          "This Event is fired when this window has received a close command, but has not yet closed.",
                          WindowClosingEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleWindowClosingSignal)),

    new EventDescription("WindowClosed", 
                          "This Event is fired when this window has closed.",
                          WindowClosedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleWindowClosedSignal)),

    new EventDescription("WindowIconified", 
                          "This Event is fired when this window has closed.",
                          WindowIconifiedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleWindowIconifiedSignal)),

    new EventDescription("WindowDeiconified", 
                          "This Event is fired when this window has closed.",
                          WindowDeiconifiedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleWindowDeiconifiedSignal)),

    new EventDescription("WindowActivated", 
                          "This Event is fired when this window has closed.",
                          WindowActivatedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleWindowActivatedSignal)),

    new EventDescription("WindowDeactivated", 
                          "This Event is fired when this window has closed.",
                          WindowDeactivatedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleWindowDeactivatedSignal)),

    new EventDescription("WindowEntered", 
                          "This Event is fired when the cursor has entered this window.",
                          WindowEnteredEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleWindowEnteredSignal)),

    new EventDescription("WindowExited", 
                          "This Event is fired when the cursor has exited this window.",
                          WindowExitedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleWindowExitedSignal)),

    new EventDescription("MouseClicked", 
                          "This Event is fired when there is a mouse button click in this window.",
                          MouseClickedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleMouseClickedSignal)),

    new EventDescription("MouseEntered", 
                          "This Event is fired when the cursor has entered this window.",
                          MouseEnteredEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleMouseEnteredSignal)),

    new EventDescription("MouseExited", 
                          "This Event is fired when the cursor has exited this window.",
                          MouseExitedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleMouseExitedSignal)),

    new EventDescription("MousePressed", 
                          "This Event is fired when there is a mouse button press in this window.",
                          MousePressedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleMousePressedSignal)),

    new EventDescription("MouseReleased", 
                          "This Event is fired when there is a mouse button release in this window.",
                          MouseReleasedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleMouseReleasedSignal)),

    new EventDescription("MouseMoved", 
                          "This Event is fired when the mouse has moved in this window.",
                          MouseMovedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleMouseMovedSignal)),

    new EventDescription("MouseDragged", 
                          "This Event is fired when the mouse has moved, and one or more of the mouse buttons are down in this window.",
                          MouseDraggedEventId, 
                          FieldTraits<MouseEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleMouseDraggedSignal)),

    new EventDescription("MouseWheelMoved", 
                          "This Event is fired when the mouse wheel has moved in this window.",
                          MouseWheelMovedEventId, 
                          FieldTraits<MouseWheelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleMouseWheelMovedSignal)),

    new EventDescription("KeyPressed", 
                          "This Event is fired when the a key has been pressed when this window has focus.",
                          KeyPressedEventId, 
                          FieldTraits<KeyEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleKeyPressedSignal)),

    new EventDescription("KeyReleased", 
                          "This Event is fired when the a key has been released when this window has focus.",
                          KeyReleasedEventId, 
                          FieldTraits<KeyEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleKeyReleasedSignal)),

    new EventDescription("KeyTyped", 
                          "This Event is fired when the a key has been typed when this window has focus.",
                          KeyTypedEventId, 
                          FieldTraits<KeyEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleKeyTypedSignal)),

    new EventDescription("Update", 
                          "This Event is fired by the main loop of this window whenever it is idle.",
                          UpdateEventId, 
                          FieldTraits<UpdateEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&WindowEventProducerEventSource::getHandleUpdateSignal))

};

EventProducerType WindowEventProducerEventSource::_producerType(
    "WindowEventProducerProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));


const EventProducerType &WindowEventProducerEventSource::getProducerType(void) const
{
    return _producerType;
}


GetEventHandlePtr WindowEventProducerEventSource::getHandleWindowOpenedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowOpenedEventType>(
             const_cast<WindowOpenedEventType *>(&_WindowOpenedEvent),
             _producerType.getEventDescription(WindowOpenedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleWindowClosingSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowClosingEventType>(
             const_cast<WindowClosingEventType *>(&_WindowClosingEvent),
             _producerType.getEventDescription(WindowClosingEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleWindowClosedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowClosedEventType>(
             const_cast<WindowClosedEventType *>(&_WindowClosedEvent),
             _producerType.getEventDescription(WindowClosedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleWindowIconifiedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowIconifiedEventType>(
             const_cast<WindowIconifiedEventType *>(&_WindowIconifiedEvent),
             _producerType.getEventDescription(WindowIconifiedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleWindowDeiconifiedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowDeiconifiedEventType>(
             const_cast<WindowDeiconifiedEventType *>(&_WindowDeiconifiedEvent),
             _producerType.getEventDescription(WindowDeiconifiedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleWindowActivatedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowActivatedEventType>(
             const_cast<WindowActivatedEventType *>(&_WindowActivatedEvent),
             _producerType.getEventDescription(WindowActivatedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleWindowDeactivatedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowDeactivatedEventType>(
             const_cast<WindowDeactivatedEventType *>(&_WindowDeactivatedEvent),
             _producerType.getEventDescription(WindowDeactivatedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleWindowEnteredSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowEnteredEventType>(
             const_cast<WindowEnteredEventType *>(&_WindowEnteredEvent),
             _producerType.getEventDescription(WindowEnteredEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleWindowExitedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowExitedEventType>(
             const_cast<WindowExitedEventType *>(&_WindowExitedEvent),
             _producerType.getEventDescription(WindowExitedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleMouseClickedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseClickedEventType>(
             const_cast<MouseClickedEventType *>(&_MouseClickedEvent),
             _producerType.getEventDescription(MouseClickedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleMouseEnteredSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseEnteredEventType>(
             const_cast<MouseEnteredEventType *>(&_MouseEnteredEvent),
             _producerType.getEventDescription(MouseEnteredEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleMouseExitedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseExitedEventType>(
             const_cast<MouseExitedEventType *>(&_MouseExitedEvent),
             _producerType.getEventDescription(MouseExitedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleMousePressedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MousePressedEventType>(
             const_cast<MousePressedEventType *>(&_MousePressedEvent),
             _producerType.getEventDescription(MousePressedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleMouseReleasedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseReleasedEventType>(
             const_cast<MouseReleasedEventType *>(&_MouseReleasedEvent),
             _producerType.getEventDescription(MouseReleasedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleMouseMovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseMovedEventType>(
             const_cast<MouseMovedEventType *>(&_MouseMovedEvent),
             _producerType.getEventDescription(MouseMovedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleMouseDraggedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseDraggedEventType>(
             const_cast<MouseDraggedEventType *>(&_MouseDraggedEvent),
             _producerType.getEventDescription(MouseDraggedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleMouseWheelMovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MouseWheelMovedEventType>(
             const_cast<MouseWheelMovedEventType *>(&_MouseWheelMovedEvent),
             _producerType.getEventDescription(MouseWheelMovedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleKeyPressedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<KeyPressedEventType>(
             const_cast<KeyPressedEventType *>(&_KeyPressedEvent),
             _producerType.getEventDescription(KeyPressedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleKeyReleasedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<KeyReleasedEventType>(
             const_cast<KeyReleasedEventType *>(&_KeyReleasedEvent),
             _producerType.getEventDescription(KeyReleasedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleKeyTypedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<KeyTypedEventType>(
             const_cast<KeyTypedEventType *>(&_KeyTypedEvent),
             _producerType.getEventDescription(KeyTypedEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr WindowEventProducerEventSource::getHandleUpdateSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<UpdateEventType>(
             const_cast<UpdateEventType *>(&_UpdateEvent),
             _producerType.getEventDescription(UpdateEventId),
             const_cast<WindowEventProducerEventSource *>(this)));

    return returnValue;
}
/*------------------------- event producers ----------------------------------*/
void WindowEventProducerEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        OSG_ASSERT(dynamic_cast<WindowOpenedEventDetailsType* const>(e));

        _WindowOpenedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowOpenedEvent(dynamic_cast<WindowOpenedEventDetailsType* const>(e), WindowOpenedEventId);
        break;
    case WindowClosingEventId:
        OSG_ASSERT(dynamic_cast<WindowClosingEventDetailsType* const>(e));

        _WindowClosingEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowClosingEvent(dynamic_cast<WindowClosingEventDetailsType* const>(e), WindowClosingEventId);
        break;
    case WindowClosedEventId:
        OSG_ASSERT(dynamic_cast<WindowClosedEventDetailsType* const>(e));

        _WindowClosedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowClosedEvent(dynamic_cast<WindowClosedEventDetailsType* const>(e), WindowClosedEventId);
        break;
    case WindowIconifiedEventId:
        OSG_ASSERT(dynamic_cast<WindowIconifiedEventDetailsType* const>(e));

        _WindowIconifiedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowIconifiedEvent(dynamic_cast<WindowIconifiedEventDetailsType* const>(e), WindowIconifiedEventId);
        break;
    case WindowDeiconifiedEventId:
        OSG_ASSERT(dynamic_cast<WindowDeiconifiedEventDetailsType* const>(e));

        _WindowDeiconifiedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowDeiconifiedEvent(dynamic_cast<WindowDeiconifiedEventDetailsType* const>(e), WindowDeiconifiedEventId);
        break;
    case WindowActivatedEventId:
        OSG_ASSERT(dynamic_cast<WindowActivatedEventDetailsType* const>(e));

        _WindowActivatedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowActivatedEvent(dynamic_cast<WindowActivatedEventDetailsType* const>(e), WindowActivatedEventId);
        break;
    case WindowDeactivatedEventId:
        OSG_ASSERT(dynamic_cast<WindowDeactivatedEventDetailsType* const>(e));

        _WindowDeactivatedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowDeactivatedEvent(dynamic_cast<WindowDeactivatedEventDetailsType* const>(e), WindowDeactivatedEventId);
        break;
    case WindowEnteredEventId:
        OSG_ASSERT(dynamic_cast<WindowEnteredEventDetailsType* const>(e));

        _WindowEnteredEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowEnteredEvent(dynamic_cast<WindowEnteredEventDetailsType* const>(e), WindowEnteredEventId);
        break;
    case WindowExitedEventId:
        OSG_ASSERT(dynamic_cast<WindowExitedEventDetailsType* const>(e));

        _WindowExitedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowExitedEvent(dynamic_cast<WindowExitedEventDetailsType* const>(e), WindowExitedEventId);
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
    case UpdateEventId:
        OSG_ASSERT(dynamic_cast<UpdateEventDetailsType* const>(e));

        _UpdateEvent.set_combiner(ConsumableEventCombiner(e));
        _UpdateEvent(dynamic_cast<UpdateEventDetailsType* const>(e), UpdateEventId);
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

boost::signals2::connection WindowEventProducerEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        return _WindowOpenedEvent.connect(listener, at);
        break;
    case WindowClosingEventId:
        return _WindowClosingEvent.connect(listener, at);
        break;
    case WindowClosedEventId:
        return _WindowClosedEvent.connect(listener, at);
        break;
    case WindowIconifiedEventId:
        return _WindowIconifiedEvent.connect(listener, at);
        break;
    case WindowDeiconifiedEventId:
        return _WindowDeiconifiedEvent.connect(listener, at);
        break;
    case WindowActivatedEventId:
        return _WindowActivatedEvent.connect(listener, at);
        break;
    case WindowDeactivatedEventId:
        return _WindowDeactivatedEvent.connect(listener, at);
        break;
    case WindowEnteredEventId:
        return _WindowEnteredEvent.connect(listener, at);
        break;
    case WindowExitedEventId:
        return _WindowExitedEvent.connect(listener, at);
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
    case MouseMovedEventId:
        return _MouseMovedEvent.connect(listener, at);
        break;
    case MouseDraggedEventId:
        return _MouseDraggedEvent.connect(listener, at);
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
    case UpdateEventId:
        return _UpdateEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with that ID";
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  WindowEventProducerEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        return _WindowOpenedEvent.connect(group, listener, at);
        break;
    case WindowClosingEventId:
        return _WindowClosingEvent.connect(group, listener, at);
        break;
    case WindowClosedEventId:
        return _WindowClosedEvent.connect(group, listener, at);
        break;
    case WindowIconifiedEventId:
        return _WindowIconifiedEvent.connect(group, listener, at);
        break;
    case WindowDeiconifiedEventId:
        return _WindowDeiconifiedEvent.connect(group, listener, at);
        break;
    case WindowActivatedEventId:
        return _WindowActivatedEvent.connect(group, listener, at);
        break;
    case WindowDeactivatedEventId:
        return _WindowDeactivatedEvent.connect(group, listener, at);
        break;
    case WindowEnteredEventId:
        return _WindowEnteredEvent.connect(group, listener, at);
        break;
    case WindowExitedEventId:
        return _WindowExitedEvent.connect(group, listener, at);
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
    case MouseMovedEventId:
        return _MouseMovedEvent.connect(group, listener, at);
        break;
    case MouseDraggedEventId:
        return _MouseDraggedEvent.connect(group, listener, at);
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
    case UpdateEventId:
        return _UpdateEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with that ID";
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  WindowEventProducerEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        _WindowOpenedEvent.disconnect(group);
        break;
    case WindowClosingEventId:
        _WindowClosingEvent.disconnect(group);
        break;
    case WindowClosedEventId:
        _WindowClosedEvent.disconnect(group);
        break;
    case WindowIconifiedEventId:
        _WindowIconifiedEvent.disconnect(group);
        break;
    case WindowDeiconifiedEventId:
        _WindowDeiconifiedEvent.disconnect(group);
        break;
    case WindowActivatedEventId:
        _WindowActivatedEvent.disconnect(group);
        break;
    case WindowDeactivatedEventId:
        _WindowDeactivatedEvent.disconnect(group);
        break;
    case WindowEnteredEventId:
        _WindowEnteredEvent.disconnect(group);
        break;
    case WindowExitedEventId:
        _WindowExitedEvent.disconnect(group);
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
    case MouseMovedEventId:
        _MouseMovedEvent.disconnect(group);
        break;
    case MouseDraggedEventId:
        _MouseDraggedEvent.disconnect(group);
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
    case UpdateEventId:
        _UpdateEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

void  WindowEventProducerEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        _WindowOpenedEvent.disconnect_all_slots();
        break;
    case WindowClosingEventId:
        _WindowClosingEvent.disconnect_all_slots();
        break;
    case WindowClosedEventId:
        _WindowClosedEvent.disconnect_all_slots();
        break;
    case WindowIconifiedEventId:
        _WindowIconifiedEvent.disconnect_all_slots();
        break;
    case WindowDeiconifiedEventId:
        _WindowDeiconifiedEvent.disconnect_all_slots();
        break;
    case WindowActivatedEventId:
        _WindowActivatedEvent.disconnect_all_slots();
        break;
    case WindowDeactivatedEventId:
        _WindowDeactivatedEvent.disconnect_all_slots();
        break;
    case WindowEnteredEventId:
        _WindowEnteredEvent.disconnect_all_slots();
        break;
    case WindowExitedEventId:
        _WindowExitedEvent.disconnect_all_slots();
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
    case MouseMovedEventId:
        _MouseMovedEvent.disconnect_all_slots();
        break;
    case MouseDraggedEventId:
        _MouseDraggedEvent.disconnect_all_slots();
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
    case UpdateEventId:
        _UpdateEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

bool  WindowEventProducerEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        return _WindowOpenedEvent.empty();
        break;
    case WindowClosingEventId:
        return _WindowClosingEvent.empty();
        break;
    case WindowClosedEventId:
        return _WindowClosedEvent.empty();
        break;
    case WindowIconifiedEventId:
        return _WindowIconifiedEvent.empty();
        break;
    case WindowDeiconifiedEventId:
        return _WindowDeiconifiedEvent.empty();
        break;
    case WindowActivatedEventId:
        return _WindowActivatedEvent.empty();
        break;
    case WindowDeactivatedEventId:
        return _WindowDeactivatedEvent.empty();
        break;
    case WindowEnteredEventId:
        return _WindowEnteredEvent.empty();
        break;
    case WindowExitedEventId:
        return _WindowExitedEvent.empty();
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
    case MouseMovedEventId:
        return _MouseMovedEvent.empty();
        break;
    case MouseDraggedEventId:
        return _MouseDraggedEvent.empty();
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
    case UpdateEventId:
        return _UpdateEvent.empty();
        break;
    default:
        SWARNING << "No event defined with that ID";
        return true;
        break;
    }
}

UInt32  WindowEventProducerEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        return _WindowOpenedEvent.num_slots();
        break;
    case WindowClosingEventId:
        return _WindowClosingEvent.num_slots();
        break;
    case WindowClosedEventId:
        return _WindowClosedEvent.num_slots();
        break;
    case WindowIconifiedEventId:
        return _WindowIconifiedEvent.num_slots();
        break;
    case WindowDeiconifiedEventId:
        return _WindowDeiconifiedEvent.num_slots();
        break;
    case WindowActivatedEventId:
        return _WindowActivatedEvent.num_slots();
        break;
    case WindowDeactivatedEventId:
        return _WindowDeactivatedEvent.num_slots();
        break;
    case WindowEnteredEventId:
        return _WindowEnteredEvent.num_slots();
        break;
    case WindowExitedEventId:
        return _WindowExitedEvent.num_slots();
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
    case MouseMovedEventId:
        return _MouseMovedEvent.num_slots();
        break;
    case MouseDraggedEventId:
        return _MouseDraggedEvent.num_slots();
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
    case UpdateEventId:
        return _UpdateEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with that ID";
        return 0;
        break;
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

WindowEventProducerEventSource::WindowEventProducerEventSource(void) :
    Inherited()
{
}

WindowEventProducerEventSource::WindowEventProducerEventSource(const WindowEventProducerEventSource &source) :
    Inherited(source)
{
}

WindowEventProducerEventSource::~WindowEventProducerEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void WindowEventProducerEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void WindowEventProducerEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump WindowEventProducerEventSource NI" << std::endl;
}

OSG_END_NAMESPACE
