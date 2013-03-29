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

#ifndef _OSGMENUBUTTONEVENTSOURCE_H_
#define _OSGMENUBUTTONEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGMenuButtonEventSourceBase.h"

    
#include "OSGActionEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief MenuButtonEventSource class. See \ref
           PageContribToolboxUserInterfaceMenuButtonEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING MenuButtonEventSource : public MenuButtonEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef MenuButtonEventSourceBase Inherited;
    typedef MenuButtonEventSource     Self;

    typedef ActionEventDetails MenuActionPerformedEventDetailsType;

    typedef boost::signals2::signal<void (ActionEventDetails* const, UInt32), ConsumableEventCombiner> MenuActionPerformedEventType;


    enum
    {
        MenuActionPerformedEventId = Inherited::NextProducedEventId,
        NextProducedEventId = MenuActionPerformedEventId + 1
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
    
    //MenuActionPerformed
    boost::signals2::connection connectMenuActionPerformed(const MenuActionPerformedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectMenuActionPerformed(const MenuActionPerformedEventType::group_type &group,
                                                       const MenuActionPerformedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectMenuActionPerformed    (const MenuActionPerformedEventType::group_type &group);
    void   disconnectAllSlotsMenuActionPerformed(void);
    bool   isEmptyMenuActionPerformed       (void) const;
    UInt32 numSlotsMenuActionPerformed      (void) const;
    
    
    void produceMenuActionPerformed  (MenuActionPerformedEventDetailsType* const e);
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

    // Variables should all be in MenuButtonBase.
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    MenuActionPerformedEventType _MenuActionPerformedEvent;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleMenuActionPerformedSignal(void) const;
    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    MenuButtonEventSource(void);
    MenuButtonEventSource(const MenuButtonEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MenuButtonEventSource(void);

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
    friend class MenuButtonEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const MenuButtonEventSource &source);
};

typedef MenuButtonEventSource *MenuButtonEventSourceP;

OSG_END_NAMESPACE

#include "OSGMenuButtonEventSourceBase.inl"
#include "OSGMenuButtonEventSource.inl"

#endif /* _OSGMENUBUTTON_H_ */
