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

#include "OSGTableColumnEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTableColumnEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGTableColumnEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! TableColumn Produced Events

EventDescription *TableColumnEventSource::_eventDesc[] =
{
    new EventDescription("FieldChanged", 
                          "",
                          FieldChangedEventId, 
                          FieldTraits<ChangeEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TableColumnEventSource::getHandleFieldChangedSignal))

};

EventProducerType TableColumnEventSource::_producerType(
    "TableColumnProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TableColumnEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &TableColumnEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void TableColumnEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case FieldChangedEventId:
        OSG_ASSERT(dynamic_cast<FieldChangedEventDetailsType* const>(e));

        _FieldChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _FieldChangedEvent(dynamic_cast<FieldChangedEventDetailsType* const>(e), FieldChangedEventId);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

boost::signals2::connection TableColumnEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case FieldChangedEventId:
        return _FieldChangedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  TableColumnEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case FieldChangedEventId:
        return _FieldChangedEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  TableColumnEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case FieldChangedEventId:
        _FieldChangedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

void  TableColumnEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case FieldChangedEventId:
        _FieldChangedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

bool  TableColumnEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case FieldChangedEventId:
        return _FieldChangedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return true;
        break;
    }
}

UInt32  TableColumnEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case FieldChangedEventId:
        return _FieldChangedEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return 0;
        break;
    }
}

GetEventHandlePtr TableColumnEventSource::getHandleFieldChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<FieldChangedEventType>(
             const_cast<FieldChangedEventType *>(&_FieldChangedEvent),
             _producerType.getEventDescription(FieldChangedEventId),
             const_cast<TableColumnEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

TableColumnEventSource::TableColumnEventSource(void) :
    Inherited()
{
}

TableColumnEventSource::TableColumnEventSource(const TableColumnEventSource &source) :
    Inherited(source)
{
}

TableColumnEventSource::~TableColumnEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TableColumnEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TableColumnEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TableColumn NI" << std::endl;
}

OSG_END_NAMESPACE
