/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGTreeModelLayoutEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTreeModelLayoutEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGTreeModelLayoutEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! TreeModelLayout Produced Events

EventDescription *TreeModelLayoutEventSource::_eventDesc[] =
{
    new EventDescription("TreeCollapsed", 
                          "",
                          TreeCollapsedEventId, 
                          FieldTraits<TreeModelLayoutEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelLayoutEventSource::getHandleTreeCollapsedSignal)),

    new EventDescription("TreeExpanded", 
                          "",
                          TreeExpandedEventId, 
                          FieldTraits<TreeModelLayoutEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelLayoutEventSource::getHandleTreeExpandedSignal)),

    new EventDescription("TreeWillCollapse", 
                          "",
                          TreeWillCollapseEventId, 
                          FieldTraits<TreeModelLayoutEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelLayoutEventSource::getHandleTreeWillCollapseSignal)),

    new EventDescription("TreeWillExpand", 
                          "",
                          TreeWillExpandEventId, 
                          FieldTraits<TreeModelLayoutEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelLayoutEventSource::getHandleTreeWillExpandSignal)),

    new EventDescription("TreeNodesChanged", 
                          "",
                          TreeNodesChangedEventId, 
                          FieldTraits<TreeModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelLayoutEventSource::getHandleTreeNodesChangedSignal)),

    new EventDescription("TreeNodesInserted", 
                          "",
                          TreeNodesInsertedEventId, 
                          FieldTraits<TreeModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelLayoutEventSource::getHandleTreeNodesInsertedSignal)),

    new EventDescription("TreeNodesRemoved", 
                          "",
                          TreeNodesRemovedEventId, 
                          FieldTraits<TreeModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelLayoutEventSource::getHandleTreeNodesRemovedSignal)),

    new EventDescription("TreeNodesWillBeRemoved", 
                          "",
                          TreeNodesWillBeRemovedEventId, 
                          FieldTraits<TreeModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelLayoutEventSource::getHandleTreeNodesWillBeRemovedSignal)),

    new EventDescription("TreeStructureChanged", 
                          "",
                          TreeStructureChangedEventId, 
                          FieldTraits<TreeModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelLayoutEventSource::getHandleTreeStructureChangedSignal))

};

