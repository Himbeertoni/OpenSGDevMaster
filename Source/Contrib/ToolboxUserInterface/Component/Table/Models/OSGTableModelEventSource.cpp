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

#include "OSGTableModelEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTableModelEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGTableModelEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! TableModel Produced Events

EventDescription *TableModelEventSource::_eventDesc[] =
{
    new EventDescription("ContentsHeaderRowChanged", 
                          "",
                          ContentsHeaderRowChangedEventId, 
                          FieldTraits<TableModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TableModelEventSource::getHandleContentsHeaderRowChangedSignal)),

    new EventDescription("ContentsChanged", 
                          "",
                          ContentsChangedEventId, 
                          FieldTraits<TableModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TableModelEventSource::getHandleContentsChangedSignal)),

    new EventDescription("IntervalAdded", 
                          "",
                          IntervalAddedEventId, 
                          FieldTraits<TableModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TableModelEventSource::getHandleIntervalAddedSignal)),

    new EventDescription("IntervalRemoved", 
                          "",
                          IntervalRemovedEventId, 
                          FieldTraits<TableModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TableModelEventSource::getHandleIntervalRemovedSignal))

};

EventProducerType TableModelEventSource::_producerType(
    "TableModelProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TableModelEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &TableModelEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void TableModelEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case ContentsHeaderRowChangedEventId:
        OSG_ASSERT(dynamic_cast<ContentsHeaderRowChangedEventDetailsType* const>(e));

        _ContentsHeaderRowChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _ContentsHeaderRowChangedEvent(dynamic_cast<ContentsHeaderRowChangedEventDetailsType* const>(e), ContentsHeaderRowChangedEventId);
        break;
    case ContentsChangedEventId:
        OSG_ASSERT(dynamic_cast<ContentsChangedEventDetailsType* const>(e));

        _ContentsChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _ContentsChangedEvent(dynamic_cast<ContentsChangedEventDetailsType* const>(e), ContentsChangedEventId);
        break;
    case IntervalAddedEventId:
        OSG_ASSERT(dynamic_cast<IntervalAddedEventDetailsType* const>(e));

        _IntervalAddedEvent.set_combiner(ConsumableEventCombiner(e));
        _IntervalAddedEvent(dynamic_cast<IntervalAddedEventDetailsType* const>(e), IntervalAddedEventId);
        break;
    case IntervalRemovedEventId:
        OSG_ASSERT(dynamic_cast<IntervalRemovedEventDetailsType* const>(e));

        _IntervalRemovedEvent.set_combiner(ConsumableEventCombiner(e));
        _IntervalRemovedEvent(dynamic_cast<IntervalRemovedEventDetailsType* const>(e), IntervalRemovedEventId);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

boost::signals2::connection TableModelEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ContentsHeaderRowChangedEventId:
        return _ContentsHeaderRowChangedEvent.connect(listener, at);
        break;
    case ContentsChangedEventId:
        return _ContentsChangedEvent.connect(listener, at);
        break;
    case IntervalAddedEventId:
        return _IntervalAddedEvent.connect(listener, at);
        break;
    case IntervalRemovedEventId:
        return _IntervalRemovedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  TableModelEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ContentsHeaderRowChangedEventId:
        return _ContentsHeaderRowChangedEvent.connect(group, listener, at);
        break;
    case ContentsChangedEventId:
        return _ContentsChangedEvent.connect(group, listener, at);
        break;
    case IntervalAddedEventId:
        return _IntervalAddedEvent.connect(group, listener, at);
        break;
    case IntervalRemovedEventId:
        return _IntervalRemovedEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  TableModelEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case ContentsHeaderRowChangedEventId:
        _ContentsHeaderRowChangedEvent.disconnect(group);
        break;
    case ContentsChangedEventId:
        _ContentsChangedEvent.disconnect(group);
        break;
    case IntervalAddedEventId:
        _IntervalAddedEvent.disconnect(group);
        break;
    case IntervalRemovedEventId:
        _IntervalRemovedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

void  TableModelEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case ContentsHeaderRowChangedEventId:
        _ContentsHeaderRowChangedEvent.disconnect_all_slots();
        break;
    case ContentsChangedEventId:
        _ContentsChangedEvent.disconnect_all_slots();
        break;
    case IntervalAddedEventId:
        _IntervalAddedEvent.disconnect_all_slots();
        break;
    case IntervalRemovedEventId:
        _IntervalRemovedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "TableModelEventSource: No event defined with ID " << eventId << std::endl;
        break;
    }
}

bool  TableModelEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ContentsHeaderRowChangedEventId:
        return _ContentsHeaderRowChangedEvent.empty();
        break;
    case ContentsChangedEventId:
        return _ContentsChangedEvent.empty();
        break;
    case IntervalAddedEventId:
        return _IntervalAddedEvent.empty();
        break;
    case IntervalRemovedEventId:
        return _IntervalRemovedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return true;
        break;
    }
}

UInt32  TableModelEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ContentsHeaderRowChangedEventId:
        return _ContentsHeaderRowChangedEvent.num_slots();
        break;
    case ContentsChangedEventId:
        return _ContentsChangedEvent.num_slots();
        break;
    case IntervalAddedEventId:
        return _IntervalAddedEvent.num_slots();
        break;
    case IntervalRemovedEventId:
        return _IntervalRemovedEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return 0;
        break;
    }
}

GetEventHandlePtr TableModelEventSource::getHandleContentsHeaderRowChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ContentsHeaderRowChangedEventType>(
             const_cast<ContentsHeaderRowChangedEventType *>(&_ContentsHeaderRowChangedEvent),
             _producerType.getEventDescription(ContentsHeaderRowChangedEventId),
             const_cast<TableModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TableModelEventSource::getHandleContentsChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ContentsChangedEventType>(
             const_cast<ContentsChangedEventType *>(&_ContentsChangedEvent),
             _producerType.getEventDescription(ContentsChangedEventId),
             const_cast<TableModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TableModelEventSource::getHandleIntervalAddedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<IntervalAddedEventType>(
             const_cast<IntervalAddedEventType *>(&_IntervalAddedEvent),
             _producerType.getEventDescription(IntervalAddedEventId),
             const_cast<TableModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TableModelEventSource::getHandleIntervalRemovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<IntervalRemovedEventType>(
             const_cast<IntervalRemovedEventType *>(&_IntervalRemovedEvent),
             _producerType.getEventDescription(IntervalRemovedEventId),
             const_cast<TableModelEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

TableModelEventSource::TableModelEventSource(void) :
    Inherited()
{
}

TableModelEventSource::TableModelEventSource(const TableModelEventSource &source) :
    Inherited(source)
{
}

TableModelEventSource::~TableModelEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TableModelEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TableModelEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TableModel NI" << std::endl;
}

OSG_END_NAMESPACE
