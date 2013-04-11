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

#include "OSGAbstractWindowEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGAbstractWindowEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGAbstractWindowEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! AbstractWindow Produced Events

EventDescription *AbstractWindowEventSource::_eventDesc[] =
{
    new EventDescription("WindowOpened", 
                          "",
                          WindowOpenedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&AbstractWindowEventSource::getHandleWindowOpenedSignal)),

    new EventDescription("WindowClosing", 
                          "",
                          WindowClosingEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&AbstractWindowEventSource::getHandleWindowClosingSignal)),

    new EventDescription("WindowClosed", 
                          "",
                          WindowClosedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&AbstractWindowEventSource::getHandleWindowClosedSignal)),

    new EventDescription("WindowIconified", 
                          "",
                          WindowIconifiedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&AbstractWindowEventSource::getHandleWindowIconifiedSignal)),

    new EventDescription("WindowDeiconified", 
                          "",
                          WindowDeiconifiedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&AbstractWindowEventSource::getHandleWindowDeiconifiedSignal)),

    new EventDescription("WindowActivated", 
                          "",
                          WindowActivatedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&AbstractWindowEventSource::getHandleWindowActivatedSignal)),

    new EventDescription("WindowDeactivated", 
                          "",
                          WindowDeactivatedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&AbstractWindowEventSource::getHandleWindowDeactivatedSignal)),

    new EventDescription("WindowEntered", 
                          "",
                          WindowEnteredEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&AbstractWindowEventSource::getHandleWindowEnteredSignal)),

    new EventDescription("WindowExited", 
                          "",
                          WindowExitedEventId, 
                          FieldTraits<WindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&AbstractWindowEventSource::getHandleWindowExitedSignal))

};

EventProducerType AbstractWindowEventSource::_producerType(
    "AbstractWindowProducerType",
    "ComponentProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void AbstractWindowEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &AbstractWindowEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void AbstractWindowEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        OSG_ASSERT(dynamic_cast<WindowOpenedEventDetailsType* const>(e));

        _WindowOpenedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowOpenedEvent(dynamic_cast<WindowOpenedEventDetailsType* const>(e), WindowOpenedEventId);
        break;
    case WindowClosingEventId:
        OSG_ASSERT(dynamic_cast<WindowClosingEventDetailsType* const>(e));

        _WindowClosingEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowClosingEvent(dynamic_cast<WindowClosingEventDetailsType* const>(e), WindowClosingEventId);
        break;
    case WindowClosedEventId:
        OSG_ASSERT(dynamic_cast<WindowClosedEventDetailsType* const>(e));

        _WindowClosedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowClosedEvent(dynamic_cast<WindowClosedEventDetailsType* const>(e), WindowClosedEventId);
        break;
    case WindowIconifiedEventId:
        OSG_ASSERT(dynamic_cast<WindowIconifiedEventDetailsType* const>(e));

        _WindowIconifiedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowIconifiedEvent(dynamic_cast<WindowIconifiedEventDetailsType* const>(e), WindowIconifiedEventId);
        break;
    case WindowDeiconifiedEventId:
        OSG_ASSERT(dynamic_cast<WindowDeiconifiedEventDetailsType* const>(e));

        _WindowDeiconifiedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowDeiconifiedEvent(dynamic_cast<WindowDeiconifiedEventDetailsType* const>(e), WindowDeiconifiedEventId);
        break;
    case WindowActivatedEventId:
        OSG_ASSERT(dynamic_cast<WindowActivatedEventDetailsType* const>(e));

        _WindowActivatedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowActivatedEvent(dynamic_cast<WindowActivatedEventDetailsType* const>(e), WindowActivatedEventId);
        break;
    case WindowDeactivatedEventId:
        OSG_ASSERT(dynamic_cast<WindowDeactivatedEventDetailsType* const>(e));

        _WindowDeactivatedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowDeactivatedEvent(dynamic_cast<WindowDeactivatedEventDetailsType* const>(e), WindowDeactivatedEventId);
        break;
    case WindowEnteredEventId:
        OSG_ASSERT(dynamic_cast<WindowEnteredEventDetailsType* const>(e));

        _WindowEnteredEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowEnteredEvent(dynamic_cast<WindowEnteredEventDetailsType* const>(e), WindowEnteredEventId);
        break;
    case WindowExitedEventId:
        OSG_ASSERT(dynamic_cast<WindowExitedEventDetailsType* const>(e));

        _WindowExitedEvent.set_combiner(ConsumableEventCombiner(e));
        _WindowExitedEvent(dynamic_cast<WindowExitedEventDetailsType* const>(e), WindowExitedEventId);
        break;
    default:
        Inherited::produceEvent(eventId, e);
        break;
    }
}