EventProducerType TreeModelLayoutEventSource::_producerType(
    "TreeModelLayoutProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TreeModelLayoutEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &TreeModelLayoutEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void TreeModelLayoutEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case TreeCollapsedEventId:
        OSG_ASSERT(dynamic_cast<TreeCollapsedEventDetailsType* const>(e));

        _TreeCollapsedEvent.set_combiner(ConsumableEventCombiner(e));
        _TreeCollapsedEvent(dynamic_cast<TreeCollapsedEventDetailsType* const>(e), TreeCollapsedEventId);
        break;
    case TreeExpandedEventId:
        OSG_ASSERT(dynamic_cast<TreeExpandedEventDetailsType* const>(e));

        _TreeExpandedEvent.set_combiner(ConsumableEventCombiner(e));
        _TreeExpandedEvent(dynamic_cast<TreeExpandedEventDetailsType* const>(e), TreeExpandedEventId);
        break;
    case TreeWillCollapseEventId:
        OSG_ASSERT(dynamic_cast<TreeWillCollapseEventDetailsType* const>(e));

        _TreeWillCollapseEvent.set_combiner(ConsumableEventCombiner(e));
        _TreeWillCollapseEvent(dynamic_cast<TreeWillCollapseEventDetailsType* const>(e), TreeWillCollapseEventId);
        break;
    case TreeWillExpandEventId:
        OSG_ASSERT(dynamic_cast<TreeWillExpandEventDetailsType* const>(e));

        _TreeWillExpandEvent.set_combiner(ConsumableEventCombiner(e));
        _TreeWillExpandEvent(dynamic_cast<TreeWillExpandEventDetailsType* const>(e), TreeWillExpandEventId);
        break;
    case TreeNodesChangedEventId:
        OSG_ASSERT(dynamic_cast<TreeNodesChangedEventDetailsType* const>(e));

        _TreeNodesChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _TreeNodesChangedEvent(dynamic_cast<TreeNodesChangedEventDetailsType* const>(e), TreeNodesChangedEventId);
        break;
    case TreeNodesInsertedEventId:
        OSG_ASSERT(dynamic_cast<TreeNodesInsertedEventDetailsType* const>(e));

        _TreeNodesInsertedEvent.set_combiner(ConsumableEventCombiner(e));
        _TreeNodesInsertedEvent(dynamic_cast<TreeNodesInsertedEventDetailsType* const>(e), TreeNodesInsertedEventId);
        break;
    case TreeNodesRemovedEventId:
        OSG_ASSERT(dynamic_cast<TreeNodesRemovedEventDetailsType* const>(e));

        _TreeNodesRemovedEvent.set_combiner(ConsumableEventCombiner(e));
        _TreeNodesRemovedEvent(dynamic_cast<TreeNodesRemovedEventDetailsType* const>(e), TreeNodesRemovedEventId);
        break;
    case TreeNodesWillBeRemovedEventId:
        OSG_ASSERT(dynamic_cast<TreeNodesWillBeRemovedEventDetailsType* const>(e));

        _TreeNodesWillBeRemovedEvent.set_combiner(ConsumableEventCombiner(e));
        _TreeNodesWillBeRemovedEvent(dynamic_cast<TreeNodesWillBeRemovedEventDetailsType* const>(e), TreeNodesWillBeRemovedEventId);
        break;
    case TreeStructureChangedEventId:
        OSG_ASSERT(dynamic_cast<TreeStructureChangedEventDetailsType* const>(e));

        _TreeStructureChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _TreeStructureChangedEvent(dynamic_cast<TreeStructureChangedEventDetailsType* const>(e), TreeStructureChangedEventId);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

boost::signals2::connection TreeModelLayoutEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case TreeCollapsedEventId:
        return _TreeCollapsedEvent.connect(listener, at);
        break;
    case TreeExpandedEventId:
        return _TreeExpandedEvent.connect(listener, at);
        break;
    case TreeWillCollapseEventId:
        return _TreeWillCollapseEvent.connect(listener, at);
        break;
    case TreeWillExpandEventId:
        return _TreeWillExpandEvent.connect(listener, at);
        break;
    case TreeNodesChangedEventId:
        return _TreeNodesChangedEvent.connect(listener, at);
        break;
    case TreeNodesInsertedEventId:
        return _TreeNodesInsertedEvent.connect(listener, at);
        break;
    case TreeNodesRemovedEventId:
        return _TreeNodesRemovedEvent.connect(listener, at);
        break;
    case TreeNodesWillBeRemovedEventId:
        return _TreeNodesWillBeRemovedEvent.connect(listener, at);
        break;
    case TreeStructureChangedEventId:
        return _TreeStructureChangedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  TreeModelLayoutEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case TreeCollapsedEventId:
        return _TreeCollapsedEvent.connect(group, listener, at);
        break;
    case TreeExpandedEventId:
        return _TreeExpandedEvent.connect(group, listener, at);
        break;
    case TreeWillCollapseEventId:
        return _TreeWillCollapseEvent.connect(group, listener, at);
        break;
    case TreeWillExpandEventId:
        return _TreeWillExpandEvent.connect(group, listener, at);
        break;
    case TreeNodesChangedEventId:
        return _TreeNodesChangedEvent.connect(group, listener, at);
        break;
    case TreeNodesInsertedEventId:
        return _TreeNodesInsertedEvent.connect(group, listener, at);
        break;
    case TreeNodesRemovedEventId:
        return _TreeNodesRemovedEvent.connect(group, listener, at);
        break;
    case TreeNodesWillBeRemovedEventId:
        return _TreeNodesWillBeRemovedEvent.connect(group, listener, at);
        break;
    case TreeStructureChangedEventId:
        return _TreeStructureChangedEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  TreeModelLayoutEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case TreeCollapsedEventId:
        _TreeCollapsedEvent.disconnect(group);
        break;
    case TreeExpandedEventId:
        _TreeExpandedEvent.disconnect(group);
        break;
    case TreeWillCollapseEventId:
        _TreeWillCollapseEvent.disconnect(group);
        break;
    case TreeWillExpandEventId:
        _TreeWillExpandEvent.disconnect(group);
        break;
    case TreeNodesChangedEventId:
        _TreeNodesChangedEvent.disconnect(group);
        break;
    case TreeNodesInsertedEventId:
        _TreeNodesInsertedEvent.disconnect(group);
        break;
    case TreeNodesRemovedEventId:
        _TreeNodesRemovedEvent.disconnect(group);
        break;
    case TreeNodesWillBeRemovedEventId:
        _TreeNodesWillBeRemovedEvent.disconnect(group);
        break;
    case TreeStructureChangedEventId:
        _TreeStructureChangedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

void  TreeModelLayoutEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case TreeCollapsedEventId:
        _TreeCollapsedEvent.disconnect_all_slots();
        break;
    case TreeExpandedEventId:
        _TreeExpandedEvent.disconnect_all_slots();
        break;
    case TreeWillCollapseEventId:
        _TreeWillCollapseEvent.disconnect_all_slots();
        break;
    case TreeWillExpandEventId:
        _TreeWillExpandEvent.disconnect_all_slots();
        break;
    case TreeNodesChangedEventId:
        _TreeNodesChangedEvent.disconnect_all_slots();
        break;
    case TreeNodesInsertedEventId:
        _TreeNodesInsertedEvent.disconnect_all_slots();
        break;
    case TreeNodesRemovedEventId:
        _TreeNodesRemovedEvent.disconnect_all_slots();
        break;
    case TreeNodesWillBeRemovedEventId:
        _TreeNodesWillBeRemovedEvent.disconnect_all_slots();
        break;
    case TreeStructureChangedEventId:
        _TreeStructureChangedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

bool  TreeModelLayoutEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case TreeCollapsedEventId:
        return _TreeCollapsedEvent.empty();
        break;
    case TreeExpandedEventId:
        return _TreeExpandedEvent.empty();
        break;
    case TreeWillCollapseEventId:
        return _TreeWillCollapseEvent.empty();
        break;
    case TreeWillExpandEventId:
        return _TreeWillExpandEvent.empty();
        break;
    case TreeNodesChangedEventId:
        return _TreeNodesChangedEvent.empty();
        break;
    case TreeNodesInsertedEventId:
        return _TreeNodesInsertedEvent.empty();
        break;
    case TreeNodesRemovedEventId:
        return _TreeNodesRemovedEvent.empty();
        break;
    case TreeNodesWillBeRemovedEventId:
        return _TreeNodesWillBeRemovedEvent.empty();
        break;
    case TreeStructureChangedEventId:
        return _TreeStructureChangedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return true;
        break;
    }
}

