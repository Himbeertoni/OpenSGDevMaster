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

#ifndef _OSGTOGGLEBUTTONEVENTSOURCE_H_
#define _OSGTOGGLEBUTTONEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGToggleButtonEventSourceBase.h"
#include "OSGButtonSelectedEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief ToggleButtonEventSource class. See \ref
           PageContribToolboxUserInterfaceToggleButtonEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING ToggleButtonEventSource : public ToggleButtonEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef ToggleButtonEventSourceBase Inherited;
    typedef ToggleButtonEventSource     Self;
    
    typedef ButtonSelectedEventDetails ButtonSelectedEventDetailsType;
    typedef ButtonSelectedEventDetails ButtonDeselectedEventDetailsType;

    typedef boost::signals2::signal<void (ButtonSelectedEventDetails* const, UInt32), ConsumableEventCombiner> ButtonSelectedEventType;
    typedef boost::signals2::signal<void (ButtonSelectedEventDetails* const, UInt32), ConsumableEventCombiner> ButtonDeselectedEventType;

    enum
    {
        ButtonSelectedEventId = Inherited::NextProducedEventId,
        ButtonDeselectedEventId = ButtonSelectedEventId + 1,
        NextProducedEventId = ButtonDeselectedEventId + 1
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
    
    //ButtonSelected
    boost::signals2::connection connectButtonSelected (const ButtonSelectedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectButtonSelected (const ButtonSelectedEventType::group_type &group,
                                                       const ButtonSelectedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectButtonSelected         (const ButtonSelectedEventType::group_type &group);
    void   disconnectAllSlotsButtonSelected (void);
    bool   isEmptyButtonSelected            (void) const;
    UInt32 numSlotsButtonSelected           (void) const;
    
    //ButtonDeselected
    boost::signals2::connection connectButtonDeselected(const ButtonDeselectedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectButtonDeselected(const ButtonDeselectedEventType::group_type &group,
                                                       const ButtonDeselectedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectButtonDeselected       (const ButtonDeselectedEventType::group_type &group);
    void   disconnectAllSlotsButtonDeselected(void);
    bool   isEmptyButtonDeselected          (void) const;
    UInt32 numSlotsButtonDeselected         (void) const;
    
    //Moved protected -> public:
    void produceButtonSelected      (ButtonSelectedEventDetailsType* const e);
    void produceButtonDeselected    (ButtonDeselectedEventDetailsType* const e);    
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
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    ButtonSelectedEventType _ButtonSelectedEvent;
    ButtonDeselectedEventType _ButtonDeselectedEvent;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleButtonSelectedSignal(void) const;
    GetEventHandlePtr getHandleButtonDeselectedSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    /*! \}                                                                 */
    // Variables should all be in ToggleButtonEventSourceBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    ToggleButtonEventSource(void);
    ToggleButtonEventSource(const ToggleButtonEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ToggleButtonEventSource(void);

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
    friend class ToggleButtonEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ToggleButtonEventSource &source);
};

typedef ToggleButtonEventSource *ToggleButtonEventSourceP;

OSG_END_NAMESPACE

#include "OSGToggleButtonEventSourceBase.inl"
#include "OSGToggleButtonEventSource.inl"

#endif /* _OSGTOGGLEBUTTONEVENTSOURCE_H_ */
