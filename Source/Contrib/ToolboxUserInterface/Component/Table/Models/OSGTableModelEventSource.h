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

#ifndef _OSGTABLEMODELEVENTSOURCE_H_
#define _OSGTABLEMODELEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTableModelEventSourceBase.h"
//Event Producer Headers
#include "OSGActivity.h"
#include "OSGConsumableEventCombiner.h"

#include "OSGTableModelEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief TableModelEventSource class. See \ref
           PageContribToolboxUserInterfaceTableModelEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING TableModelEventSource : public TableModelEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TableModelEventSourceBase Inherited;
    typedef TableModelEventSource     Self;
    
    typedef TableModelEventDetails ContentsHeaderRowChangedEventDetailsType;
    typedef TableModelEventDetails ContentsChangedEventDetailsType;
    typedef TableModelEventDetails IntervalAddedEventDetailsType;
    typedef TableModelEventDetails IntervalRemovedEventDetailsType;

    typedef boost::signals2::signal<void (EventDetails* const            , UInt32)> BaseEventType;
    typedef boost::signals2::signal<void (TableModelEventDetails* const, UInt32), ConsumableEventCombiner> ContentsHeaderRowChangedEventType;
    typedef boost::signals2::signal<void (TableModelEventDetails* const, UInt32), ConsumableEventCombiner> ContentsChangedEventType;
    typedef boost::signals2::signal<void (TableModelEventDetails* const, UInt32), ConsumableEventCombiner> IntervalAddedEventType;
    typedef boost::signals2::signal<void (TableModelEventDetails* const, UInt32), ConsumableEventCombiner> IntervalRemovedEventType;

    enum
    {
        ContentsHeaderRowChangedEventId = 1,
        ContentsChangedEventId = ContentsHeaderRowChangedEventId + 1,
        IntervalAddedEventId = ContentsChangedEventId + 1,
        IntervalRemovedEventId = IntervalAddedEventId + 1,
        NextProducedEventId = IntervalRemovedEventId + 1
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
    
    //ContentsHeaderRowChanged
    boost::signals2::connection connectContentsHeaderRowChanged(const ContentsHeaderRowChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectContentsHeaderRowChanged(const ContentsHeaderRowChangedEventType::group_type &group,
                                                       const ContentsHeaderRowChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectContentsHeaderRowChanged(const ContentsHeaderRowChangedEventType::group_type &group);
    void   disconnectAllSlotsContentsHeaderRowChanged(void);
    bool   isEmptyContentsHeaderRowChanged  (void) const;
    UInt32 numSlotsContentsHeaderRowChanged (void) const;
    
    //ContentsChanged
    boost::signals2::connection connectContentsChanged(const ContentsChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectContentsChanged(const ContentsChangedEventType::group_type &group,
                                                       const ContentsChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectContentsChanged        (const ContentsChangedEventType::group_type &group);
    void   disconnectAllSlotsContentsChanged(void);
    bool   isEmptyContentsChanged           (void) const;
    UInt32 numSlotsContentsChanged          (void) const;
    
    //IntervalAdded
    boost::signals2::connection connectIntervalAdded  (const IntervalAddedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectIntervalAdded  (const IntervalAddedEventType::group_type &group,
                                                       const IntervalAddedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectIntervalAdded          (const IntervalAddedEventType::group_type &group);
    void   disconnectAllSlotsIntervalAdded  (void);
    bool   isEmptyIntervalAdded             (void) const;
    UInt32 numSlotsIntervalAdded            (void) const;
    
    //IntervalRemoved
    boost::signals2::connection connectIntervalRemoved(const IntervalRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectIntervalRemoved(const IntervalRemovedEventType::group_type &group,
                                                       const IntervalRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectIntervalRemoved        (const IntervalRemovedEventType::group_type &group);
    void   disconnectAllSlotsIntervalRemoved(void);
    bool   isEmptyIntervalRemoved           (void) const;
    UInt32 numSlotsIntervalRemoved          (void) const;
    
    //Moved protected -> public:    
    void produceContentsHeaderRowChanged  (ContentsHeaderRowChangedEventDetailsType* const e);
    void produceContentsChanged     (ContentsChangedEventDetailsType* const e);
    void produceIntervalAdded       (IntervalAddedEventDetailsType* const e);
    void produceIntervalRemoved     (IntervalRemovedEventDetailsType* const e);
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

    // Variables should all be in TableModelEventSourceBase.
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    ContentsHeaderRowChangedEventType _ContentsHeaderRowChangedEvent;
    ContentsChangedEventType _ContentsChangedEvent;
    IntervalAddedEventType _IntervalAddedEvent;
    IntervalRemovedEventType _IntervalRemovedEvent;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleContentsHeaderRowChangedSignal(void) const;
    GetEventHandlePtr getHandleContentsChangedSignal(void) const;
    GetEventHandlePtr getHandleIntervalAddedSignal(void) const;
    GetEventHandlePtr getHandleIntervalRemovedSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TableModelEventSource(void);
    TableModelEventSource(const TableModelEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TableModelEventSource(void);

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
    friend class TableModelEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TableModelEventSource &source);
};

typedef TableModelEventSource *TableModelEventSourceP;

OSG_END_NAMESPACE

#include "OSGTableModelEventSourceBase.inl"
#include "OSGTableModelEventSource.inl"

#endif /* _OSGTABLEMODELEVENTSOURCE_H_ */
