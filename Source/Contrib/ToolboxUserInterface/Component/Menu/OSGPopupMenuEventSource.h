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

#ifndef _OSGPOPUPMENUEVENTSOURCE_H_
#define _OSGPOPUPMENUEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGPopupMenuEventSourceBase.h"

    
#include "OSGPopupMenuEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief PopupMenuEventSource class. See \ref
           PageContribToolboxUserInterfacePopupMenuEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING PopupMenuEventSource : public PopupMenuEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef PopupMenuEventSourceBase Inherited;
    typedef PopupMenuEventSource     Self;

    typedef PopupMenuEventDetails PopupMenuWillBecomeVisibleEventDetailsType;
    typedef PopupMenuEventDetails PopupMenuWillBecomeInvisibleEventDetailsType;
    typedef PopupMenuEventDetails PopupMenuCanceledEventDetailsType;
    typedef PopupMenuEventDetails PopupMenuContentsChangedEventDetailsType;

    typedef boost::signals2::signal<void (PopupMenuEventDetails* const, UInt32), ConsumableEventCombiner> PopupMenuWillBecomeVisibleEventType;
    typedef boost::signals2::signal<void (PopupMenuEventDetails* const, UInt32), ConsumableEventCombiner> PopupMenuWillBecomeInvisibleEventType;
    typedef boost::signals2::signal<void (PopupMenuEventDetails* const, UInt32), ConsumableEventCombiner> PopupMenuCanceledEventType;
    typedef boost::signals2::signal<void (PopupMenuEventDetails* const, UInt32), ConsumableEventCombiner> PopupMenuContentsChangedEventType;


    enum
    {
        PopupMenuWillBecomeVisibleEventId = Inherited::NextProducedEventId,
        PopupMenuWillBecomeInvisibleEventId = PopupMenuWillBecomeVisibleEventId + 1,
        PopupMenuCanceledEventId = PopupMenuWillBecomeInvisibleEventId + 1,
        PopupMenuContentsChangedEventId = PopupMenuCanceledEventId + 1,
        NextProducedEventId = PopupMenuContentsChangedEventId + 1
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
    
    //PopupMenuWillBecomeVisible
    boost::signals2::connection connectPopupMenuWillBecomeVisible(const PopupMenuWillBecomeVisibleEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectPopupMenuWillBecomeVisible(const PopupMenuWillBecomeVisibleEventType::group_type &group,
                                                       const PopupMenuWillBecomeVisibleEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectPopupMenuWillBecomeVisible(const PopupMenuWillBecomeVisibleEventType::group_type &group);
    void   disconnectAllSlotsPopupMenuWillBecomeVisible(void);
    bool   isEmptyPopupMenuWillBecomeVisible(void) const;
    UInt32 numSlotsPopupMenuWillBecomeVisible(void) const;
    
    //PopupMenuWillBecomeInvisible
    boost::signals2::connection connectPopupMenuWillBecomeInvisible(const PopupMenuWillBecomeInvisibleEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectPopupMenuWillBecomeInvisible(const PopupMenuWillBecomeInvisibleEventType::group_type &group,
                                                       const PopupMenuWillBecomeInvisibleEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectPopupMenuWillBecomeInvisible(const PopupMenuWillBecomeInvisibleEventType::group_type &group);
    void   disconnectAllSlotsPopupMenuWillBecomeInvisible(void);
    bool   isEmptyPopupMenuWillBecomeInvisible(void) const;
    UInt32 numSlotsPopupMenuWillBecomeInvisible(void) const;
    
    //PopupMenuCanceled
    boost::signals2::connection connectPopupMenuCanceled(const PopupMenuCanceledEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectPopupMenuCanceled(const PopupMenuCanceledEventType::group_type &group,
                                                       const PopupMenuCanceledEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectPopupMenuCanceled      (const PopupMenuCanceledEventType::group_type &group);
    void   disconnectAllSlotsPopupMenuCanceled(void);
    bool   isEmptyPopupMenuCanceled         (void) const;
    UInt32 numSlotsPopupMenuCanceled        (void) const;
    
    //PopupMenuContentsChanged
    boost::signals2::connection connectPopupMenuContentsChanged(const PopupMenuContentsChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectPopupMenuContentsChanged(const PopupMenuContentsChangedEventType::group_type &group,
                                                       const PopupMenuContentsChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectPopupMenuContentsChanged(const PopupMenuContentsChangedEventType::group_type &group);
    void   disconnectAllSlotsPopupMenuContentsChanged(void);
    bool   isEmptyPopupMenuContentsChanged  (void) const;
    UInt32 numSlotsPopupMenuContentsChanged (void) const;
    
    
    void producePopupMenuWillBecomeVisible  (PopupMenuWillBecomeVisibleEventDetailsType* const e);
    void producePopupMenuWillBecomeInvisible  (PopupMenuWillBecomeInvisibleEventDetailsType* const e);
    void producePopupMenuCanceled   (PopupMenuCanceledEventDetailsType* const e);
    void producePopupMenuContentsChanged  (PopupMenuContentsChangedEventDetailsType* const e);
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

    // Variables should all be in PopupMenuBase.
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    PopupMenuWillBecomeVisibleEventType _PopupMenuWillBecomeVisibleEvent;
    PopupMenuWillBecomeInvisibleEventType _PopupMenuWillBecomeInvisibleEvent;
    PopupMenuCanceledEventType _PopupMenuCanceledEvent;
    PopupMenuContentsChangedEventType _PopupMenuContentsChangedEvent;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandlePopupMenuWillBecomeVisibleSignal(void) const;
    GetEventHandlePtr getHandlePopupMenuWillBecomeInvisibleSignal(void) const;
    GetEventHandlePtr getHandlePopupMenuCanceledSignal(void) const;
    GetEventHandlePtr getHandlePopupMenuContentsChangedSignal(void) const;
    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    PopupMenuEventSource(void);
    PopupMenuEventSource(const PopupMenuEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PopupMenuEventSource(void);

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
    friend class PopupMenuEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const PopupMenuEventSource &source);
};

typedef PopupMenuEventSource *PopupMenuEventSourceP;

OSG_END_NAMESPACE

#include "OSGPopupMenuEventSourceBase.inl"
#include "OSGPopupMenuEventSource.inl"

#endif /* _OSGPOPUPMENU_H_ */
