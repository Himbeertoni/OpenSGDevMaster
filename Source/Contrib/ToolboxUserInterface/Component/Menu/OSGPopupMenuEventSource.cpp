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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGPopupMenuEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGPopupMenuEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGPopupMenuEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! PopupMenu Produced Events

EventDescription *PopupMenuEventSource::_eventDesc[] =
{
    new EventDescription("PopupMenuWillBecomeVisible", 
                          "",
                          PopupMenuWillBecomeVisibleEventId, 
                          FieldTraits<PopupMenuEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&PopupMenuEventSource::getHandlePopupMenuWillBecomeVisibleSignal)),

    new EventDescription("PopupMenuWillBecomeInvisible", 
                          "",
                          PopupMenuWillBecomeInvisibleEventId, 
                          FieldTraits<PopupMenuEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&PopupMenuEventSource::getHandlePopupMenuWillBecomeInvisibleSignal)),

    new EventDescription("PopupMenuCanceled", 
                          "",
                          PopupMenuCanceledEventId, 
                          FieldTraits<PopupMenuEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&PopupMenuEventSource::getHandlePopupMenuCanceledSignal)),

    new EventDescription("PopupMenuContentsChanged", 
                          "",
                          PopupMenuContentsChangedEventId, 
                          FieldTraits<PopupMenuEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&PopupMenuEventSource::getHandlePopupMenuContentsChangedSignal))

};

EventProducerType PopupMenuEventSource::_producerType(
    "PopupMenuProducerType",
    "ComponentProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void PopupMenuEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &PopupMenuEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void PopupMenuEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case PopupMenuWillBecomeVisibleEventId:
        OSG_ASSERT(dynamic_cast<PopupMenuWillBecomeVisibleEventDetailsType* const>(e));

        _PopupMenuWillBecomeVisibleEvent.set_combiner(ConsumableEventCombiner(e));
        _PopupMenuWillBecomeVisibleEvent(dynamic_cast<PopupMenuWillBecomeVisibleEventDetailsType* const>(e), PopupMenuWillBecomeVisibleEventId);
        break;
    case PopupMenuWillBecomeInvisibleEventId:
        OSG_ASSERT(dynamic_cast<PopupMenuWillBecomeInvisibleEventDetailsType* const>(e));

        _PopupMenuWillBecomeInvisibleEvent.set_combiner(ConsumableEventCombiner(e));
        _PopupMenuWillBecomeInvisibleEvent(dynamic_cast<PopupMenuWillBecomeInvisibleEventDetailsType* const>(e), PopupMenuWillBecomeInvisibleEventId);
        break;
    case PopupMenuCanceledEventId:
        OSG_ASSERT(dynamic_cast<PopupMenuCanceledEventDetailsType* const>(e));

        _PopupMenuCanceledEvent.set_combiner(ConsumableEventCombiner(e));
        _PopupMenuCanceledEvent(dynamic_cast<PopupMenuCanceledEventDetailsType* const>(e), PopupMenuCanceledEventId);
        break;
    case PopupMenuContentsChangedEventId:
        OSG_ASSERT(dynamic_cast<PopupMenuContentsChangedEventDetailsType* const>(e));

        _PopupMenuContentsChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _PopupMenuContentsChangedEvent(dynamic_cast<PopupMenuContentsChangedEventDetailsType* const>(e), PopupMenuContentsChangedEventId);
        break;
    default:
        Inherited::produceEvent(eventId, e);
        break;
    }
}

boost::signals2::connection PopupMenuEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case PopupMenuWillBecomeVisibleEventId:
        return _PopupMenuWillBecomeVisibleEvent.connect(listener, at);
        break;
    case PopupMenuWillBecomeInvisibleEventId:
        return _PopupMenuWillBecomeInvisibleEvent.connect(listener, at);
        break;
    case PopupMenuCanceledEventId:
        return _PopupMenuCanceledEvent.connect(listener, at);
        break;
    case PopupMenuContentsChangedEventId:
        return _PopupMenuContentsChangedEvent.connect(listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, listener, at);
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  PopupMenuEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case PopupMenuWillBecomeVisibleEventId:
        return _PopupMenuWillBecomeVisibleEvent.connect(group, listener, at);
        break;
    case PopupMenuWillBecomeInvisibleEventId:
        return _PopupMenuWillBecomeInvisibleEvent.connect(group, listener, at);
        break;
    case PopupMenuCanceledEventId:
        return _PopupMenuCanceledEvent.connect(group, listener, at);
        break;
    case PopupMenuContentsChangedEventId:
        return _PopupMenuContentsChangedEvent.connect(group, listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, group, listener, at);
        break;
    }

    return boost::signals2::connection();
}
    
