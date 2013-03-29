/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
#include "OSGButtonSelectedEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &ToggleButtonEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 ToggleButtonEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
boost::signals2::connection  ToggleButtonEventSource::connectButtonSelected(const ButtonSelectedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ButtonSelectedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ToggleButtonEventSource::connectButtonSelected(const ButtonSelectedEventType::group_type &group,
                                                    const ButtonSelectedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ButtonSelectedEvent.connect(group, listener, at);
}

inline
void  ToggleButtonEventSource::disconnectButtonSelected(const ButtonSelectedEventType::group_type &group)
{
    _ButtonSelectedEvent.disconnect(group);
}

inline
void  ToggleButtonEventSource::disconnectAllSlotsButtonSelected(void)
{
    _ButtonSelectedEvent.disconnect_all_slots();
}

inline
bool  ToggleButtonEventSource::isEmptyButtonSelected(void) const
{
    return _ButtonSelectedEvent.empty();
}

inline
UInt32  ToggleButtonEventSource::numSlotsButtonSelected(void) const
{
    return _ButtonSelectedEvent.num_slots();
}

inline
void ToggleButtonEventSource::produceButtonSelected(ButtonSelectedEventDetailsType* const e)
{
    produceEvent(ButtonSelectedEventId, e);
}

inline
boost::signals2::connection  ToggleButtonEventSource::connectButtonDeselected(const ButtonDeselectedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ButtonDeselectedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ToggleButtonEventSource::connectButtonDeselected(const ButtonDeselectedEventType::group_type &group,
                                                    const ButtonDeselectedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ButtonDeselectedEvent.connect(group, listener, at);
}

inline
void  ToggleButtonEventSource::disconnectButtonDeselected(const ButtonDeselectedEventType::group_type &group)
{
    _ButtonDeselectedEvent.disconnect(group);
}

inline
void  ToggleButtonEventSource::disconnectAllSlotsButtonDeselected(void)
{
    _ButtonDeselectedEvent.disconnect_all_slots();
}

inline
bool  ToggleButtonEventSource::isEmptyButtonDeselected(void) const
{
    return _ButtonDeselectedEvent.empty();
}

inline
UInt32  ToggleButtonEventSource::numSlotsButtonDeselected(void) const
{
    return _ButtonDeselectedEvent.num_slots();
}

inline
void ToggleButtonEventSource::produceButtonDeselected(ButtonDeselectedEventDetailsType* const e)
{
    produceEvent(ButtonDeselectedEventId, e);
}

OSG_END_NAMESPACE
