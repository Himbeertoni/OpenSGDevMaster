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

#ifndef _OSGLISTMODELEVENTSOURCE_H_
#define _OSGLISTMODELEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGListModelEventSourceBase.h"

//Event Producer Headers
#include "OSGActivity.h"
#include "OSGConsumableEventCombiner.h"

#include "OSGListDataEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief ListModelEventSource class. See \ref
           PageContribToolboxUserInterfaceListModelEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING ListModelEventSource : public ListModelEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef ListModelEventSourceBase Inherited;
    typedef ListModelEventSource     Self;
    
    typedef ListDataEventDetails ListDataContentsChangedEventDetailsType;
    typedef ListDataEventDetails ListDataIntervalAddedEventDetailsType;
    typedef ListDataEventDetails ListDataIntervalRemovedEventDetailsType;

    typedef boost::signals2::signal<void (EventDetails* const            , UInt32)> BaseEventType;
    typedef boost::signals2::signal<void (ListDataEventDetails* const, UInt32), ConsumableEventCombiner> ListDataContentsChangedEventType;
    typedef boost::signals2::signal<void (ListDataEventDetails* const, UInt32), ConsumableEventCombiner> ListDataIntervalAddedEventType;
    typedef boost::signals2::signal<void (ListDataEventDetails* const, UInt32), ConsumableEventCombiner> ListDataIntervalRemovedEventType;

    enum
    {
        ListDataContentsChangedEventId = 1,
        ListDataIntervalAddedEventId = ListDataContentsChangedEventId + 1,
        ListDataIntervalRemovedEventId = ListDataIntervalAddedEventId + 1,
        NextProducedEventId = ListDataIntervalRemovedEventId + 1
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
    
    //ListDataContentsChanged
    boost::signals2::connection connectListDataContentsChanged(const ListDataContentsChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectListDataContentsChanged(const ListDataContentsChangedEventType::group_type &group,
                                                       const ListDataContentsChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectListDataContentsChanged(const ListDataContentsChangedEventType::group_type &group);
    void   disconnectAllSlotsListDataContentsChanged(void);
    bool   isEmptyListDataContentsChanged   (void) const;
    UInt32 numSlotsListDataContentsChanged  (void) const;
    
    //ListDataIntervalAdded
    boost::signals2::connection connectListDataIntervalAdded(const ListDataIntervalAddedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectListDataIntervalAdded(const ListDataIntervalAddedEventType::group_type &group,
                                                       const ListDataIntervalAddedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectListDataIntervalAdded  (const ListDataIntervalAddedEventType::group_type &group);
    void   disconnectAllSlotsListDataIntervalAdded(void);
    bool   isEmptyListDataIntervalAdded     (void) const;
    UInt32 numSlotsListDataIntervalAdded    (void) const;
    
    //ListDataIntervalRemoved
    boost::signals2::connection connectListDataIntervalRemoved(const ListDataIntervalRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectListDataIntervalRemoved(const ListDataIntervalRemovedEventType::group_type &group,
                                                       const ListDataIntervalRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectListDataIntervalRemoved(const ListDataIntervalRemovedEventType::group_type &group);
    void   disconnectAllSlotsListDataIntervalRemoved(void);
    bool   isEmptyListDataIntervalRemoved   (void) const;
    UInt32 numSlotsListDataIntervalRemoved  (void) const;
    
    //Moved protected -> public:
    void produceListDataContentsChanged  (ListDataContentsChangedEventDetailsType* const e);
    void produceListDataIntervalAdded  (ListDataIntervalAddedEventDetailsType* const e);
    void produceListDataIntervalRemoved  (ListDataIntervalRemovedEventDetailsType* const e);

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
    ListDataContentsChangedEventType _ListDataContentsChangedEvent;
    ListDataIntervalAddedEventType _ListDataIntervalAddedEvent;
    ListDataIntervalRemovedEventType _ListDataIntervalRemovedEvent;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleListDataContentsChangedSignal(void) const;
    GetEventHandlePtr getHandleListDataIntervalAddedSignal(void) const;
    GetEventHandlePtr getHandleListDataIntervalRemovedSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    /*! \}                                                                 */

    // Variables should all be in ListModelEventSourceBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    ListModelEventSource(void);
    ListModelEventSource(const ListModelEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ListModelEventSource(void);

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
    friend class ListModelEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ListModelEventSource &source);
};

typedef ListModelEventSource *ListModelEventSourceP;

OSG_END_NAMESPACE

#include "OSGListModelEventSourceBase.inl"
#include "OSGListModelEventSource.inl"

#endif /* _OSGLISTMODELEVENTSOURCE_H_ */
