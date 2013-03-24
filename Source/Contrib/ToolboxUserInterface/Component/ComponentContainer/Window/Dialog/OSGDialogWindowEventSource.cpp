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

#include "OSGDialogWindowEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGDialogWindowEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGDialogWindowEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/
//! DialogWindow Produced Events

EventDescription *DialogWindowEventSource::_eventDesc[] =
{
    new EventDescription("DialogWindowClosing", 
                          "",
                          DialogWindowClosingEventId, 
                          FieldTraits<DialogWindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&DialogWindowEventSource::getHandleDialogWindowClosingSignal)),

    new EventDescription("DialogWindowClosed", 
                          "",
                          DialogWindowClosedEventId, 
                          FieldTraits<DialogWindowEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&DialogWindowEventSource::getHandleDialogWindowClosedSignal))

};

EventProducerType DialogWindowEventSource::_producerType(
    "DialogWindowProducerType",
    "AbstractWindowProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

const EventProducerType &DialogWindowEventSource::getProducerType(void) const
{
    return _producerType;
}

void DialogWindowEventSource::initMethod(InitPhase ePhase)
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
void DialogWindowEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case DialogWindowClosingEventId:
        OSG_ASSERT(dynamic_cast<DialogWindowClosingEventDetailsType* const>(e));

        _DialogWindowClosingEvent.set_combiner(ConsumableEventCombiner(e));
        _DialogWindowClosingEvent(dynamic_cast<DialogWindowClosingEventDetailsType* const>(e), DialogWindowClosingEventId);
        break;
    case DialogWindowClosedEventId:
        OSG_ASSERT(dynamic_cast<DialogWindowClosedEventDetailsType* const>(e));

        _DialogWindowClosedEvent.set_combiner(ConsumableEventCombiner(e));
        _DialogWindowClosedEvent(dynamic_cast<DialogWindowClosedEventDetailsType* const>(e), DialogWindowClosedEventId);
        break;
    default:
        Inherited::produceEvent(eventId, e);
        break;
    }
}

boost::signals2::connection DialogWindowEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case DialogWindowClosingEventId:
        return _DialogWindowClosingEvent.connect(listener, at);
        break;
    case DialogWindowClosedEventId:
        return _DialogWindowClosedEvent.connect(listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, listener, at);
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  DialogWindowEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case DialogWindowClosingEventId:
        return _DialogWindowClosingEvent.connect(group, listener, at);
        break;
    case DialogWindowClosedEventId:
        return _DialogWindowClosedEvent.connect(group, listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, group, listener, at);
        break;
    }

    return boost::signals2::connection();
}
    
void  DialogWindowEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case DialogWindowClosingEventId:
        _DialogWindowClosingEvent.disconnect(group);
        break;
    case DialogWindowClosedEventId:
        _DialogWindowClosedEvent.disconnect(group);
        break;
    default:
        return Inherited::disconnectEvent(eventId, group);
        break;
    }
}

void  DialogWindowEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case DialogWindowClosingEventId:
        _DialogWindowClosingEvent.disconnect_all_slots();
        break;
    case DialogWindowClosedEventId:
        _DialogWindowClosedEvent.disconnect_all_slots();
        break;
    default:
        Inherited::disconnectAllSlotsEvent(eventId);
        break;
    }
}

bool  DialogWindowEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case DialogWindowClosingEventId:
        return _DialogWindowClosingEvent.empty();
        break;
    case DialogWindowClosedEventId:
        return _DialogWindowClosedEvent.empty();
        break;
    default:
        return Inherited::isEmptyEvent(eventId);
        break;
    }
}

UInt32  DialogWindowEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case DialogWindowClosingEventId:
        return _DialogWindowClosingEvent.num_slots();
        break;
    case DialogWindowClosedEventId:
        return _DialogWindowClosedEvent.num_slots();
        break;
    default:
        return Inherited::numSlotsEvent(eventId);
        break;
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

GetEventHandlePtr DialogWindowEventSource::getHandleDialogWindowClosingSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<DialogWindowClosingEventType>(
             const_cast<DialogWindowClosingEventType *>(&_DialogWindowClosingEvent),
             _producerType.getEventDescription(DialogWindowClosingEventId),
             const_cast<DialogWindowEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr DialogWindowEventSource::getHandleDialogWindowClosedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<DialogWindowClosedEventType>(
             const_cast<DialogWindowClosedEventType *>(&_DialogWindowClosedEvent),
             _producerType.getEventDescription(DialogWindowClosedEventId),
             const_cast<DialogWindowEventSource *>(this)));

    return returnValue;
}
/*----------------------- constructors & destructors ----------------------*/

DialogWindowEventSource::DialogWindowEventSource(void) :
    Inherited()
{
}

DialogWindowEventSource::DialogWindowEventSource(const DialogWindowEventSource &source) :
    Inherited(source)
{
}

DialogWindowEventSource::~DialogWindowEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void DialogWindowEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void DialogWindowEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump DialogWindowEventSource NI" << std::endl;
}

OSG_END_NAMESPACE
