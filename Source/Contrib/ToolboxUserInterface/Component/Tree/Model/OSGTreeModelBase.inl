/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TreeModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include "OSGTreeModelEventDetails.h"

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TreeModelBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TreeModelBase::getClassTypeId(void)
{
    return _type.getId();
}
//! access the producer type of the class
inline
const EventProducerType &TreeModelBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TreeModelBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
OSG::UInt16 TreeModelBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/



#ifdef OSG_MT_CPTR_ASPECT
inline
void TreeModelBase::execSync (      TreeModelBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);
}
#endif


inline
const Char8 *TreeModelBase::getClassname(void)
{
    return "TreeModel";
}

inline
UInt32 TreeModelBase::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *TreeModelBase::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *TreeModelBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 TreeModelBase::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  TreeModelBase::connectTreeNodesChanged(const TreeNodesChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelBase::connectTreeNodesChanged(const TreeNodesChangedEventType::group_type &group,
                                                    const TreeNodesChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesChangedEvent.connect(group, listener, at);
}

inline
void  TreeModelBase::disconnectTreeNodesChanged(const TreeNodesChangedEventType::group_type &group)
{
    _TreeNodesChangedEvent.disconnect(group);
}

inline
void  TreeModelBase::disconnectAllSlotsTreeNodesChanged(void)
{
    _TreeNodesChangedEvent.disconnect_all_slots();
}

inline
bool  TreeModelBase::isEmptyTreeNodesChanged(void) const
{
    return _TreeNodesChangedEvent.empty();
}

inline
UInt32  TreeModelBase::numSlotsTreeNodesChanged(void) const
{
    return _TreeNodesChangedEvent.num_slots();
}

inline
void TreeModelBase::produceTreeNodesChanged(TreeNodesChangedEventDetailsType* const e)
{
    produceEvent(TreeNodesChangedEventId, e);
}

inline
boost::signals2::connection  TreeModelBase::connectTreeNodesInserted(const TreeNodesInsertedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesInsertedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelBase::connectTreeNodesInserted(const TreeNodesInsertedEventType::group_type &group,
                                                    const TreeNodesInsertedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesInsertedEvent.connect(group, listener, at);
}

inline
void  TreeModelBase::disconnectTreeNodesInserted(const TreeNodesInsertedEventType::group_type &group)
{
    _TreeNodesInsertedEvent.disconnect(group);
}

inline
void  TreeModelBase::disconnectAllSlotsTreeNodesInserted(void)
{
    _TreeNodesInsertedEvent.disconnect_all_slots();
}

inline
bool  TreeModelBase::isEmptyTreeNodesInserted(void) const
{
    return _TreeNodesInsertedEvent.empty();
}

inline
UInt32  TreeModelBase::numSlotsTreeNodesInserted(void) const
{
    return _TreeNodesInsertedEvent.num_slots();
}

inline
void TreeModelBase::produceTreeNodesInserted(TreeNodesInsertedEventDetailsType* const e)
{
    produceEvent(TreeNodesInsertedEventId, e);
}

inline
boost::signals2::connection  TreeModelBase::connectTreeNodesRemoved(const TreeNodesRemovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesRemovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelBase::connectTreeNodesRemoved(const TreeNodesRemovedEventType::group_type &group,
                                                    const TreeNodesRemovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesRemovedEvent.connect(group, listener, at);
}

inline
void  TreeModelBase::disconnectTreeNodesRemoved(const TreeNodesRemovedEventType::group_type &group)
{
    _TreeNodesRemovedEvent.disconnect(group);
}

inline
void  TreeModelBase::disconnectAllSlotsTreeNodesRemoved(void)
{
    _TreeNodesRemovedEvent.disconnect_all_slots();
}

inline
bool  TreeModelBase::isEmptyTreeNodesRemoved(void) const
{
    return _TreeNodesRemovedEvent.empty();
}

inline
UInt32  TreeModelBase::numSlotsTreeNodesRemoved(void) const
{
    return _TreeNodesRemovedEvent.num_slots();
}

inline
void TreeModelBase::produceTreeNodesRemoved(TreeNodesRemovedEventDetailsType* const e)
{
    produceEvent(TreeNodesRemovedEventId, e);
}

inline
boost::signals2::connection  TreeModelBase::connectTreeNodesWillBeRemoved(const TreeNodesWillBeRemovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeNodesWillBeRemovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelBase::connectTreeNodesWillBeRemoved(const TreeNodesWillBeRemovedEventType::group_type &group,
                                                    const TreeNodesWillBeRemovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeNodesWillBeRemovedEvent.connect(group, listener, at);
}

inline
void  TreeModelBase::disconnectTreeNodesWillBeRemoved(const TreeNodesWillBeRemovedEventType::group_type &group)
{
    _TreeNodesWillBeRemovedEvent.disconnect(group);
}

inline
void  TreeModelBase::disconnectAllSlotsTreeNodesWillBeRemoved(void)
{
    _TreeNodesWillBeRemovedEvent.disconnect_all_slots();
}

inline
bool  TreeModelBase::isEmptyTreeNodesWillBeRemoved(void) const
{
    return _TreeNodesWillBeRemovedEvent.empty();
}

inline
UInt32  TreeModelBase::numSlotsTreeNodesWillBeRemoved(void) const
{
    return _TreeNodesWillBeRemovedEvent.num_slots();
}

inline
void TreeModelBase::produceTreeNodesWillBeRemoved(TreeNodesWillBeRemovedEventDetailsType* const e)
{
    produceEvent(TreeNodesWillBeRemovedEventId, e);
}

inline
boost::signals2::connection  TreeModelBase::connectTreeStructureChanged(const TreeStructureChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TreeStructureChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TreeModelBase::connectTreeStructureChanged(const TreeStructureChangedEventType::group_type &group,
                                                    const TreeStructureChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TreeStructureChangedEvent.connect(group, listener, at);
}

inline
void  TreeModelBase::disconnectTreeStructureChanged(const TreeStructureChangedEventType::group_type &group)
{
    _TreeStructureChangedEvent.disconnect(group);
}

inline
void  TreeModelBase::disconnectAllSlotsTreeStructureChanged(void)
{
    _TreeStructureChangedEvent.disconnect_all_slots();
}

inline
bool  TreeModelBase::isEmptyTreeStructureChanged(void) const
{
    return _TreeStructureChangedEvent.empty();
}

inline
UInt32  TreeModelBase::numSlotsTreeStructureChanged(void) const
{
    return _TreeStructureChangedEvent.num_slots();
}

inline
void TreeModelBase::produceTreeStructureChanged(TreeStructureChangedEventDetailsType* const e)
{
    produceEvent(TreeStructureChangedEventId, e);
}

OSG_GEN_CONTAINERPTR(TreeModel);

OSG_END_NAMESPACE

