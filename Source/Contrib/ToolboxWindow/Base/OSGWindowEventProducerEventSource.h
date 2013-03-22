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

#ifndef _OSGWINDOWEVENTPRODUCEREVENTSOURCE_H_
#define _OSGWINDOWEVENTPRODUCEREVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGWindowEventProducerEventSourceBase.h"
#include "OSGWindowEventProducerEventSourceFields.h" // EventSource type

#include "OSGConsumableEventCombiner.h"
#include "OSGWindowEventProducerFields.h"
#include "OSGWindowEventDetails.h"
#include "OSGMouseEventDetails.h"
#include "OSGKeyEventDetails.h"
#include "OSGMouseWheelEventDetails.h"
#include "OSGUpdateEventDetails.h"
OSG_BEGIN_NAMESPACE

/*! \brief WindowEventProducerEventSource class. See \ref
           PageContribToolboxWindowWindowEventProducerEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXWINDOW_DLLMAPPING WindowEventProducerEventSource : public WindowEventProducerEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef WindowEventProducerEventSourceBase Inherited;
    typedef WindowEventProducerEventSource     Self;
    
    typedef WindowEventDetails WindowOpenedEventDetailsType;
    typedef WindowEventDetails WindowClosingEventDetailsType;
    typedef WindowEventDetails WindowClosedEventDetailsType;
    typedef WindowEventDetails WindowIconifiedEventDetailsType;
    typedef WindowEventDetails WindowDeiconifiedEventDetailsType;
    typedef WindowEventDetails WindowActivatedEventDetailsType;
    typedef WindowEventDetails WindowDeactivatedEventDetailsType;
    typedef WindowEventDetails WindowEnteredEventDetailsType;
    typedef WindowEventDetails WindowExitedEventDetailsType;
    typedef MouseEventDetails  MouseClickedEventDetailsType;
    typedef MouseEventDetails  MouseEnteredEventDetailsType;
    typedef MouseEventDetails  MouseExitedEventDetailsType;
    typedef MouseEventDetails  MousePressedEventDetailsType;
    typedef MouseEventDetails  MouseReleasedEventDetailsType;
    typedef MouseEventDetails  MouseMovedEventDetailsType;
    typedef MouseEventDetails  MouseDraggedEventDetailsType;
    typedef MouseWheelEventDetails MouseWheelMovedEventDetailsType;
    typedef KeyEventDetails    KeyPressedEventDetailsType;
    typedef KeyEventDetails    KeyReleasedEventDetailsType;
    typedef KeyEventDetails    KeyTypedEventDetailsType;
    typedef UpdateEventDetails UpdateEventDetailsType;

    typedef boost::signals2::signal<void (EventDetails* const            , UInt32)> BaseEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowOpenedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowClosingEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowClosedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowIconifiedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowDeiconifiedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowActivatedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowDeactivatedEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowEnteredEventType;
    typedef boost::signals2::signal<void (WindowEventDetails* const, UInt32), ConsumableEventCombiner> WindowExitedEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseClickedEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseEnteredEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseExitedEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MousePressedEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseReleasedEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseMovedEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseDraggedEventType;
    typedef boost::signals2::signal<void (MouseWheelEventDetails* const, UInt32), ConsumableEventCombiner> MouseWheelMovedEventType;
    typedef boost::signals2::signal<void (KeyEventDetails* const  , UInt32), ConsumableEventCombiner> KeyPressedEventType;
    typedef boost::signals2::signal<void (KeyEventDetails* const  , UInt32), ConsumableEventCombiner> KeyReleasedEventType;
    typedef boost::signals2::signal<void (KeyEventDetails* const  , UInt32), ConsumableEventCombiner> KeyTypedEventType;
    typedef boost::signals2::signal<void (UpdateEventDetails* const, UInt32), ConsumableEventCombiner> UpdateEventType;

    enum
    {
        WindowOpenedEventId = 1,
        WindowClosingEventId = WindowOpenedEventId + 1,
        WindowClosedEventId = WindowClosingEventId + 1,
        WindowIconifiedEventId = WindowClosedEventId + 1,
        WindowDeiconifiedEventId = WindowIconifiedEventId + 1,
        WindowActivatedEventId = WindowDeiconifiedEventId + 1,
        WindowDeactivatedEventId = WindowActivatedEventId + 1,
        WindowEnteredEventId = WindowDeactivatedEventId + 1,
        WindowExitedEventId = WindowEnteredEventId + 1,
        MouseClickedEventId = WindowExitedEventId + 1,
        MouseEnteredEventId = MouseClickedEventId + 1,
        MouseExitedEventId = MouseEnteredEventId + 1,
        MousePressedEventId = MouseExitedEventId + 1,
        MouseReleasedEventId = MousePressedEventId + 1,
        MouseMovedEventId = MouseReleasedEventId + 1,
        MouseDraggedEventId = MouseMovedEventId + 1,
        MouseWheelMovedEventId = MouseDraggedEventId + 1,
        KeyPressedEventId = MouseWheelMovedEventId + 1,
        KeyReleasedEventId = KeyPressedEventId + 1,
        KeyTypedEventId = KeyReleasedEventId + 1,
        UpdateEventId = KeyTypedEventId + 1,
        NextProducedEventId = UpdateEventId + 1
    };

    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);

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
    
    //MouseClicked
    boost::signals2::connection connectMouseClicked   (const MouseClickedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectMouseClicked   (const MouseClickedEventType::group_type &group,
                                                       const MouseClickedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectMouseClicked           (const MouseClickedEventType::group_type &group);
    void   disconnectAllSlotsMouseClicked   (void);
    bool   isEmptyMouseClicked              (void) const;
    UInt32 numSlotsMouseClicked             (void) const;
    
    //MouseEntered
    boost::signals2::connection connectMouseEntered   (const MouseEnteredEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectMouseEntered   (const MouseEnteredEventType::group_type &group,
                                                       const MouseEnteredEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectMouseEntered           (const MouseEnteredEventType::group_type &group);
    void   disconnectAllSlotsMouseEntered   (void);
    bool   isEmptyMouseEntered              (void) const;
    UInt32 numSlotsMouseEntered             (void) const;
    
    //MouseExited
    boost::signals2::connection connectMouseExited    (const MouseExitedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectMouseExited    (const MouseExitedEventType::group_type &group,
                                                       const MouseExitedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectMouseExited            (const MouseExitedEventType::group_type &group);
    void   disconnectAllSlotsMouseExited    (void);
    bool   isEmptyMouseExited               (void) const;
    UInt32 numSlotsMouseExited              (void) const;
    
    //MousePressed
    boost::signals2::connection connectMousePressed   (const MousePressedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectMousePressed   (const MousePressedEventType::group_type &group,
                                                       const MousePressedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectMousePressed           (const MousePressedEventType::group_type &group);
    void   disconnectAllSlotsMousePressed   (void);
    bool   isEmptyMousePressed              (void) const;
    UInt32 numSlotsMousePressed             (void) const;
    
    //MouseReleased
    boost::signals2::connection connectMouseReleased  (const MouseReleasedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectMouseReleased  (const MouseReleasedEventType::group_type &group,
                                                       const MouseReleasedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectMouseReleased          (const MouseReleasedEventType::group_type &group);
    void   disconnectAllSlotsMouseReleased  (void);
    bool   isEmptyMouseReleased             (void) const;
    UInt32 numSlotsMouseReleased            (void) const;
    
    //MouseMoved
    boost::signals2::connection connectMouseMoved     (const MouseMovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectMouseMoved     (const MouseMovedEventType::group_type &group,
                                                       const MouseMovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectMouseMoved             (const MouseMovedEventType::group_type &group);
    void   disconnectAllSlotsMouseMoved     (void);
    bool   isEmptyMouseMoved                (void) const;
    UInt32 numSlotsMouseMoved               (void) const;
    
    //MouseDragged
    boost::signals2::connection connectMouseDragged   (const MouseDraggedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectMouseDragged   (const MouseDraggedEventType::group_type &group,
                                                       const MouseDraggedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectMouseDragged           (const MouseDraggedEventType::group_type &group);
    void   disconnectAllSlotsMouseDragged   (void);
    bool   isEmptyMouseDragged              (void) const;
    UInt32 numSlotsMouseDragged             (void) const;
    
    //MouseWheelMoved
    boost::signals2::connection connectMouseWheelMoved(const MouseWheelMovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectMouseWheelMoved(const MouseWheelMovedEventType::group_type &group,
                                                       const MouseWheelMovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectMouseWheelMoved        (const MouseWheelMovedEventType::group_type &group);
    void   disconnectAllSlotsMouseWheelMoved(void);
    bool   isEmptyMouseWheelMoved           (void) const;
    UInt32 numSlotsMouseWheelMoved          (void) const;
    
    //KeyPressed
    boost::signals2::connection connectKeyPressed     (const KeyPressedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectKeyPressed     (const KeyPressedEventType::group_type &group,
                                                       const KeyPressedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectKeyPressed             (const KeyPressedEventType::group_type &group);
    void   disconnectAllSlotsKeyPressed     (void);
    bool   isEmptyKeyPressed                (void) const;
    UInt32 numSlotsKeyPressed               (void) const;
    
    //KeyReleased
    boost::signals2::connection connectKeyReleased    (const KeyReleasedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectKeyReleased    (const KeyReleasedEventType::group_type &group,
                                                       const KeyReleasedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectKeyReleased            (const KeyReleasedEventType::group_type &group);
    void   disconnectAllSlotsKeyReleased    (void);
    bool   isEmptyKeyReleased               (void) const;
    UInt32 numSlotsKeyReleased              (void) const;
    
    //KeyTyped
    boost::signals2::connection connectKeyTyped       (const KeyTypedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectKeyTyped       (const KeyTypedEventType::group_type &group,
                                                       const KeyTypedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectKeyTyped               (const KeyTypedEventType::group_type &group);
    void   disconnectAllSlotsKeyTyped       (void);
    bool   isEmptyKeyTyped                  (void) const;
    UInt32 numSlotsKeyTyped                 (void) const;
    
    //Update
    boost::signals2::connection connectUpdate         (const UpdateEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectUpdate         (const UpdateEventType::group_type &group,
                                                       const UpdateEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectUpdate                 (const UpdateEventType::group_type &group);
    void   disconnectAllSlotsUpdate         (void);
    bool   isEmptyUpdate                    (void) const;
    UInt32 numSlotsUpdate                   (void) const;
    

//Moved to public:
    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);

    void produceWindowOpened        (WindowOpenedEventDetailsType* const e);
    void produceWindowClosing       (WindowClosingEventDetailsType* const e);
    void produceWindowClosed        (WindowClosedEventDetailsType* const e);
    void produceWindowIconified     (WindowIconifiedEventDetailsType* const e);
    void produceWindowDeiconified   (WindowDeiconifiedEventDetailsType* const e);
    void produceWindowActivated     (WindowActivatedEventDetailsType* const e);
    void produceWindowDeactivated   (WindowDeactivatedEventDetailsType* const e);
    void produceWindowEntered       (WindowEnteredEventDetailsType* const e);
    void produceWindowExited        (WindowExitedEventDetailsType* const e);
    void produceMouseClicked        (MouseClickedEventDetailsType* const e);
    void produceMouseEntered        (MouseEnteredEventDetailsType* const e);
    void produceMouseExited         (MouseExitedEventDetailsType* const e);
    void produceMousePressed        (MousePressedEventDetailsType* const e);
    void produceMouseReleased       (MouseReleasedEventDetailsType* const e);
    void produceMouseMoved          (MouseMovedEventDetailsType* const e);
    void produceMouseDragged        (MouseDraggedEventDetailsType* const e);
    void produceMouseWheelMoved     (MouseWheelMovedEventDetailsType* const e);
    void produceKeyPressed          (KeyPressedEventDetailsType* const e);
    void produceKeyReleased         (KeyReleasedEventDetailsType* const e);
    void produceKeyTyped            (KeyTypedEventDetailsType* const e);
    void produceUpdate              (UpdateEventDetailsType* const e);    
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
    MouseClickedEventType _MouseClickedEvent;
    MouseEnteredEventType _MouseEnteredEvent;
    MouseExitedEventType _MouseExitedEvent;
    MousePressedEventType _MousePressedEvent;
    MouseReleasedEventType _MouseReleasedEvent;
    MouseMovedEventType _MouseMovedEvent;
    MouseDraggedEventType _MouseDraggedEvent;
    MouseWheelMovedEventType _MouseWheelMovedEvent;
    KeyPressedEventType _KeyPressedEvent;
    KeyReleasedEventType _KeyReleasedEvent;
    KeyTypedEventType _KeyTypedEvent;
    UpdateEventType _UpdateEvent;

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
    GetEventHandlePtr getHandleMouseClickedSignal(void) const;
    GetEventHandlePtr getHandleMouseEnteredSignal(void) const;
    GetEventHandlePtr getHandleMouseExitedSignal(void) const;
    GetEventHandlePtr getHandleMousePressedSignal(void) const;
    GetEventHandlePtr getHandleMouseReleasedSignal(void) const;
    GetEventHandlePtr getHandleMouseMovedSignal(void) const;
    GetEventHandlePtr getHandleMouseDraggedSignal(void) const;
    GetEventHandlePtr getHandleMouseWheelMovedSignal(void) const;
    GetEventHandlePtr getHandleKeyPressedSignal(void) const;
    GetEventHandlePtr getHandleKeyReleasedSignal(void) const;
    GetEventHandlePtr getHandleKeyTypedSignal(void) const;
    GetEventHandlePtr getHandleUpdateSignal(void) const;
    /*! \}                                                                 */
    // Variables should all be in WindowEventProducerEventSourceBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    WindowEventProducerEventSource(void);
    WindowEventProducerEventSource(const WindowEventProducerEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~WindowEventProducerEventSource(void);

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
    friend class WindowEventProducerEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const WindowEventProducerEventSource &source);
};

typedef WindowEventProducerEventSource *WindowEventProducerEventSourceP;

OSG_END_NAMESPACE
#include "OSGWindowEventDetails.h"
#include "OSGMouseEventDetails.h"
#include "OSGKeyEventDetails.h"
#include "OSGMouseWheelEventDetails.h"
#include "OSGUpdateEventDetails.h"
#include "OSGWindowEventProducerEventSourceBase.inl"
#include "OSGWindowEventProducerEventSource.inl"

#endif /* _OSGWINDOWEVENTPRODUCEREVENTSOURCE_H_ */
