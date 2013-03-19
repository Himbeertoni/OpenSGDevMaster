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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGReflexiveEventContainer.h"

#include "OSGActivity.h"

#include <boost/bind.hpp>

/*!\fn bool isEventConnectable(void) const
 * \brief Can this ReflexiveContainer connect to an Event.
 */

/*!\fn bool isConnectableEvent(EventDescription const * eventDesc) const
 * \brief Can this ReflexiveContainer connect to the given Event 
 *
 * \param[in] eventDesc A Event description
 */

/*!\fn EventDescVector getConnectableEvents(void) const
 * \brief Get a collection of the events that this container can connect to.
 *
 * \returns A collection of the events that this container can connect to
 */

/*!\fn boost::signals2::connection 
        connectToEvent(EventDescription const * eventDesc,
                       ReflexiveContainer* const eventProducer) const
 * \brief Connect this ReflexiveContainer to the given event.
 *
 * \param[in] eventDesc The event to connect to.
 * \param[in] eventProducer The event producer to connect to.
 *
 * \returns An object representing the connection made.
 */

/*!\fn bool isConnected(EventDescription const * eventDesc) const
 * \brief Is this container connected to the given event.
 *
 * \param[in] eventDesc The event
 */

/*!\fn bool disconnectFromEvent(EventDescription const * eventDesc) const
 * \brief Disconnect from the given event
 *
 * \param[in] eventDesc The event
 *
 * \returns True, if a disconnection occurred, false otherwise. 
 */

/*!\fn bool validateConnectable(EventDescription const * eventDesc,
                                ReflexiveContainer* const eventProducer) const
 * \brief Is the given Event description and producer valid for connecting to
 *
 * \param[] eventDesc An event
 * \param[] eventProducer An event producer
 *
 * \returns True if the given event by the event producer can be connected to
 * by this container.
 */
OSG_USING_NAMESPACE

#if 0
ReflexiveEventContainer::TypeObject ReflexiveEventContainer::_type(
    "ReflexiveEventContainer",
    NULL,
    "ReflexiveEventContainer",
    0,
    NULL,
    false,
    0);
#endif

EventProducerType ReflexiveEventContainer::_producerType(
    "Invalid");


GetEventHandlePtr ReflexiveEventContainer::invalidGetEvent (void) const
{
    return GetEventHandlePtr();
}

void   ReflexiveEventContainer::disconnectAll(void)
{
    for(UInt32 i(0) ; i<getNumEvents() ; ++i)
    {
        disconnectAllSlotsEvent(i+1);
    }
}

boost::signals2::connection ReflexiveEventContainer::attachActivity(UInt32 eventId,
                                                               Activity* TheActivity)
{
    return connectEvent(eventId, boost::bind(&Activity::eventProduced, TheActivity, _1, _2) );
}

bool ReflexiveEventContainer::isConnectableEvent(EventDescription const * eventDesc) const
{
    //By default no events can be connected to a ReflexiveContainer
    return false;
}

ReflexiveEventContainer::EventDescVector ReflexiveEventContainer::getConnectableEvents(void) const
{
    //By default no events can be connected to a ReflexiveContainer
    return EventDescVector();
}

bool ReflexiveEventContainer::disconnectFromEvent(EventDescription const * eventDesc) const
{
    //By default no events can be connected to a ReflexiveContainer
    return false;
}

bool
ReflexiveEventContainer::isConnected(EventDescription const * eventDesc) const
{
    //By default no events can be connected to a ReflexiveContainer
    return false;
}

bool ReflexiveEventContainer::validateConnectable(EventDescription const * eventDesc,
                                             ReflexiveEventContainer* const eventProducer) const
{
    //Validate the EventDescription and producer
    if(!isConnectableEvent(eventDesc))
    {
        SWARNING << "There is no Update event defined on "
                 << eventProducer->getType().getName() << " types." << std::endl;
        return false;
    }

    EventDescription const * LocalDesc(eventProducer->getEventDescription(eventDesc->getName().c_str()));
    if(!LocalDesc->isEquivalent(*eventDesc))
    {
        SWARNING << "There is no Update event defined on "
                 << eventProducer->getType().getName() << " types." << std::endl;
        return false;
    }

    return true;
}

boost::signals2::connection 
ReflexiveEventContainer::connectToEvent(EventDescription const * eventDesc,
                                   ReflexiveEventContainer* const eventProducer) const
{
    //By default no events can be connected to a ReflexiveContainer
    return boost::signals2::connection();
}
