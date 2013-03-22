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

#include "OSGMouseEventDetails.h"
#include "OSGMouseWheelEventDetails.h"
#include "OSGKeyEventDetails.h"
#include "OSGFocusEventDetails.h"
#include "OSGComponentEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &ComponentEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 ComponentEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
UInt32 ComponentEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *ComponentEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *ComponentEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 ComponentEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseMoved(const MouseMovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseMovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseMoved(const MouseMovedEventType::group_type &group,
                                                    const MouseMovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseMovedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectMouseMoved(const MouseMovedEventType::group_type &group)
{
    _MouseMovedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsMouseMoved(void)
{
    _MouseMovedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyMouseMoved(void) const
{
    return _MouseMovedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsMouseMoved(void) const
{
    return _MouseMovedEvent.num_slots();
}

inline
void ComponentEventSource::produceMouseMoved(MouseMovedEventDetailsType* const e)
{
    produceEvent(MouseMovedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseDragged(const MouseDraggedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseDraggedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseDragged(const MouseDraggedEventType::group_type &group,
                                                    const MouseDraggedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseDraggedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectMouseDragged(const MouseDraggedEventType::group_type &group)
{
    _MouseDraggedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsMouseDragged(void)
{
    _MouseDraggedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyMouseDragged(void) const
{
    return _MouseDraggedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsMouseDragged(void) const
{
    return _MouseDraggedEvent.num_slots();
}

inline
void ComponentEventSource::produceMouseDragged(MouseDraggedEventDetailsType* const e)
{
    produceEvent(MouseDraggedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseClicked(const MouseClickedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseClickedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseClicked(const MouseClickedEventType::group_type &group,
                                                    const MouseClickedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseClickedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectMouseClicked(const MouseClickedEventType::group_type &group)
{
    _MouseClickedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsMouseClicked(void)
{
    _MouseClickedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyMouseClicked(void) const
{
    return _MouseClickedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsMouseClicked(void) const
{
    return _MouseClickedEvent.num_slots();
}

inline
void ComponentEventSource::produceMouseClicked(MouseClickedEventDetailsType* const e)
{
    produceEvent(MouseClickedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseEntered(const MouseEnteredEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseEnteredEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseEntered(const MouseEnteredEventType::group_type &group,
                                                    const MouseEnteredEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseEnteredEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectMouseEntered(const MouseEnteredEventType::group_type &group)
{
    _MouseEnteredEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsMouseEntered(void)
{
    _MouseEnteredEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyMouseEntered(void) const
{
    return _MouseEnteredEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsMouseEntered(void) const
{
    return _MouseEnteredEvent.num_slots();
}

inline
void ComponentEventSource::produceMouseEntered(MouseEnteredEventDetailsType* const e)
{
    produceEvent(MouseEnteredEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseExited(const MouseExitedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseExitedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseExited(const MouseExitedEventType::group_type &group,
                                                    const MouseExitedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseExitedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectMouseExited(const MouseExitedEventType::group_type &group)
{
    _MouseExitedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsMouseExited(void)
{
    _MouseExitedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyMouseExited(void) const
{
    return _MouseExitedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsMouseExited(void) const
{
    return _MouseExitedEvent.num_slots();
}

inline
void ComponentEventSource::produceMouseExited(MouseExitedEventDetailsType* const e)
{
    produceEvent(MouseExitedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectMousePressed(const MousePressedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MousePressedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectMousePressed(const MousePressedEventType::group_type &group,
                                                    const MousePressedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MousePressedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectMousePressed(const MousePressedEventType::group_type &group)
{
    _MousePressedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsMousePressed(void)
{
    _MousePressedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyMousePressed(void) const
{
    return _MousePressedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsMousePressed(void) const
{
    return _MousePressedEvent.num_slots();
}

inline
void ComponentEventSource::produceMousePressed(MousePressedEventDetailsType* const e)
{
    produceEvent(MousePressedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseReleased(const MouseReleasedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseReleasedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseReleased(const MouseReleasedEventType::group_type &group,
                                                    const MouseReleasedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseReleasedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectMouseReleased(const MouseReleasedEventType::group_type &group)
{
    _MouseReleasedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsMouseReleased(void)
{
    _MouseReleasedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyMouseReleased(void) const
{
    return _MouseReleasedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsMouseReleased(void) const
{
    return _MouseReleasedEvent.num_slots();
}

inline
void ComponentEventSource::produceMouseReleased(MouseReleasedEventDetailsType* const e)
{
    produceEvent(MouseReleasedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseWheelMoved(const MouseWheelMovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseWheelMovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectMouseWheelMoved(const MouseWheelMovedEventType::group_type &group,
                                                    const MouseWheelMovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseWheelMovedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectMouseWheelMoved(const MouseWheelMovedEventType::group_type &group)
{
    _MouseWheelMovedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsMouseWheelMoved(void)
{
    _MouseWheelMovedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyMouseWheelMoved(void) const
{
    return _MouseWheelMovedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsMouseWheelMoved(void) const
{
    return _MouseWheelMovedEvent.num_slots();
}

inline
void ComponentEventSource::produceMouseWheelMoved(MouseWheelMovedEventDetailsType* const e)
{
    produceEvent(MouseWheelMovedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectKeyPressed(const KeyPressedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _KeyPressedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectKeyPressed(const KeyPressedEventType::group_type &group,
                                                    const KeyPressedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _KeyPressedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectKeyPressed(const KeyPressedEventType::group_type &group)
{
    _KeyPressedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsKeyPressed(void)
{
    _KeyPressedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyKeyPressed(void) const
{
    return _KeyPressedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsKeyPressed(void) const
{
    return _KeyPressedEvent.num_slots();
}

inline
void ComponentEventSource::produceKeyPressed(KeyPressedEventDetailsType* const e)
{
    produceEvent(KeyPressedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectKeyReleased(const KeyReleasedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _KeyReleasedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectKeyReleased(const KeyReleasedEventType::group_type &group,
                                                    const KeyReleasedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _KeyReleasedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectKeyReleased(const KeyReleasedEventType::group_type &group)
{
    _KeyReleasedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsKeyReleased(void)
{
    _KeyReleasedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyKeyReleased(void) const
{
    return _KeyReleasedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsKeyReleased(void) const
{
    return _KeyReleasedEvent.num_slots();
}

inline
void ComponentEventSource::produceKeyReleased(KeyReleasedEventDetailsType* const e)
{
    produceEvent(KeyReleasedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectKeyTyped(const KeyTypedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _KeyTypedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectKeyTyped(const KeyTypedEventType::group_type &group,
                                                    const KeyTypedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _KeyTypedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectKeyTyped(const KeyTypedEventType::group_type &group)
{
    _KeyTypedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsKeyTyped(void)
{
    _KeyTypedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyKeyTyped(void) const
{
    return _KeyTypedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsKeyTyped(void) const
{
    return _KeyTypedEvent.num_slots();
}

inline
void ComponentEventSource::produceKeyTyped(KeyTypedEventDetailsType* const e)
{
    produceEvent(KeyTypedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectFocusGained(const FocusGainedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _FocusGainedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectFocusGained(const FocusGainedEventType::group_type &group,
                                                    const FocusGainedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _FocusGainedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectFocusGained(const FocusGainedEventType::group_type &group)
{
    _FocusGainedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsFocusGained(void)
{
    _FocusGainedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyFocusGained(void) const
{
    return _FocusGainedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsFocusGained(void) const
{
    return _FocusGainedEvent.num_slots();
}

inline
void ComponentEventSource::produceFocusGained(FocusGainedEventDetailsType* const e)
{
    produceEvent(FocusGainedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectFocusLost(const FocusLostEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _FocusLostEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectFocusLost(const FocusLostEventType::group_type &group,
                                                    const FocusLostEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _FocusLostEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectFocusLost(const FocusLostEventType::group_type &group)
{
    _FocusLostEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsFocusLost(void)
{
    _FocusLostEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyFocusLost(void) const
{
    return _FocusLostEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsFocusLost(void) const
{
    return _FocusLostEvent.num_slots();
}

inline
void ComponentEventSource::produceFocusLost(FocusLostEventDetailsType* const e)
{
    produceEvent(FocusLostEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentHidden(const ComponentHiddenEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ComponentHiddenEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentHidden(const ComponentHiddenEventType::group_type &group,
                                                    const ComponentHiddenEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ComponentHiddenEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectComponentHidden(const ComponentHiddenEventType::group_type &group)
{
    _ComponentHiddenEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsComponentHidden(void)
{
    _ComponentHiddenEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyComponentHidden(void) const
{
    return _ComponentHiddenEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsComponentHidden(void) const
{
    return _ComponentHiddenEvent.num_slots();
}

inline
void ComponentEventSource::produceComponentHidden(ComponentHiddenEventDetailsType* const e)
{
    produceEvent(ComponentHiddenEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentVisible(const ComponentVisibleEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ComponentVisibleEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentVisible(const ComponentVisibleEventType::group_type &group,
                                                    const ComponentVisibleEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ComponentVisibleEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectComponentVisible(const ComponentVisibleEventType::group_type &group)
{
    _ComponentVisibleEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsComponentVisible(void)
{
    _ComponentVisibleEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyComponentVisible(void) const
{
    return _ComponentVisibleEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsComponentVisible(void) const
{
    return _ComponentVisibleEvent.num_slots();
}

inline
void ComponentEventSource::produceComponentVisible(ComponentVisibleEventDetailsType* const e)
{
    produceEvent(ComponentVisibleEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentMoved(const ComponentMovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ComponentMovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentMoved(const ComponentMovedEventType::group_type &group,
                                                    const ComponentMovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ComponentMovedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectComponentMoved(const ComponentMovedEventType::group_type &group)
{
    _ComponentMovedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsComponentMoved(void)
{
    _ComponentMovedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyComponentMoved(void) const
{
    return _ComponentMovedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsComponentMoved(void) const
{
    return _ComponentMovedEvent.num_slots();
}

inline
void ComponentEventSource::produceComponentMoved(ComponentMovedEventDetailsType* const e)
{
    produceEvent(ComponentMovedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentResized(const ComponentResizedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ComponentResizedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentResized(const ComponentResizedEventType::group_type &group,
                                                    const ComponentResizedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ComponentResizedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectComponentResized(const ComponentResizedEventType::group_type &group)
{
    _ComponentResizedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsComponentResized(void)
{
    _ComponentResizedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyComponentResized(void) const
{
    return _ComponentResizedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsComponentResized(void) const
{
    return _ComponentResizedEvent.num_slots();
}

inline
void ComponentEventSource::produceComponentResized(ComponentResizedEventDetailsType* const e)
{
    produceEvent(ComponentResizedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentEnabled(const ComponentEnabledEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ComponentEnabledEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentEnabled(const ComponentEnabledEventType::group_type &group,
                                                    const ComponentEnabledEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ComponentEnabledEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectComponentEnabled(const ComponentEnabledEventType::group_type &group)
{
    _ComponentEnabledEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsComponentEnabled(void)
{
    _ComponentEnabledEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyComponentEnabled(void) const
{
    return _ComponentEnabledEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsComponentEnabled(void) const
{
    return _ComponentEnabledEvent.num_slots();
}

inline
void ComponentEventSource::produceComponentEnabled(ComponentEnabledEventDetailsType* const e)
{
    produceEvent(ComponentEnabledEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentDisabled(const ComponentDisabledEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ComponentDisabledEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectComponentDisabled(const ComponentDisabledEventType::group_type &group,
                                                    const ComponentDisabledEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ComponentDisabledEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectComponentDisabled(const ComponentDisabledEventType::group_type &group)
{
    _ComponentDisabledEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsComponentDisabled(void)
{
    _ComponentDisabledEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyComponentDisabled(void) const
{
    return _ComponentDisabledEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsComponentDisabled(void) const
{
    return _ComponentDisabledEvent.num_slots();
}

inline
void ComponentEventSource::produceComponentDisabled(ComponentDisabledEventDetailsType* const e)
{
    produceEvent(ComponentDisabledEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectToolTipActivated(const ToolTipActivatedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ToolTipActivatedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectToolTipActivated(const ToolTipActivatedEventType::group_type &group,
                                                    const ToolTipActivatedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ToolTipActivatedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectToolTipActivated(const ToolTipActivatedEventType::group_type &group)
{
    _ToolTipActivatedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsToolTipActivated(void)
{
    _ToolTipActivatedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyToolTipActivated(void) const
{
    return _ToolTipActivatedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsToolTipActivated(void) const
{
    return _ToolTipActivatedEvent.num_slots();
}

inline
void ComponentEventSource::produceToolTipActivated(ToolTipActivatedEventDetailsType* const e)
{
    produceEvent(ToolTipActivatedEventId, e);
}

inline
boost::signals2::connection  ComponentEventSource::connectToolTipDeactivated(const ToolTipDeactivatedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ToolTipDeactivatedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComponentEventSource::connectToolTipDeactivated(const ToolTipDeactivatedEventType::group_type &group,
                                                    const ToolTipDeactivatedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ToolTipDeactivatedEvent.connect(group, listener, at);
}

inline
void  ComponentEventSource::disconnectToolTipDeactivated(const ToolTipDeactivatedEventType::group_type &group)
{
    _ToolTipDeactivatedEvent.disconnect(group);
}

inline
void  ComponentEventSource::disconnectAllSlotsToolTipDeactivated(void)
{
    _ToolTipDeactivatedEvent.disconnect_all_slots();
}

inline
bool  ComponentEventSource::isEmptyToolTipDeactivated(void) const
{
    return _ToolTipDeactivatedEvent.empty();
}

inline
UInt32  ComponentEventSource::numSlotsToolTipDeactivated(void) const
{
    return _ToolTipDeactivatedEvent.num_slots();
}

inline
void ComponentEventSource::produceToolTipDeactivated(ToolTipDeactivatedEventDetailsType* const e)
{
    produceEvent(ToolTipDeactivatedEventId, e);
}
OSG_END_NAMESPACE
