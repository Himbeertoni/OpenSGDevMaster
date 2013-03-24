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

#include "OSGTreeSelectionModelEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTreeSelectionModelEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGTreeSelectionModelEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/
//! TreeSelectionModel Produced Events

EventDescription *TreeSelectionModelEventSource::_eventDesc[] =
{
    new EventDescription("SelectionAdded", 
                          "",
                          SelectionAddedEventId, 
                          FieldTraits<TreeSelectionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeSelectionModelEventSource::getHandleSelectionAddedSignal)),

    new EventDescription("SelectionRemoved", 
                          "",
                          SelectionRemovedEventId, 
                          FieldTraits<TreeSelectionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TreeSelectionModelEventSource::getHandleSelectionRemovedSignal))

};

EventProducerType TreeSelectionModelEventSource::_producerType(
    "TreeSelectionModelProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

const EventProducerType &TreeSelectionModelEventSource::getProducerType(void) const
{
    return _producerType;
}

void TreeSelectionModelEventSource::initMethod(InitPhase ePhase)
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
void TreeSelectionModelEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        OSG_ASSERT(dynamic_cast<SelectionAddedEventDetailsType* const>(e));

        _SelectionAddedEvent.set_combiner(ConsumableEventCombiner(e));
        _SelectionAddedEvent(dynamic_cast<SelectionAddedEventDetailsType* const>(e), SelectionAddedEventId);
        break;
    case SelectionRemovedEventId:
        OSG_ASSERT(dynamic_cast<SelectionRemovedEventDetailsType* const>(e));

        _SelectionRemovedEvent.set_combiner(ConsumableEventCombiner(e));
        _SelectionRemovedEvent(dynamic_cast<SelectionRemovedEventDetailsType* const>(e), SelectionRemovedEventId);
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

boost::signals2::connection TreeSelectionModelEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        return _SelectionAddedEvent.connect(listener, at);
        break;
    case SelectionRemovedEventId:
        return _SelectionRemovedEvent.connect(listener, at);
        break;
    default:
        SWARNING << "No event defined with that ID";
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  TreeSelectionModelEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        return _SelectionAddedEvent.connect(group, listener, at);
        break;
    case SelectionRemovedEventId:
        return _SelectionRemovedEvent.connect(group, listener, at);
        break;
    default:
        SWARNING << "No event defined with that ID";
        return boost::signals2::connection();
        break;
    }

    return boost::signals2::connection();
}
    
void  TreeSelectionModelEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        _SelectionAddedEvent.disconnect(group);
        break;
    case SelectionRemovedEventId:
        _SelectionRemovedEvent.disconnect(group);
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

void  TreeSelectionModelEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        _SelectionAddedEvent.disconnect_all_slots();
        break;
    case SelectionRemovedEventId:
        _SelectionRemovedEvent.disconnect_all_slots();
        break;
    default:
        SWARNING << "No event defined with that ID";
        break;
    }
}

bool  TreeSelectionModelEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        return _SelectionAddedEvent.empty();
        break;
    case SelectionRemovedEventId:
        return _SelectionRemovedEvent.empty();
        break;
    default:
        SWARNING << "No event defined with that ID";
        return true;
        break;
    }
}

UInt32  TreeSelectionModelEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case SelectionAddedEventId:
        return _SelectionAddedEvent.num_slots();
        break;
    case SelectionRemovedEventId:
        return _SelectionRemovedEvent.num_slots();
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
GetEventHandlePtr TreeSelectionModelEventSource::getHandleSelectionAddedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<SelectionAddedEventType>(
             const_cast<SelectionAddedEventType *>(&_SelectionAddedEvent),
             _producerType.getEventDescription(SelectionAddedEventId),
             const_cast<TreeSelectionModelEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TreeSelectionModelEventSource::getHandleSelectionRemovedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<SelectionRemovedEventType>(
             const_cast<SelectionRemovedEventType *>(&_SelectionRemovedEvent),
             _producerType.getEventDescription(SelectionRemovedEventId),
             const_cast<TreeSelectionModelEventSource *>(this)));

    return returnValue;
}

/*----------------------- constructors & destructors ----------------------*/

TreeSelectionModelEventSource::TreeSelectionModelEventSource(void) :
    Inherited()
{
}

TreeSelectionModelEventSource::TreeSelectionModelEventSource(const TreeSelectionModelEventSource &source) :
    Inherited(source)
{
}

TreeSelectionModelEventSource::~TreeSelectionModelEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TreeSelectionModelEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TreeSelectionModelEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TreeSelectionModelEventSource NI" << std::endl;
}

OSG_END_NAMESPACE
