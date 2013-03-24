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

#include "OSGTableColumnModelEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTableColumnModelEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGTableColumnModelEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/
//! TableColumnModel Produced Events

EventDescription *TableColumnModelEventSource::_eventDesc[] =
{
    new EventDescription("ColumnAdded", 
                          "",
                          ColumnAddedEventId, 
                          FieldTraits<TableColumnModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TableColumnModelEventSource::getHandleColumnAddedSignal)),

    new EventDescription("ColumnMoved", 
                          "",
                          ColumnMovedEventId, 
                          FieldTraits<TableColumnModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TableColumnModelEventSource::getHandleColumnMovedSignal)),

    new EventDescription("ColumnRemoved", 
                          "",
                          ColumnRemovedEventId, 
                          FieldTraits<TableColumnModelEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TableColumnModelEventSource::getHandleColumnRemovedSignal)),

    new EventDescription("ColumnMarginChanged", 
                          "",
                          ColumnMarginChangedEventId, 
                          FieldTraits<ChangeEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TableColumnModelEventSource::getHandleColumnMarginChangedSignal)),

    new EventDescription("ColumnSelectionChanged", 
                          "",
                          ColumnSelectionChangedEventId, 
                          FieldTraits<ListSelectionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TableColumnModelEventSource::getHandleColumnSelectionChangedSignal))

};

EventProducerType TableColumnModelEventSource::_producerType(
    "TableColumnModelProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

const EventProducerType &TableColumnModelEventSource::getProducerType(void) const
{
    return _producerType;
}

void TableColumnModelEventSource::initMethod(InitPhase ePhase)
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
void TableColumnModelEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case ColumnAddedEventId:
        OSG_ASSERT(dynamic_cast<ColumnAddedEventDetailsType* const>(e));

        _ColumnAddedEvent.set_combiner(ConsumableEventCombiner(e));
        _ColumnAddedEvent(dynamic_cast<ColumnAddedEventDetailsType* const>(e), ColumnAddedEventId);
        break;
    case ColumnMovedEventId:
        OSG_ASSERT(dynamic_cast<ColumnMovedEventDetailsType* const>(e));

        _ColumnMovedEvent.set_combiner(ConsumableEventCombiner(e));
        _ColumnMovedEvent(dynamic_cast<ColumnMovedEventDetailsType* const>(e), ColumnMovedEventId);
        break;
    case ColumnRemovedEventId:
        OSG_ASSERT(dynamic_cast<ColumnRemovedEventDetailsType* const>(e));

        _ColumnRemovedEvent.set_combiner(ConsumableEventCombiner(e));
        _ColumnRemovedEvent(dynamic_cast<ColumnRemovedEventDetailsType* const>(e), ColumnRemovedEventId);
        break;
    case ColumnMarginChangedEventId:
        OSG_ASSERT(dynamic_cast<ColumnMarginChangedEventDetailsType* const>(e));

        _ColumnMarginChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _ColumnMarginChangedEvent(dynamic_cast<ColumnMarginChangedEventDetailsType* const>(e), ColumnMarginChangedEventId);
        break;
    case ColumnSelectionChangedEventId:
        OSG_ASSERT(dynamic_cast<ColumnSelectionChangedEventDetailsType* const>(e));

        _ColumnSelectionChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _ColumnSelectionChangedEvent(dynamic_cast<ColumnSelectionChangedEventDetailsType* const>(e), ColumnSelectionChangedEventId);
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

boost::signals2::connection TableColumnModelEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ColumnAddedEventId:
        return _ColumnAddedEvent.connect(listener, at);
        break;
    case ColumnMovedEventId:
        return _ColumnMovedEvent.connect(listener, at);
        break;
    case ColumnRemovedEventId:
        return _ColumnRemovedEvent.connect(listener, at);
        break;
    case ColumnMarginChangedEventId:
        return _ColumnMarginChangedEvent.connect(listener, at);
        break;
    case ColumnSelectionChangedEventId:
        return _ColumnSelectionChangedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with that ID";
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  TableColumnModelEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ColumnAddedEventId:
        return _ColumnAddedEvent.connect(group, listener, at);
        break;
    case ColumnMovedEventId:
        return _ColumnMovedEvent.connect(group, listener, at);
        break;
    case ColumnRemovedEventId:
        return _ColumnRemovedEvent.connect(group, listener, at);
        break;
    case ColumnMarginChangedEventId:
        return _ColumnMarginChangedEvent.connect(group, listener, at);
        break;
    case ColumnSelectionChangedEventId:
        return _ColumnSelectionChangedEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with that ID";
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  TableColumnModelEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case ColumnAddedEventId:
        _ColumnAddedEvent.disconnect(group);
        break;
    case ColumnMovedEventId:
        _ColumnMovedEvent.disconnect(group);
        break;
    case ColumnRemovedEventId:
        _ColumnRemovedEvent.disconnect(group);
        break;
    case ColumnMarginChangedEventId:
        _ColumnMarginChangedEvent.disconnect(group);
        break;
    case ColumnSelectionChangedEventId:
        _ColumnSelectionChangedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

void  TableColumnModelEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case ColumnAddedEventId:
        _ColumnAddedEvent.disconnect_all_slots();
        break;
    case ColumnMovedEventId:
        _ColumnMovedEvent.disconnect_all_slots();
        break;
    case ColumnRemovedEventId:
        _ColumnRemovedEvent.disconnect_all_slots();
        break;
    case ColumnMarginChangedEventId:
        _ColumnMarginChangedEvent.disconnect_all_slots();
        break;
    case ColumnSelectionChangedEventId:
        _ColumnSelectionChangedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

bool  TableColumnModelEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ColumnAddedEventId:
        return _ColumnAddedEvent.empty();
        break;
    case ColumnMovedEventId:
        return _ColumnMovedEvent.empty();
        break;
    case ColumnRemovedEventId:
        return _ColumnRemovedEvent.empty();
        break;
    case ColumnMarginChangedEventId:
        return _ColumnMarginChangedEvent.empty();
        break;
    case ColumnSelectionChangedEventId:
        return _ColumnSelectionChangedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with that ID";
        return true;
        break;
    }
}

