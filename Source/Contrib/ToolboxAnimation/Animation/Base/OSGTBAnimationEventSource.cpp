/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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

#include "OSGTBAnimationEventSource.h"
#include "OSGUpdateEventDetails.h"

#include "OSGEventDetails.h"
#include "OSGTBAnimation.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTBAnimationEventSource.cpp file.
// To modify it, please change the .fcd file (OSGTBAnimationEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TBAnimationEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


//! Animation Produced Events

EventDescription *TBAnimationEventSource::_eventDesc[] =
{
    new EventDescription("AnimationStarted", 
                          "",
                          AnimationStartedEventId, 
                          FieldTraits<AnimationEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TBAnimationEventSource::getHandleAnimationStartedSignal)),

    new EventDescription("AnimationStopped", 
                          "",
                          AnimationStoppedEventId, 
                          FieldTraits<AnimationEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TBAnimationEventSource::getHandleAnimationStoppedSignal)),

    new EventDescription("AnimationPaused", 
                          "",
                          AnimationPausedEventId, 
                          FieldTraits<AnimationEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TBAnimationEventSource::getHandleAnimationPausedSignal)),

    new EventDescription("AnimationUnpaused", 
                          "",
                          AnimationUnpausedEventId, 
                          FieldTraits<AnimationEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TBAnimationEventSource::getHandleAnimationUnpausedSignal)),

    new EventDescription("AnimationEnded", 
                          "",
                          AnimationEndedEventId, 
                          FieldTraits<AnimationEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TBAnimationEventSource::getHandleAnimationEndedSignal)),

    new EventDescription("AnimationCycled", 
                          "",
                          AnimationCycledEventId, 
                          FieldTraits<AnimationEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TBAnimationEventSource::getHandleAnimationCycledSignal))

};

EventProducerType TBAnimationEventSource::_producerType(
    "AnimationProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));

const EventProducerType &TBAnimationEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*------------------------- event producers ----------------------------------*/
void TBAnimationEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case AnimationStartedEventId:
        OSG_ASSERT(dynamic_cast<AnimationStartedEventDetailsType* const>(e));

        _AnimationStartedEvent.set_combiner(ConsumableEventCombiner(e));
        _AnimationStartedEvent(dynamic_cast<AnimationStartedEventDetailsType* const>(e), AnimationStartedEventId);
        break;
    case AnimationStoppedEventId:
        OSG_ASSERT(dynamic_cast<AnimationStoppedEventDetailsType* const>(e));

        _AnimationStoppedEvent.set_combiner(ConsumableEventCombiner(e));
        _AnimationStoppedEvent(dynamic_cast<AnimationStoppedEventDetailsType* const>(e), AnimationStoppedEventId);
        break;
    case AnimationPausedEventId:
        OSG_ASSERT(dynamic_cast<AnimationPausedEventDetailsType* const>(e));

        _AnimationPausedEvent.set_combiner(ConsumableEventCombiner(e));
        _AnimationPausedEvent(dynamic_cast<AnimationPausedEventDetailsType* const>(e), AnimationPausedEventId);
        break;
    case AnimationUnpausedEventId:
        OSG_ASSERT(dynamic_cast<AnimationUnpausedEventDetailsType* const>(e));

        _AnimationUnpausedEvent.set_combiner(ConsumableEventCombiner(e));
        _AnimationUnpausedEvent(dynamic_cast<AnimationUnpausedEventDetailsType* const>(e), AnimationUnpausedEventId);
        break;
    case AnimationEndedEventId:
        OSG_ASSERT(dynamic_cast<AnimationEndedEventDetailsType* const>(e));

        _AnimationEndedEvent.set_combiner(ConsumableEventCombiner(e));
        _AnimationEndedEvent(dynamic_cast<AnimationEndedEventDetailsType* const>(e), AnimationEndedEventId);
        break;
    case AnimationCycledEventId:
        OSG_ASSERT(dynamic_cast<AnimationCycledEventDetailsType* const>(e));

        _AnimationCycledEvent.set_combiner(ConsumableEventCombiner(e));
        _AnimationCycledEvent(dynamic_cast<AnimationCycledEventDetailsType* const>(e), AnimationCycledEventId);
        break;
    default:
        SWARNING << "TBAnimationEventSource: No event defined with ID " << eventId << std::endl;
        break;
    }
}

