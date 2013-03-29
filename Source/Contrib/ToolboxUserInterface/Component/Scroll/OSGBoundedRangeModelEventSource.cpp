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

#include "OSGBoundedRangeModelEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBoundedRangeModelEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGBoundedRangeModelEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! BoundedRangeModel Produced Events

EventDescription *BoundedRangeModelEventSource::_eventDesc[] =
{
    new EventDescription("StateChanged", 
                          "",
                          StateChangedEventId, 
                          FieldTraits<ChangeEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&BoundedRangeModelEventSource::getHandleStateChangedSignal))

};

EventProducerType BoundedRangeModelEventSource::_producerType(
    "BoundedRangeModelProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BoundedRangeModelEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &BoundedRangeModelEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void BoundedRangeModelEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case StateChangedEventId:
        OSG_ASSERT(dynamic_cast<StateChangedEventDetailsType* const>(e));

        _StateChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _StateChangedEvent(dynamic_cast<StateChangedEventDetailsType* const>(e), StateChangedEventId);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

boost::signals2::connection BoundedRangeModelEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case StateChangedEventId:
        return _StateChangedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  BoundedRangeModelEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case StateChangedEventId:
        return _StateChangedEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  BoundedRangeModelEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case StateChangedEventId:
        _StateChangedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

void  BoundedRangeModelEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case StateChangedEventId:
        _StateChangedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

bool  BoundedRangeModelEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case StateChangedEventId:
        return _StateChangedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return true;
        break;
    }
}

UInt32  BoundedRangeModelEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case StateChangedEventId:
        return _StateChangedEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return 0;
        break;
    }
}

GetEventHandlePtr BoundedRangeModelEventSource::getHandleStateChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<StateChangedEventType>(
             const_cast<StateChangedEventType *>(&_StateChangedEvent),
             _producerType.getEventDescription(StateChangedEventId),
             const_cast<BoundedRangeModelEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

BoundedRangeModelEventSource::BoundedRangeModelEventSource(void) :
    Inherited()
{
}

BoundedRangeModelEventSource::BoundedRangeModelEventSource(const BoundedRangeModelEventSource &source) :
    Inherited(source)
{
}

BoundedRangeModelEventSource::~BoundedRangeModelEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BoundedRangeModelEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BoundedRangeModelEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BoundedRangeModel NI" << std::endl;
}

OSG_END_NAMESPACE
