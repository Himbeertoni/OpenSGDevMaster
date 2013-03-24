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

#include "OSGTextComponentEventSource.h"

#include "OSGEventDetails.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTextComponentEventSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGTextComponentEventSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

//! TextComponent Produced Events

EventDescription *TextComponentEventSource::_eventDesc[] =
{
    new EventDescription("TextValueChanged", 
                          "",
                          TextValueChangedEventId, 
                          FieldTraits<TextEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TextComponentEventSource::getHandleTextValueChangedSignal)),

    new EventDescription("CaretChanged", 
                          "",
                          CaretChangedEventId, 
                          FieldTraits<CaretEventDetails *>::getType(),
                          true,
                          static_cast<EventGetMethod>(&TextComponentEventSource::getHandleCaretChangedSignal))

};

EventProducerType TextComponentEventSource::_producerType(
    "TextComponentProducerType",
    "ComponentProducerType",
    "",
    InitEventProducerFunctor(),
    _eventDesc,
    sizeof(_eventDesc));
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TextComponentEventSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}

const EventProducerType &TextComponentEventSource::getProducerType(void) const
{
    return _producerType;
}

/*------------------------- event producers ----------------------------------*/
void TextComponentEventSource::produceEvent(UInt32 eventId, EventDetails* const e)
{
    switch(eventId)
    {
    case TextValueChangedEventId:
        OSG_ASSERT(dynamic_cast<TextValueChangedEventDetailsType* const>(e));

        _TextValueChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _TextValueChangedEvent(dynamic_cast<TextValueChangedEventDetailsType* const>(e), TextValueChangedEventId);
        break;
    case CaretChangedEventId:
        OSG_ASSERT(dynamic_cast<CaretChangedEventDetailsType* const>(e));

        _CaretChangedEvent.set_combiner(ConsumableEventCombiner(e));
        _CaretChangedEvent(dynamic_cast<CaretChangedEventDetailsType* const>(e), CaretChangedEventId);
        break;
    default:
        Inherited::produceEvent(eventId, e);
        break;
    }
}

boost::signals2::connection TextComponentEventSource::connectEvent(UInt32 eventId, 
                                                             const BaseEventType::slot_type &listener, 
                                                             boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case TextValueChangedEventId:
        return _TextValueChangedEvent.connect(listener, at);
        break;
    case CaretChangedEventId:
        return _CaretChangedEvent.connect(listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, listener, at);
        break;
    }

    return boost::signals2::connection();
}

boost::signals2::connection  TextComponentEventSource::connectEvent(UInt32 eventId, 
                                                              const BaseEventType::group_type &group,
                                                              const BaseEventType::slot_type &listener,
                                                              boost::signals2::connect_position at)
{
    switch(eventId)
    {
    case TextValueChangedEventId:
        return _TextValueChangedEvent.connect(group, listener, at);
        break;
    case CaretChangedEventId:
        return _CaretChangedEvent.connect(group, listener, at);
        break;
    default:
        return Inherited::connectEvent(eventId, group, listener, at);
        break;
    }

    return boost::signals2::connection();
}
    
void  TextComponentEventSource::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
    switch(eventId)
    {
    case TextValueChangedEventId:
        _TextValueChangedEvent.disconnect(group);
        break;
    case CaretChangedEventId:
        _CaretChangedEvent.disconnect(group);
        break;
    default:
        return Inherited::disconnectEvent(eventId, group);
        break;
    }
}

void  TextComponentEventSource::disconnectAllSlotsEvent(UInt32 eventId)
{
    switch(eventId)
    {
    case TextValueChangedEventId:
        _TextValueChangedEvent.disconnect_all_slots();
        break;
    case CaretChangedEventId:
        _CaretChangedEvent.disconnect_all_slots();
        break;
    default:
        Inherited::disconnectAllSlotsEvent(eventId);
        break;
    }
}

bool  TextComponentEventSource::isEmptyEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case TextValueChangedEventId:
        return _TextValueChangedEvent.empty();
        break;
    case CaretChangedEventId:
        return _CaretChangedEvent.empty();
        break;
    default:
        return Inherited::isEmptyEvent(eventId);
        break;
    }
}

UInt32  TextComponentEventSource::numSlotsEvent(UInt32 eventId) const
{
    switch(eventId)
    {
    case TextValueChangedEventId:
        return _TextValueChangedEvent.num_slots();
        break;
    case CaretChangedEventId:
        return _CaretChangedEvent.num_slots();
        break;
    default:
        return Inherited::numSlotsEvent(eventId);
        break;
    }
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

GetEventHandlePtr TextComponentEventSource::getHandleTextValueChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<TextValueChangedEventType>(
             const_cast<TextValueChangedEventType *>(&_TextValueChangedEvent),
             _producerType.getEventDescription(TextValueChangedEventId),
             const_cast<TextComponentEventSource *>(this)));

    return returnValue;
}

GetEventHandlePtr TextComponentEventSource::getHandleCaretChangedSignal(void) const
{
    GetEventHandlePtr returnValue(
        new  GetTypedEventHandle<CaretChangedEventType>(
             const_cast<CaretChangedEventType *>(&_CaretChangedEvent),
             _producerType.getEventDescription(CaretChangedEventId),
             const_cast<TextComponentEventSource *>(this)));

    return returnValue;
}

/*----------------------- constructors & destructors ----------------------*/

TextComponentEventSource::TextComponentEventSource(void) :
    Inherited()
{
}

TextComponentEventSource::TextComponentEventSource(const TextComponentEventSource &source) :
    Inherited(source)
{
}

TextComponentEventSource::~TextComponentEventSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TextComponentEventSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TextComponentEventSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TextComponentEventSource NI" << std::endl;
}

OSG_END_NAMESPACE
