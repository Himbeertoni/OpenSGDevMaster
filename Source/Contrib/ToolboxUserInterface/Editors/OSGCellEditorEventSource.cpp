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

#include "OSGCellEditorEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGCellEditorEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGCellEditorEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! CellEditor Produced Events

EventDescription *CellEditorEventSource::_eventDesc[] =
{
    new EventDescription("EditingCanceled", 
                          "",
                          EditingCanceledEventId, 
                          FieldTraits<ChangeEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&CellEditorEventSource::getHandleEditingCanceledSignal)),

    new EventDescription("EditingStopped", 
                          "",
                          EditingStoppedEventId, 
                          FieldTraits<ChangeEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&CellEditorEventSource::getHandleEditingStoppedSignal))

};

EventProducerType CellEditorEventSource::_producerType(
    "CellEditorProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void CellEditorEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


const EventProducerType &CellEditorEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
/*------------------------- event producers ----------------------------------*/
void CellEditorEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case EditingCanceledEventId:
        OSG_ASSERT(dynamic_cast<EditingCanceledEventDetailsType* const>(e));

        _EditingCanceledEvent.set_combiner(ConsumableEventCombiner(e));
        _EditingCanceledEvent(dynamic_cast<EditingCanceledEventDetailsType* const>(e), EditingCanceledEventId);
        break;
    case EditingStoppedEventId:
        OSG_ASSERT(dynamic_cast<EditingStoppedEventDetailsType* const>(e));

        _EditingStoppedEvent.set_combiner(ConsumableEventCombiner(e));
        _EditingStoppedEvent(dynamic_cast<EditingStoppedEventDetailsType* const>(e), EditingStoppedEventId);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

boost::signals2::connection CellEditorEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case EditingCanceledEventId:
        return _EditingCanceledEvent.connect(listener, at);
        break;
    case EditingStoppedEventId:
        return _EditingStoppedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  CellEditorEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case EditingCanceledEventId:
        return _EditingCanceledEvent.connect(group, listener, at);
        break;
    case EditingStoppedEventId:
        return _EditingStoppedEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  CellEditorEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case EditingCanceledEventId:
        _EditingCanceledEvent.disconnect(group);
        break;
    case EditingStoppedEventId:
        _EditingStoppedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        break;
    }
}

void  CellEditorEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case EditingCanceledEventId:
        _EditingCanceledEvent.disconnect_all_slots();
        break;
    case EditingStoppedEventId:
        _EditingStoppedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "CellEditorEventSource: No event defined with ID " << eventId << std::endl;
        break;
    }
}

bool  CellEditorEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case EditingCanceledEventId:
        return _EditingCanceledEvent.empty();
        break;
    case EditingStoppedEventId:
        return _EditingStoppedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return true;
        break;
    }
}

UInt32  CellEditorEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case EditingCanceledEventId:
        return _EditingCanceledEvent.num_slots();
        break;
    case EditingStoppedEventId:
        return _EditingStoppedEvent.num_slots();
        break;
    default:
        SWARNING << "No event defined with ID " << eventId << std::endl;
        return 0;
        break;
    }
}

GetEventHandlePtr CellEditorEventSource::getHandleEditingCanceledSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<EditingCanceledEventType>(
             const_cast<EditingCanceledEventType *>(&_EditingCanceledEvent),
             _producerType.getEventDescription(EditingCanceledEventId),
             const_cast<CellEditorEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr CellEditorEventSource::getHandleEditingStoppedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<EditingStoppedEventType>(
             const_cast<EditingStoppedEventType *>(&_EditingStoppedEvent),
             _producerType.getEventDescription(EditingStoppedEventId),
             const_cast<CellEditorEventSource *>(this)));

    return returnValue;
}


/*----------------------- constructors & destructors ----------------------*/

CellEditorEventSource::CellEditorEventSource(void) :
    Inherited()
{
}

CellEditorEventSource::CellEditorEventSource(const CellEditorEventSource &source) :
    Inherited(source)
{
}

CellEditorEventSource::~CellEditorEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void CellEditorEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void CellEditorEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump CellEditor NI" << std::endl;
}

OSG_END_NAMESPACE
