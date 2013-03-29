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
#include "OSGTableColumnModelEventDetails.h"
#include "OSGChangeEventDetails.h"
#include "OSGListSelectionEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &TableColumnModelEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TableColumnModelEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}


inline
UInt32 TableColumnModelEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *TableColumnModelEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *TableColumnModelEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 TableColumnModelEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  TableColumnModelEventSource::connectColumnAdded(const ColumnAddedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ColumnAddedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TableColumnModelEventSource::connectColumnAdded(const ColumnAddedEventType::group_type &group,
                                                    const ColumnAddedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ColumnAddedEvent.connect(group, listener, at);
}

inline
void  TableColumnModelEventSource::disconnectColumnAdded(const ColumnAddedEventType::group_type &group)
{
    _ColumnAddedEvent.disconnect(group);
}

inline
void  TableColumnModelEventSource::disconnectAllSlotsColumnAdded(void)
{
    _ColumnAddedEvent.disconnect_all_slots();
}

inline
bool  TableColumnModelEventSource::isEmptyColumnAdded(void) const
{
    return _ColumnAddedEvent.empty();
}

inline
UInt32  TableColumnModelEventSource::numSlotsColumnAdded(void) const
{
    return _ColumnAddedEvent.num_slots();
}

inline
void TableColumnModelEventSource::produceColumnAdded(ColumnAddedEventDetailsType* const e)
{
    produceEvent(ColumnAddedEventId, e);
}

inline
boost::signals2::connection  TableColumnModelEventSource::connectColumnMoved(const ColumnMovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ColumnMovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TableColumnModelEventSource::connectColumnMoved(const ColumnMovedEventType::group_type &group,
                                                    const ColumnMovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ColumnMovedEvent.connect(group, listener, at);
}

inline
void  TableColumnModelEventSource::disconnectColumnMoved(const ColumnMovedEventType::group_type &group)
{
    _ColumnMovedEvent.disconnect(group);
}

inline
void  TableColumnModelEventSource::disconnectAllSlotsColumnMoved(void)
{
    _ColumnMovedEvent.disconnect_all_slots();
}

inline
bool  TableColumnModelEventSource::isEmptyColumnMoved(void) const
{
    return _ColumnMovedEvent.empty();
}

inline
UInt32  TableColumnModelEventSource::numSlotsColumnMoved(void) const
{
    return _ColumnMovedEvent.num_slots();
}

inline
void TableColumnModelEventSource::produceColumnMoved(ColumnMovedEventDetailsType* const e)
{
    produceEvent(ColumnMovedEventId, e);
}

inline
boost::signals2::connection  TableColumnModelEventSource::connectColumnRemoved(const ColumnRemovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ColumnRemovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TableColumnModelEventSource::connectColumnRemoved(const ColumnRemovedEventType::group_type &group,
                                                    const ColumnRemovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ColumnRemovedEvent.connect(group, listener, at);
}

inline
void  TableColumnModelEventSource::disconnectColumnRemoved(const ColumnRemovedEventType::group_type &group)
{
    _ColumnRemovedEvent.disconnect(group);
}

inline
void  TableColumnModelEventSource::disconnectAllSlotsColumnRemoved(void)
{
    _ColumnRemovedEvent.disconnect_all_slots();
}

inline
bool  TableColumnModelEventSource::isEmptyColumnRemoved(void) const
{
    return _ColumnRemovedEvent.empty();
}

inline
UInt32  TableColumnModelEventSource::numSlotsColumnRemoved(void) const
{
    return _ColumnRemovedEvent.num_slots();
}

inline
void TableColumnModelEventSource::produceColumnRemoved(ColumnRemovedEventDetailsType* const e)
{
    produceEvent(ColumnRemovedEventId, e);
}

inline
boost::signals2::connection  TableColumnModelEventSource::connectColumnMarginChanged(const ColumnMarginChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ColumnMarginChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TableColumnModelEventSource::connectColumnMarginChanged(const ColumnMarginChangedEventType::group_type &group,
                                                    const ColumnMarginChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ColumnMarginChangedEvent.connect(group, listener, at);
}

inline
void  TableColumnModelEventSource::disconnectColumnMarginChanged(const ColumnMarginChangedEventType::group_type &group)
{
    _ColumnMarginChangedEvent.disconnect(group);
}

inline
void  TableColumnModelEventSource::disconnectAllSlotsColumnMarginChanged(void)
{
    _ColumnMarginChangedEvent.disconnect_all_slots();
}

inline
bool  TableColumnModelEventSource::isEmptyColumnMarginChanged(void) const
{
    return _ColumnMarginChangedEvent.empty();
}

inline
UInt32  TableColumnModelEventSource::numSlotsColumnMarginChanged(void) const
{
    return _ColumnMarginChangedEvent.num_slots();
}

inline
void TableColumnModelEventSource::produceColumnMarginChanged(ColumnMarginChangedEventDetailsType* const e)
{
    produceEvent(ColumnMarginChangedEventId, e);
}

inline
boost::signals2::connection  TableColumnModelEventSource::connectColumnSelectionChanged(const ColumnSelectionChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ColumnSelectionChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TableColumnModelEventSource::connectColumnSelectionChanged(const ColumnSelectionChangedEventType::group_type &group,
                                                    const ColumnSelectionChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ColumnSelectionChangedEvent.connect(group, listener, at);
}

inline
void  TableColumnModelEventSource::disconnectColumnSelectionChanged(const ColumnSelectionChangedEventType::group_type &group)
{
    _ColumnSelectionChangedEvent.disconnect(group);
}

inline
void  TableColumnModelEventSource::disconnectAllSlotsColumnSelectionChanged(void)
{
    _ColumnSelectionChangedEvent.disconnect_all_slots();
}

inline
bool  TableColumnModelEventSource::isEmptyColumnSelectionChanged(void) const
{
    return _ColumnSelectionChangedEvent.empty();
}

inline
UInt32  TableColumnModelEventSource::numSlotsColumnSelectionChanged(void) const
{
    return _ColumnSelectionChangedEvent.num_slots();
}

inline
void TableColumnModelEventSource::produceColumnSelectionChanged(ColumnSelectionChangedEventDetailsType* const e)
{
    produceEvent(ColumnSelectionChangedEventId, e);
}

OSG_END_NAMESPACE
