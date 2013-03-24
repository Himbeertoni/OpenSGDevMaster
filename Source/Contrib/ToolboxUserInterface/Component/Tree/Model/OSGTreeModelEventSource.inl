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
#include "OSGTreeModelEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &TreeModelEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TreeModelEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
UInt32 TreeModelEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *TreeModelEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *TreeModelEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 TreeModelEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  TreeModelEventSource::connectTreeNodesChanged(const TreeNodesChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelEventSource::connectTreeNodesChanged(const TreeNodesChangedEventType::group_type &group,
                                                    const TreeNodesChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesChangedEvent.connect(group, listener, at);
}

inline
void  TreeModelEventSource::disconnectTreeNodesChanged(const TreeNodesChangedEventType::group_type &group)
{
    _TreeNodesChangedEvent.disconnect(group);
}

inline
void  TreeModelEventSource::disconnectAllSlotsTreeNodesChanged(void)
{
    _TreeNodesChangedEvent.disconnect_all_slots();
}

inline
bool  TreeModelEventSource::isEmptyTreeNodesChanged(void) const
{
    return _TreeNodesChangedEvent.empty();
}

inline
UInt32  TreeModelEventSource::numSlotsTreeNodesChanged(void) const
{
    return _TreeNodesChangedEvent.num_slots();
}

inline
void TreeModelEventSource::produceTreeNodesChanged(TreeNodesChangedEventDetailsType* const e)
{
    produceEvent(TreeNodesChangedEventId, e);
}

inline
boost::signals2::connection  TreeModelEventSource::connectTreeNodesInserted(const TreeNodesInsertedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesInsertedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelEventSource::connectTreeNodesInserted(const TreeNodesInsertedEventType::group_type &group,
                                                    const TreeNodesInsertedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesInsertedEvent.connect(group, listener, at);
}

inline
void  TreeModelEventSource::disconnectTreeNodesInserted(const TreeNodesInsertedEventType::group_type &group)
{
    _TreeNodesInsertedEvent.disconnect(group);
}

inline
void  TreeModelEventSource::disconnectAllSlotsTreeNodesInserted(void)
{
    _TreeNodesInsertedEvent.disconnect_all_slots();
}

inline
bool  TreeModelEventSource::isEmptyTreeNodesInserted(void) const
{
    return _TreeNodesInsertedEvent.empty();
}

inline
UInt32  TreeModelEventSource::numSlotsTreeNodesInserted(void) const
{
    return _TreeNodesInsertedEvent.num_slots();
}

inline
void TreeModelEventSource::produceTreeNodesInserted(TreeNodesInsertedEventDetailsType* const e)
{
    produceEvent(TreeNodesInsertedEventId, e);
}

inline
boost::signals2::connection  TreeModelEventSource::connectTreeNodesRemoved(const TreeNodesRemovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesRemovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelEventSource::connectTreeNodesRemoved(const TreeNodesRemovedEventType::group_type &group,
                                                    const TreeNodesRemovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesRemovedEvent.connect(group, listener, at);
}

inline
void  TreeModelEventSource::disconnectTreeNodesRemoved(const TreeNodesRemovedEventType::group_type &group)
{
    _TreeNodesRemovedEvent.disconnect(group);
}

inline
void  TreeModelEventSource::disconnectAllSlotsTreeNodesRemoved(void)
{
    _TreeNodesRemovedEvent.disconnect_all_slots();
}

inline
bool  TreeModelEventSource::isEmptyTreeNodesRemoved(void) const
{
    return _TreeNodesRemovedEvent.empty();
}

inline
UInt32  TreeModelEventSource::numSlotsTreeNodesRemoved(void) const
{
    return _TreeNodesRemovedEvent.num_slots();
}

inline
void TreeModelEventSource::produceTreeNodesRemoved(TreeNodesRemovedEventDetailsType* const e)
{
    produceEvent(TreeNodesRemovedEventId, e);
}

inline
boost::signals2::connection  TreeModelEventSource::connectTreeNodesWillBeRemoved(const TreeNodesWillBeRemovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesWillBeRemovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelEventSource::connectTreeNodesWillBeRemoved(const TreeNodesWillBeRemovedEventType::group_type &group,
                                                    const TreeNodesWillBeRemovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesWillBeRemovedEvent.connect(group, listener, at);
}

inline
void  TreeModelEventSource::disconnectTreeNodesWillBeRemoved(const TreeNodesWillBeRemovedEventType::group_type &group)
{
    _TreeNodesWillBeRemovedEvent.disconnect(group);
}

inline
void  TreeModelEventSource::disconnectAllSlotsTreeNodesWillBeRemoved(void)
{
    _TreeNodesWillBeRemovedEvent.disconnect_all_slots();
}

inline
bool  TreeModelEventSource::isEmptyTreeNodesWillBeRemoved(void) const
{
    return _TreeNodesWillBeRemovedEvent.empty();
}

inline
UInt32  TreeModelEventSource::numSlotsTreeNodesWillBeRemoved(void) const
{
    return _TreeNodesWillBeRemovedEvent.num_slots();
}

inline
void TreeModelEventSource::produceTreeNodesWillBeRemoved(TreeNodesWillBeRemovedEventDetailsType* const e)
{
    produceEvent(TreeNodesWillBeRemovedEventId, e);
}

inline
boost::signals2::connection  TreeModelEventSource::connectTreeStructureChanged(const TreeStructureChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeStructureChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelEventSource::connectTreeStructureChanged(const TreeStructureChangedEventType::group_type &group,
                                                    const TreeStructureChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeStructureChangedEvent.connect(group, listener, at);
}

inline
void  TreeModelEventSource::disconnectTreeStructureChanged(const TreeStructureChangedEventType::group_type &group)
{
    _TreeStructureChangedEvent.disconnect(group);
}

inline
void  TreeModelEventSource::disconnectAllSlotsTreeStructureChanged(void)
{
    _TreeStructureChangedEvent.disconnect_all_slots();
}

inline
bool  TreeModelEventSource::isEmptyTreeStructureChanged(void) const
{
    return _TreeStructureChangedEvent.empty();
}

inline
UInt32  TreeModelEventSource::numSlotsTreeStructureChanged(void) const
{
    return _TreeStructureChangedEvent.num_slots();
}

inline
void TreeModelEventSource::produceTreeStructureChanged(TreeStructureChangedEventDetailsType* const e)
{
    produceEvent(TreeStructureChangedEventId, e);
}
OSG_END_NAMESPACE
