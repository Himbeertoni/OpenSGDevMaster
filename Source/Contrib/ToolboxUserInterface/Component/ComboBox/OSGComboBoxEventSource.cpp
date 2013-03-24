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

#include "OSGComboBoxEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGComboBoxEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGComboBoxEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! ComboBox Produced Events

EventDescription *ComboBoxEventSource::_eventDesc[] =
{
    new EventDescription("ActionPerformed", 
                          "",
                          ActionPerformedEventId, 
                          FieldTraits<ActionEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&ComboBoxEventSource::getHandleActionPerformedSignal))

};

EventProducerType ComboBoxEventSource::_producerType(
    "ComboBoxProducerType",
    "ComponentProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));

const EventProducerType &ComboBoxEventSource::getProducerType(void) const
{
    return _producerType;
}

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ComboBoxEventSource::initMethod(InitPhase ePhase)
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
void ComboBoxEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        OSG_ASSERT(dynamic_cast<ActionPerformedEventDetailsType* const>(e));

        _ActionPerformedEvent.set_combiner(ConsumableEventCombiner(e));
        _ActionPerformedEvent(dynamic_cast<ActionPerformedEventDetailsType* const>(e), ActionPerformedEventId);
        break;
    default:
        Inherited::produceEvent(eventId, e);
        break;
    }
}

boost::signals2::connection ComboBoxEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        return _ActionPerformedEvent.connect(listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, listener, at);
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  ComboBoxEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        return _ActionPerformedEvent.connect(group, listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, group, listener, at);
        break;
    }

    return boost::signals2::connection();
}
    
void  ComboBoxEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        _ActionPerformedEvent.disconnect(group);
        break;
    default:
        return Inherited::disconnectEvent(eventId, group);
        break;
    }
}

void  ComboBoxEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        _ActionPerformedEvent.disconnect_all_slots();
        break;
    default:
        Inherited::disconnectAllSlotsEvent(eventId);
        break;
    }
}

bool  ComboBoxEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        return _ActionPerformedEvent.empty();
        break;
    default:
        return Inherited::isEmptyEvent(eventId);
        break;
    }
}

UInt32  ComboBoxEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case ActionPerformedEventId:
        return _ActionPerformedEvent.num_slots();
        break;
    default:
        return Inherited::numSlotsEvent(eventId);
        break;
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

GetEventHandlePtr ComboBoxEventSource::getHandleActionPerformedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<ActionPerformedEventType>(
             const_cast<ActionPerformedEventType *>(&_ActionPerformedEvent),
             _producerType.getEventDescription(ActionPerformedEventId),
             const_cast<ComboBoxEventSource *>(this)));

    return returnValue;
}

/*----------------------- constructors & destructors ----------------------*/

ComboBoxEventSource::ComboBoxEventSource(void) :
    Inherited()
{
}

ComboBoxEventSource::ComboBoxEventSource(const ComboBoxEventSource &source) :
    Inherited(source)
{
}

ComboBoxEventSource::~ComboBoxEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ComboBoxEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void ComboBoxEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump ComboBoxEventSource NI" << std::endl;
}

OSG_END_NAMESPACE
