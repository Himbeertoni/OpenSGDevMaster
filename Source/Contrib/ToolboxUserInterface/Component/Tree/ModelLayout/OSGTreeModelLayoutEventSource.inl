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
#include "OSGTreeModelLayoutEventDetails.h"
#include "OSGTreeModelEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &TreeModelLayoutEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TreeModelLayoutEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}


inline
UInt32 TreeModelLayoutEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *TreeModelLayoutEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *TreeModelLayoutEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 TreeModelLayoutEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeCollapsed(const TreeCollapsedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeCollapsedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeCollapsed(const TreeCollapsedEventType::group_type &group,
                                                    const TreeCollapsedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeCollapsedEvent.connect(group, listener, at);
}

inline
void  TreeModelLayoutEventSource::disconnectTreeCollapsed(const TreeCollapsedEventType::group_type &group)
{
    _TreeCollapsedEvent.disconnect(group);
}

inline
void  TreeModelLayoutEventSource::disconnectAllSlotsTreeCollapsed(void)
{
    _TreeCollapsedEvent.disconnect_all_slots();
}

inline
bool  TreeModelLayoutEventSource::isEmptyTreeCollapsed(void) const
{
    return _TreeCollapsedEvent.empty();
}

inline
UInt32  TreeModelLayoutEventSource::numSlotsTreeCollapsed(void) const
{
    return _TreeCollapsedEvent.num_slots();
}

inline
void TreeModelLayoutEventSource::produceTreeCollapsed(TreeCollapsedEventDetailsType* const e)
{
    produceEvent(TreeCollapsedEventId, e);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeExpanded(const TreeExpandedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeExpandedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeExpanded(const TreeExpandedEventType::group_type &group,
                                                    const TreeExpandedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeExpandedEvent.connect(group, listener, at);
}

inline
void  TreeModelLayoutEventSource::disconnectTreeExpanded(const TreeExpandedEventType::group_type &group)
{
    _TreeExpandedEvent.disconnect(group);
}

inline
void  TreeModelLayoutEventSource::disconnectAllSlotsTreeExpanded(void)
{
    _TreeExpandedEvent.disconnect_all_slots();
}

inline
bool  TreeModelLayoutEventSource::isEmptyTreeExpanded(void) const
{
    return _TreeExpandedEvent.empty();
}

inline
UInt32  TreeModelLayoutEventSource::numSlotsTreeExpanded(void) const
{
    return _TreeExpandedEvent.num_slots();
}

inline
void TreeModelLayoutEventSource::produceTreeExpanded(TreeExpandedEventDetailsType* const e)
{
    produceEvent(TreeExpandedEventId, e);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeWillCollapse(const TreeWillCollapseEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeWillCollapseEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeWillCollapse(const TreeWillCollapseEventType::group_type &group,
                                                    const TreeWillCollapseEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeWillCollapseEvent.connect(group, listener, at);
}

inline
void  TreeModelLayoutEventSource::disconnectTreeWillCollapse(const TreeWillCollapseEventType::group_type &group)
{
    _TreeWillCollapseEvent.disconnect(group);
}

inline
void  TreeModelLayoutEventSource::disconnectAllSlotsTreeWillCollapse(void)
{
    _TreeWillCollapseEvent.disconnect_all_slots();
}

inline
bool  TreeModelLayoutEventSource::isEmptyTreeWillCollapse(void) const
{
    return _TreeWillCollapseEvent.empty();
}

inline
UInt32  TreeModelLayoutEventSource::numSlotsTreeWillCollapse(void) const
{
    return _TreeWillCollapseEvent.num_slots();
}

inline
void TreeModelLayoutEventSource::produceTreeWillCollapse(TreeWillCollapseEventDetailsType* const e)
{
    produceEvent(TreeWillCollapseEventId, e);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeWillExpand(const TreeWillExpandEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeWillExpandEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeWillExpand(const TreeWillExpandEventType::group_type &group,
                                                    const TreeWillExpandEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeWillExpandEvent.connect(group, listener, at);
}

inline
void  TreeModelLayoutEventSource::disconnectTreeWillExpand(const TreeWillExpandEventType::group_type &group)
{
    _TreeWillExpandEvent.disconnect(group);
}

inline
void  TreeModelLayoutEventSource::disconnectAllSlotsTreeWillExpand(void)
{
    _TreeWillExpandEvent.disconnect_all_slots();
}

inline
bool  TreeModelLayoutEventSource::isEmptyTreeWillExpand(void) const
{
    return _TreeWillExpandEvent.empty();
}

inline
UInt32  TreeModelLayoutEventSource::numSlotsTreeWillExpand(void) const
{
    return _TreeWillExpandEvent.num_slots();
}

inline
void TreeModelLayoutEventSource::produceTreeWillExpand(TreeWillExpandEventDetailsType* const e)
{
    produceEvent(TreeWillExpandEventId, e);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeNodesChanged(const TreeNodesChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeNodesChanged(const TreeNodesChangedEventType::group_type &group,
                                                    const TreeNodesChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesChangedEvent.connect(group, listener, at);
}

inline
void  TreeModelLayoutEventSource::disconnectTreeNodesChanged(const TreeNodesChangedEventType::group_type &group)
{
    _TreeNodesChangedEvent.disconnect(group);
}

inline
void  TreeModelLayoutEventSource::disconnectAllSlotsTreeNodesChanged(void)
{
    _TreeNodesChangedEvent.disconnect_all_slots();
}

inline
bool  TreeModelLayoutEventSource::isEmptyTreeNodesChanged(void) const
{
    return _TreeNodesChangedEvent.empty();
}

inline
UInt32  TreeModelLayoutEventSource::numSlotsTreeNodesChanged(void) const
{
    return _TreeNodesChangedEvent.num_slots();
}

inline
void TreeModelLayoutEventSource::produceTreeNodesChanged(TreeNodesChangedEventDetailsType* const e)
{
    produceEvent(TreeNodesChangedEventId, e);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeNodesInserted(const TreeNodesInsertedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesInsertedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeNodesInserted(const TreeNodesInsertedEventType::group_type &group,
                                                    const TreeNodesInsertedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesInsertedEvent.connect(group, listener, at);
}

inline
void  TreeModelLayoutEventSource::disconnectTreeNodesInserted(const TreeNodesInsertedEventType::group_type &group)
{
    _TreeNodesInsertedEvent.disconnect(group);
}

inline
void  TreeModelLayoutEventSource::disconnectAllSlotsTreeNodesInserted(void)
{
    _TreeNodesInsertedEvent.disconnect_all_slots();
}

inline
bool  TreeModelLayoutEventSource::isEmptyTreeNodesInserted(void) const
{
    return _TreeNodesInsertedEvent.empty();
}

inline
UInt32  TreeModelLayoutEventSource::numSlotsTreeNodesInserted(void) const
{
    return _TreeNodesInsertedEvent.num_slots();
}

inline
void TreeModelLayoutEventSource::produceTreeNodesInserted(TreeNodesInsertedEventDetailsType* const e)
{
    produceEvent(TreeNodesInsertedEventId, e);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeNodesRemoved(const TreeNodesRemovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesRemovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeNodesRemoved(const TreeNodesRemovedEventType::group_type &group,
                                                    const TreeNodesRemovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesRemovedEvent.connect(group, listener, at);
}

inline
void  TreeModelLayoutEventSource::disconnectTreeNodesRemoved(const TreeNodesRemovedEventType::group_type &group)
{
    _TreeNodesRemovedEvent.disconnect(group);
}

inline
void  TreeModelLayoutEventSource::disconnectAllSlotsTreeNodesRemoved(void)
{
    _TreeNodesRemovedEvent.disconnect_all_slots();
}

inline
bool  TreeModelLayoutEventSource::isEmptyTreeNodesRemoved(void) const
{
    return _TreeNodesRemovedEvent.empty();
}

inline
UInt32  TreeModelLayoutEventSource::numSlotsTreeNodesRemoved(void) const
{
    return _TreeNodesRemovedEvent.num_slots();
}

inline
void TreeModelLayoutEventSource::produceTreeNodesRemoved(TreeNodesRemovedEventDetailsType* const e)
{
    produceEvent(TreeNodesRemovedEventId, e);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeNodesWillBeRemoved(const TreeNodesWillBeRemovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesWillBeRemovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeNodesWillBeRemoved(const TreeNodesWillBeRemovedEventType::group_type &group,
                                                    const TreeNodesWillBeRemovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesWillBeRemovedEvent.connect(group, listener, at);
}

inline
void  TreeModelLayoutEventSource::disconnectTreeNodesWillBeRemoved(const TreeNodesWillBeRemovedEventType::group_type &group)
{
    _TreeNodesWillBeRemovedEvent.disconnect(group);
}

inline
void  TreeModelLayoutEventSource::disconnectAllSlotsTreeNodesWillBeRemoved(void)
{
    _TreeNodesWillBeRemovedEvent.disconnect_all_slots();
}

inline
bool  TreeModelLayoutEventSource::isEmptyTreeNodesWillBeRemoved(void) const
{
    return _TreeNodesWillBeRemovedEvent.empty();
}

inline
UInt32  TreeModelLayoutEventSource::numSlotsTreeNodesWillBeRemoved(void) const
{
    return _TreeNodesWillBeRemovedEvent.num_slots();
}

inline
void TreeModelLayoutEventSource::produceTreeNodesWillBeRemoved(TreeNodesWillBeRemovedEventDetailsType* const e)
{
    produceEvent(TreeNodesWillBeRemovedEventId, e);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeStructureChanged(const TreeStructureChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeStructureChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelLayoutEventSource::connectTreeStructureChanged(const TreeStructureChangedEventType::group_type &group,
                                                    const TreeStructureChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeStructureChangedEvent.connect(group, listener, at);
}

inline
void  TreeModelLayoutEventSource::disconnectTreeStructureChanged(const TreeStructureChangedEventType::group_type &group)
{
    _TreeStructureChangedEvent.disconnect(group);
}

inline
void  TreeModelLayoutEventSource::disconnectAllSlotsTreeStructureChanged(void)
{
    _TreeStructureChangedEvent.disconnect_all_slots();
}

inline
bool  TreeModelLayoutEventSource::isEmptyTreeStructureChanged(void) const
{
    return _TreeStructureChangedEvent.empty();
}

inline
UInt32  TreeModelLayoutEventSource::numSlotsTreeStructureChanged(void) const
{
    return _TreeStructureChangedEvent.num_slots();
}

inline
void TreeModelLayoutEventSource::produceTreeStructureChanged(TreeStructureChangedEventDetailsType* const e)
{
    produceEvent(TreeStructureChangedEventId, e);
}

OSG_END_NAMESPACE
