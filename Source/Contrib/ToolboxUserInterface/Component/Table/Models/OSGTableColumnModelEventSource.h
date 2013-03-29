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

#ifndef _OSGTABLECOLUMNMODELEVENTSOURCE_H_
#define _OSGTABLECOLUMNMODELEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTableColumnModelEventSourceBase.h"

//Event Producer Headers
#include "OSGActivity.h"
#include "OSGConsumableEventCombiner.h"
    
#include "OSGTableColumnModelEventDetailsFields.h"
#include "OSGChangeEventDetailsFields.h"
#include "OSGListSelectionEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief TableColumnModelEventSource class. See \ref
           PageContribToolboxUserInterfaceTableColumnModelEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING TableColumnModelEventSource : public TableColumnModelEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TableColumnModelEventSourceBase Inherited;
    typedef TableColumnModelEventSource     Self;

    typedef TableColumnModelEventDetails ColumnAddedEventDetailsType;
    typedef TableColumnModelEventDetails ColumnMovedEventDetailsType;
    typedef TableColumnModelEventDetails ColumnRemovedEventDetailsType;
    typedef ChangeEventDetails ColumnMarginChangedEventDetailsType;
    typedef ListSelectionEventDetails ColumnSelectionChangedEventDetailsType;

    typedef boost::signals2::signal<void (EventDetails* const            , UInt32)> BaseEventType;
    typedef boost::signals2::signal<void (TableColumnModelEventDetails* const, UInt32), ConsumableEventCombiner> ColumnAddedEventType;
    typedef boost::signals2::signal<void (TableColumnModelEventDetails* const, UInt32), ConsumableEventCombiner> ColumnMovedEventType;
    typedef boost::signals2::signal<void (TableColumnModelEventDetails* const, UInt32), ConsumableEventCombiner> ColumnRemovedEventType;
    typedef boost::signals2::signal<void (ChangeEventDetails* const, UInt32), ConsumableEventCombiner> ColumnMarginChangedEventType;
    typedef boost::signals2::signal<void (ListSelectionEventDetails* const, UInt32), ConsumableEventCombiner> ColumnSelectionChangedEventType;


    enum
    {
        ColumnAddedEventId = 1,
        ColumnMovedEventId = ColumnAddedEventId + 1,
        ColumnRemovedEventId = ColumnMovedEventId + 1,
        ColumnMarginChangedEventId = ColumnRemovedEventId + 1,
        ColumnSelectionChangedEventId = ColumnMarginChangedEventId + 1,
        NextProducedEventId = ColumnSelectionChangedEventId + 1
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
    
    //ColumnAdded
    boost::signals2::connection connectColumnAdded    (const ColumnAddedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectColumnAdded    (const ColumnAddedEventType::group_type &group,
                                                       const ColumnAddedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectColumnAdded            (const ColumnAddedEventType::group_type &group);
    void   disconnectAllSlotsColumnAdded    (void);
    bool   isEmptyColumnAdded               (void) const;
    UInt32 numSlotsColumnAdded              (void) const;
    
    //ColumnMoved
    boost::signals2::connection connectColumnMoved    (const ColumnMovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectColumnMoved    (const ColumnMovedEventType::group_type &group,
                                                       const ColumnMovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectColumnMoved            (const ColumnMovedEventType::group_type &group);
    void   disconnectAllSlotsColumnMoved    (void);
    bool   isEmptyColumnMoved               (void) const;
    UInt32 numSlotsColumnMoved              (void) const;
    
    //ColumnRemoved
    boost::signals2::connection connectColumnRemoved  (const ColumnRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectColumnRemoved  (const ColumnRemovedEventType::group_type &group,
                                                       const ColumnRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectColumnRemoved          (const ColumnRemovedEventType::group_type &group);
    void   disconnectAllSlotsColumnRemoved  (void);
    bool   isEmptyColumnRemoved             (void) const;
    UInt32 numSlotsColumnRemoved            (void) const;
    
    //ColumnMarginChanged
    boost::signals2::connection connectColumnMarginChanged(const ColumnMarginChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectColumnMarginChanged(const ColumnMarginChangedEventType::group_type &group,
                                                       const ColumnMarginChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectColumnMarginChanged    (const ColumnMarginChangedEventType::group_type &group);
    void   disconnectAllSlotsColumnMarginChanged(void);
    bool   isEmptyColumnMarginChanged       (void) const;
    UInt32 numSlotsColumnMarginChanged      (void) const;
    
    //ColumnSelectionChanged
    boost::signals2::connection connectColumnSelectionChanged(const ColumnSelectionChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectColumnSelectionChanged(const ColumnSelectionChangedEventType::group_type &group,
                                                       const ColumnSelectionChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectColumnSelectionChanged (const ColumnSelectionChangedEventType::group_type &group);
    void   disconnectAllSlotsColumnSelectionChanged(void);
    bool   isEmptyColumnSelectionChanged    (void) const;
    UInt32 numSlotsColumnSelectionChanged   (void) const;
    
    
    void produceColumnAdded         (ColumnAddedEventDetailsType* const e);
    void produceColumnMoved         (ColumnMovedEventDetailsType* const e);
    void produceColumnRemoved       (ColumnRemovedEventDetailsType* const e);
    void produceColumnMarginChanged  (ColumnMarginChangedEventDetailsType* const e);
    void produceColumnSelectionChanged  (ColumnSelectionChangedEventDetailsType* const e);
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

    // Variables should all be in TableColumnModelBase.
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    ColumnAddedEventType _ColumnAddedEvent;
    ColumnMovedEventType _ColumnMovedEvent;
    ColumnRemovedEventType _ColumnRemovedEvent;
    ColumnMarginChangedEventType _ColumnMarginChangedEvent;
    ColumnSelectionChangedEventType _ColumnSelectionChangedEvent;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleColumnAddedSignal(void) const;
    GetEventHandlePtr getHandleColumnMovedSignal(void) const;
    GetEventHandlePtr getHandleColumnRemovedSignal(void) const;
    GetEventHandlePtr getHandleColumnMarginChangedSignal(void) const;
    GetEventHandlePtr getHandleColumnSelectionChangedSignal(void) const;
    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TableColumnModelEventSource(void);
    TableColumnModelEventSource(const TableColumnModelEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TableColumnModelEventSource(void);

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
    friend class TableColumnModelEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TableColumnModelEventSource &source);
};

typedef TableColumnModelEventSource *TableColumnModelEventSourceP;

OSG_END_NAMESPACE

#include "OSGTableColumnModelEventSourceBase.inl"
#include "OSGTableColumnModelEventSource.inl"

#endif /* _OSGTABLECOLUMNMODEL_H_ */
