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

#include "OSGComboBoxModelEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGComboBoxModelEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGComboBoxModelEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! ComboBoxModel Produced Events

EventDescription *ComboBoxModelEventSource::_eventDesc[] =
{
    new EventDescription("SelectionChanged", 
                          "",
                          SelectionChangedEventId, 
                          FieldTraits<ComboBoxSelectionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComboBoxModelEventSource::getHandleSelectionChangedSignal))

};

EventProducerType ComboBoxModelEventSource::_producerType(
    "ComboBoxModelProducerType",
    "ListModelProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ComboBoxModelEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &ComboBoxModelEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void ComboBoxModelEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        OSG_ASSERT(dynamic_cast<SelectionChangedEventDetailsType* const>(e));

        _SelectionChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _SelectionChangedEvent(dynamic_cast<SelectionChangedEventDetailsType* const>(e), SelectionChangedEventId);
        break;
    default:
        Inherited::produceEvent(eventId, e);
        break;
    }
}

boost::signals2::connection ComboBoxModelEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        return _SelectionChangedEvent.connect(listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, listener, at);
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  ComboBoxModelEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        return _SelectionChangedEvent.connect(group, listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, group, listener, at);
        break;
    }

    return boost::signals2::connection();
}
    
void  ComboBoxModelEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        _SelectionChangedEvent.disconnect(group);
        break;
    default:
        return Inherited::disconnectEvent(eventId, group);
        break;
    }
}

void  ComboBoxModelEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        _SelectionChangedEvent.disconnect_all_slots();
        break;
    default:
        Inherited::disconnectAllSlotsEvent(eventId);
        break;
    }
}

bool  ComboBoxModelEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        return _SelectionChangedEvent.empty();
        break;
    default:
        return Inherited::isEmptyEvent(eventId);
        break;
    }
}

UInt32  ComboBoxModelEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        return _SelectionChangedEvent.num_slots();
        break;
    default:
        return Inherited::numSlotsEvent(eventId);
        break;
    }
}

GetEventHandlePtr ComboBoxModelEventSource::getHandleSelectionChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<SelectionChangedEventType>(
             const_cast<SelectionChangedEventType *>(&_SelectionChangedEvent),
             _producerType.getEventDescription(SelectionChangedEventId),
             const_cast<ComboBoxModelEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

ComboBoxModelEventSource::ComboBoxModelEventSource(void) :
    Inherited()
{
}

ComboBoxModelEventSource::ComboBoxModelEventSource(const ComboBoxModelEventSource &source) :
    Inherited(source)
{
}

ComboBoxModelEventSource::~ComboBoxModelEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ComboBoxModelEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void ComboBoxModelEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump ComboBoxModel NI" << std::endl;
}

OSG_END_NAMESPACE
