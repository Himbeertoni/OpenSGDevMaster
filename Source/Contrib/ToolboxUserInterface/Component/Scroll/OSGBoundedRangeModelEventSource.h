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

#ifndef _OSGBOUNDEDRANGEMODELEVENTSOURCE_H_
#define _OSGBOUNDEDRANGEMODELEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBoundedRangeModelEventSourceBase.h"
//Event Producer Headers
#include "OSGActivity.h"
#include "OSGConsumableEventCombiner.h"

#include "OSGChangeEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief BoundedRangeModelEventSource class. See \ref
           PageContribToolboxUserInterfaceBoundedRangeModelEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING BoundedRangeModelEventSource : public BoundedRangeModelEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BoundedRangeModelEventSourceBase Inherited;
    typedef BoundedRangeModelEventSource     Self;

    typedef ChangeEventDetails StateChangedEventDetailsType;

    typedef boost::signals2::signal<void (EventDetails* const            , UInt32)> BaseEventType;
    typedef boost::signals2::signal<void (ChangeEventDetails* const, UInt32), ConsumableEventCombiner> StateChangedEventType;
        
    enum
    {
        StateChangedEventId = 1,
        NextProducedEventId = StateChangedEventId + 1
    };
    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);
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
    
    //StateChanged
    boost::signals2::connection connectStateChanged   (const StateChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectStateChanged   (const StateChangedEventType::group_type &group,
                                                       const StateChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectStateChanged           (const StateChangedEventType::group_type &group);
    void   disconnectAllSlotsStateChanged   (void);
    bool   isEmptyStateChanged              (void) const;
    UInt32 numSlotsStateChanged             (void) const;
    
    //Moved protected -> public:
    void produceStateChanged        (StateChangedEventDetailsType* const e);
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
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BoundedRangeModelEventSourceBase.
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    StateChangedEventType _StateChangedEvent;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleStateChangedSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BoundedRangeModelEventSource(void);
    BoundedRangeModelEventSource(const BoundedRangeModelEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BoundedRangeModelEventSource(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/
    static EventDescription   *_eventDesc[];
    static EventProducerType _producerType;

    friend class FieldContainer;
    friend class BoundedRangeModelEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BoundedRangeModelEventSource &source);
};

typedef BoundedRangeModelEventSource *BoundedRangeModelEventSourceP;

OSG_END_NAMESPACE

#include "OSGBoundedRangeModelEventSourceBase.inl"
#include "OSGBoundedRangeModelEventSource.inl"

#endif /* _OSGBOUNDEDRANGEMODELEVENTSOURCE_H_ */
