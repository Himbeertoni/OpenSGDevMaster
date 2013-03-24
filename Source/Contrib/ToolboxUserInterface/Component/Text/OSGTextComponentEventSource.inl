/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &TextComponentEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TextComponentEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}
inline
boost::signals2::connection  TextComponentEventSource::connectTextValueChanged(const TextValueChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _TextValueChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TextComponentEventSource::connectTextValueChanged(const TextValueChangedEventType::group_type &group,
                                                    const TextValueChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _TextValueChangedEvent.connect(group, listener, at);
}

inline
void  TextComponentEventSource::disconnectTextValueChanged(const TextValueChangedEventType::group_type &group)
{
    _TextValueChangedEvent.disconnect(group);
}

inline
void  TextComponentEventSource::disconnectAllSlotsTextValueChanged(void)
{
    _TextValueChangedEvent.disconnect_all_slots();
}

inline
bool  TextComponentEventSource::isEmptyTextValueChanged(void) const
{
    return _TextValueChangedEvent.empty();
}

inline
UInt32  TextComponentEventSource::numSlotsTextValueChanged(void) const
{
    return _TextValueChangedEvent.num_slots();
}

inline
void TextComponentEventSource::produceTextValueChanged(TextValueChangedEventDetailsType* const e)
{
    produceEvent(TextValueChangedEventId, e);
}

inline
boost::signals2::connection  TextComponentEventSource::connectCaretChanged(const CaretChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _CaretChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TextComponentEventSource::connectCaretChanged(const CaretChangedEventType::group_type &group,
                                                    const CaretChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _CaretChangedEvent.connect(group, listener, at);
}

inline
void  TextComponentEventSource::disconnectCaretChanged(const CaretChangedEventType::group_type &group)
{
    _CaretChangedEvent.disconnect(group);
}

inline
void  TextComponentEventSource::disconnectAllSlotsCaretChanged(void)
{
    _CaretChangedEvent.disconnect_all_slots();
}

inline
bool  TextComponentEventSource::isEmptyCaretChanged(void) const
{
    return _CaretChangedEvent.empty();
}

inline
UInt32  TextComponentEventSource::numSlotsCaretChanged(void) const
{
    return _CaretChangedEvent.num_slots();
}

inline
void TextComponentEventSource::produceCaretChanged(CaretChangedEventDetailsType* const e)
{
    produceEvent(CaretChangedEventId, e);
}
OSG_END_NAMESPACE
