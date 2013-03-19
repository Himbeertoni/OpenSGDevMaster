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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGEventContainer.h"

#include "OSGActivity.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGEventContainerBase.cpp file.
// To modify it, please change the .fcd file (OSGEventContainer.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void EventContainer::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

EventContainer::EventContainer(void) :
    Inherited()
{
}

EventContainer::EventContainer(const EventContainer &source) :
    Inherited(source)
{
}

EventContainer::~EventContainer(void)
{
}

EventProducerType EventContainer::_producerType(
    "Invalid");


GetEventHandlePtr EventContainer::invalidGetEvent (void) const
{
    return GetEventHandlePtr();
}

void   EventContainer::disconnectAll(void)
{
    for(UInt32 i(0) ; i<getNumEvents() ; ++i)
    {
        disconnectAllSlotsEvent(i+1);
    }
}

boost::signals2::connection EventContainer::attachActivity(UInt32 eventId,
                                                               Activity* TheActivity)
{
    return connectEvent(eventId, boost::bind(&Activity::eventProduced, TheActivity, _1, _2) );
}

bool EventContainer::isConnectableEvent(EventDescription const * eventDesc) const
{
    //By default no events can be connected to a ReflexiveContainer
    return false;
}

EventContainer::EventDescVector EventContainer::getConnectableEvents(void) const
{
    //By default no events can be connected to a ReflexiveContainer
    return EventDescVector();
}

bool EventContainer::disconnectFromEvent(EventDescription const * eventDesc) const
{
    //By default no events can be connected to a ReflexiveContainer
    return false;
}

bool
EventContainer::isConnected(EventDescription const * eventDesc) const
{
    //By default no events can be connected to a ReflexiveContainer
    return false;
}

bool EventContainer::validateConnectable(EventDescription const * eventDesc,
                                             EventContainer* const eventProducer) const
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
EventContainer::connectToEvent(EventDescription const * eventDesc,
                                   EventContainer* const eventProducer) const
{
    //By default no events can be connected to a ReflexiveContainer
    return boost::signals2::connection();
}

/*----------------------------- class specific ----------------------------*/

void EventContainer::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void EventContainer::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump EventContainer NI" << std::endl;
}

OSG_END_NAMESPACE