boost::signals2::connection AbstractWindowEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        return _WindowOpenedEvent.connect(listener, at);
        break;
    case WindowClosingEventId:
        return _WindowClosingEvent.connect(listener, at);
        break;
    case WindowClosedEventId:
        return _WindowClosedEvent.connect(listener, at);
        break;
    case WindowIconifiedEventId:
        return _WindowIconifiedEvent.connect(listener, at);
        break;
    case WindowDeiconifiedEventId:
        return _WindowDeiconifiedEvent.connect(listener, at);
        break;
    case WindowActivatedEventId:
        return _WindowActivatedEvent.connect(listener, at);
        break;
    case WindowDeactivatedEventId:
        return _WindowDeactivatedEvent.connect(listener, at);
        break;
    case WindowEnteredEventId:
        return _WindowEnteredEvent.connect(listener, at);
        break;
    case WindowExitedEventId:
        return _WindowExitedEvent.connect(listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, listener, at);
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  AbstractWindowEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        return _WindowOpenedEvent.connect(group, listener, at);
        break;
    case WindowClosingEventId:
        return _WindowClosingEvent.connect(group, listener, at);
        break;
    case WindowClosedEventId:
        return _WindowClosedEvent.connect(group, listener, at);
        break;
    case WindowIconifiedEventId:
        return _WindowIconifiedEvent.connect(group, listener, at);
        break;
    case WindowDeiconifiedEventId:
        return _WindowDeiconifiedEvent.connect(group, listener, at);
        break;
    case WindowActivatedEventId:
        return _WindowActivatedEvent.connect(group, listener, at);
        break;
    case WindowDeactivatedEventId:
        return _WindowDeactivatedEvent.connect(group, listener, at);
        break;
    case WindowEnteredEventId:
        return _WindowEnteredEvent.connect(group, listener, at);
        break;
    case WindowExitedEventId:
        return _WindowExitedEvent.connect(group, listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, group, listener, at);
        break;
    }

    return boost::signals2::connection();
}
    
void  AbstractWindowEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        _WindowOpenedEvent.disconnect(group);
        break;
    case WindowClosingEventId:
        _WindowClosingEvent.disconnect(group);
        break;
    case WindowClosedEventId:
        _WindowClosedEvent.disconnect(group);
        break;
    case WindowIconifiedEventId:
        _WindowIconifiedEvent.disconnect(group);
        break;
    case WindowDeiconifiedEventId:
        _WindowDeiconifiedEvent.disconnect(group);
        break;
    case WindowActivatedEventId:
        _WindowActivatedEvent.disconnect(group);
        break;
    case WindowDeactivatedEventId:
        _WindowDeactivatedEvent.disconnect(group);
        break;
    case WindowEnteredEventId:
        _WindowEnteredEvent.disconnect(group);
        break;
    case WindowExitedEventId:
        _WindowExitedEvent.disconnect(group);
        break;
    default:
        return Inherited::disconnectEvent(eventId, group);
        break;
    }
}

void  AbstractWindowEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        _WindowOpenedEvent.disconnect_all_slots();
        break;
    case WindowClosingEventId:
        _WindowClosingEvent.disconnect_all_slots();
        break;
    case WindowClosedEventId:
        _WindowClosedEvent.disconnect_all_slots();
        break;
    case WindowIconifiedEventId:
        _WindowIconifiedEvent.disconnect_all_slots();
        break;
    case WindowDeiconifiedEventId:
        _WindowDeiconifiedEvent.disconnect_all_slots();
        break;
    case WindowActivatedEventId:
        _WindowActivatedEvent.disconnect_all_slots();
        break;
    case WindowDeactivatedEventId:
        _WindowDeactivatedEvent.disconnect_all_slots();
        break;
    case WindowEnteredEventId:
        _WindowEnteredEvent.disconnect_all_slots();
        break;
    case WindowExitedEventId:
        _WindowExitedEvent.disconnect_all_slots();
        break;
    default:
        Inherited::disconnectAllSlotsEvent(eventId);
        break;
    }
}