UInt32  TreeModelLayoutEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case TreeCollapsedEventId:
        return _TreeCollapsedEvent.num_slots();
        break;
    case TreeExpandedEventId:
        return _TreeExpandedEvent.num_slots();
        break;
    case TreeWillCollapseEventId:
        return _TreeWillCollapseEvent.num_slots();
        break;
    case TreeWillExpandEventId:
        return _TreeWillExpandEvent.num_slots();
        break;
    case TreeNodesChangedEventId:
        return _TreeNodesChangedEvent.num_slots();
        break;
    case TreeNodesInsertedEventId:
        return _TreeNodesInsertedEvent.num_slots();
        break;
    case TreeNodesRemovedEventId:
        return _TreeNodesRemovedEvent.num_slots();
        break;
    case TreeNodesWillBeRemovedEventId:
        return _TreeNodesWillBeRemovedEvent.num_slots();
        break;
    case TreeStructureChangedEventId:
        return _TreeStructureChangedEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return 0;
        break;
    }
}

GetEventHandlePtr TreeModelLayoutEventSource::getHandleTreeCollapsedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeCollapsedEventType>(
             const_cast<TreeCollapsedEventType *>(&_TreeCollapsedEvent),
             _producerType.getEventDescription(TreeCollapsedEventId),
             const_cast<TreeModelLayoutEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelLayoutEventSource::getHandleTreeExpandedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeExpandedEventType>(
             const_cast<TreeExpandedEventType *>(&_TreeExpandedEvent),
             _producerType.getEventDescription(TreeExpandedEventId),
             const_cast<TreeModelLayoutEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelLayoutEventSource::getHandleTreeWillCollapseSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeWillCollapseEventType>(
             const_cast<TreeWillCollapseEventType *>(&_TreeWillCollapseEvent),
             _producerType.getEventDescription(TreeWillCollapseEventId),
             const_cast<TreeModelLayoutEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelLayoutEventSource::getHandleTreeWillExpandSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeWillExpandEventType>(
             const_cast<TreeWillExpandEventType *>(&_TreeWillExpandEvent),
             _producerType.getEventDescription(TreeWillExpandEventId),
             const_cast<TreeModelLayoutEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelLayoutEventSource::getHandleTreeNodesChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeNodesChangedEventType>(
             const_cast<TreeNodesChangedEventType *>(&_TreeNodesChangedEvent),
             _producerType.getEventDescription(TreeNodesChangedEventId),
             const_cast<TreeModelLayoutEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelLayoutEventSource::getHandleTreeNodesInsertedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeNodesInsertedEventType>(
             const_cast<TreeNodesInsertedEventType *>(&_TreeNodesInsertedEvent),
             _producerType.getEventDescription(TreeNodesInsertedEventId),
             const_cast<TreeModelLayoutEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelLayoutEventSource::getHandleTreeNodesRemovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeNodesRemovedEventType>(
             const_cast<TreeNodesRemovedEventType *>(&_TreeNodesRemovedEvent),
             _producerType.getEventDescription(TreeNodesRemovedEventId),
             const_cast<TreeModelLayoutEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelLayoutEventSource::getHandleTreeNodesWillBeRemovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeNodesWillBeRemovedEventType>(
             const_cast<TreeNodesWillBeRemovedEventType *>(&_TreeNodesWillBeRemovedEvent),
             _producerType.getEventDescription(TreeNodesWillBeRemovedEventId),
             const_cast<TreeModelLayoutEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelLayoutEventSource::getHandleTreeStructureChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeStructureChangedEventType>(
             const_cast<TreeStructureChangedEventType *>(&_TreeStructureChangedEvent),
             _producerType.getEventDescription(TreeStructureChangedEventId),
             const_cast<TreeModelLayoutEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

TreeModelLayoutEventSource::TreeModelLayoutEventSource(void) :
    Inherited()
{
}

TreeModelLayoutEventSource::TreeModelLayoutEventSource(const TreeModelLayoutEventSource &source) :
    Inherited(source)
{
}

TreeModelLayoutEventSource::~TreeModelLayoutEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TreeModelLayoutEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TreeModelLayoutEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TreeModelLayout NI" << std::endl;
}

OSG_END_NAMESPACE
