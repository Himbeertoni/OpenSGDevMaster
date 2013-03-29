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

#include "OSGToggleButtonEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGToggleButtonEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGToggleButtonEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! ToggleButton Produced Events

EventDescription *ToggleButtonEventSource::_eventDesc[] =
{
    new EventDescription("ButtonSelected", 
                          "",
                          ButtonSelectedEventId, 
                          FieldTraits<ButtonSelectedEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ToggleButtonEventSource::getHandleButtonSelectedSignal)),

    new EventDescription("ButtonDeselected", 
                          "",
                          ButtonDeselectedEventId, 
                          FieldTraits<ButtonSelectedEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ToggleButtonEventSource::getHandleButtonDeselectedSignal))

};

EventProducerType ToggleButtonEventSource::_producerType(
    "ToggleButtonProducerType",
    "ButtonProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ToggleButtonEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &ToggleButtonEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void ToggleButtonEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case ButtonSelectedEventId:
        OSG_ASSERT(dynamic_cast<ButtonSelectedEventDetailsType* const>(e));

        _ButtonSelectedEvent.set_combiner(ConsumableEventCombiner(e));
        _ButtonSelectedEvent(dynamic_cast<ButtonSelectedEventDetailsType* const>(e), ButtonSelectedEventId);
        break;
    case ButtonDeselectedEventId:
        OSG_ASSERT(dynamic_cast<ButtonDeselectedEventDetailsType* const>(e));

        _ButtonDeselectedEvent.set_combiner(ConsumableEventCombiner(e));
        _ButtonDeselectedEvent(dynamic_cast<ButtonDeselectedEventDetailsType* const>(e), ButtonDeselectedEventId);
        break;
    default:
        Inherited::produceEvent(eventId, e);
        break;
    }
}

boost::signals2::connection ToggleButtonEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ButtonSelectedEventId:
        return _ButtonSelectedEvent.connect(listener, at);
        break;
    case ButtonDeselectedEventId:
        return _ButtonDeselectedEvent.connect(listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, listener, at);
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  ToggleButtonEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ButtonSelectedEventId:
        return _ButtonSelectedEvent.connect(group, listener, at);
        break;
    case ButtonDeselectedEventId:
        return _ButtonDeselectedEvent.connect(group, listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, group, listener, at);
        break;
    }

    return boost::signals2::connection();
}
    
void  ToggleButtonEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case ButtonSelectedEventId:
        _ButtonSelectedEvent.disconnect(group);
        break;
    case ButtonDeselectedEventId:
        _ButtonDeselectedEvent.disconnect(group);
        break;
    default:
        return Inherited::disconnectEvent(eventId, group);
        break;
    }
}

void  ToggleButtonEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case ButtonSelectedEventId:
        _ButtonSelectedEvent.disconnect_all_slots();
        break;
    case ButtonDeselectedEventId:
        _ButtonDeselectedEvent.disconnect_all_slots();
        break;
    default:
        Inherited::disconnectAllSlotsEvent(eventId);
        break;
    }
}

bool  ToggleButtonEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ButtonSelectedEventId:
        return _ButtonSelectedEvent.empty();
        break;
    case ButtonDeselectedEventId:
        return _ButtonDeselectedEvent.empty();
        break;
    default:
        return Inherited::isEmptyEvent(eventId);
        break;
    }
}

UInt32  ToggleButtonEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ButtonSelectedEventId:
        return _ButtonSelectedEvent.num_slots();
        break;
    case ButtonDeselectedEventId:
        return _ButtonDeselectedEvent.num_slots();
        break;
    default:
        return Inherited::numSlotsEvent(eventId);
        break;
    }
}

GetEventHandlePtr ToggleButtonEventSource::getHandleButtonSelectedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ButtonSelectedEventType>(
             const_cast<ButtonSelectedEventType *>(&_ButtonSelectedEvent),
             _producerType.getEventDescription(ButtonSelectedEventId),
             const_cast<ToggleButtonEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ToggleButtonEventSource::getHandleButtonDeselectedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ButtonDeselectedEventType>(
             const_cast<ButtonDeselectedEventType *>(&_ButtonDeselectedEvent),
             _producerType.getEventDescription(ButtonDeselectedEventId),
             const_cast<ToggleButtonEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

ToggleButtonEventSource::ToggleButtonEventSource(void) :
    Inherited()
{
}

ToggleButtonEventSource::ToggleButtonEventSource(const ToggleButtonEventSource &source) :
    Inherited(source)
{
}

ToggleButtonEventSource::~ToggleButtonEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ToggleButtonEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void ToggleButtonEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump ToggleButton NI" << std::endl;
}

OSG_END_NAMESPACE
