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
#include "OSGChangeEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &TableColumnEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TableColumnEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
UInt32 TableColumnEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *TableColumnEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *TableColumnEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 TableColumnEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  TableColumnEventSource::connectFieldChanged(const FieldChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _FieldChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  TableColumnEventSource::connectFieldChanged(const FieldChangedEventType::group_type &group,
                                                    const FieldChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _FieldChangedEvent.connect(group, listener, at);
}

inline
void  TableColumnEventSource::disconnectFieldChanged(const FieldChangedEventType::group_type &group)
{
    _FieldChangedEvent.disconnect(group);
}

inline
void  TableColumnEventSource::disconnectAllSlotsFieldChanged(void)
{
    _FieldChangedEvent.disconnect_all_slots();
}

inline
bool  TableColumnEventSource::isEmptyFieldChanged(void) const
{
    return _FieldChangedEvent.empty();
}

inline
UInt32  TableColumnEventSource::numSlotsFieldChanged(void) const
{
    return _FieldChangedEvent.num_slots();
}

inline
void TableColumnEventSource::produceFieldChanged(FieldChangedEventDetailsType* const e)
{
    produceEvent(FieldChangedEventId, e);
}
OSG_END_NAMESPACE
