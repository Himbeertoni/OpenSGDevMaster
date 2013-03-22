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

#ifndef _OSGCOMPONENTEVENTSOURCE_H_
#define _OSGCOMPONENTEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGComponentEventSourceBase.h"

//Event Producer Headers
#include "OSGActivity.h"
#include "OSGConsumableEventCombiner.h"

#include "OSGMouseEventDetailsFields.h"
#include "OSGMouseWheelEventDetailsFields.h"
#include "OSGKeyEventDetailsFields.h"
#include "OSGFocusEventDetailsFields.h"
#include "OSGComponentEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief ComponentEventSource class. See \ref
           PageContribToolboxUserInterfaceComponentEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING ComponentEventSource : public ComponentEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef ComponentEventSourceBase Inherited;
    typedef ComponentEventSource     Self;

    typedef MouseEventDetails  MouseMovedEventDetailsType;
    typedef MouseEventDetails  MouseDraggedEventDetailsType;
    typedef MouseEventDetails  MouseClickedEventDetailsType;
    typedef MouseEventDetails  MouseEnteredEventDetailsType;
    typedef MouseEventDetails  MouseExitedEventDetailsType;
    typedef MouseEventDetails  MousePressedEventDetailsType;
    typedef MouseEventDetails  MouseReleasedEventDetailsType;
    typedef MouseWheelEventDetails MouseWheelMovedEventDetailsType;
    typedef KeyEventDetails    KeyPressedEventDetailsType;
    typedef KeyEventDetails    KeyReleasedEventDetailsType;
    typedef KeyEventDetails    KeyTypedEventDetailsType;
    typedef FocusEventDetails  FocusGainedEventDetailsType;
    typedef FocusEventDetails  FocusLostEventDetailsType;
    typedef ComponentEventDetails ComponentHiddenEventDetailsType;
    typedef ComponentEventDetails ComponentVisibleEventDetailsType;
    typedef ComponentEventDetails ComponentMovedEventDetailsType;
    typedef ComponentEventDetails ComponentResizedEventDetailsType;
    typedef ComponentEventDetails ComponentEnabledEventDetailsType;
    typedef ComponentEventDetails ComponentDisabledEventDetailsType;
    typedef ComponentEventDetails ToolTipActivatedEventDetailsType;
    typedef ComponentEventDetails ToolTipDeactivatedEventDetailsType;

    typedef boost::signals2::signal<void (EventDetails* const            , UInt32)> BaseEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseMovedEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseDraggedEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseClickedEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseEnteredEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseExitedEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MousePressedEventType;
    typedef boost::signals2::signal<void (MouseEventDetails* const, UInt32), ConsumableEventCombiner> MouseReleasedEventType;
    typedef boost::signals2::signal<void (MouseWheelEventDetails* const, UInt32), ConsumableEventCombiner> MouseWheelMovedEventType;
    typedef boost::signals2::signal<void (KeyEventDetails* const  , UInt32), ConsumableEventCombiner> KeyPressedEventType;
    typedef boost::signals2::signal<void (KeyEventDetails* const  , UInt32), ConsumableEventCombiner> KeyReleasedEventType;
    typedef boost::signals2::signal<void (KeyEventDetails* const  , UInt32), ConsumableEventCombiner> KeyTypedEventType;
    typedef boost::signals2::signal<void (FocusEventDetails* const, UInt32), ConsumableEventCombiner> FocusGainedEventType;
    typedef boost::signals2::signal<void (FocusEventDetails* const, UInt32), ConsumableEventCombiner> FocusLostEventType;
    typedef boost::signals2::signal<void (ComponentEventDetails* const, UInt32), ConsumableEventCombiner> ComponentHiddenEventType;
    typedef boost::signals2::signal<void (ComponentEventDetails* const, UInt32), ConsumableEventCombiner> ComponentVisibleEventType;
    typedef boost::signals2::signal<void (ComponentEventDetails* const, UInt32), ConsumableEventCombiner> ComponentMovedEventType;
    typedef boost::signals2::signal<void (ComponentEventDetails* const, UInt32), ConsumableEventCombiner> ComponentResizedEventType;
    typedef boost::signals2::signal<void (ComponentEventDetails* const, UInt32), ConsumableEventCombiner> ComponentEnabledEventType;
    typedef boost::signals2::signal<void (ComponentEventDetails* const, UInt32), ConsumableEventCombiner> ComponentDisabledEventType;
    typedef boost::signals2::signal<void (ComponentEventDetails* const, UInt32), ConsumableEventCombiner> ToolTipActivatedEventType;
    typedef boost::signals2::signal<void (ComponentEventDetails* const, UInt32), ConsumableEventCombiner> ToolTipDeactivatedEventType;

    enum
    {
        MouseMovedEventId = 1,
        MouseDraggedEventId = MouseMovedEventId + 1,
        MouseClickedEventId = MouseDraggedEventId + 1,
        MouseEnteredEventId = MouseClickedEventId + 1,
        MouseExitedEventId = MouseEnteredEventId + 1,
        MousePressedEventId = MouseExitedEventId + 1,
        MouseReleasedEventId = MousePressedEventId + 1,
        MouseWheelMovedEventId = MouseReleasedEventId + 1,
        KeyPressedEventId = MouseWheelMovedEventId + 1,
        KeyReleasedEventId = KeyPressedEventId + 1,
        KeyTypedEventId = KeyReleasedEventId + 1,
        FocusGainedEventId = KeyTypedEventId + 1,
        FocusLostEventId = FocusGainedEventId + 1,
        ComponentHiddenEventId = FocusLostEventId + 1,
        ComponentVisibleEventId = ComponentHiddenEventId + 1,
        ComponentMovedEventId = ComponentVisibleEventId + 1,
        ComponentResizedEventId = ComponentMovedEventId + 1,
        ComponentEnabledEventId = ComponentResizedEventId + 1,
        ComponentDisabledEventId = ComponentEnabledEventId + 1,
        ToolTipActivatedEventId = ComponentDisabledEventId + 1,
        ToolTipDeactivatedEventId = ToolTipActivatedEventId + 1,
        NextProducedEventId = ToolTipDeactivatedEventId + 1
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
    
    //FocusGained
    boost::signals2::connection connectFocusGained    (const FocusGainedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectFocusGained    (const FocusGainedEventType::group_type &group,
                                                       const FocusGainedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectFocusGained            (const FocusGainedEventType::group_type &group);
    void   disconnectAllSlotsFocusGained    (void);
    bool   isEmptyFocusGained               (void) const;
    UInt32 numSlotsFocusGained              (void) const;
    
    //FocusLost
    boost::signals2::connection connectFocusLost      (const FocusLostEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectFocusLost      (const FocusLostEventType::group_type &group,
                                                       const FocusLostEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectFocusLost              (const FocusLostEventType::group_type &group);
    void   disconnectAllSlotsFocusLost      (void);
    bool   isEmptyFocusLost                 (void) const;
    UInt32 numSlotsFocusLost                (void) const;
    
    //ComponentHidden
    boost::signals2::connection connectComponentHidden(const ComponentHiddenEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectComponentHidden(const ComponentHiddenEventType::group_type &group,
                                                       const ComponentHiddenEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectComponentHidden        (const ComponentHiddenEventType::group_type &group);
    void   disconnectAllSlotsComponentHidden(void);
    bool   isEmptyComponentHidden           (void) const;
    UInt32 numSlotsComponentHidden          (void) const;
    
    //ComponentVisible
    boost::signals2::connection connectComponentVisible(const ComponentVisibleEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectComponentVisible(const ComponentVisibleEventType::group_type &group,
                                                       const ComponentVisibleEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectComponentVisible       (const ComponentVisibleEventType::group_type &group);
    void   disconnectAllSlotsComponentVisible(void);
    bool   isEmptyComponentVisible          (void) const;
    UInt32 numSlotsComponentVisible         (void) const;
    
    //ComponentMoved
    boost::signals2::connection connectComponentMoved (const ComponentMovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectComponentMoved (const ComponentMovedEventType::group_type &group,
                                                       const ComponentMovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectComponentMoved         (const ComponentMovedEventType::group_type &group);
    void   disconnectAllSlotsComponentMoved (void);
    bool   isEmptyComponentMoved            (void) const;
    UInt32 numSlotsComponentMoved           (void) const;
    
    //ComponentResized
    boost::signals2::connection connectComponentResized(const ComponentResizedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectComponentResized(const ComponentResizedEventType::group_type &group,
                                                       const ComponentResizedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectComponentResized       (const ComponentResizedEventType::group_type &group);
    void   disconnectAllSlotsComponentResized(void);
    bool   isEmptyComponentResized          (void) const;
    UInt32 numSlotsComponentResized         (void) const;
    
    //ComponentEnabled
    boost::signals2::connection connectComponentEnabled(const ComponentEnabledEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectComponentEnabled(const ComponentEnabledEventType::group_type &group,
                                                       const ComponentEnabledEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectComponentEnabled       (const ComponentEnabledEventType::group_type &group);
    void   disconnectAllSlotsComponentEnabled(void);
    bool   isEmptyComponentEnabled          (void) const;
    UInt32 numSlotsComponentEnabled         (void) const;
    
    //ComponentDisabled
    boost::signals2::connection connectComponentDisabled(const ComponentDisabledEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectComponentDisabled(const ComponentDisabledEventType::group_type &group,
                                                       const ComponentDisabledEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectComponentDisabled      (const ComponentDisabledEventType::group_type &group);
    void   disconnectAllSlotsComponentDisabled(void);
    bool   isEmptyComponentDisabled         (void) const;
    UInt32 numSlotsComponentDisabled        (void) const;
    
    //ToolTipActivated
    boost::signals2::connection connectToolTipActivated(const ToolTipActivatedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectToolTipActivated(const ToolTipActivatedEventType::group_type &group,
                                                       const ToolTipActivatedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectToolTipActivated       (const ToolTipActivatedEventType::group_type &group);
    void   disconnectAllSlotsToolTipActivated(void);
    bool   isEmptyToolTipActivated          (void) const;
    UInt32 numSlotsToolTipActivated         (void) const;
    
    //ToolTipDeactivated
    boost::signals2::connection connectToolTipDeactivated(const ToolTipDeactivatedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectToolTipDeactivated(const ToolTipDeactivatedEventType::group_type &group,
                                                       const ToolTipDeactivatedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectToolTipDeactivated     (const ToolTipDeactivatedEventType::group_type &group);
    void   disconnectAllSlotsToolTipDeactivated(void);
    bool   isEmptyToolTipDeactivated        (void) const;
    UInt32 numSlotsToolTipDeactivated       (void) const;
    
    
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
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    MouseMovedEventType _MouseMovedEvent;
    MouseDraggedEventType _MouseDraggedEvent;
    MouseClickedEventType _MouseClickedEvent;
    MouseEnteredEventType _MouseEnteredEvent;
    MouseExitedEventType _MouseExitedEvent;
    MousePressedEventType _MousePressedEvent;
    MouseReleasedEventType _MouseReleasedEvent;
    MouseWheelMovedEventType _MouseWheelMovedEvent;
    KeyPressedEventType _KeyPressedEvent;
    KeyReleasedEventType _KeyReleasedEvent;
    KeyTypedEventType _KeyTypedEvent;
    FocusGainedEventType _FocusGainedEvent;
    FocusLostEventType _FocusLostEvent;
    ComponentHiddenEventType _ComponentHiddenEvent;
    ComponentVisibleEventType _ComponentVisibleEvent;
    ComponentMovedEventType _ComponentMovedEvent;
    ComponentResizedEventType _ComponentResizedEvent;
    ComponentEnabledEventType _ComponentEnabledEvent;
    ComponentDisabledEventType _ComponentDisabledEvent;
    ToolTipActivatedEventType _ToolTipActivatedEvent;
    ToolTipDeactivatedEventType _ToolTipDeactivatedEvent;
    /*! \}                                                                 */

    // Variables should all be in ComponentEventSourceBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    ComponentEventSource(void);
    ComponentEventSource(const ComponentEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ComponentEventSource(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleMouseMovedSignal(void) const;
    GetEventHandlePtr getHandleMouseDraggedSignal(void) const;
    GetEventHandlePtr getHandleMouseClickedSignal(void) const;
    GetEventHandlePtr getHandleMouseEnteredSignal(void) const;
    GetEventHandlePtr getHandleMouseExitedSignal(void) const;
    GetEventHandlePtr getHandleMousePressedSignal(void) const;
    GetEventHandlePtr getHandleMouseReleasedSignal(void) const;
    GetEventHandlePtr getHandleMouseWheelMovedSignal(void) const;
    GetEventHandlePtr getHandleKeyPressedSignal(void) const;
    GetEventHandlePtr getHandleKeyReleasedSignal(void) const;
    GetEventHandlePtr getHandleKeyTypedSignal(void) const;
    GetEventHandlePtr getHandleFocusGainedSignal(void) const;
    GetEventHandlePtr getHandleFocusLostSignal(void) const;
    GetEventHandlePtr getHandleComponentHiddenSignal(void) const;
    GetEventHandlePtr getHandleComponentVisibleSignal(void) const;
    GetEventHandlePtr getHandleComponentMovedSignal(void) const;
    GetEventHandlePtr getHandleComponentResizedSignal(void) const;
    GetEventHandlePtr getHandleComponentEnabledSignal(void) const;
    GetEventHandlePtr getHandleComponentDisabledSignal(void) const;
    GetEventHandlePtr getHandleToolTipActivatedSignal(void) const;
    GetEventHandlePtr getHandleToolTipDeactivatedSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    void produceMouseMoved          (MouseMovedEventDetailsType* const e);
    void produceMouseDragged        (MouseDraggedEventDetailsType* const e);
    void produceMouseClicked        (MouseClickedEventDetailsType* const e);
    void produceMouseEntered        (MouseEnteredEventDetailsType* const e);
    void produceMouseExited         (MouseExitedEventDetailsType* const e);
    void produceMousePressed        (MousePressedEventDetailsType* const e);
    void produceMouseReleased       (MouseReleasedEventDetailsType* const e);
    void produceMouseWheelMoved     (MouseWheelMovedEventDetailsType* const e);
    void produceKeyPressed          (KeyPressedEventDetailsType* const e);
    void produceKeyReleased         (KeyReleasedEventDetailsType* const e);
    void produceKeyTyped            (KeyTypedEventDetailsType* const e);
    void produceFocusGained         (FocusGainedEventDetailsType* const e);
    void produceFocusLost           (FocusLostEventDetailsType* const e);
    void produceComponentHidden     (ComponentHiddenEventDetailsType* const e);
    void produceComponentVisible    (ComponentVisibleEventDetailsType* const e);
    void produceComponentMoved      (ComponentMovedEventDetailsType* const e);
    void produceComponentResized    (ComponentResizedEventDetailsType* const e);
    void produceComponentEnabled    (ComponentEnabledEventDetailsType* const e);
    void produceComponentDisabled   (ComponentDisabledEventDetailsType* const e);
    void produceToolTipActivated    (ToolTipActivatedEventDetailsType* const e);
    void produceToolTipDeactivated  (ToolTipDeactivatedEventDetailsType* const e);
    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    static EventDescription   *_eventDesc[];
    static EventProducerType _producerType;

    boost::signals2::connection _ToolTipActivateUpdateConnection;

    boost::signals2::connection _ToolTipActivateMouseEnterConnection,
        _ToolTipActivateMouseExitConnection;

    boost::signals2::connection _ActiveTooltipClickConnection,
                                _ActiveTooltipExitConnection,
                                _ActiveTooltipPressConnection,
                                _ActiveTooltipReleaseConnection;

    friend class FieldContainer;
    friend class ComponentEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ComponentEventSource &source);
};

typedef ComponentEventSource *ComponentEventSourceP;

OSG_END_NAMESPACE

#include "OSGComponentEventSourceBase.inl"
#include "OSGComponentEventSource.inl"

#endif /* _OSGCOMPONENTEVENTSOURCE_H_ */