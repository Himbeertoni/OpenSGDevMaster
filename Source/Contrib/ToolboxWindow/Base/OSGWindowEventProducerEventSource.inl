/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &WindowEventProducerEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 WindowEventProducerEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}


inline
UInt32 WindowEventProducerEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *WindowEventProducerEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *WindowEventProducerEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 WindowEventProducerEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowOpened(const WindowOpenedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowOpenedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowOpened(const WindowOpenedEventType::group_type &group,
                                                    const WindowOpenedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowOpenedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectWindowOpened(const WindowOpenedEventType::group_type &group)
{
    _WindowOpenedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsWindowOpened(void)
{
    _WindowOpenedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyWindowOpened(void) const
{
    return _WindowOpenedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsWindowOpened(void) const
{
    return _WindowOpenedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceWindowOpened(WindowOpenedEventDetailsType* const e)
{
    produceEvent(WindowOpenedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowClosing(const WindowClosingEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowClosingEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowClosing(const WindowClosingEventType::group_type &group,
                                                    const WindowClosingEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowClosingEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectWindowClosing(const WindowClosingEventType::group_type &group)
{
    _WindowClosingEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsWindowClosing(void)
{
    _WindowClosingEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyWindowClosing(void) const
{
    return _WindowClosingEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsWindowClosing(void) const
{
    return _WindowClosingEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceWindowClosing(WindowClosingEventDetailsType* const e)
{
    produceEvent(WindowClosingEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowClosed(const WindowClosedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowClosedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowClosed(const WindowClosedEventType::group_type &group,
                                                    const WindowClosedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowClosedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectWindowClosed(const WindowClosedEventType::group_type &group)
{
    _WindowClosedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsWindowClosed(void)
{
    _WindowClosedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyWindowClosed(void) const
{
    return _WindowClosedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsWindowClosed(void) const
{
    return _WindowClosedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceWindowClosed(WindowClosedEventDetailsType* const e)
{
    produceEvent(WindowClosedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowIconified(const WindowIconifiedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowIconifiedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowIconified(const WindowIconifiedEventType::group_type &group,
                                                    const WindowIconifiedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowIconifiedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectWindowIconified(const WindowIconifiedEventType::group_type &group)
{
    _WindowIconifiedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsWindowIconified(void)
{
    _WindowIconifiedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyWindowIconified(void) const
{
    return _WindowIconifiedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsWindowIconified(void) const
{
    return _WindowIconifiedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceWindowIconified(WindowIconifiedEventDetailsType* const e)
{
    produceEvent(WindowIconifiedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowDeiconified(const WindowDeiconifiedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowDeiconifiedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowDeiconified(const WindowDeiconifiedEventType::group_type &group,
                                                    const WindowDeiconifiedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowDeiconifiedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectWindowDeiconified(const WindowDeiconifiedEventType::group_type &group)
{
    _WindowDeiconifiedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsWindowDeiconified(void)
{
    _WindowDeiconifiedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyWindowDeiconified(void) const
{
    return _WindowDeiconifiedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsWindowDeiconified(void) const
{
    return _WindowDeiconifiedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceWindowDeiconified(WindowDeiconifiedEventDetailsType* const e)
{
    produceEvent(WindowDeiconifiedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowActivated(const WindowActivatedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowActivatedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowActivated(const WindowActivatedEventType::group_type &group,
                                                    const WindowActivatedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowActivatedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectWindowActivated(const WindowActivatedEventType::group_type &group)
{
    _WindowActivatedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsWindowActivated(void)
{
    _WindowActivatedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyWindowActivated(void) const
{
    return _WindowActivatedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsWindowActivated(void) const
{
    return _WindowActivatedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceWindowActivated(WindowActivatedEventDetailsType* const e)
{
    produceEvent(WindowActivatedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowDeactivated(const WindowDeactivatedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowDeactivatedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowDeactivated(const WindowDeactivatedEventType::group_type &group,
                                                    const WindowDeactivatedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowDeactivatedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectWindowDeactivated(const WindowDeactivatedEventType::group_type &group)
{
    _WindowDeactivatedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsWindowDeactivated(void)
{
    _WindowDeactivatedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyWindowDeactivated(void) const
{
    return _WindowDeactivatedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsWindowDeactivated(void) const
{
    return _WindowDeactivatedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceWindowDeactivated(WindowDeactivatedEventDetailsType* const e)
{
    produceEvent(WindowDeactivatedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowEntered(const WindowEnteredEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowEnteredEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowEntered(const WindowEnteredEventType::group_type &group,
                                                    const WindowEnteredEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowEnteredEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectWindowEntered(const WindowEnteredEventType::group_type &group)
{
    _WindowEnteredEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsWindowEntered(void)
{
    _WindowEnteredEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyWindowEntered(void) const
{
    return _WindowEnteredEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsWindowEntered(void) const
{
    return _WindowEnteredEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceWindowEntered(WindowEnteredEventDetailsType* const e)
{
    produceEvent(WindowEnteredEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowExited(const WindowExitedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowExitedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectWindowExited(const WindowExitedEventType::group_type &group,
                                                    const WindowExitedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowExitedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectWindowExited(const WindowExitedEventType::group_type &group)
{
    _WindowExitedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsWindowExited(void)
{
    _WindowExitedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyWindowExited(void) const
{
    return _WindowExitedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsWindowExited(void) const
{
    return _WindowExitedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceWindowExited(WindowExitedEventDetailsType* const e)
{
    produceEvent(WindowExitedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseClicked(const MouseClickedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseClickedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseClicked(const MouseClickedEventType::group_type &group,
                                                    const MouseClickedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseClickedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectMouseClicked(const MouseClickedEventType::group_type &group)
{
    _MouseClickedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsMouseClicked(void)
{
    _MouseClickedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyMouseClicked(void) const
{
    return _MouseClickedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsMouseClicked(void) const
{
    return _MouseClickedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceMouseClicked(MouseClickedEventDetailsType* const e)
{
    produceEvent(MouseClickedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseEntered(const MouseEnteredEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseEnteredEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseEntered(const MouseEnteredEventType::group_type &group,
                                                    const MouseEnteredEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseEnteredEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectMouseEntered(const MouseEnteredEventType::group_type &group)
{
    _MouseEnteredEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsMouseEntered(void)
{
    _MouseEnteredEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyMouseEntered(void) const
{
    return _MouseEnteredEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsMouseEntered(void) const
{
    return _MouseEnteredEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceMouseEntered(MouseEnteredEventDetailsType* const e)
{
    produceEvent(MouseEnteredEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseExited(const MouseExitedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseExitedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseExited(const MouseExitedEventType::group_type &group,
                                                    const MouseExitedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseExitedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectMouseExited(const MouseExitedEventType::group_type &group)
{
    _MouseExitedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsMouseExited(void)
{
    _MouseExitedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyMouseExited(void) const
{
    return _MouseExitedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsMouseExited(void) const
{
    return _MouseExitedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceMouseExited(MouseExitedEventDetailsType* const e)
{
    produceEvent(MouseExitedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMousePressed(const MousePressedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MousePressedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMousePressed(const MousePressedEventType::group_type &group,
                                                    const MousePressedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MousePressedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectMousePressed(const MousePressedEventType::group_type &group)
{
    _MousePressedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsMousePressed(void)
{
    _MousePressedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyMousePressed(void) const
{
    return _MousePressedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsMousePressed(void) const
{
    return _MousePressedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceMousePressed(MousePressedEventDetailsType* const e)
{
    produceEvent(MousePressedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseReleased(const MouseReleasedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseReleasedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseReleased(const MouseReleasedEventType::group_type &group,
                                                    const MouseReleasedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseReleasedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectMouseReleased(const MouseReleasedEventType::group_type &group)
{
    _MouseReleasedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsMouseReleased(void)
{
    _MouseReleasedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyMouseReleased(void) const
{
    return _MouseReleasedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsMouseReleased(void) const
{
    return _MouseReleasedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceMouseReleased(MouseReleasedEventDetailsType* const e)
{
    produceEvent(MouseReleasedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseMoved(const MouseMovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseMovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseMoved(const MouseMovedEventType::group_type &group,
                                                    const MouseMovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseMovedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectMouseMoved(const MouseMovedEventType::group_type &group)
{
    _MouseMovedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsMouseMoved(void)
{
    _MouseMovedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyMouseMoved(void) const
{
    return _MouseMovedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsMouseMoved(void) const
{
    return _MouseMovedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceMouseMoved(MouseMovedEventDetailsType* const e)
{
    produceEvent(MouseMovedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseDragged(const MouseDraggedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseDraggedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseDragged(const MouseDraggedEventType::group_type &group,
                                                    const MouseDraggedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseDraggedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectMouseDragged(const MouseDraggedEventType::group_type &group)
{
    _MouseDraggedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsMouseDragged(void)
{
    _MouseDraggedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyMouseDragged(void) const
{
    return _MouseDraggedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsMouseDragged(void) const
{
    return _MouseDraggedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceMouseDragged(MouseDraggedEventDetailsType* const e)
{
    produceEvent(MouseDraggedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseWheelMoved(const MouseWheelMovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseWheelMovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectMouseWheelMoved(const MouseWheelMovedEventType::group_type &group,
                                                    const MouseWheelMovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseWheelMovedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectMouseWheelMoved(const MouseWheelMovedEventType::group_type &group)
{
    _MouseWheelMovedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsMouseWheelMoved(void)
{
    _MouseWheelMovedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyMouseWheelMoved(void) const
{
    return _MouseWheelMovedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsMouseWheelMoved(void) const
{
    return _MouseWheelMovedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceMouseWheelMoved(MouseWheelMovedEventDetailsType* const e)
{
    produceEvent(MouseWheelMovedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectKeyPressed(const KeyPressedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _KeyPressedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectKeyPressed(const KeyPressedEventType::group_type &group,
                                                    const KeyPressedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _KeyPressedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectKeyPressed(const KeyPressedEventType::group_type &group)
{
    _KeyPressedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsKeyPressed(void)
{
    _KeyPressedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyKeyPressed(void) const
{
    return _KeyPressedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsKeyPressed(void) const
{
    return _KeyPressedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceKeyPressed(KeyPressedEventDetailsType* const e)
{
    produceEvent(KeyPressedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectKeyReleased(const KeyReleasedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _KeyReleasedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectKeyReleased(const KeyReleasedEventType::group_type &group,
                                                    const KeyReleasedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _KeyReleasedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectKeyReleased(const KeyReleasedEventType::group_type &group)
{
    _KeyReleasedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsKeyReleased(void)
{
    _KeyReleasedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyKeyReleased(void) const
{
    return _KeyReleasedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsKeyReleased(void) const
{
    return _KeyReleasedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceKeyReleased(KeyReleasedEventDetailsType* const e)
{
    produceEvent(KeyReleasedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectKeyTyped(const KeyTypedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _KeyTypedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectKeyTyped(const KeyTypedEventType::group_type &group,
                                                    const KeyTypedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _KeyTypedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectKeyTyped(const KeyTypedEventType::group_type &group)
{
    _KeyTypedEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsKeyTyped(void)
{
    _KeyTypedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyKeyTyped(void) const
{
    return _KeyTypedEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsKeyTyped(void) const
{
    return _KeyTypedEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceKeyTyped(KeyTypedEventDetailsType* const e)
{
    produceEvent(KeyTypedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectUpdate(const UpdateEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _UpdateEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerEventSource::connectUpdate(const UpdateEventType::group_type &group,
                                                    const UpdateEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _UpdateEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerEventSource::disconnectUpdate(const UpdateEventType::group_type &group)
{
    _UpdateEvent.disconnect(group);
}

inline
void  WindowEventProducerEventSource::disconnectAllSlotsUpdate(void)
{
    _UpdateEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerEventSource::isEmptyUpdate(void) const
{
    return _UpdateEvent.empty();
}

inline
UInt32  WindowEventProducerEventSource::numSlotsUpdate(void) const
{
    return _UpdateEvent.num_slots();
}

inline
void WindowEventProducerEventSource::produceUpdate(UpdateEventDetailsType* const e)
{
    produceEvent(UpdateEventId, e);
}
OSG_END_NAMESPACE
