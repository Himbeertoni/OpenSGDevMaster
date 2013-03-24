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
#include "OSGTreeSelectionEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &TreeSelectionModelEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TreeSelectionModelEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
UInt32 TreeSelectionModelEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *TreeSelectionModelEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *TreeSelectionModelEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 TreeSelectionModelEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  TreeSelectionModelEventSource::connectSelectionAdded(const SelectionAddedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _SelectionAddedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeSelectionModelEventSource::connectSelectionAdded(const SelectionAddedEventType::group_type &group,
                                                    const SelectionAddedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _SelectionAddedEvent.connect(group, listener, at);
}

inline
void  TreeSelectionModelEventSource::disconnectSelectionAdded(const SelectionAddedEventType::group_type &group)
{
    _SelectionAddedEvent.disconnect(group);
}

inline
void  TreeSelectionModelEventSource::disconnectAllSlotsSelectionAdded(void)
{
    _SelectionAddedEvent.disconnect_all_slots();
}

inline
bool  TreeSelectionModelEventSource::isEmptySelectionAdded(void) const
{
    return _SelectionAddedEvent.empty();
}

inline
UInt32  TreeSelectionModelEventSource::numSlotsSelectionAdded(void) const
{
    return _SelectionAddedEvent.num_slots();
}

inline
void TreeSelectionModelEventSource::produceSelectionAdded(SelectionAddedEventDetailsType* const e)
{
    produceEvent(SelectionAddedEventId, e);
}

inline
boost::signals2::connection  TreeSelectionModelEventSource::connectSelectionRemoved(const SelectionRemovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _SelectionRemovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeSelectionModelEventSource::connectSelectionRemoved(const SelectionRemovedEventType::group_type &group,
                                                    const SelectionRemovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _SelectionRemovedEvent.connect(group, listener, at);
}

inline
void  TreeSelectionModelEventSource::disconnectSelectionRemoved(const SelectionRemovedEventType::group_type &group)
{
    _SelectionRemovedEvent.disconnect(group);
}

inline
void  TreeSelectionModelEventSource::disconnectAllSlotsSelectionRemoved(void)
{
    _SelectionRemovedEvent.disconnect_all_slots();
}

inline
bool  TreeSelectionModelEventSource::isEmptySelectionRemoved(void) const
{
    return _SelectionRemovedEvent.empty();
}

inline
UInt32  TreeSelectionModelEventSource::numSlotsSelectionRemoved(void) const
{
    return _SelectionRemovedEvent.num_slots();
}

inline
void TreeSelectionModelEventSource::produceSelectionRemoved(SelectionRemovedEventDetailsType* const e)
{
    produceEvent(SelectionRemovedEventId, e);
}

OSG_END_NAMESPACE
