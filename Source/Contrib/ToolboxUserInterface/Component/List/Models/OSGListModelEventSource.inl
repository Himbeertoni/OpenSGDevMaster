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
#include "OSGListDataEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &ListModelEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 ListModelEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}


inline
UInt32 ListModelEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *ListModelEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *ListModelEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 ListModelEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  ListModelEventSource::connectListDataContentsChanged(const ListDataContentsChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ListDataContentsChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ListModelEventSource::connectListDataContentsChanged(const ListDataContentsChangedEventType::group_type &group,
                                                    const ListDataContentsChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ListDataContentsChangedEvent.connect(group, listener, at);
}

inline
void  ListModelEventSource::disconnectListDataContentsChanged(const ListDataContentsChangedEventType::group_type &group)
{
    _ListDataContentsChangedEvent.disconnect(group);
}

inline
void  ListModelEventSource::disconnectAllSlotsListDataContentsChanged(void)
{
    _ListDataContentsChangedEvent.disconnect_all_slots();
}

inline
bool  ListModelEventSource::isEmptyListDataContentsChanged(void) const
{
    return _ListDataContentsChangedEvent.empty();
}

inline
UInt32  ListModelEventSource::numSlotsListDataContentsChanged(void) const
{
    return _ListDataContentsChangedEvent.num_slots();
}

inline
void ListModelEventSource::produceListDataContentsChanged(ListDataContentsChangedEventDetailsType* const e)
{
    produceEvent(ListDataContentsChangedEventId, e);
}

inline
boost::signals2::connection  ListModelEventSource::connectListDataIntervalAdded(const ListDataIntervalAddedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ListDataIntervalAddedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ListModelEventSource::connectListDataIntervalAdded(const ListDataIntervalAddedEventType::group_type &group,
                                                    const ListDataIntervalAddedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ListDataIntervalAddedEvent.connect(group, listener, at);
}

inline
void  ListModelEventSource::disconnectListDataIntervalAdded(const ListDataIntervalAddedEventType::group_type &group)
{
    _ListDataIntervalAddedEvent.disconnect(group);
}

inline
void  ListModelEventSource::disconnectAllSlotsListDataIntervalAdded(void)
{
    _ListDataIntervalAddedEvent.disconnect_all_slots();
}

inline
bool  ListModelEventSource::isEmptyListDataIntervalAdded(void) const
{
    return _ListDataIntervalAddedEvent.empty();
}

inline
UInt32  ListModelEventSource::numSlotsListDataIntervalAdded(void) const
{
    return _ListDataIntervalAddedEvent.num_slots();
}

inline
void ListModelEventSource::produceListDataIntervalAdded(ListDataIntervalAddedEventDetailsType* const e)
{
    produceEvent(ListDataIntervalAddedEventId, e);
}

inline
boost::signals2::connection  ListModelEventSource::connectListDataIntervalRemoved(const ListDataIntervalRemovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ListDataIntervalRemovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ListModelEventSource::connectListDataIntervalRemoved(const ListDataIntervalRemovedEventType::group_type &group,
                                                    const ListDataIntervalRemovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ListDataIntervalRemovedEvent.connect(group, listener, at);
}

inline
void  ListModelEventSource::disconnectListDataIntervalRemoved(const ListDataIntervalRemovedEventType::group_type &group)
{
    _ListDataIntervalRemovedEvent.disconnect(group);
}

inline
void  ListModelEventSource::disconnectAllSlotsListDataIntervalRemoved(void)
{
    _ListDataIntervalRemovedEvent.disconnect_all_slots();
}

inline
bool  ListModelEventSource::isEmptyListDataIntervalRemoved(void) const
{
    return _ListDataIntervalRemovedEvent.empty();
}

inline
UInt32  ListModelEventSource::numSlotsListDataIntervalRemoved(void) const
{
    return _ListDataIntervalRemovedEvent.num_slots();
}

inline
void ListModelEventSource::produceListDataIntervalRemoved(ListDataIntervalRemovedEventDetailsType* const e)
{
    produceEvent(ListDataIntervalRemovedEventId, e);
}

OSG_END_NAMESPACE
