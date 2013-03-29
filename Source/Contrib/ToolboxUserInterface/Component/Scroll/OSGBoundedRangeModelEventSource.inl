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
#include "OSGChangeEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &BoundedRangeModelEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 BoundedRangeModelEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}


inline
UInt32 BoundedRangeModelEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *BoundedRangeModelEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *BoundedRangeModelEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 BoundedRangeModelEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  BoundedRangeModelEventSource::connectStateChanged(const StateChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _StateChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  BoundedRangeModelEventSource::connectStateChanged(const StateChangedEventType::group_type &group,
                                                    const StateChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _StateChangedEvent.connect(group, listener, at);
}

inline
void  BoundedRangeModelEventSource::disconnectStateChanged(const StateChangedEventType::group_type &group)
{
    _StateChangedEvent.disconnect(group);
}

inline
void  BoundedRangeModelEventSource::disconnectAllSlotsStateChanged(void)
{
    _StateChangedEvent.disconnect_all_slots();
}

inline
bool  BoundedRangeModelEventSource::isEmptyStateChanged(void) const
{
    return _StateChangedEvent.empty();
}

inline
UInt32  BoundedRangeModelEventSource::numSlotsStateChanged(void) const
{
    return _StateChangedEvent.num_slots();
}

inline
void BoundedRangeModelEventSource::produceStateChanged(StateChangedEventDetailsType* const e)
{
    produceEvent(StateChangedEventId, e);
}

OSG_END_NAMESPACE
