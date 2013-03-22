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

#ifndef _OSGTBANIMATIONEVENTSOURCE_H_
#define _OSGTBANIMATIONEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTBAnimationEventSourceBase.h"

//Event Producer Headers
#include "OSGActivity.h"
#include "OSGConsumableEventCombiner.h"

#include "OSGAnimationEventDetailsFields.h"

#include "OSGEventProducerType.h"

OSG_BEGIN_NAMESPACE

/*! \brief TBAnimationEventSource class. See \ref
           PageContribToolboxAnimationTBAnimationEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXANIMATION_DLLMAPPING TBAnimationEventSource : public TBAnimationEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TBAnimationEventSourceBase Inherited;
    typedef TBAnimationEventSource     Self;
   
    typedef AnimationEventDetails AnimationStartedEventDetailsType;
    typedef AnimationEventDetails AnimationStoppedEventDetailsType;
    typedef AnimationEventDetails AnimationPausedEventDetailsType;
    typedef AnimationEventDetails AnimationUnpausedEventDetailsType;
    typedef AnimationEventDetails AnimationEndedEventDetailsType;
    typedef AnimationEventDetails AnimationCycledEventDetailsType;

    typedef boost::signals2::signal<void (EventDetails* const            , UInt32)> BaseEventType;
    typedef boost::signals2::signal<void (AnimationEventDetails* const, UInt32), ConsumableEventCombiner> AnimationStartedEventType;
    typedef boost::signals2::signal<void (AnimationEventDetails* const, UInt32), ConsumableEventCombiner> AnimationStoppedEventType;
    typedef boost::signals2::signal<void (AnimationEventDetails* const, UInt32), ConsumableEventCombiner> AnimationPausedEventType;
    typedef boost::signals2::signal<void (AnimationEventDetails* const, UInt32), ConsumableEventCombiner> AnimationUnpausedEventType;
    typedef boost::signals2::signal<void (AnimationEventDetails* const, UInt32), ConsumableEventCombiner> AnimationEndedEventType;
    typedef boost::signals2::signal<void (AnimationEventDetails* const, UInt32), ConsumableEventCombiner> AnimationCycledEventType;

    enum
    {
        AnimationStartedEventId = 1,
        AnimationStoppedEventId = AnimationStartedEventId + 1,
        AnimationPausedEventId = AnimationStoppedEventId + 1,
        AnimationUnpausedEventId = AnimationPausedEventId + 1,
        AnimationEndedEventId = AnimationUnpausedEventId + 1,
        AnimationCycledEventId = AnimationEndedEventId + 1,
        NextProducedEventId = AnimationCycledEventId + 1
    };

    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Event Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 

    virtual UInt32                   getNumProducedEvents       (void                                ) const;
    virtual const EventDescription *getProducedEventDescription(const std::string &ProducedEventName) const;
    virtual const EventDescription *getProducedEventDescription(UInt32 ProducedEventId              ) const;
    virtual UInt32                   getProducedEventId         (const std::string &ProducedEventName) const;
    
    virtual boost::signals2::connection connectEvent(UInt32 eventId, 
                                              const BaseEventType::slot_type &listener,
                                              boost::signals2::connect_position at= boost::signals2::at_back);
                                              
    virtual boost::signals2::connection connectEvent(UInt32 eventId, 
                                              const BaseEventType::group_type &group,
                                              const BaseEventType::slot_type &listener,
                                              boost::signals2::connect_position at= boost::signals2::at_back);
    
    virtual void   disconnectEvent        (UInt32 eventId, const BaseEventType::group_type &group);
    virtual void   disconnectAllSlotsEvent(UInt32 eventId);
    virtual bool   isEmptyEvent           (UInt32 eventId) const;
    virtual UInt32 numSlotsEvent          (UInt32 eventId) const;

    /*! \}                                                                 */
    /*! \name                Event Access                                 */
    /*! \{                                                                 */
    
    //AnimationStarted
    boost::signals2::connection connectAnimationStarted(const AnimationStartedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectAnimationStarted(const AnimationStartedEventType::group_type &group,
                                                       const AnimationStartedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectAnimationStarted       (const AnimationStartedEventType::group_type &group);
    void   disconnectAllSlotsAnimationStarted(void);
    bool   isEmptyAnimationStarted          (void) const;
    UInt32 numSlotsAnimationStarted         (void) const;
    
    //AnimationStopped
    boost::signals2::connection connectAnimationStopped(const AnimationStoppedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectAnimationStopped(const AnimationStoppedEventType::group_type &group,
                                                       const AnimationStoppedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectAnimationStopped       (const AnimationStoppedEventType::group_type &group);
    void   disconnectAllSlotsAnimationStopped(void);
    bool   isEmptyAnimationStopped          (void) const;
    UInt32 numSlotsAnimationStopped         (void) const;
    
    //AnimationPaused
    boost::signals2::connection connectAnimationPaused(const AnimationPausedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectAnimationPaused(const AnimationPausedEventType::group_type &group,
                                                       const AnimationPausedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectAnimationPaused        (const AnimationPausedEventType::group_type &group);
    void   disconnectAllSlotsAnimationPaused(void);
    bool   isEmptyAnimationPaused           (void) const;
    UInt32 numSlotsAnimationPaused          (void) const;
    
    //AnimationUnpaused
    boost::signals2::connection connectAnimationUnpaused(const AnimationUnpausedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectAnimationUnpaused(const AnimationUnpausedEventType::group_type &group,
                                                       const AnimationUnpausedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectAnimationUnpaused      (const AnimationUnpausedEventType::group_type &group);
    void   disconnectAllSlotsAnimationUnpaused(void);
    bool   isEmptyAnimationUnpaused         (void) const;
    UInt32 numSlotsAnimationUnpaused        (void) const;
    
    //AnimationEnded
    boost::signals2::connection connectAnimationEnded (const AnimationEndedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectAnimationEnded (const AnimationEndedEventType::group_type &group,
                                                       const AnimationEndedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectAnimationEnded         (const AnimationEndedEventType::group_type &group);
    void   disconnectAllSlotsAnimationEnded (void);
    bool   isEmptyAnimationEnded            (void) const;
    UInt32 numSlotsAnimationEnded           (void) const;
    
    //AnimationCycled
    boost::signals2::connection connectAnimationCycled(const AnimationCycledEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectAnimationCycled(const AnimationCycledEventType::group_type &group,
                                                       const AnimationCycledEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectAnimationCycled        (const AnimationCycledEventType::group_type &group);
    void   disconnectAllSlotsAnimationCycled(void);
    bool   isEmptyAnimationCycled           (void) const;
    UInt32 numSlotsAnimationCycled          (void) const;
    /*---------------------------------------------------------------------*/
    /*! \name                  Event Connectable                           */
    /*! \{                                                                 */

    void attachUpdateProducer( EventContainer* const producer );
    void detachUpdateProducer(void);

    virtual bool
    isConnectableEvent(EventDescription const * eventDesc) const;

    virtual EventDescVector getConnectableEvents(void) const;

    virtual bool
        isConnected(EventDescription const * eventDesc) const;

    virtual bool
        disconnectFromEvent(EventDescription const * eventDesc) const;

    boost::signals2::connection 
        connectToEvent(EventDescription const * eventDesc,
                       EventContainer* const eventProducer) const;
    
    void disconnectUpdate();
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    void produceAnimationStarted(void);
    void produceAnimationStopped(void);
    void produceAnimationPaused(void);
    void produceAnimationUnpaused(void);
    void produceAnimationEnded(void);
    void produceAnimationCycled(void);
    /*=========================  PROTECTED  ===============================*/

  protected:
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    AnimationStartedEventType _AnimationStartedEvent;
    AnimationStoppedEventType _AnimationStoppedEvent;
    AnimationPausedEventType _AnimationPausedEvent;
    AnimationUnpausedEventType _AnimationUnpausedEvent;
    AnimationEndedEventType _AnimationEndedEvent;
    AnimationCycledEventType _AnimationCycledEvent;
    /*! \}                                                                 */
    // Variables should all be in TBAnimationEventSourceBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TBAnimationEventSource(void);
    TBAnimationEventSource(const TBAnimationEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TBAnimationEventSource(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleAnimationStartedSignal(void) const;
    GetEventHandlePtr getHandleAnimationStoppedSignal(void) const;
    GetEventHandlePtr getHandleAnimationPausedSignal(void) const;
    GetEventHandlePtr getHandleAnimationUnpausedSignal(void) const;
    GetEventHandlePtr getHandleAnimationEndedSignal(void) const;
    GetEventHandlePtr getHandleAnimationCycledSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    void produceAnimationStarted    (AnimationStartedEventDetailsType* const e);
    void produceAnimationStopped    (AnimationStoppedEventDetailsType* const e);
    void produceAnimationPaused     (AnimationPausedEventDetailsType* const e);
    void produceAnimationUnpaused   (AnimationUnpausedEventDetailsType* const e);
    void produceAnimationEnded      (AnimationEndedEventDetailsType* const e);
    void produceAnimationCycled     (AnimationCycledEventDetailsType* const e);
    /*! \}                                                                 */
    void handleUpdate(EventDetails* const details);

    boost::signals2::connection _UpdateEventConnection;
    /*==========================  PRIVATE  ================================*/

  private:
    static EventDescription   *_eventDesc[];
    static EventProducerType _producerType;

    friend class FieldContainer;
    friend class TBAnimationEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TBAnimationEventSource &source);
};

typedef TBAnimationEventSource *TBAnimationEventSourceP;

OSG_END_NAMESPACE

//#include "OSGAnimationAdvancer.h"
#include "OSGAnimationEventDetails.h"
#include "OSGTBAnimation.h"
#include "OSGTBAnimationFields.h"
#include "OSGTBAnimationEventSourceBase.inl"
#include "OSGTBAnimationEventSource.inl"

#endif /* _OSGTBANIMATIONEVENTSOURCE_H_ */