bool  AbstractWindowEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        return _WindowOpenedEvent.empty();
        break;
    case WindowClosingEventId:
        return _WindowClosingEvent.empty();
        break;
    case WindowClosedEventId:
        return _WindowClosedEvent.empty();
        break;
    case WindowIconifiedEventId:
        return _WindowIconifiedEvent.empty();
        break;
    case WindowDeiconifiedEventId:
        return _WindowDeiconifiedEvent.empty();
        break;
    case WindowActivatedEventId:
        return _WindowActivatedEvent.empty();
        break;
    case WindowDeactivatedEventId:
        return _WindowDeactivatedEvent.empty();
        break;
    case WindowEnteredEventId:
        return _WindowEnteredEvent.empty();
        break;
    case WindowExitedEventId:
        return _WindowExitedEvent.empty();
        break;
    default:
        return Inherited::isEmptyEvent(eventId);
        break;
    }
}

UInt32  AbstractWindowEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case WindowOpenedEventId:
        return _WindowOpenedEvent.num_slots();
        break;
    case WindowClosingEventId:
        return _WindowClosingEvent.num_slots();
        break;
    case WindowClosedEventId:
        return _WindowClosedEvent.num_slots();
        break;
    case WindowIconifiedEventId:
        return _WindowIconifiedEvent.num_slots();
        break;
    case WindowDeiconifiedEventId:
        return _WindowDeiconifiedEvent.num_slots();
        break;
    case WindowActivatedEventId:
        return _WindowActivatedEvent.num_slots();
        break;
    case WindowDeactivatedEventId:
        return _WindowDeactivatedEvent.num_slots();
        break;
    case WindowEnteredEventId:
        return _WindowEnteredEvent.num_slots();
        break;
    case WindowExitedEventId:
        return _WindowExitedEvent.num_slots();
        break;
    default:
        return Inherited::numSlotsEvent(eventId);
        break;
    }
}

GetEventHandlePtr AbstractWindowEventSource::getHandleWindowOpenedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowOpenedEventType>(
             const_cast<WindowOpenedEventType *>(&_WindowOpenedEvent),
             _producerType.getEventDescription(WindowOpenedEventId),
             const_cast<AbstractWindowEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr AbstractWindowEventSource::getHandleWindowClosingSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowClosingEventType>(
             const_cast<WindowClosingEventType *>(&_WindowClosingEvent),
             _producerType.getEventDescription(WindowClosingEventId),
             const_cast<AbstractWindowEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr AbstractWindowEventSource::getHandleWindowClosedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowClosedEventType>(
             const_cast<WindowClosedEventType *>(&_WindowClosedEvent),
             _producerType.getEventDescription(WindowClosedEventId),
             const_cast<AbstractWindowEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr AbstractWindowEventSource::getHandleWindowIconifiedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowIconifiedEventType>(
             const_cast<WindowIconifiedEventType *>(&_WindowIconifiedEvent),
             _producerType.getEventDescription(WindowIconifiedEventId),
             const_cast<AbstractWindowEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr AbstractWindowEventSource::getHandleWindowDeiconifiedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowDeiconifiedEventType>(
             const_cast<WindowDeiconifiedEventType *>(&_WindowDeiconifiedEvent),
             _producerType.getEventDescription(WindowDeiconifiedEventId),
             const_cast<AbstractWindowEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr AbstractWindowEventSource::getHandleWindowActivatedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowActivatedEventType>(
             const_cast<WindowActivatedEventType *>(&_WindowActivatedEvent),
             _producerType.getEventDescription(WindowActivatedEventId),
             const_cast<AbstractWindowEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr AbstractWindowEventSource::getHandleWindowDeactivatedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowDeactivatedEventType>(
             const_cast<WindowDeactivatedEventType *>(&_WindowDeactivatedEvent),
             _producerType.getEventDescription(WindowDeactivatedEventId),
             const_cast<AbstractWindowEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr AbstractWindowEventSource::getHandleWindowEnteredSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowEnteredEventType>(
             const_cast<WindowEnteredEventType *>(&_WindowEnteredEvent),
             _producerType.getEventDescription(WindowEnteredEventId),
             const_cast<AbstractWindowEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr AbstractWindowEventSource::getHandleWindowExitedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<WindowExitedEventType>(
             const_cast<WindowExitedEventType *>(&_WindowExitedEvent),
             _producerType.getEventDescription(WindowExitedEventId),
             const_cast<AbstractWindowEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

AbstractWindowEventSource::AbstractWindowEventSource(void) :
    Inherited()
{
}

AbstractWindowEventSource::AbstractWindowEventSource(const AbstractWindowEventSource &source) :
    Inherited(source)
{
}

AbstractWindowEventSource::~AbstractWindowEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void AbstractWindowEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void AbstractWindowEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump AbstractWindow NI" << std::endl;
}

OSG_END_NAMESPACE
