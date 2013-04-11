/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------
#include "OSGWindowEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &AbstractWindowEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 AbstractWindowEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowOpened(const WindowOpenedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowOpenedEvent.connect(listener, at);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowOpened(const WindowOpenedEventType::group_type &group,
                                                    const WindowOpenedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowOpenedEvent.connect(group, listener, at);
}

inline
void  AbstractWindowEventSource::disconnectWindowOpened(const WindowOpenedEventType::group_type &group)
{
    _WindowOpenedEvent.disconnect(group);
}

inline
void  AbstractWindowEventSource::disconnectAllSlotsWindowOpened(void)
{
    _WindowOpenedEvent.disconnect_all_slots();
}

inline
bool  AbstractWindowEventSource::isEmptyWindowOpened(void) const
{
    return _WindowOpenedEvent.empty();
}

inline
UInt32  AbstractWindowEventSource::numSlotsWindowOpened(void) const
{
    return _WindowOpenedEvent.num_slots();
}

inline
void AbstractWindowEventSource::produceWindowOpened(WindowOpenedEventDetailsType* const e)
{
    produceEvent(WindowOpenedEventId, e);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowClosing(const WindowClosingEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowClosingEvent.connect(listener, at);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowClosing(const WindowClosingEventType::group_type &group,
                                                    const WindowClosingEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowClosingEvent.connect(group, listener, at);
}

inline
void  AbstractWindowEventSource::disconnectWindowClosing(const WindowClosingEventType::group_type &group)
{
    _WindowClosingEvent.disconnect(group);
}

inline
void  AbstractWindowEventSource::disconnectAllSlotsWindowClosing(void)
{
    _WindowClosingEvent.disconnect_all_slots();
}

inline
bool  AbstractWindowEventSource::isEmptyWindowClosing(void) const
{
    return _WindowClosingEvent.empty();
}

inline
UInt32  AbstractWindowEventSource::numSlotsWindowClosing(void) const
{
    return _WindowClosingEvent.num_slots();
}

inline
void AbstractWindowEventSource::produceWindowClosing(WindowClosingEventDetailsType* const e)
{
    produceEvent(WindowClosingEventId, e);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowClosed(const WindowClosedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowClosedEvent.connect(listener, at);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowClosed(const WindowClosedEventType::group_type &group,
                                                    const WindowClosedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowClosedEvent.connect(group, listener, at);
}

inline
void  AbstractWindowEventSource::disconnectWindowClosed(const WindowClosedEventType::group_type &group)
{
    _WindowClosedEvent.disconnect(group);
}

inline
void  AbstractWindowEventSource::disconnectAllSlotsWindowClosed(void)
{
    _WindowClosedEvent.disconnect_all_slots();
}

inline
bool  AbstractWindowEventSource::isEmptyWindowClosed(void) const
{
    return _WindowClosedEvent.empty();
}

inline
UInt32  AbstractWindowEventSource::numSlotsWindowClosed(void) const
{
    return _WindowClosedEvent.num_slots();
}

inline
void AbstractWindowEventSource::produceWindowClosed(WindowClosedEventDetailsType* const e)
{
    produceEvent(WindowClosedEventId, e);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowIconified(const WindowIconifiedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowIconifiedEvent.connect(listener, at);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowIconified(const WindowIconifiedEventType::group_type &group,
                                                    const WindowIconifiedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowIconifiedEvent.connect(group, listener, at);
}

inline
void  AbstractWindowEventSource::disconnectWindowIconified(const WindowIconifiedEventType::group_type &group)
{
    _WindowIconifiedEvent.disconnect(group);
}

inline
void  AbstractWindowEventSource::disconnectAllSlotsWindowIconified(void)
{
    _WindowIconifiedEvent.disconnect_all_slots();
}

inline
bool  AbstractWindowEventSource::isEmptyWindowIconified(void) const
{
    return _WindowIconifiedEvent.empty();
}

inline
UInt32  AbstractWindowEventSource::numSlotsWindowIconified(void) const
{
    return _WindowIconifiedEvent.num_slots();
}

inline
void AbstractWindowEventSource::produceWindowIconified(WindowIconifiedEventDetailsType* const e)
{
    produceEvent(WindowIconifiedEventId, e);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowDeiconified(const WindowDeiconifiedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowDeiconifiedEvent.connect(listener, at);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowDeiconified(const WindowDeiconifiedEventType::group_type &group,
                                                    const WindowDeiconifiedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowDeiconifiedEvent.connect(group, listener, at);
}

inline
void  AbstractWindowEventSource::disconnectWindowDeiconified(const WindowDeiconifiedEventType::group_type &group)
{
    _WindowDeiconifiedEvent.disconnect(group);
}

inline
void  AbstractWindowEventSource::disconnectAllSlotsWindowDeiconified(void)
{
    _WindowDeiconifiedEvent.disconnect_all_slots();
}

inline
bool  AbstractWindowEventSource::isEmptyWindowDeiconified(void) const
{
    return _WindowDeiconifiedEvent.empty();
}

inline
UInt32  AbstractWindowEventSource::numSlotsWindowDeiconified(void) const
{
    return _WindowDeiconifiedEvent.num_slots();
}

inline
void AbstractWindowEventSource::produceWindowDeiconified(WindowDeiconifiedEventDetailsType* const e)
{
    produceEvent(WindowDeiconifiedEventId, e);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowActivated(const WindowActivatedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowActivatedEvent.connect(listener, at);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowActivated(const WindowActivatedEventType::group_type &group,
                                                    const WindowActivatedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowActivatedEvent.connect(group, listener, at);
}

inline
void  AbstractWindowEventSource::disconnectWindowActivated(const WindowActivatedEventType::group_type &group)
{
    _WindowActivatedEvent.disconnect(group);
}

inline
void  AbstractWindowEventSource::disconnectAllSlotsWindowActivated(void)
{
    _WindowActivatedEvent.disconnect_all_slots();
}

inline
bool  AbstractWindowEventSource::isEmptyWindowActivated(void) const
{
    return _WindowActivatedEvent.empty();
}

inline
UInt32  AbstractWindowEventSource::numSlotsWindowActivated(void) const
{
    return _WindowActivatedEvent.num_slots();
}

inline
void AbstractWindowEventSource::produceWindowActivated(WindowActivatedEventDetailsType* const e)
{
    produceEvent(WindowActivatedEventId, e);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowDeactivated(const WindowDeactivatedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowDeactivatedEvent.connect(listener, at);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowDeactivated(const WindowDeactivatedEventType::group_type &group,
                                                    const WindowDeactivatedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowDeactivatedEvent.connect(group, listener, at);
}

inline
void  AbstractWindowEventSource::disconnectWindowDeactivated(const WindowDeactivatedEventType::group_type &group)
{
    _WindowDeactivatedEvent.disconnect(group);
}

inline
void  AbstractWindowEventSource::disconnectAllSlotsWindowDeactivated(void)
{
    _WindowDeactivatedEvent.disconnect_all_slots();
}

inline
bool  AbstractWindowEventSource::isEmptyWindowDeactivated(void) const
{
    return _WindowDeactivatedEvent.empty();
}

inline
UInt32  AbstractWindowEventSource::numSlotsWindowDeactivated(void) const
{
    return _WindowDeactivatedEvent.num_slots();
}

inline
void AbstractWindowEventSource::produceWindowDeactivated(WindowDeactivatedEventDetailsType* const e)
{
    produceEvent(WindowDeactivatedEventId, e);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowEntered(const WindowEnteredEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowEnteredEvent.connect(listener, at);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowEntered(const WindowEnteredEventType::group_type &group,
                                                    const WindowEnteredEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowEnteredEvent.connect(group, listener, at);
}

inline
void  AbstractWindowEventSource::disconnectWindowEntered(const WindowEnteredEventType::group_type &group)
{
    _WindowEnteredEvent.disconnect(group);
}

inline
void  AbstractWindowEventSource::disconnectAllSlotsWindowEntered(void)
{
    _WindowEnteredEvent.disconnect_all_slots();
}

inline
bool  AbstractWindowEventSource::isEmptyWindowEntered(void) const
{
    return _WindowEnteredEvent.empty();
}

inline
UInt32  AbstractWindowEventSource::numSlotsWindowEntered(void) const
{
    return _WindowEnteredEvent.num_slots();
}

inline
void AbstractWindowEventSource::produceWindowEntered(WindowEnteredEventDetailsType* const e)
{
    produceEvent(WindowEnteredEventId, e);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowExited(const WindowExitedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowExitedEvent.connect(listener, at);
}

inline
boost::signals2::connection  AbstractWindowEventSource::connectWindowExited(const WindowExitedEventType::group_type &group,
                                                    const WindowExitedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowExitedEvent.connect(group, listener, at);
}

inline
void  AbstractWindowEventSource::disconnectWindowExited(const WindowExitedEventType::group_type &group)
{
    _WindowExitedEvent.disconnect(group);
}

inline
void  AbstractWindowEventSource::disconnectAllSlotsWindowExited(void)
{
    _WindowExitedEvent.disconnect_all_slots();
}

inline
bool  AbstractWindowEventSource::isEmptyWindowExited(void) const
{
    return _WindowExitedEvent.empty();
}

inline
UInt32  AbstractWindowEventSource::numSlotsWindowExited(void) const
{
    return _WindowExitedEvent.num_slots();
}

inline
void AbstractWindowEventSource::produceWindowExited(WindowExitedEventDetailsType* const e)
{
    produceEvent(WindowExitedEventId, e);
}

OSG_END_NAMESPACE
