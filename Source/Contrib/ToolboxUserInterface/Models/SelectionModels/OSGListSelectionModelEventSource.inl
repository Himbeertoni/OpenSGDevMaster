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
#include "OSGListSelectionEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &ListSelectionModelEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 ListSelectionModelEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}
inline
UInt32 ListSelectionModelEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *ListSelectionModelEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *ListSelectionModelEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 ListSelectionModelEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  ListSelectionModelEventSource::connectSelectionChanged(const SelectionChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _SelectionChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ListSelectionModelEventSource::connectSelectionChanged(const SelectionChangedEventType::group_type &group,
                                                    const SelectionChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _SelectionChangedEvent.connect(group, listener, at);
}

inline
void  ListSelectionModelEventSource::disconnectSelectionChanged(const SelectionChangedEventType::group_type &group)
{
    _SelectionChangedEvent.disconnect(group);
}

inline
void  ListSelectionModelEventSource::disconnectAllSlotsSelectionChanged(void)
{
    _SelectionChangedEvent.disconnect_all_slots();
}

inline
bool  ListSelectionModelEventSource::isEmptySelectionChanged(void) const
{
    return _SelectionChangedEvent.empty();
}

inline
UInt32  ListSelectionModelEventSource::numSlotsSelectionChanged(void) const
{
    return _SelectionChangedEvent.num_slots();
}

inline
void ListSelectionModelEventSource::produceSelectionChanged(SelectionChangedEventDetailsType* const e)
{
    produceEvent(SelectionChangedEventId, e);
}
OSG_END_NAMESPACE
