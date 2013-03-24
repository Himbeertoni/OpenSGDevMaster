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

#include "OSGScrollBarEventSource.h"
#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGScrollBarEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGScrollBarEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/
//! ScrollBar Produced Events

EventDescription *ScrollBarEventSource::_eventDesc[] =
{
    new EventDescription("AdjustmentValueChanged", 
                          "",
                          AdjustmentValueChangedEventId, 
                          FieldTraits<AdjustmentEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ScrollBarEventSource::getHandleAdjustmentValueChangedSignal))

};

EventProducerType ScrollBarEventSource::_producerType(
    "ScrollBarProducerType",
    "ComponentProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

const EventProducerType &ScrollBarEventSource::getProducerType(void) const
{
    return _producerType;
}

void ScrollBarEventSource::initMethod(InitPhase ePhase)
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
void ScrollBarEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case AdjustmentValueChangedEventId:
        OSG_ASSERT(dynamic_cast<AdjustmentValueChangedEventDetailsType* const>(e));

        _AdjustmentValueChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _AdjustmentValueChangedEvent(dynamic_cast<AdjustmentValueChangedEventDetailsType* const>(e), AdjustmentValueChangedEventId);
        break;
    default:
        Inherited::produceEvent(eventId, e);
        break;
    }
}

boost::signals2::connection ScrollBarEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case AdjustmentValueChangedEventId:
        return _AdjustmentValueChangedEvent.connect(listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, listener, at);
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  ScrollBarEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case AdjustmentValueChangedEventId:
        return _AdjustmentValueChangedEvent.connect(group, listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, group, listener, at);
        break;
    }

    return boost::signals2::connection();
}
    
void  ScrollBarEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case AdjustmentValueChangedEventId:
        _AdjustmentValueChangedEvent.disconnect(group);
        break;
    default:
        return Inherited::disconnectEvent(eventId, group);
        break;
    }
}

void  ScrollBarEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case AdjustmentValueChangedEventId:
        _AdjustmentValueChangedEvent.disconnect_all_slots();
        break;
    default:
        Inherited::disconnectAllSlotsEvent(eventId);
        break;
    }
}

bool  ScrollBarEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case AdjustmentValueChangedEventId:
        return _AdjustmentValueChangedEvent.empty();
        break;
    default:
        return Inherited::isEmptyEvent(eventId);
        break;
    }
}

UInt32  ScrollBarEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case AdjustmentValueChangedEventId:
        return _AdjustmentValueChangedEvent.num_slots();
        break;
    default:
        return Inherited::numSlotsEvent(eventId);
        break;
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

GetEventHandlePtr ScrollBarEventSource::getHandleAdjustmentValueChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<AdjustmentValueChangedEventType>(
             const_cast<AdjustmentValueChangedEventType *>(&_AdjustmentValueChangedEvent),
             _producerType.getEventDescription(AdjustmentValueChangedEventId),
             const_cast<ScrollBarEventSource *>(this)));

    return returnValue;
}

/*----------------------- constructors & destructors ----------------------*/

ScrollBarEventSource::ScrollBarEventSource(void) :
    Inherited()
{
}

ScrollBarEventSource::ScrollBarEventSource(const ScrollBarEventSource &source) :
    Inherited(source)
{
}

ScrollBarEventSource::~ScrollBarEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ScrollBarEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void ScrollBarEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump ScrollBarEventSource NI" << std::endl;
}

OSG_END_NAMESPACE
