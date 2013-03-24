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
//! access the producer type of the class
inline
const EventProducerType &ScrollBarEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 ScrollBarEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

OSG_BEGIN_NAMESPACE
inline
boost::signals2::connection  ScrollBarEventSource::connectAdjustmentValueChanged(const AdjustmentValueChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _AdjustmentValueChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ScrollBarEventSource::connectAdjustmentValueChanged(const AdjustmentValueChangedEventType::group_type &group,
                                                    const AdjustmentValueChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _AdjustmentValueChangedEvent.connect(group, listener, at);
}

inline
void  ScrollBarEventSource::disconnectAdjustmentValueChanged(const AdjustmentValueChangedEventType::group_type &group)
{
    _AdjustmentValueChangedEvent.disconnect(group);
}

inline
void  ScrollBarEventSource::disconnectAllSlotsAdjustmentValueChanged(void)
{
    _AdjustmentValueChangedEvent.disconnect_all_slots();
}

inline
bool  ScrollBarEventSource::isEmptyAdjustmentValueChanged(void) const
{
    return _AdjustmentValueChangedEvent.empty();
}

inline
UInt32  ScrollBarEventSource::numSlotsAdjustmentValueChanged(void) const
{
    return _AdjustmentValueChangedEvent.num_slots();
}

inline
void ScrollBarEventSource::produceAdjustmentValueChanged(AdjustmentValueChangedEventDetailsType* const e)
{
    produceEvent(AdjustmentValueChangedEventId, e);
}
OSG_END_NAMESPACE
