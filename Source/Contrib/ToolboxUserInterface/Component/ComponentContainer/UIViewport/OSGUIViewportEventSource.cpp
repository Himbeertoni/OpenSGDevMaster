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

#include "OSGUIViewportEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGUIViewportEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGUIViewportEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/
//! UIViewport Produced Events

EventDescription *UIViewportEventSource::_eventDesc[] =
{
    new EventDescription("StateChanged", 
                          "",
                          StateChangedEventId, 
                          FieldTraits<ChangeEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&UIViewportEventSource::getHandleStateChangedSignal))

};

EventProducerType UIViewportEventSource::_producerType(
    "UIViewportProducerType",
    "ComponentProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

const EventProducerType &UIViewportEventSource::getProducerType(void) const
{
    return _producerType;
}

void UIViewportEventSource::initMethod(InitPhase ePhase)
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
void UIViewportEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case StateChangedEventId:
        OSG_ASSERT(dynamic_cast<StateChangedEventDetailsType* const>(e));

        _StateChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _StateChangedEvent(dynamic_cast<StateChangedEventDetailsType* const>(e), StateChangedEventId);
        break;
    default:
        Inherited::produceEvent(eventId, e);
        break;
    }
}

boost::signals2::connection UIViewportEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case StateChangedEventId:
        return _StateChangedEvent.connect(listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, listener, at);
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  UIViewportEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case StateChangedEventId:
        return _StateChangedEvent.connect(group, listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, group, listener, at);
        break;
    }

    return boost::signals2::connection();
}
    
void  UIViewportEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case StateChangedEventId:
        _StateChangedEvent.disconnect(group);
        break;
    default:
        return Inherited::disconnectEvent(eventId, group);
        break;
    }
}

void  UIViewportEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case StateChangedEventId:
        _StateChangedEvent.disconnect_all_slots();
        break;
    default:
        Inherited::disconnectAllSlotsEvent(eventId);
        break;
    }
}

bool  UIViewportEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case StateChangedEventId:
        return _StateChangedEvent.empty();
        break;
    default:
        return Inherited::isEmptyEvent(eventId);
        break;
    }
}

UInt32  UIViewportEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case StateChangedEventId:
        return _StateChangedEvent.num_slots();
        break;
    default:
        return Inherited::numSlotsEvent(eventId);
        break;
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/
GetEventHandlePtr UIViewportEventSource::getHandleStateChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<StateChangedEventType>(
             const_cast<StateChangedEventType *>(&_StateChangedEvent),
             _producerType.getEventDescription(StateChangedEventId),
             const_cast<UIViewportEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

UIViewportEventSource::UIViewportEventSource(void) :
    Inherited()
{
}

UIViewportEventSource::UIViewportEventSource(const UIViewportEventSource &source) :
    Inherited(source)
{
}

UIViewportEventSource::~UIViewportEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void UIViewportEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void UIViewportEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump UIViewportEventSource NI" << std::endl;
}

OSG_END_NAMESPACE
