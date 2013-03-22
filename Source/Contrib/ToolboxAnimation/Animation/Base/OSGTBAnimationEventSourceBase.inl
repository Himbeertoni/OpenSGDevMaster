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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TBAnimationEventSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &TBAnimationEventSourceBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TBAnimationEventSourceBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TBAnimationEventSourceBase::getClassGroupId(void)
{
    return _type.getGroupId();
}
//! access the producer type of the class
inline
const EventProducerType &TBAnimationEventSourceBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TBAnimationEventSourceBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

/*------------------------------ get -----------------------------------*/

inline
UInt32 TBAnimationEventSourceBase::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *TBAnimationEventSourceBase::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *TBAnimationEventSourceBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 TBAnimationEventSourceBase::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationStarted(const AnimationStartedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationStartedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationStarted(const AnimationStartedEventType::group_type &group,
                                                    const AnimationStartedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationStartedEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSourceBase::disconnectAnimationStarted(const AnimationStartedEventType::group_type &group)
{
    _AnimationStartedEvent.disconnect(group);
}

inline
void  TBAnimationEventSourceBase::disconnectAllSlotsAnimationStarted(void)
{
    _AnimationStartedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSourceBase::isEmptyAnimationStarted(void) const
{
    return _AnimationStartedEvent.empty();
}

inline
UInt32  TBAnimationEventSourceBase::numSlotsAnimationStarted(void) const
{
    return _AnimationStartedEvent.num_slots();
}

inline
void TBAnimationEventSourceBase::produceAnimationStarted(AnimationStartedEventDetailsType* const e)
{
    produceEvent(AnimationStartedEventId, e);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationStopped(const AnimationStoppedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationStoppedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationStopped(const AnimationStoppedEventType::group_type &group,
                                                    const AnimationStoppedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationStoppedEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSourceBase::disconnectAnimationStopped(const AnimationStoppedEventType::group_type &group)
{
    _AnimationStoppedEvent.disconnect(group);
}

inline
void  TBAnimationEventSourceBase::disconnectAllSlotsAnimationStopped(void)
{
    _AnimationStoppedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSourceBase::isEmptyAnimationStopped(void) const
{
    return _AnimationStoppedEvent.empty();
}

inline
UInt32  TBAnimationEventSourceBase::numSlotsAnimationStopped(void) const
{
    return _AnimationStoppedEvent.num_slots();
}

inline
void TBAnimationEventSourceBase::produceAnimationStopped(AnimationStoppedEventDetailsType* const e)
{
    produceEvent(AnimationStoppedEventId, e);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationPaused(const AnimationPausedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationPausedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationPaused(const AnimationPausedEventType::group_type &group,
                                                    const AnimationPausedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationPausedEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSourceBase::disconnectAnimationPaused(const AnimationPausedEventType::group_type &group)
{
    _AnimationPausedEvent.disconnect(group);
}

inline
void  TBAnimationEventSourceBase::disconnectAllSlotsAnimationPaused(void)
{
    _AnimationPausedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSourceBase::isEmptyAnimationPaused(void) const
{
    return _AnimationPausedEvent.empty();
}

inline
UInt32  TBAnimationEventSourceBase::numSlotsAnimationPaused(void) const
{
    return _AnimationPausedEvent.num_slots();
}

inline
void TBAnimationEventSourceBase::produceAnimationPaused(AnimationPausedEventDetailsType* const e)
{
    produceEvent(AnimationPausedEventId, e);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationUnpaused(const AnimationUnpausedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationUnpausedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationUnpaused(const AnimationUnpausedEventType::group_type &group,
                                                    const AnimationUnpausedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationUnpausedEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSourceBase::disconnectAnimationUnpaused(const AnimationUnpausedEventType::group_type &group)
{
    _AnimationUnpausedEvent.disconnect(group);
}

inline
void  TBAnimationEventSourceBase::disconnectAllSlotsAnimationUnpaused(void)
{
    _AnimationUnpausedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSourceBase::isEmptyAnimationUnpaused(void) const
{
    return _AnimationUnpausedEvent.empty();
}

inline
UInt32  TBAnimationEventSourceBase::numSlotsAnimationUnpaused(void) const
{
    return _AnimationUnpausedEvent.num_slots();
}

inline
void TBAnimationEventSourceBase::produceAnimationUnpaused(AnimationUnpausedEventDetailsType* const e)
{
    produceEvent(AnimationUnpausedEventId, e);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationEnded(const AnimationEndedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationEndedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationEnded(const AnimationEndedEventType::group_type &group,
                                                    const AnimationEndedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationEndedEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSourceBase::disconnectAnimationEnded(const AnimationEndedEventType::group_type &group)
{
    _AnimationEndedEvent.disconnect(group);
}

inline
void  TBAnimationEventSourceBase::disconnectAllSlotsAnimationEnded(void)
{
    _AnimationEndedEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSourceBase::isEmptyAnimationEnded(void) const
{
    return _AnimationEndedEvent.empty();
}

inline
UInt32  TBAnimationEventSourceBase::numSlotsAnimationEnded(void) const
{
    return _AnimationEndedEvent.num_slots();
}

inline
void TBAnimationEventSourceBase::produceAnimationEnded(AnimationEndedEventDetailsType* const e)
{
    produceEvent(AnimationEndedEventId, e);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationCycled(const AnimationCycledEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AnimationCycledEvent.connect(listener, at);
}

inline
boost::signals2::connection  TBAnimationEventSourceBase::connectAnimationCycled(const AnimationCycledEventType::group_type &group,
                                                    const AnimationCycledEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AnimationCycledEvent.connect(group, listener, at);
}

inline
void  TBAnimationEventSourceBase::disconnectAnimationCycled(const AnimationCycledEventType::group_type &group)
{
    _AnimationCycledEvent.disconnect(group);
}

inline
void  TBAnimationEventSourceBase::disconnectAllSlotsAnimationCycled(void)
{
    _AnimationCycledEvent.disconnect_all_slots();
}

inline
bool  TBAnimationEventSourceBase::isEmptyAnimationCycled(void) const
{
    return _AnimationCycledEvent.empty();
}

inline
UInt32  TBAnimationEventSourceBase::numSlotsAnimationCycled(void) const
{
    return _AnimationCycledEvent.num_slots();
}

inline
void TBAnimationEventSourceBase::produceAnimationCycled(AnimationCycledEventDetailsType* const e)
{
    produceEvent(AnimationCycledEventId, e);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TBAnimationEventSourceBase::execSync (      TBAnimationEventSourceBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);
}
#endif


inline
const Char8 *TBAnimationEventSourceBase::getClassname(void)
{
    return "TBAnimationEventSource";
}
OSG_GEN_CONTAINERPTR(TBAnimationEventSource);

OSG_END_NAMESPACE

