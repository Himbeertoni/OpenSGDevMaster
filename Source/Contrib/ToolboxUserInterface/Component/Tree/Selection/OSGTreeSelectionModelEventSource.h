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

#ifndef _OSGTREESELECTIONMODELEVENTSOURCE_H_
#define _OSGTREESELECTIONMODELEVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTreeSelectionModelEventSourceBase.h"

//Event Producer Headers
#include "OSGActivity.h"
#include "OSGConsumableEventCombiner.h"
    
#include "OSGTreeSelectionEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief TreeSelectionModelEventSource class. See \ref
           PageContribToolboxUserInterfaceTreeSelectionModelEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING TreeSelectionModelEventSource : public TreeSelectionModelEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TreeSelectionModelEventSourceBase Inherited;
    typedef TreeSelectionModelEventSource     Self;

    typedef TreeSelectionEventDetails SelectionAddedEventDetailsType;
    typedef TreeSelectionEventDetails SelectionRemovedEventDetailsType;

    typedef boost::signals2::signal<void (EventDetails* const            , UInt32)> BaseEventType;
    typedef boost::signals2::signal<void (TreeSelectionEventDetails* const, UInt32), ConsumableEventCombiner> SelectionAddedEventType;
    typedef boost::signals2::signal<void (TreeSelectionEventDetails* const, UInt32), ConsumableEventCombiner> SelectionRemovedEventType;


    enum
    {
        SelectionAddedEventId = 1,
        SelectionRemovedEventId = SelectionAddedEventId + 1,
        NextProducedEventId = SelectionRemovedEventId + 1
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
    
    //SelectionAdded
    boost::signals2::connection connectSelectionAdded (const SelectionAddedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectSelectionAdded (const SelectionAddedEventType::group_type &group,
                                                       const SelectionAddedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectSelectionAdded         (const SelectionAddedEventType::group_type &group);
    void   disconnectAllSlotsSelectionAdded (void);
    bool   isEmptySelectionAdded            (void) const;
    UInt32 numSlotsSelectionAdded           (void) const;
    
    //SelectionRemoved
    boost::signals2::connection connectSelectionRemoved(const SelectionRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectSelectionRemoved(const SelectionRemovedEventType::group_type &group,
                                                       const SelectionRemovedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectSelectionRemoved       (const SelectionRemovedEventType::group_type &group);
    void   disconnectAllSlotsSelectionRemoved(void);
    bool   isEmptySelectionRemoved          (void) const;
    UInt32 numSlotsSelectionRemoved         (void) const;
    
    
    void produceSelectionAdded      (SelectionAddedEventDetailsType* const e);
    void produceSelectionRemoved    (SelectionRemovedEventDetailsType* const e);
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

    // Variables should all be in TreeSelectionModelBase.
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    SelectionAddedEventType _SelectionAddedEvent;
    SelectionRemovedEventType _SelectionRemovedEvent;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleSelectionAddedSignal(void) const;
    GetEventHandlePtr getHandleSelectionRemovedSignal(void) const;
    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TreeSelectionModelEventSource(void);
    TreeSelectionModelEventSource(const TreeSelectionModelEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TreeSelectionModelEventSource(void);

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
    friend class TreeSelectionModelEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TreeSelectionModelEventSource &source);
};

typedef TreeSelectionModelEventSource *TreeSelectionModelEventSourceP;

OSG_END_NAMESPACE

#include "OSGTreeSelectionModelEventSourceBase.inl"
#include "OSGTreeSelectionModelEventSource.inl"

#endif /* _OSGTREESELECTIONMODEL_H_ */
