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

#ifndef _OSGDIALOGWINDOWEVENTSOURCE_H_
#define _OSGDIALOGWINDOWEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGDialogWindowEventSourceBase.h"
#include "OSGDialogWindowEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief DialogWindowEventSource class. See \ref
           PageContribToolboxUserInterfaceDialogWindowEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DialogWindowEventSource : public DialogWindowEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef DialogWindowEventSourceBase Inherited;
    typedef DialogWindowEventSource     Self;

    typedef DialogWindowEventDetails DialogWindowClosingEventDetailsType;
    typedef DialogWindowEventDetails DialogWindowClosedEventDetailsType;

    typedef boost::signals2::signal<void (DialogWindowEventDetails* const, UInt32), ConsumableEventCombiner> DialogWindowClosingEventType;
    typedef boost::signals2::signal<void (DialogWindowEventDetails* const, UInt32), ConsumableEventCombiner> DialogWindowClosedEventType;

    enum
    {
        DialogWindowClosingEventId = Inherited::NextProducedEventId,
        DialogWindowClosedEventId = DialogWindowClosingEventId + 1,
        NextProducedEventId = DialogWindowClosedEventId + 1
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
    
    //DialogWindowClosing
    boost::signals2::connection connectDialogWindowClosing(const DialogWindowClosingEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectDialogWindowClosing(const DialogWindowClosingEventType::group_type &group,
                                                       const DialogWindowClosingEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectDialogWindowClosing    (const DialogWindowClosingEventType::group_type &group);
    void   disconnectAllSlotsDialogWindowClosing(void);
    bool   isEmptyDialogWindowClosing       (void) const;
    UInt32 numSlotsDialogWindowClosing      (void) const;
    
    //DialogWindowClosed
    boost::signals2::connection connectDialogWindowClosed(const DialogWindowClosedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectDialogWindowClosed(const DialogWindowClosedEventType::group_type &group,
                                                       const DialogWindowClosedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectDialogWindowClosed     (const DialogWindowClosedEventType::group_type &group);
    void   disconnectAllSlotsDialogWindowClosed(void);
    bool   isEmptyDialogWindowClosed        (void) const;
    UInt32 numSlotsDialogWindowClosed       (void) const;
    
    //Moved protected -> public:
    void produceDialogWindowClosing  (DialogWindowClosingEventDetailsType* const e);
    void produceDialogWindowClosed  (DialogWindowClosedEventDetailsType* const e);
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

    // Variables should all be in DialogWindowEventSourceBase.
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    DialogWindowClosingEventType _DialogWindowClosingEvent;
    DialogWindowClosedEventType _DialogWindowClosedEvent;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleDialogWindowClosingSignal(void) const;
    GetEventHandlePtr getHandleDialogWindowClosedSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    DialogWindowEventSource(void);
    DialogWindowEventSource(const DialogWindowEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DialogWindowEventSource(void);

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
    friend class DialogWindowEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const DialogWindowEventSource &source);
};

typedef DialogWindowEventSource *DialogWindowEventSourceP;

OSG_END_NAMESPACE

#include "OSGDialogWindowEventSourceBase.inl"
#include "OSGDialogWindowEventSource.inl"

#endif /* _OSGDIALOGWINDOWEVENTSOURCE_H_ */
