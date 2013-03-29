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

#include "OSGSingleSelectionModelEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGSingleSelectionModelEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGSingleSelectionModelEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! SingleSelectionModel Produced Events

EventDescription *SingleSelectionModelEventSource::_eventDesc[] =
{
    new EventDescription("SelectionChanged", 
                          "",
                          SelectionChangedEventId, 
                          FieldTraits<SelectionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&SingleSelectionModelEventSource::getHandleSelectionChangedSignal))

};

EventProducerType SingleSelectionModelEventSource::_producerType(
    "SingleSelectionModelProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void SingleSelectionModelEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &SingleSelectionModelEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void SingleSelectionModelEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        OSG_ASSERT(dynamic_cast<SelectionChangedEventDetailsType* const>(e));

        _SelectionChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _SelectionChangedEvent(dynamic_cast<SelectionChangedEventDetailsType* const>(e), SelectionChangedEventId);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

boost::signals2::connection SingleSelectionModelEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        return _SelectionChangedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  SingleSelectionModelEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        return _SelectionChangedEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  SingleSelectionModelEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        _SelectionChangedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

void  SingleSelectionModelEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        _SelectionChangedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

bool  SingleSelectionModelEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        return _SelectionChangedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return true;
        break;
    }
}

UInt32  SingleSelectionModelEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        return _SelectionChangedEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return 0;
        break;
    }
}

GetEventHandlePtr SingleSelectionModelEventSource::getHandleSelectionChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<SelectionChangedEventType>(
             const_cast<SelectionChangedEventType *>(&_SelectionChangedEvent),
             _producerType.getEventDescription(SelectionChangedEventId),
             const_cast<SingleSelectionModelEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

SingleSelectionModelEventSource::SingleSelectionModelEventSource(void) :
    Inherited()
{
}

SingleSelectionModelEventSource::SingleSelectionModelEventSource(const SingleSelectionModelEventSource &source) :
    Inherited(source)
{
}

SingleSelectionModelEventSource::~SingleSelectionModelEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void SingleSelectionModelEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void SingleSelectionModelEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump SingleSelectionModel NI" << std::endl;
}

OSG_END_NAMESPACE
