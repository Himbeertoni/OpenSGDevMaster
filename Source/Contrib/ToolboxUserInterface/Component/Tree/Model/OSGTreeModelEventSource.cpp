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

#include "OSGTreeModelEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTreeModelEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGTreeModelEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! TreeModel Produced Events

EventDescription *TreeModelEventSource::_eventDesc[] =
{
    new EventDescription("TreeNodesChanged", 
                          "",
                          TreeNodesChangedEventId, 
                          FieldTraits<TreeModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelEventSource::getHandleTreeNodesChangedSignal)),

    new EventDescription("TreeNodesInserted", 
                          "",
                          TreeNodesInsertedEventId, 
                          FieldTraits<TreeModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelEventSource::getHandleTreeNodesInsertedSignal)),

    new EventDescription("TreeNodesRemoved", 
                          "",
                          TreeNodesRemovedEventId, 
                          FieldTraits<TreeModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelEventSource::getHandleTreeNodesRemovedSignal)),

    new EventDescription("TreeNodesWillBeRemoved", 
                          "",
                          TreeNodesWillBeRemovedEventId, 
                          FieldTraits<TreeModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelEventSource::getHandleTreeNodesWillBeRemovedSignal)),

    new EventDescription("TreeStructureChanged", 
                          "",
                          TreeStructureChangedEventId, 
                          FieldTraits<TreeModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeModelEventSource::getHandleTreeStructureChangedSignal))

};

EventProducerType TreeModelEventSource::_producerType(
    "TreeModelProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TreeModelEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &TreeModelEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void TreeModelEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
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

boost::signals2::connection TreeModelEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
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

boost::signals2::connection  TreeModelEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
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
    
void  TreeModelEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
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

void  TreeModelEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
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
        SWARNING << "TreeModelEventSource: No event defined with ID " << eventId << std::endl;
        break;
    }
}

bool  TreeModelEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
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

UInt32  TreeModelEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
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

GetEventHandlePtr TreeModelEventSource::getHandleTreeNodesChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeNodesChangedEventType>(
             const_cast<TreeNodesChangedEventType *>(&_TreeNodesChangedEvent),
             _producerType.getEventDescription(TreeNodesChangedEventId),
             const_cast<TreeModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelEventSource::getHandleTreeNodesInsertedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeNodesInsertedEventType>(
             const_cast<TreeNodesInsertedEventType *>(&_TreeNodesInsertedEvent),
             _producerType.getEventDescription(TreeNodesInsertedEventId),
             const_cast<TreeModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelEventSource::getHandleTreeNodesRemovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeNodesRemovedEventType>(
             const_cast<TreeNodesRemovedEventType *>(&_TreeNodesRemovedEvent),
             _producerType.getEventDescription(TreeNodesRemovedEventId),
             const_cast<TreeModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelEventSource::getHandleTreeNodesWillBeRemovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeNodesWillBeRemovedEventType>(
             const_cast<TreeNodesWillBeRemovedEventType *>(&_TreeNodesWillBeRemovedEvent),
             _producerType.getEventDescription(TreeNodesWillBeRemovedEventId),
             const_cast<TreeModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeModelEventSource::getHandleTreeStructureChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TreeStructureChangedEventType>(
             const_cast<TreeStructureChangedEventType *>(&_TreeStructureChangedEvent),
             _producerType.getEventDescription(TreeStructureChangedEventId),
             const_cast<TreeModelEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

TreeModelEventSource::TreeModelEventSource(void) :
    Inherited()
{
}

TreeModelEventSource::TreeModelEventSource(const TreeModelEventSource &source) :
    Inherited(source)
{
}

TreeModelEventSource::~TreeModelEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TreeModelEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TreeModelEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TreeModel NI" << std::endl;
}

OSG_END_NAMESPACE
