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

#include "OSGButtonEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGButtonEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGButtonEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! Button Produced Events

EventDescription *ButtonEventSource::_eventDesc[] =
{
    new EventDescription("ActionPerformed", 
                          "",
                          ActionPerformedEventId, 
                          FieldTraits<ActionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ButtonEventSource::getHandleActionPerformedSignal)),

    new EventDescription("MousePressedActionPerformed", 
                          "",
                          MousePressedActionPerformedEventId, 
                          FieldTraits<ActionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ButtonEventSource::getHandleMousePressedActionPerformedSignal))

};

EventProducerType ButtonEventSource::_producerType(
    "ButtonProducerType",
    "ComponentProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ButtonEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &ButtonEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void ButtonEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        OSG_ASSERT(dynamic_cast<ActionPerformedEventDetailsType* const>(e));

        _ActionPerformedEvent.set_combiner(ConsumableEventCombiner(e));
        _ActionPerformedEvent(dynamic_cast<ActionPerformedEventDetailsType* const>(e), ActionPerformedEventId);
        break;
    case MousePressedActionPerformedEventId:
        OSG_ASSERT(dynamic_cast<MousePressedActionPerformedEventDetailsType* const>(e));

        _MousePressedActionPerformedEvent.set_combiner(ConsumableEventCombiner(e));
        _MousePressedActionPerformedEvent(dynamic_cast<MousePressedActionPerformedEventDetailsType* const>(e), MousePressedActionPerformedEventId);
        break;
    default:
        Inherited::produceEvent(eventId, e);
        break;
    }
}

boost::signals2::connection ButtonEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        return _ActionPerformedEvent.connect(listener, at);
        break;
    case MousePressedActionPerformedEventId:
        return _MousePressedActionPerformedEvent.connect(listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, listener, at);
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  ButtonEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        return _ActionPerformedEvent.connect(group, listener, at);
        break;
    case MousePressedActionPerformedEventId:
        return _MousePressedActionPerformedEvent.connect(group, listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, group, listener, at);
        break;
    }

    return boost::signals2::connection();
}
    
void  ButtonEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        _ActionPerformedEvent.disconnect(group);
        break;
    case MousePressedActionPerformedEventId:
        _MousePressedActionPerformedEvent.disconnect(group);
        break;
    default:
        return Inherited::disconnectEvent(eventId, group);
        break;
    }
}

void  ButtonEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        _ActionPerformedEvent.disconnect_all_slots();
        break;
    case MousePressedActionPerformedEventId:
        _MousePressedActionPerformedEvent.disconnect_all_slots();
        break;
    default:
        Inherited::disconnectAllSlotsEvent(eventId);
        break;
    }
}

bool  ButtonEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        return _ActionPerformedEvent.empty();
        break;
    case MousePressedActionPerformedEventId:
        return _MousePressedActionPerformedEvent.empty();
        break;
    default:
        return Inherited::isEmptyEvent(eventId);
        break;
    }
}

UInt32  ButtonEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        return _ActionPerformedEvent.num_slots();
        break;
    case MousePressedActionPerformedEventId:
        return _MousePressedActionPerformedEvent.num_slots();
        break;
    default:
        return Inherited::numSlotsEvent(eventId);
        break;
    }
}

GetEventHandlePtr ButtonEventSource::getHandleActionPerformedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ActionPerformedEventType>(
             const_cast<ActionPerformedEventType *>(&_ActionPerformedEvent),
             _producerType.getEventDescription(ActionPerformedEventId),
             const_cast<ButtonEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr ButtonEventSource::getHandleMousePressedActionPerformedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MousePressedActionPerformedEventType>(
             const_cast<MousePressedActionPerformedEventType *>(&_MousePressedActionPerformedEvent),
             _producerType.getEventDescription(MousePressedActionPerformedEventId),
             const_cast<ButtonEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

ButtonEventSource::ButtonEventSource(void) :
    Inherited()
{
}

ButtonEventSource::ButtonEventSource(const ButtonEventSource &source) :
    Inherited(source)
{
}

ButtonEventSource::~ButtonEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ButtonEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void ButtonEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump Button NI" << std::endl;
}

OSG_END_NAMESPACE
