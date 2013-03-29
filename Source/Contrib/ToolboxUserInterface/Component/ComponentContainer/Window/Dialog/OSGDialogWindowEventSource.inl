/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
 *          Mark Stenerson                                                   *
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
#include "OSGDialogWindowEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &DialogWindowEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 DialogWindowEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
boost::signals2::connection  DialogWindowEventSource::connectDialogWindowClosing(const DialogWindowClosingEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _DialogWindowClosingEvent.connect(listener, at);
}

inline
boost::signals2::connection  DialogWindowEventSource::connectDialogWindowClosing(const DialogWindowClosingEventType::group_type &group,
                                                    const DialogWindowClosingEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _DialogWindowClosingEvent.connect(group, listener, at);
}

inline
void  DialogWindowEventSource::disconnectDialogWindowClosing(const DialogWindowClosingEventType::group_type &group)
{
    _DialogWindowClosingEvent.disconnect(group);
}

inline
void  DialogWindowEventSource::disconnectAllSlotsDialogWindowClosing(void)
{
    _DialogWindowClosingEvent.disconnect_all_slots();
}

inline
bool  DialogWindowEventSource::isEmptyDialogWindowClosing(void) const
{
    return _DialogWindowClosingEvent.empty();
}

inline
UInt32  DialogWindowEventSource::numSlotsDialogWindowClosing(void) const
{
    return _DialogWindowClosingEvent.num_slots();
}

inline
void DialogWindowEventSource::produceDialogWindowClosing(DialogWindowClosingEventDetailsType* const e)
{
    produceEvent(DialogWindowClosingEventId, e);
}

inline
boost::signals2::connection  DialogWindowEventSource::connectDialogWindowClosed(const DialogWindowClosedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _DialogWindowClosedEvent.connect(listener, at);
}

inline
boost::signals2::connection  DialogWindowEventSource::connectDialogWindowClosed(const DialogWindowClosedEventType::group_type &group,
                                                    const DialogWindowClosedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _DialogWindowClosedEvent.connect(group, listener, at);
}

inline
void  DialogWindowEventSource::disconnectDialogWindowClosed(const DialogWindowClosedEventType::group_type &group)
{
    _DialogWindowClosedEvent.disconnect(group);
}

inline
void  DialogWindowEventSource::disconnectAllSlotsDialogWindowClosed(void)
{
    _DialogWindowClosedEvent.disconnect_all_slots();
}

inline
bool  DialogWindowEventSource::isEmptyDialogWindowClosed(void) const
{
    return _DialogWindowClosedEvent.empty();
}

inline
UInt32  DialogWindowEventSource::numSlotsDialogWindowClosed(void) const
{
    return _DialogWindowClosedEvent.num_slots();
}

inline
void DialogWindowEventSource::produceDialogWindowClosed(DialogWindowClosedEventDetailsType* const e)
{
    produceEvent(DialogWindowClosedEventId, e);
}

OSG_END_NAMESPACE
