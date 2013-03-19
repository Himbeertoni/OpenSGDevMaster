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

#ifndef _OSGEVENTCONTAINER_H_
#define _OSGEVENTCONTAINER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGEventContainerBase.h"
#include "OSGEventContainerForwards.h"

#include "OSGEventHandle.h"
#include "OSGEventProducerType.h"
#include <boost/signals2.hpp>

#include <string>
#include <vector>
#include <utility>

OSG_BEGIN_NAMESPACE

/*! \brief EventContainer class. See \ref
           PageContribToolboxEventContainer for a description.
*/

class OSG_CONTRIBTOOLBOX_DLLMAPPING EventContainer : public EventContainerBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef EventContainerBase Inherited;
    typedef EventContainer     Self;

    typedef std::pair<std::string, const TypeBase*> EventDescPair;
    typedef std::vector<EventDescPair> EventDescVector;

    virtual const EventProducerType &getProducerType(void) const;

    virtual UInt32            getNumEvents(      void            ) const;

    virtual GetEventHandlePtr getEvent    (      UInt32 eventId  ) const;
    
    virtual GetEventHandlePtr getEvent    (const Char8 *eventName) const;

    bool isEventProducer(void) const;

    virtual boost::signals2::connection attachActivity(UInt32 eventId,
                                                       Activity* TheActivity);

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

    virtual void   disconnectAll(void);


    virtual EventDescription const *
                           getEventDescription(      UInt32 eventId  ) const;
    
    virtual EventDescription const *
                           getEventDescription(const Char8 *eventName) const;
 
    bool isEventConnectable(void) const;

    virtual bool
    isConnectableEvent(EventDescription const * eventDesc) const;

    virtual EventDescVector getConnectableEvents(void) const;

    virtual boost::signals2::connection 
        connectToEvent(EventDescription const * eventDesc,
                       EventContainer* const eventProducer) const;

    virtual bool
        isConnected(EventDescription const * eventDesc) const;

    virtual bool
        disconnectFromEvent(EventDescription const * eventDesc) const;

    bool validateConnectable(EventDescription const * eventDesc,
                             EventContainer* const eventProducer) const;

    GetEventHandlePtr invalidGetEvent (void) const;

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

    // Variables should all be in EventContainerBase.
    static EventProducerType _producerType;
	std::list<std::pair<boost::signals2::connection, Activity*> > _ConnectedActivities;
    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    EventContainer(void);
    EventContainer(const EventContainer &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~EventContainer(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class EventContainerBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const EventContainer &source);
};

typedef EventContainer *EventContainerP;

OSG_END_NAMESPACE

#include "OSGEventContainerBase.inl"
#include "OSGEventContainer.inl"

#endif /* _OSGEVENTCONTAINER_H_ */
