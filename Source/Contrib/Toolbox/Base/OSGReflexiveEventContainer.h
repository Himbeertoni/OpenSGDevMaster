/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003 by the OpenSG Forum                          *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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

#ifndef _OPENSG_REFLEXIVE_EVENT_CONTAINER_H_
#define _OPENSG_REFLEXIVE_EVENT_CONTAINER_H_

#include "OSGConfig.h"
#include "OSGContribToolboxDef.h"

#include "OSGReflexiveContainer.h"

#include "OSGEventHandle.h"
#include "OSGEventProducerType.h"
#include <boost/signals2.hpp>

#include <string>
#include <vector>
#include <utility>

OSG_BEGIN_NAMESPACE

class OSG_CONTRIBTOOLBOX_DLLMAPPING ReflexiveEventContainer : public ReflexiveContainer
{
  public:

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
                       ReflexiveEventContainer* const eventProducer) const;

    virtual bool
        isConnected(EventDescription const * eventDesc) const;

    virtual bool
        disconnectFromEvent(EventDescription const * eventDesc) const;

    bool validateConnectable(EventDescription const * eventDesc,
                             ReflexiveEventContainer* const eventProducer) const;

    GetEventHandlePtr invalidGetEvent (void) const;

  protected:

    static EventProducerType _producerType;
 
    ReflexiveEventContainer(void);

    ReflexiveEventContainer(const ReflexiveEventContainer &source);

  public:

    virtual ~ReflexiveEventContainer(void);

  protected:
    std::list<std::pair<boost::signals2::connection, Activity*> > _ConnectedActivities;
};

#include "OSGReflexiveEventContainer.inl"

OSG_END_NAMESPACE

#endif /* _OSGREFLEXIVECONTAINER_H_ */
