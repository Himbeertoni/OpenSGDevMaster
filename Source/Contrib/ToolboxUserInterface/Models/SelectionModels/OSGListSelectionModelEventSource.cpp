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

#include "OSGListSelectionModelEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGListSelectionModelEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGListSelectionModelEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! ListSelectionModel Produced Events

EventDescription *ListSelectionModelEventSource::_eventDesc[] =
{
    new EventDescription("SelectionChanged", 
                          "",
                          SelectionChangedEventId, 
                          FieldTraits<ListSelectionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ListSelectionModelEventSource::getHandleSelectionChangedSignal))

};

EventProducerType ListSelectionModelEventSource::_producerType(
    "ListSelectionModelProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ListSelectionModelEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &ListSelectionModelEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void ListSelectionModelEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        OSG_ASSERT(dynamic_cast<SelectionChangedEventDetailsType* const>(e));

        _SelectionChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _SelectionChangedEvent(dynamic_cast<SelectionChangedEventDetailsType* const>(e), SelectionChangedEventId);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

boost::signals2::connection ListSelectionModelEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        return _SelectionChangedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  ListSelectionModelEventSource::connectEvent(UInt32 eventId, 
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
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  ListSelectionModelEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        _SelectionChangedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

void  ListSelectionModelEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        _SelectionChangedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "ListSelectionModelEventSource: No event defined with ID " << eventId << std::endl;
        break;
    }
}

bool  ListSelectionModelEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        return _SelectionChangedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return true;
        break;
    }
}

UInt32  ListSelectionModelEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case SelectionChangedEventId:
        return _SelectionChangedEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return 0;
        break;
    }
}

GetEventHandlePtr ListSelectionModelEventSource::getHandleSelectionChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<SelectionChangedEventType>(
             const_cast<SelectionChangedEventType *>(&_SelectionChangedEvent),
             _producerType.getEventDescription(SelectionChangedEventId),
             const_cast<ListSelectionModelEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

ListSelectionModelEventSource::ListSelectionModelEventSource(void) :
    Inherited()
{
}

ListSelectionModelEventSource::ListSelectionModelEventSource(const ListSelectionModelEventSource &source) :
    Inherited(source)
{
}

ListSelectionModelEventSource::~ListSelectionModelEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ListSelectionModelEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void ListSelectionModelEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump ListSelectionModel NI" << std::endl;
}

OSG_END_NAMESPACE