boost::signals2::connection TBAnimationEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case AnimationStartedEventId:
        return _AnimationStartedEvent.connect(listener, at);
        break;
    case AnimationStoppedEventId:
        return _AnimationStoppedEvent.connect(listener, at);
        break;
    case AnimationPausedEventId:
        return _AnimationPausedEvent.connect(listener, at);
        break;
    case AnimationUnpausedEventId:
        return _AnimationUnpausedEvent.connect(listener, at);
        break;
    case AnimationEndedEventId:
        return _AnimationEndedEvent.connect(listener, at);
        break;
    case AnimationCycledEventId:
        return _AnimationCycledEvent.connect(listener, at);
        break;
    default:
        SWARNING << "TBAnimationEventSource: No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  TBAnimationEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case AnimationStartedEventId:
        return _AnimationStartedEvent.connect(group, listener, at);
        break;
    case AnimationStoppedEventId:
        return _AnimationStoppedEvent.connect(group, listener, at);
        break;
    case AnimationPausedEventId:
        return _AnimationPausedEvent.connect(group, listener, at);
        break;
    case AnimationUnpausedEventId:
        return _AnimationUnpausedEvent.connect(group, listener, at);
        break;
    case AnimationEndedEventId:
        return _AnimationEndedEvent.connect(group, listener, at);
        break;
    case AnimationCycledEventId:
        return _AnimationCycledEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "TBAnimationEventSource: No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  TBAnimationEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case AnimationStartedEventId:
        _AnimationStartedEvent.disconnect(group);
        break;
    case AnimationStoppedEventId:
        _AnimationStoppedEvent.disconnect(group);
        break;
    case AnimationPausedEventId:
        _AnimationPausedEvent.disconnect(group);
        break;
    case AnimationUnpausedEventId:
        _AnimationUnpausedEvent.disconnect(group);
        break;
    case AnimationEndedEventId:
        _AnimationEndedEvent.disconnect(group);
        break;
    case AnimationCycledEventId:
        _AnimationCycledEvent.disconnect(group);
        break;
    default:
        SWARNING << "TBAnimationEventSource: No event defined with ID " << eventId << std::endl;
        break;
    }
}

void  TBAnimationEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case AnimationStartedEventId:
        _AnimationStartedEvent.disconnect_all_slots();
        break;
    case AnimationStoppedEventId:
        _AnimationStoppedEvent.disconnect_all_slots();
        break;
    case AnimationPausedEventId:
        _AnimationPausedEvent.disconnect_all_slots();
        break;
    case AnimationUnpausedEventId:
        _AnimationUnpausedEvent.disconnect_all_slots();
        break;
    case AnimationEndedEventId:
        _AnimationEndedEvent.disconnect_all_slots();
        break;
    case AnimationCycledEventId:
        _AnimationCycledEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "TBAnimationEventSource: No event defined with ID " << eventId << std::endl;
        break;
    }
}

bool  TBAnimationEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case AnimationStartedEventId:
        return _AnimationStartedEvent.empty();
        break;
    case AnimationStoppedEventId:
        return _AnimationStoppedEvent.empty();
        break;
    case AnimationPausedEventId:
        return _AnimationPausedEvent.empty();
        break;
    case AnimationUnpausedEventId:
        return _AnimationUnpausedEvent.empty();
        break;
    case AnimationEndedEventId:
        return _AnimationEndedEvent.empty();
        break;
    case AnimationCycledEventId:
        return _AnimationCycledEvent.empty();
        break;
    default:
        SWARNING << "TBAnimationEventSource: No event defined with ID " << eventId << std::endl;
        return true;
        break;
    }
}

UInt32  TBAnimationEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case AnimationStartedEventId:
        return _AnimationStartedEvent.num_slots();
        break;
    case AnimationStoppedEventId:
        return _AnimationStoppedEvent.num_slots();
        break;
    case AnimationPausedEventId:
        return _AnimationPausedEvent.num_slots();
        break;
    case AnimationUnpausedEventId:
        return _AnimationUnpausedEvent.num_slots();
        break;
    case AnimationEndedEventId:
        return _AnimationEndedEvent.num_slots();
        break;
    case AnimationCycledEventId:
        return _AnimationCycledEvent.num_slots();
        break;
    default:
        SWARNING << "TBAnimationEventSource: No event defined with ID " << eventId << std::endl;
        return 0;
        break;
    }
}


