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

#include "OSGListModelEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGListModelEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGListModelEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! ListModel Produced Events

EventDescription *ListModelEventSource::_eventDesc[] =
{
    new EventDescription("ListDataContentsChanged", 
                          "",
                          ListDataContentsChangedEventId, 
                          FieldTraits<ListDataEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ListModelEventSource::getHandleListDataContentsChangedSignal)),

    new EventDescription("ListDataIntervalAdded", 
                          "",
                          ListDataIntervalAddedEventId, 
                          FieldTraits<ListDataEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ListModelEventSource::getHandleListDataIntervalAddedSignal)),

    new EventDescription("ListDataIntervalRemoved", 
                          "",
                          ListDataIntervalRemovedEventId, 
                          FieldTraits<ListDataEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ListModelEventSource::getHandleListDataIntervalRemovedSignal))

};

EventProducerType ListModelEventSource::_producerType(
    "ListModelProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ListModelEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &ListModelEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void ListModelEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case ListDataContentsChangedEventId:
        OSG_ASSERT(dynamic_cast<ListDataContentsChangedEventDetailsType* const>(e));

        _ListDataContentsChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _ListDataContentsChangedEvent(dynamic_cast<ListDataContentsChangedEventDetailsType* const>(e), ListDataContentsChangedEventId);
        break;
    case ListDataIntervalAddedEventId:
        OSG_ASSERT(dynamic_cast<ListDataIntervalAddedEventDetailsType* const>(e));

        _ListDataIntervalAddedEvent.set_combiner(ConsumableEventCombiner(e));
        _ListDataIntervalAddedEvent(dynamic_cast<ListDataIntervalAddedEventDetailsType* const>(e), ListDataIntervalAddedEventId);
        break;
    case ListDataIntervalRemovedEventId:
        OSG_ASSERT(dynamic_cast<ListDataIntervalRemovedEventDetailsType* const>(e));

        _ListDataIntervalRemovedEvent.set_combiner(ConsumableEventCombiner(e));
        _ListDataIntervalRemovedEvent(dynamic_cast<ListDataIntervalRemovedEventDetailsType* const>(e), ListDataIntervalRemovedEventId);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

boost::signals2::connection ListModelEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ListDataContentsChangedEventId:
        return _ListDataContentsChangedEvent.connect(listener, at);
        break;
    case ListDataIntervalAddedEventId:
        return _ListDataIntervalAddedEvent.connect(listener, at);
        break;
    case ListDataIntervalRemovedEventId:
        return _ListDataIntervalRemovedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  ListModelEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ListDataContentsChangedEventId:
        return _ListDataContentsChangedEvent.connect(group, listener, at);
        break;
    case ListDataIntervalAddedEventId:
        return _ListDataIntervalAddedEvent.connect(group, listener, at);
        break;
    case ListDataIntervalRemovedEventId:
        return _ListDataIntervalRemovedEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  ListModelEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case ListDataContentsChangedEventId:
        _ListDataContentsChangedEvent.disconnect(group);
        break;
    case ListDataIntervalAddedEventId:
        _ListDataIntervalAddedEvent.disconnect(group);
        break;
    case ListDataIntervalRemovedEventId:
        _ListDataIntervalRemovedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

void  ListModelEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case ListDataContentsChangedEventId:
        _ListDataContentsChangedEvent.disconnect_all_slots();
        break;
    case ListDataIntervalAddedEventId:
        _ListDataIntervalAddedEvent.disconnect_all_slots();
        break;
    case ListDataIntervalRemovedEventId:
        _ListDataIntervalRemovedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

bool  ListModelEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ListDataContentsChangedEventId:
        return _ListDataContentsChangedEvent.empty();
        break;
    case ListDataIntervalAddedEventId:
        return _ListDataIntervalAddedEvent.empty();
        break;
    case ListDataIntervalRemovedEventId:
        return _ListDataIntervalRemovedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return true;
        break;
    }
}

UInt32  ListModelEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ListDataContentsChangedEventId:
        return _ListDataContentsChangedEvent.num_slots();
        break;
    case ListDataIntervalAddedEventId:
        return _ListDataIntervalAddedEvent.num_slots();
        break;
    case ListDataIntervalRemovedEventId:
        return _ListDataIntervalRemovedEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return 0;
        break;
    }
}

GetEventHandlePtr ListModelEventSource::getHandleListDataContentsChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ListDataContentsChangedEventType>(
             const_cast<ListDataContentsChangedEventType *>(&_ListDataContentsChangedEvent),
             _producerType.getEventDescription(ListDataContentsChangedEventId),
             const_cast<ListModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ListModelEventSource::getHandleListDataIntervalAddedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ListDataIntervalAddedEventType>(
             const_cast<ListDataIntervalAddedEventType *>(&_ListDataIntervalAddedEvent),
             _producerType.getEventDescription(ListDataIntervalAddedEventId),
             const_cast<ListModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ListModelEventSource::getHandleListDataIntervalRemovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ListDataIntervalRemovedEventType>(
             const_cast<ListDataIntervalRemovedEventType *>(&_ListDataIntervalRemovedEvent),
             _producerType.getEventDescription(ListDataIntervalRemovedEventId),
             const_cast<ListModelEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

ListModelEventSource::ListModelEventSource(void) :
    Inherited()
{
}

ListModelEventSource::ListModelEventSource(const ListModelEventSource &source) :
    Inherited(source)
{
}

ListModelEventSource::~ListModelEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ListModelEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void ListModelEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump ListModel NI" << std::endl;
}

OSG_END_NAMESPACE