void  PopupMenuEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case PopupMenuWillBecomeVisibleEventId:
        _PopupMenuWillBecomeVisibleEvent.disconnect(group);
        break;
    case PopupMenuWillBecomeInvisibleEventId:
        _PopupMenuWillBecomeInvisibleEvent.disconnect(group);
        break;
    case PopupMenuCanceledEventId:
        _PopupMenuCanceledEvent.disconnect(group);
        break;
    case PopupMenuContentsChangedEventId:
        _PopupMenuContentsChangedEvent.disconnect(group);
        break;
    default:
        return Inherited::disconnectEvent(eventId, group);
        break;
    }
}

void  PopupMenuEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case PopupMenuWillBecomeVisibleEventId:
        _PopupMenuWillBecomeVisibleEvent.disconnect_all_slots();
        break;
    case PopupMenuWillBecomeInvisibleEventId:
        _PopupMenuWillBecomeInvisibleEvent.disconnect_all_slots();
        break;
    case PopupMenuCanceledEventId:
        _PopupMenuCanceledEvent.disconnect_all_slots();
        break;
    case PopupMenuContentsChangedEventId:
        _PopupMenuContentsChangedEvent.disconnect_all_slots();
        break;
    default:
        Inherited::disconnectAllSlotsEvent(eventId);
        break;
    }
}

bool  PopupMenuEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case PopupMenuWillBecomeVisibleEventId:
        return _PopupMenuWillBecomeVisibleEvent.empty();
        break;
    case PopupMenuWillBecomeInvisibleEventId:
        return _PopupMenuWillBecomeInvisibleEvent.empty();
        break;
    case PopupMenuCanceledEventId:
        return _PopupMenuCanceledEvent.empty();
        break;
    case PopupMenuContentsChangedEventId:
        return _PopupMenuContentsChangedEvent.empty();
        break;
    default:
        return Inherited::isEmptyEvent(eventId);
        break;
    }
}

UInt32  PopupMenuEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case PopupMenuWillBecomeVisibleEventId:
        return _PopupMenuWillBecomeVisibleEvent.num_slots();
        break;
    case PopupMenuWillBecomeInvisibleEventId:
        return _PopupMenuWillBecomeInvisibleEvent.num_slots();
        break;
    case PopupMenuCanceledEventId:
        return _PopupMenuCanceledEvent.num_slots();
        break;
    case PopupMenuContentsChangedEventId:
        return _PopupMenuContentsChangedEvent.num_slots();
        break;
    default:
        return Inherited::numSlotsEvent(eventId);
        break;
    }
}

GetEventHandlePtr PopupMenuEventSource::getHandlePopupMenuWillBecomeVisibleSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<PopupMenuWillBecomeVisibleEventType>(
             const_cast<PopupMenuWillBecomeVisibleEventType *>(&_PopupMenuWillBecomeVisibleEvent),
             _producerType.getEventDescription(PopupMenuWillBecomeVisibleEventId),
             const_cast<PopupMenuEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr PopupMenuEventSource::getHandlePopupMenuWillBecomeInvisibleSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<PopupMenuWillBecomeInvisibleEventType>(
             const_cast<PopupMenuWillBecomeInvisibleEventType *>(&_PopupMenuWillBecomeInvisibleEvent),
             _producerType.getEventDescription(PopupMenuWillBecomeInvisibleEventId),
             const_cast<PopupMenuEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr PopupMenuEventSource::getHandlePopupMenuCanceledSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<PopupMenuCanceledEventType>(
             const_cast<PopupMenuCanceledEventType *>(&_PopupMenuCanceledEvent),
             _producerType.getEventDescription(PopupMenuCanceledEventId),
             const_cast<PopupMenuEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr PopupMenuEventSource::getHandlePopupMenuContentsChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<PopupMenuContentsChangedEventType>(
             const_cast<PopupMenuContentsChangedEventType *>(&_PopupMenuContentsChangedEvent),
             _producerType.getEventDescription(PopupMenuContentsChangedEventId),
             const_cast<PopupMenuEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

PopupMenuEventSource::PopupMenuEventSource(void) :
    Inherited()
{
}

PopupMenuEventSource::PopupMenuEventSource(const PopupMenuEventSource &source) :
    Inherited(source)
{
}

PopupMenuEventSource::~PopupMenuEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void PopupMenuEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void PopupMenuEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump PopupMenu NI" << std::endl;
}

OSG_END_NAMESPACE