GetEventHandlePtr TBAnimationEventSource::getHandleAnimationStartedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<AnimationStartedEventType>(
             const_cast<AnimationStartedEventType *>(&_AnimationStartedEvent),
             _producerType.getEventDescription(AnimationStartedEventId),
             const_cast<TBAnimationEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TBAnimationEventSource::getHandleAnimationStoppedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<AnimationStoppedEventType>(
             const_cast<AnimationStoppedEventType *>(&_AnimationStoppedEvent),
             _producerType.getEventDescription(AnimationStoppedEventId),
             const_cast<TBAnimationEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TBAnimationEventSource::getHandleAnimationPausedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<AnimationPausedEventType>(
             const_cast<AnimationPausedEventType *>(&_AnimationPausedEvent),
             _producerType.getEventDescription(AnimationPausedEventId),
             const_cast<TBAnimationEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TBAnimationEventSource::getHandleAnimationUnpausedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<AnimationUnpausedEventType>(
             const_cast<AnimationUnpausedEventType *>(&_AnimationUnpausedEvent),
             _producerType.getEventDescription(AnimationUnpausedEventId),
             const_cast<TBAnimationEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TBAnimationEventSource::getHandleAnimationEndedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<AnimationEndedEventType>(
             const_cast<AnimationEndedEventType *>(&_AnimationEndedEvent),
             _producerType.getEventDescription(AnimationEndedEventId),
             const_cast<TBAnimationEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TBAnimationEventSource::getHandleAnimationCycledSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<AnimationCycledEventType>(
             const_cast<AnimationCycledEventType *>(&_AnimationCycledEvent),
             _producerType.getEventDescription(AnimationCycledEventId),
             const_cast<TBAnimationEventSource *>(this)));

    return returnValue;
}
/*!\fn void Animation::attachUpdateProducer(ReflexiveContainer* const producer)
 *
 * \brief Attach an update event producer to this animation.
 *
 * This event producer should produce an update event regularly to update the
 * animation.
 *
 * @param[in] Producer A ReflexiveContainer that can produce an UpdateEvent.
 */
void TBAnimationEventSource::attachUpdateProducer( EventContainer* const producer )
{
    const EventDescription* Desc(producer->getProducerType().findEventDescription("Update"));

    if(_UpdateEventConnection.connected())
    {
        _UpdateEventConnection.disconnect();
    }

    _UpdateEventConnection = connectToEvent(Desc, producer);
}

void TBAnimationEventSource::disconnectUpdate()
{
    _UpdateEventConnection.disconnect();
}

/*!\fn void Animation::detachUpdateProducer(void)
 *
 * \brief Detach the event update producer from this animation if there is one
 * attached.
 */
void TBAnimationEventSource::detachUpdateProducer(void)
{
    _UpdateEventConnection.disconnect();
}

bool TBAnimationEventSource::isConnectableEvent(EventDescription const * eventDesc) const
{
    return eventDesc->getEventArgumentType() == FieldTraits<UpdateEventDetails *>::getType();
}

TBAnimationEventSource::EventDescVector TBAnimationEventSource::getConnectableEvents(void) const
{
    EventDescVector connectableEvents;

    EventDescPair updateEventDesc("Update", &FieldTraits<UpdateEventDetails *>::getType());

    connectableEvents.push_back(updateEventDesc);

    return connectableEvents;
}

bool
TBAnimationEventSource::isConnected(EventDescription const * eventDesc) const
{
    if(eventDesc->getEventArgumentType() == FieldTraits<UpdateEventDetails *>::getType())
    {
        return _UpdateEventConnection.connected();
    }
    else
    {
        return false;
    }
}

bool
TBAnimationEventSource::disconnectFromEvent(EventDescription const * eventDesc) const
{
    if(eventDesc->getEventArgumentType() == FieldTraits<UpdateEventDetails *>::getType())
    {
        _UpdateEventConnection.disconnect();
        return true;
    }
    else
    {
        return false;
    }
}

boost::signals2::connection 
TBAnimationEventSource::connectToEvent(EventDescription const * eventDesc,
                            EventContainer* const eventProducer) const
{
    //Validate the EventDescription and producer
    EventDescription const * localDesc( eventProducer->getEventDescription(eventDesc->getName().c_str()) );

	if( validateConnectable(eventDesc,eventProducer))
    {
        return eventProducer->connectEvent(localDesc->getEventId(),
                                           boost::bind(&TBAnimationEventSource::handleUpdate,
                                                       const_cast<TBAnimationEventSource*>(this),
                                                       _1));
    }
    else
    {
        return boost::signals2::connection();
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void TBAnimationEventSource::produceAnimationStarted(void)
{
    AnimationEventDetailsUnrecPtr Details = AnimationEventDetails::create(this,getTimeStamp());
   
    produceAnimationStarted(Details);
}

void TBAnimationEventSource::produceAnimationStopped(void)
{
    AnimationEventDetailsUnrecPtr Details = AnimationEventDetails::create(this,getTimeStamp());
   
    produceAnimationStopped(Details);
}

void TBAnimationEventSource::produceAnimationPaused(void)
{
    AnimationEventDetailsUnrecPtr Details = AnimationEventDetails::create(this,getTimeStamp());
   
    produceAnimationPaused(Details);
}

void TBAnimationEventSource::produceAnimationUnpaused(void)
{
    AnimationEventDetailsUnrecPtr Details = AnimationEventDetails::create(this,getTimeStamp());
   
    produceAnimationUnpaused(Details);
}

void TBAnimationEventSource::produceAnimationEnded(void)
{
    AnimationEventDetailsUnrecPtr Details = AnimationEventDetails::create(this,getTimeStamp());
   
    produceAnimationEnded(Details);
}

void TBAnimationEventSource::produceAnimationCycled(void)
{
    AnimationEventDetailsUnrecPtr Details = AnimationEventDetails::create(this,getTimeStamp());
   
    produceAnimationCycled(Details);
}
/*----------------------- constructors & destructors ----------------------*/

TBAnimationEventSource::TBAnimationEventSource(void) :
    Inherited()
{
}

TBAnimationEventSource::TBAnimationEventSource(const TBAnimationEventSource &source) :
    Inherited(source)
{
}

TBAnimationEventSource::~TBAnimationEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TBAnimationEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TBAnimationEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TBAnimationEventSource NI" << std::endl;
}

void TBAnimationEventSource::handleUpdate(EventDetails* const details)
{
    Time elapsed = dynamic_cast<UpdateEventDetails* const>(details)->getElapsedTime();
    _sfParent.getValue()->update(elapsed);
}
OSG_END_NAMESPACE
