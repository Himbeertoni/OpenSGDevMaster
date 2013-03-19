/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

OSG_BEGIN_NAMESPACE

inline
UInt32 EventContainer::getNumEvents(      void            ) const
{
    return getProducerType().getNumEventDescs();
}

inline
GetEventHandlePtr EventContainer::getEvent    (      UInt32 eventId  ) const
{
    const EventDescription *desc = getEventDescription(eventId);

    return (desc != NULL) ? desc->getEvent(this) : invalidGetEvent();
}

inline
GetEventHandlePtr EventContainer::getEvent    (const Char8 *eventName) const
{
    const EventDescription *desc = getEventDescription(eventName);

    return (desc != NULL) ? desc->getEvent(this) : invalidGetEvent();
}

inline
const EventProducerType &EventContainer::getProducerType(void) const
{
    return _producerType;
}

inline
boost::signals2::connection EventContainer::connectEvent(UInt32 eventId, 
                                                      const BaseEventType::slot_type &listener,
                                                      boost::signals2::connect_position at)
{
    return boost::signals2::connection();
}
                                              
inline
boost::signals2::connection EventContainer::connectEvent(UInt32 eventId, 
                                                      const BaseEventType::group_type &group,
                                                      const BaseEventType::slot_type &listener,
                                                      boost::signals2::connect_position at)
{
    return boost::signals2::connection();
}
    
inline
void   EventContainer::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
}

inline
void   EventContainer::disconnectAllSlotsEvent(UInt32 eventId)
{
}

inline
bool   EventContainer::isEmptyEvent(UInt32 eventId) const
{
    return true;
}

inline
UInt32 EventContainer::numSlotsEvent(UInt32 eventId) const
{
    return 0;
}

inline
EventDescription const * EventContainer::getEventDescription(      UInt32 eventId  ) const
{
    return getProducerType().getEventDescription(eventId);
}
    
inline
EventDescription const * EventContainer::getEventDescription(const Char8 *eventName) const
{
    return getProducerType().findEventDescription(eventName);
}

inline
bool EventContainer::isEventProducer(void) const
{
    return getNumEvents() != 0;
}

inline
bool EventContainer::isEventConnectable(void) const
{
    return getConnectableEvents().size() == 0;
}
OSG_END_NAMESPACE