UInt32  TableColumnModelEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ColumnAddedEventId:
        return _ColumnAddedEvent.num_slots();
        break;
    case ColumnMovedEventId:
        return _ColumnMovedEvent.num_slots();
        break;
    case ColumnRemovedEventId:
        return _ColumnRemovedEvent.num_slots();
        break;
    case ColumnMarginChangedEventId:
        return _ColumnMarginChangedEvent.num_slots();
        break;
    case ColumnSelectionChangedEventId:
        return _ColumnSelectionChangedEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with that ID";
        return 0;
        break;
    }
}


/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

GetEventHandlePtr TableColumnModelEventSource::getHandleColumnAddedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ColumnAddedEventType>(
             const_cast<ColumnAddedEventType *>(&_ColumnAddedEvent),
             _producerType.getEventDescription(ColumnAddedEventId),
             const_cast<TableColumnModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TableColumnModelEventSource::getHandleColumnMovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ColumnMovedEventType>(
             const_cast<ColumnMovedEventType *>(&_ColumnMovedEvent),
             _producerType.getEventDescription(ColumnMovedEventId),
             const_cast<TableColumnModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TableColumnModelEventSource::getHandleColumnRemovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ColumnRemovedEventType>(
             const_cast<ColumnRemovedEventType *>(&_ColumnRemovedEvent),
             _producerType.getEventDescription(ColumnRemovedEventId),
             const_cast<TableColumnModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TableColumnModelEventSource::getHandleColumnMarginChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ColumnMarginChangedEventType>(
             const_cast<ColumnMarginChangedEventType *>(&_ColumnMarginChangedEvent),
             _producerType.getEventDescription(ColumnMarginChangedEventId),
             const_cast<TableColumnModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TableColumnModelEventSource::getHandleColumnSelectionChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ColumnSelectionChangedEventType>(
             const_cast<ColumnSelectionChangedEventType *>(&_ColumnSelectionChangedEvent),
             _producerType.getEventDescription(ColumnSelectionChangedEventId),
             const_cast<TableColumnModelEventSource *>(this)));

    return returnValue;
}

/*----------------------- constructors & destructors ----------------------*/

TableColumnModelEventSource::TableColumnModelEventSource(void) :
    Inherited()
{
}

TableColumnModelEventSource::TableColumnModelEventSource(const TableColumnModelEventSource &source) :
    Inherited(source)
{
}

TableColumnModelEventSource::~TableColumnModelEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TableColumnModelEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TableColumnModelEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TableColumnModelEventSource NI" << std::endl;
}

OSG_END_NAMESPACE
