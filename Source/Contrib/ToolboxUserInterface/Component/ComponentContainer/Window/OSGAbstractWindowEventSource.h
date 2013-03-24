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

#ifndef _OSGABSTRACTWINDOWEVENTSOURCE_H_
#define _OSGABSTRACTWINDOWEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGAbstractWindowEventSourceBase.h"

#include "OSGConsumableEventCombiner.h"
#include "OSGWindowEventProducerFields.h"
#include "OSGWindowEventDetails.h"
#include "OSGMouseEventDetails.h"
#include "OSGKeyEventDetails.h"
#include "OSGMouseWheelEventDetails.h"
#include "OSGUpdateEventDetails.h"
OSG_BEGIN_NAMESPACE

/*! \brief AbstractWindowEventSource class. See \ref
           PageContribToolboxUserInterfaceAbstractWindowEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING AbstractWindowEventSource : public AbstractWindowEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef AbstractWindowEventSourceBase Inherited;
    typedef AbstractWindowEventSource     Self;
    
    typedef WindowEventDetails WindowOpenedEventDetailsType;
    typedef WindowEventDetails WindowClosingEventDetailsType;
    typedef WindowEventDetails WindowClosedEventDetailsType;
    typedef WindowEventDetails WindowIconifiedEventDetailsType;
    typedef WindowEventDetails WindowDeiconifiedEventDetailsType;
    typedef WindowEventDetails WindowActivatedEventDetailsType;
    typedef WindowEventDetails WindowDeactivatedEventDetailsType;
    typedef WindowEventDetails WindowEnteredEventDetailsType;
    typedef WindowEventDetails WindowExitedEventDetailsType;

    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowOpenedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowClosingEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowClosedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowIconifiedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowDeiconifiedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowActivatedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowDeactivatedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowEnteredEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowExitedEventType;

    enum
    {
        WindowOpenedEventId = Inherited::NextProducedEventId,
        WindowClosingEventId = WindowOpenedEventId + 1,
        WindowClosedEventId = WindowClosingEventId + 1,
        WindowIconifiedEventId = WindowClosedEventId + 1,
        WindowDeiconifiedEventId = WindowIconifiedEventId + 1,
        WindowActivatedEventId = WindowDeiconifiedEventId + 1,
        WindowDeactivatedEventId = WindowActivatedEventId + 1,
        WindowEnteredEventId = WindowDeactivatedEventId + 1,
        WindowExitedEventId = WindowEnteredEventId + 1,
        NextProducedEventId = WindowExitedEventId + 1
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
    
    //WindowOpened
    boost::signals2::connection connectWindowOpened   (const WindowOpenedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectWindowOpened   (const WindowOpenedEventType::group_type &group,
                                                       const WindowOpenedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectWindowOpened           (const WindowOpenedEventType::group_type &group);
    void   disconnectAllSlotsWindowOpened   (void);
    bool   isEmptyWindowOpened              (void) const;
    UInt32 numSlotsWindowOpened             (void) const;
    
    //WindowClosing
    boost::signals2::connection connectWindowClosing  (const WindowClosingEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectWindowClosing  (const WindowClosingEventType::group_type &group,
                                                       const WindowClosingEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectWindowClosing          (const WindowClosingEventType::group_type &group);
    void   disconnectAllSlotsWindowClosing  (void);
    bool   isEmptyWindowClosing             (void) const;
    UInt32 numSlotsWindowClosing            (void) const;
    
    //WindowClosed
    boost::signals2::connection connectWindowClosed   (const WindowClosedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectWindowClosed   (const WindowClosedEventType::group_type &group,
                                                       const WindowClosedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectWindowClosed           (const WindowClosedEventType::group_type &group);
    void   disconnectAllSlotsWindowClosed   (void);
    bool   isEmptyWindowClosed              (void) const;
    UInt32 numSlotsWindowClosed             (void) const;
    
    //WindowIconified
    boost::signals2::connection connectWindowIconified(const WindowIconifiedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectWindowIconified(const WindowIconifiedEventType::group_type &group,
                                                       const WindowIconifiedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectWindowIconified        (const WindowIconifiedEventType::group_type &group);
    void   disconnectAllSlotsWindowIconified(void);
    bool   isEmptyWindowIconified           (void) const;
    UInt32 numSlotsWindowIconified          (void) const;
    
    //WindowDeiconified
    boost::signals2::connection connectWindowDeiconified(const WindowDeiconifiedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectWindowDeiconified(const WindowDeiconifiedEventType::group_type &group,
                                                       const WindowDeiconifiedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectWindowDeiconified      (const WindowDeiconifiedEventType::group_type &group);
    void   disconnectAllSlotsWindowDeiconified(void);
    bool   isEmptyWindowDeiconified         (void) const;
    UInt32 numSlotsWindowDeiconified        (void) const;
    
    //WindowActivated
    boost::signals2::connection connectWindowActivated(const WindowActivatedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectWindowActivated(const WindowActivatedEventType::group_type &group,
                                                       const WindowActivatedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectWindowActivated        (const WindowActivatedEventType::group_type &group);
    void   disconnectAllSlotsWindowActivated(void);
    bool   isEmptyWindowActivated           (void) const;
    UInt32 numSlotsWindowActivated          (void) const;
    
    //WindowDeactivated
    boost::signals2::connection connectWindowDeactivated(const WindowDeactivatedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectWindowDeactivated(const WindowDeactivatedEventType::group_type &group,
                                                       const WindowDeactivatedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectWindowDeactivated      (const WindowDeactivatedEventType::group_type &group);
    void   disconnectAllSlotsWindowDeactivated(void);
    bool   isEmptyWindowDeactivated         (void) const;
    UInt32 numSlotsWindowDeactivated        (void) const;
    
    //WindowEntered
    boost::signals2::connection connectWindowEntered  (const WindowEnteredEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectWindowEntered  (const WindowEnteredEventType::group_type &group,
                                                       const WindowEnteredEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectWindowEntered          (const WindowEnteredEventType::group_type &group);
    void   disconnectAllSlotsWindowEntered  (void);
    bool   isEmptyWindowEntered             (void) const;
    UInt32 numSlotsWindowEntered            (void) const;
    
    //WindowExited
    boost::signals2::connection connectWindowExited   (const WindowExitedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectWindowExited   (const WindowExitedEventType::group_type &group,
                                                       const WindowExitedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectWindowExited           (const WindowExitedEventType::group_type &group);
    void   disconnectAllSlotsWindowExited   (void);
    bool   isEmptyWindowExited              (void) const;
    UInt32 numSlotsWindowExited             (void) const;
    
    //Moved protected -> public:
    void produceWindowOpened        (WindowOpenedEventDetailsType* const e);
    void produceWindowClosing       (WindowClosingEventDetailsType* const e);
    void produceWindowClosed        (WindowClosedEventDetailsType* const e);
    void produceWindowIconified     (WindowIconifiedEventDetailsType* const e);
    void produceWindowDeiconified   (WindowDeiconifiedEventDetailsType* const e);
    void produceWindowActivated     (WindowActivatedEventDetailsType* const e);
    void produceWindowDeactivated   (WindowDeactivatedEventDetailsType* const e);
    void produceWindowEntered       (WindowEnteredEventDetailsType* const e);
    void produceWindowExited        (WindowExitedEventDetailsType* const e);
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
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    WindowOpenedEventType _WindowOpenedEvent;
    WindowClosingEventType _WindowClosingEvent;
    WindowClosedEventType _WindowClosedEvent;
    WindowIconifiedEventType _WindowIconifiedEvent;
    WindowDeiconifiedEventType _WindowDeiconifiedEvent;
    WindowActivatedEventType _WindowActivatedEvent;
    WindowDeactivatedEventType _WindowDeactivatedEvent;
    WindowEnteredEventType _WindowEnteredEvent;
    WindowExitedEventType _WindowExitedEvent;
    /*! \}                                                                 */

    // Variables should all be in AbstractWindowEventSourceBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    AbstractWindowEventSource(void);
    AbstractWindowEventSource(const AbstractWindowEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~AbstractWindowEventSource(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleWindowOpenedSignal(void) const;
    GetEventHandlePtr getHandleWindowClosingSignal(void) const;
    GetEventHandlePtr getHandleWindowClosedSignal(void) const;
    GetEventHandlePtr getHandleWindowIconifiedSignal(void) const;
    GetEventHandlePtr getHandleWindowDeiconifiedSignal(void) const;
    GetEventHandlePtr getHandleWindowActivatedSignal(void) const;
    GetEventHandlePtr getHandleWindowDeactivatedSignal(void) const;
    GetEventHandlePtr getHandleWindowEnteredSignal(void) const;
    GetEventHandlePtr getHandleWindowExitedSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    static EventDescription   *_eventDesc[];
    static EventProducerType _producerType;

    friend class FieldContainer;
    friend class AbstractWindowEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const AbstractWindowEventSource &source);
};

typedef AbstractWindowEventSource *AbstractWindowEventSourceP;

OSG_END_NAMESPACE

#include "OSGAbstractWindowEventSourceBase.inl"
#include "OSGAbstractWindowEventSource.inl"

#endif /* _OSGABSTRACTWINDOWEVENTSOURCE_H_ */
