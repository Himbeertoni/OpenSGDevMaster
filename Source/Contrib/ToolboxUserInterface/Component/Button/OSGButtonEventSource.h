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

#ifndef _OSGBUTTONEVENTSOURCE_H_
#define _OSGBUTTONEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGButtonEventSourceBase.h"

    
#include "OSGActionEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief ButtonEventSource class. See \ref
           PageContribToolboxUserInterfaceButtonEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING ButtonEventSource : public ButtonEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef ButtonEventSourceBase Inherited;
    typedef ButtonEventSource     Self;

    typedef ActionEventDetails ActionPerformedEventDetailsType;
    typedef ActionEventDetails MousePressedActionPerformedEventDetailsType;

    typedef boost::signals2::signal<void (ActionEventDetails* const, UInt32), ConsumableEventCombiner> ActionPerformedEventType;
    typedef boost::signals2::signal<void (ActionEventDetails* const, UInt32), ConsumableEventCombiner> MousePressedActionPerformedEventType;


    enum
    {
        ActionPerformedEventId = Inherited::NextProducedEventId,
        MousePressedActionPerformedEventId = ActionPerformedEventId + 1,
        NextProducedEventId = MousePressedActionPerformedEventId + 1
    };

    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);

    /*---------------------------------------------------------------------*/
    /*! \name                Event Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 

    
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
    
    //ActionPerformed
    boost::signals2::connection connectActionPerformed(const ActionPerformedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectActionPerformed(const ActionPerformedEventType::group_type &group,
                                                       const ActionPerformedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectActionPerformed        (const ActionPerformedEventType::group_type &group);
    void   disconnectAllSlotsActionPerformed(void);
    bool   isEmptyActionPerformed           (void) const;
    UInt32 numSlotsActionPerformed          (void) const;
    
    //MousePressedActionPerformed
    boost::signals2::connection connectMousePressedActionPerformed(const MousePressedActionPerformedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectMousePressedActionPerformed(const MousePressedActionPerformedEventType::group_type &group,
                                                       const MousePressedActionPerformedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectMousePressedActionPerformed(const MousePressedActionPerformedEventType::group_type &group);
    void   disconnectAllSlotsMousePressedActionPerformed(void);
    bool   isEmptyMousePressedActionPerformed(void) const;
    UInt32 numSlotsMousePressedActionPerformed(void) const;
    
    
    void produceActionPerformed     (ActionPerformedEventDetailsType* const e);
    void produceMousePressedActionPerformed  (MousePressedActionPerformedEventDetailsType* const e);
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

    // Variables should all be in ButtonBase.
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    ActionPerformedEventType _ActionPerformedEvent;
    MousePressedActionPerformedEventType _MousePressedActionPerformedEvent;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleActionPerformedSignal(void) const;
    GetEventHandlePtr getHandleMousePressedActionPerformedSignal(void) const;
    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    ButtonEventSource(void);
    ButtonEventSource(const ButtonEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ButtonEventSource(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    static EventDescription   *_eventDesc[];
    static EventProducerType _producerType;

    friend class FieldContainer;
    friend class ButtonEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ButtonEventSource &source);
};

typedef ButtonEventSource *ButtonEventSourceP;

OSG_END_NAMESPACE

#include "OSGButtonEventSourceBase.inl"
#include "OSGButtonEventSource.inl"

#endif /* _OSGBUTTON_H_ */
