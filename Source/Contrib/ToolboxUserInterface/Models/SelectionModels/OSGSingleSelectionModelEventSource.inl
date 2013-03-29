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
#include "OSGSelectionEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &SingleSelectionModelEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 SingleSelectionModelEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}


inline
UInt32 SingleSelectionModelEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *SingleSelectionModelEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *SingleSelectionModelEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 SingleSelectionModelEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  SingleSelectionModelEventSource::connectSelectionChanged(const SelectionChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _SelectionChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  SingleSelectionModelEventSource::connectSelectionChanged(const SelectionChangedEventType::group_type &group,
                                                    const SelectionChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _SelectionChangedEvent.connect(group, listener, at);
}

inline
void  SingleSelectionModelEventSource::disconnectSelectionChanged(const SelectionChangedEventType::group_type &group)
{
    _SelectionChangedEvent.disconnect(group);
}

inline
void  SingleSelectionModelEventSource::disconnectAllSlotsSelectionChanged(void)
{
    _SelectionChangedEvent.disconnect_all_slots();
}

inline
bool  SingleSelectionModelEventSource::isEmptySelectionChanged(void) const
{
    return _SelectionChangedEvent.empty();
}

inline
UInt32  SingleSelectionModelEventSource::numSlotsSelectionChanged(void) const
{
    return _SelectionChangedEvent.num_slots();
}

inline
void SingleSelectionModelEventSource::produceSelectionChanged(SelectionChangedEventDetailsType* const e)
{
    produceEvent(SelectionChangedEventId, e);
}

OSG_END_NAMESPACE
