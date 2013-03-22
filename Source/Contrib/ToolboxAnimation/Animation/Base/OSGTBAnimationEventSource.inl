/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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

OSG_BEGIN_NAMESPACE

//! access the producer type of the class
inline
const EventProducerType &TBAnimationEventSource::getProducerClassType(void)
{
    return _producerType;
}

/*------------------------------ get -----------------------------------*/

inline
UInt32 TBAnimationEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *TBAnimationEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *TBAnimationEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 TBAnimationEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationStarted(const AnimationStartedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationStartedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationStarted(const AnimationStartedEventType::group_type &group,
                                                    const AnimationStartedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationStartedEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSource::disconnectAnimationStarted(const AnimationStartedEventType::group_type &group)
{
    _AnimationStartedEvent.disconnect(group);
}

inline
void  TBAnimationEventSource::disconnectAllSlotsAnimationStarted(void)
{
    _AnimationStartedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSource::isEmptyAnimationStarted(void) const
{
    return _AnimationStartedEvent.empty();
}

inline
UInt32  TBAnimationEventSource::numSlotsAnimationStarted(void) const
{
    return _AnimationStartedEvent.num_slots();
}

inline
void TBAnimationEventSource::produceAnimationStarted(AnimationStartedEventDetailsType* const e)
{
    produceEvent(AnimationStartedEventId, e);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationStopped(const AnimationStoppedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationStoppedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationStopped(const AnimationStoppedEventType::group_type &group,
                                                    const AnimationStoppedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationStoppedEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSource::disconnectAnimationStopped(const AnimationStoppedEventType::group_type &group)
{
    _AnimationStoppedEvent.disconnect(group);
}

inline
void  TBAnimationEventSource::disconnectAllSlotsAnimationStopped(void)
{
    _AnimationStoppedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSource::isEmptyAnimationStopped(void) const
{
    return _AnimationStoppedEvent.empty();
}

inline
UInt32  TBAnimationEventSource::numSlotsAnimationStopped(void) const
{
    return _AnimationStoppedEvent.num_slots();
}

inline
void TBAnimationEventSource::produceAnimationStopped(AnimationStoppedEventDetailsType* const e)
{
    produceEvent(AnimationStoppedEventId, e);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationPaused(const AnimationPausedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationPausedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationPaused(const AnimationPausedEventType::group_type &group,
                                                    const AnimationPausedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationPausedEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSource::disconnectAnimationPaused(const AnimationPausedEventType::group_type &group)
{
    _AnimationPausedEvent.disconnect(group);
}

inline
void  TBAnimationEventSource::disconnectAllSlotsAnimationPaused(void)
{
    _AnimationPausedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSource::isEmptyAnimationPaused(void) const
{
    return _AnimationPausedEvent.empty();
}

inline
UInt32  TBAnimationEventSource::numSlotsAnimationPaused(void) const
{
    return _AnimationPausedEvent.num_slots();
}

inline
void TBAnimationEventSource::produceAnimationPaused(AnimationPausedEventDetailsType* const e)
{
    produceEvent(AnimationPausedEventId, e);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationUnpaused(const AnimationUnpausedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationUnpausedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationUnpaused(const AnimationUnpausedEventType::group_type &group,
                                                    const AnimationUnpausedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationUnpausedEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSource::disconnectAnimationUnpaused(const AnimationUnpausedEventType::group_type &group)
{
    _AnimationUnpausedEvent.disconnect(group);
}

inline
void  TBAnimationEventSource::disconnectAllSlotsAnimationUnpaused(void)
{
    _AnimationUnpausedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSource::isEmptyAnimationUnpaused(void) const
{
    return _AnimationUnpausedEvent.empty();
}

inline
UInt32  TBAnimationEventSource::numSlotsAnimationUnpaused(void) const
{
    return _AnimationUnpausedEvent.num_slots();
}

inline
void TBAnimationEventSource::produceAnimationUnpaused(AnimationUnpausedEventDetailsType* const e)
{
    produceEvent(AnimationUnpausedEventId, e);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationEnded(const AnimationEndedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationEndedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationEnded(const AnimationEndedEventType::group_type &group,
                                                    const AnimationEndedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationEndedEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSource::disconnectAnimationEnded(const AnimationEndedEventType::group_type &group)
{
    _AnimationEndedEvent.disconnect(group);
}

inline
void  TBAnimationEventSource::disconnectAllSlotsAnimationEnded(void)
{
    _AnimationEndedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSource::isEmptyAnimationEnded(void) const
{
    return _AnimationEndedEvent.empty();
}

inline
UInt32  TBAnimationEventSource::numSlotsAnimationEnded(void) const
{
    return _AnimationEndedEvent.num_slots();
}

inline
void TBAnimationEventSource::produceAnimationEnded(AnimationEndedEventDetailsType* const e)
{
    produceEvent(AnimationEndedEventId, e);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationCycled(const AnimationCycledEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationCycledEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSource::connectAnimationCycled(const AnimationCycledEventType::group_type &group,
                                                    const AnimationCycledEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationCycledEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSource::disconnectAnimationCycled(const AnimationCycledEventType::group_type &group)
{
    _AnimationCycledEvent.disconnect(group);
}

inline
void  TBAnimationEventSource::disconnectAllSlotsAnimationCycled(void)
{
    _AnimationCycledEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSource::isEmptyAnimationCycled(void) const
{
    return _AnimationCycledEvent.empty();
}

inline
UInt32  TBAnimationEventSource::numSlotsAnimationCycled(void) const
{
    return _AnimationCycledEvent.num_slots();
}

inline
void TBAnimationEventSource::produceAnimationCycled(AnimationCycledEventDetailsType* const e)
{
    produceEvent(AnimationCycledEventId, e);
}

OSG_END_NAMESPACE
