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
#include "OSGTableModelEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &TableModelEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TableModelEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
UInt32 TableModelEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *TableModelEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *TableModelEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 TableModelEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  TableModelEventSource::connectContentsHeaderRowChanged(const ContentsHeaderRowChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ContentsHeaderRowChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TableModelEventSource::connectContentsHeaderRowChanged(const ContentsHeaderRowChangedEventType::group_type &group,
                                                    const ContentsHeaderRowChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ContentsHeaderRowChangedEvent.connect(group, listener, at);
}

inline
void  TableModelEventSource::disconnectContentsHeaderRowChanged(const ContentsHeaderRowChangedEventType::group_type &group)
{
    _ContentsHeaderRowChangedEvent.disconnect(group);
}

inline
void  TableModelEventSource::disconnectAllSlotsContentsHeaderRowChanged(void)
{
    _ContentsHeaderRowChangedEvent.disconnect_all_slots();
}

inline
bool  TableModelEventSource::isEmptyContentsHeaderRowChanged(void) const
{
    return _ContentsHeaderRowChangedEvent.empty();
}

inline
UInt32  TableModelEventSource::numSlotsContentsHeaderRowChanged(void) const
{
    return _ContentsHeaderRowChangedEvent.num_slots();
}

inline
void TableModelEventSource::produceContentsHeaderRowChanged(ContentsHeaderRowChangedEventDetailsType* const e)
{
    produceEvent(ContentsHeaderRowChangedEventId, e);
}

inline
boost::signals2::connection  TableModelEventSource::connectContentsChanged(const ContentsChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ContentsChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TableModelEventSource::connectContentsChanged(const ContentsChangedEventType::group_type &group,
                                                    const ContentsChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ContentsChangedEvent.connect(group, listener, at);
}

inline
void  TableModelEventSource::disconnectContentsChanged(const ContentsChangedEventType::group_type &group)
{
    _ContentsChangedEvent.disconnect(group);
}

inline
void  TableModelEventSource::disconnectAllSlotsContentsChanged(void)
{
    _ContentsChangedEvent.disconnect_all_slots();
}

inline
bool  TableModelEventSource::isEmptyContentsChanged(void) const
{
    return _ContentsChangedEvent.empty();
}

inline
UInt32  TableModelEventSource::numSlotsContentsChanged(void) const
{
    return _ContentsChangedEvent.num_slots();
}

inline
void TableModelEventSource::produceContentsChanged(ContentsChangedEventDetailsType* const e)
{
    produceEvent(ContentsChangedEventId, e);
}

inline
boost::signals2::connection  TableModelEventSource::connectIntervalAdded(const IntervalAddedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _IntervalAddedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TableModelEventSource::connectIntervalAdded(const IntervalAddedEventType::group_type &group,
                                                    const IntervalAddedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _IntervalAddedEvent.connect(group, listener, at);
}

inline
void  TableModelEventSource::disconnectIntervalAdded(const IntervalAddedEventType::group_type &group)
{
    _IntervalAddedEvent.disconnect(group);
}

inline
void  TableModelEventSource::disconnectAllSlotsIntervalAdded(void)
{
    _IntervalAddedEvent.disconnect_all_slots();
}

inline
bool  TableModelEventSource::isEmptyIntervalAdded(void) const
{
    return _IntervalAddedEvent.empty();
}

inline
UInt32  TableModelEventSource::numSlotsIntervalAdded(void) const
{
    return _IntervalAddedEvent.num_slots();
}

inline
void TableModelEventSource::produceIntervalAdded(IntervalAddedEventDetailsType* const e)
{
    produceEvent(IntervalAddedEventId, e);
}

inline
boost::signals2::connection  TableModelEventSource::connectIntervalRemoved(const IntervalRemovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _IntervalRemovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TableModelEventSource::connectIntervalRemoved(const IntervalRemovedEventType::group_type &group,
                                                    const IntervalRemovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _IntervalRemovedEvent.connect(group, listener, at);
}

inline
void  TableModelEventSource::disconnectIntervalRemoved(const IntervalRemovedEventType::group_type &group)
{
    _IntervalRemovedEvent.disconnect(group);
}

inline
void  TableModelEventSource::disconnectAllSlotsIntervalRemoved(void)
{
    _IntervalRemovedEvent.disconnect_all_slots();
}

inline
bool  TableModelEventSource::isEmptyIntervalRemoved(void) const
{
    return _IntervalRemovedEvent.empty();
}

inline
UInt32  TableModelEventSource::numSlotsIntervalRemoved(void) const
{
    return _IntervalRemovedEvent.num_slots();
}

inline
void TableModelEventSource::produceIntervalRemoved(IntervalRemovedEventDetailsType* const e)
{
    produceEvent(IntervalRemovedEventId, e);
}

OSG_END_NAMESPACE
