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

#include "OSGMenuButtonEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGMenuButtonEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGMenuButtonEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! MenuButton Produced Events

EventDescription *MenuButtonEventSource::_eventDesc[] =
{
    new EventDescription("MenuActionPerformed", 
                          "",
                          MenuActionPerformedEventId, 
                          FieldTraits<ActionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&MenuButtonEventSource::getHandleMenuActionPerformedSignal))

};

EventProducerType MenuButtonEventSource::_producerType(
    "MenuButtonProducerType",
    "ToggleButtonProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

const EventProducerType &MenuButtonEventSource::getProducerType(void) const
{
    return _producerType;
}

void MenuButtonEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*------------------------- event producers ----------------------------------*/
void MenuButtonEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case MenuActionPerformedEventId:
        OSG_ASSERT(dynamic_cast<MenuActionPerformedEventDetailsType* const>(e));

        _MenuActionPerformedEvent.set_combiner(ConsumableEventCombiner(e));
        _MenuActionPerformedEvent(dynamic_cast<MenuActionPerformedEventDetailsType* const>(e), MenuActionPerformedEventId);
        break;
    default:
        Inherited::produceEvent(eventId, e);
        break;
    }
}

boost::signals2::connection MenuButtonEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case MenuActionPerformedEventId:
        return _MenuActionPerformedEvent.connect(listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, listener, at);
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  MenuButtonEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case MenuActionPerformedEventId:
        return _MenuActionPerformedEvent.connect(group, listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, group, listener, at);
        break;
    }

    return boost::signals2::connection();
}
    
void  MenuButtonEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case MenuActionPerformedEventId:
        _MenuActionPerformedEvent.disconnect(group);
        break;
    default:
        return Inherited::disconnectEvent(eventId, group);
        break;
    }
}

void  MenuButtonEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case MenuActionPerformedEventId:
        _MenuActionPerformedEvent.disconnect_all_slots();
        break;
    default:
        Inherited::disconnectAllSlotsEvent(eventId);
        break;
    }
}

bool  MenuButtonEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case MenuActionPerformedEventId:
        return _MenuActionPerformedEvent.empty();
        break;
    default:
        return Inherited::isEmptyEvent(eventId);
        break;
    }
}

UInt32  MenuButtonEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case MenuActionPerformedEventId:
        return _MenuActionPerformedEvent.num_slots();
        break;
    default:
        return Inherited::numSlotsEvent(eventId);
        break;
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

GetEventHandlePtr MenuButtonEventSource::getHandleMenuActionPerformedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<MenuActionPerformedEventType>(
             const_cast<MenuActionPerformedEventType *>(&_MenuActionPerformedEvent),
             _producerType.getEventDescription(MenuActionPerformedEventId),
             const_cast<MenuButtonEventSource *>(this)));

    return returnValue;
}
/*----------------------- constructors & destructors ----------------------*/

MenuButtonEventSource::MenuButtonEventSource(void) :
    Inherited()
{
}

MenuButtonEventSource::MenuButtonEventSource(const MenuButtonEventSource &source) :
    Inherited(source)
{
}

MenuButtonEventSource::~MenuButtonEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void MenuButtonEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void MenuButtonEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump MenuButtonEventSource NI" << std::endl;
}

OSG_END_NAMESPACE
