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
const EventProducerType &CellEditorEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 CellEditorEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
UInt32 CellEditorEventSource::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *CellEditorEventSource::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *CellEditorEventSource::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 CellEditorEventSource::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  CellEditorEventSource::connectEditingCanceled(const EditingCanceledEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _EditingCanceledEvent.connect(listener, at);
}

inline
boost::signals2::connection  CellEditorEventSource::connectEditingCanceled(const EditingCanceledEventType::group_type &group,
                                                    const EditingCanceledEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _EditingCanceledEvent.connect(group, listener, at);
}

inline
void  CellEditorEventSource::disconnectEditingCanceled(const EditingCanceledEventType::group_type &group)
{
    _EditingCanceledEvent.disconnect(group);
}

inline
void  CellEditorEventSource::disconnectAllSlotsEditingCanceled(void)
{
    _EditingCanceledEvent.disconnect_all_slots();
}

inline
bool  CellEditorEventSource::isEmptyEditingCanceled(void) const
{
    return _EditingCanceledEvent.empty();
}

inline
UInt32  CellEditorEventSource::numSlotsEditingCanceled(void) const
{
    return _EditingCanceledEvent.num_slots();
}

inline
void CellEditorEventSource::produceEditingCanceled(EditingCanceledEventDetailsType* const e)
{
    produceEvent(EditingCanceledEventId, e);
}

inline
boost::signals2::connection  CellEditorEventSource::connectEditingStopped(const EditingStoppedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _EditingStoppedEvent.connect(listener, at);
}

inline
boost::signals2::connection  CellEditorEventSource::connectEditingStopped(const EditingStoppedEventType::group_type &group,
                                                    const EditingStoppedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _EditingStoppedEvent.connect(group, listener, at);
}

inline
void  CellEditorEventSource::disconnectEditingStopped(const EditingStoppedEventType::group_type &group)
{
    _EditingStoppedEvent.disconnect(group);
}

inline
void  CellEditorEventSource::disconnectAllSlotsEditingStopped(void)
{
    _EditingStoppedEvent.disconnect_all_slots();
}

inline
bool  CellEditorEventSource::isEmptyEditingStopped(void) const
{
    return _EditingStoppedEvent.empty();
}

inline
UInt32  CellEditorEventSource::numSlotsEditingStopped(void) const
{
    return _EditingStoppedEvent.num_slots();
}

inline
void CellEditorEventSource::produceEditingStopped(EditingStoppedEventDetailsType* const e)
{
    produceEvent(EditingStoppedEventId, e);
}
OSG_END_NAMESPACE
