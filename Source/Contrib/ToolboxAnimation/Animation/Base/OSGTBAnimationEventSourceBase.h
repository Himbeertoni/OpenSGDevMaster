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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TBAnimationEventSource
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTBANIMATIONEVENTSOURCEBASE_H_
#define _OSGTBANIMATIONEVENTSOURCEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxAnimationDef.h"

//#include "OSGBaseTypes.h"

#include "OSGEventContainer.h" // Parent


#include "OSGTBAnimationEventSourceFields.h"

//Event Producer Headers
#include "OSGActivity.h"
#include "OSGConsumableEventCombiner.h"

#include "OSGAnimationEventDetailsFields.h"

#include "OSGEventProducerType.h"

OSG_BEGIN_NAMESPACE


class TBAnimationEventSource;

//! \brief TBAnimationEventSource Base Class.

class OSG_CONTRIBTOOLBOXANIMATION_DLLMAPPING TBAnimationEventSourceBase : public EventContainer
{
  public:

    typedef EventContainer Inherited;
    typedef EventContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TBAnimationEventSource);
    
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

    /*==========================  PUBLIC  =================================*/

  public:



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
    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);
    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TBAnimationEventSourceTransitPtr  create          (void);
    static  TBAnimationEventSource           *createEmpty     (void);

    static  TBAnimationEventSourceTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TBAnimationEventSource            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TBAnimationEventSourceTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

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
    
    
    /*! \}                                                                 */
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

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TBAnimationEventSourceBase(void);
    TBAnimationEventSourceBase(const TBAnimationEventSourceBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TBAnimationEventSourceBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */


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
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      TBAnimationEventSourceBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/
    static EventDescription   *_eventDesc[];
    static EventProducerType _producerType;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TBAnimationEventSourceBase &source);
};

typedef TBAnimationEventSourceBase *TBAnimationEventSourceBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTBANIMATIONEVENTSOURCEBASE_H_ */
