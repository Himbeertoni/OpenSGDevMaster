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
#include "OSGActionEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &ComboBoxEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 ComboBoxEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
boost::signals2::connection  ComboBoxEventSource::connectActionPerformed(const ActionPerformedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ActionPerformedEvent.connect(listener, at);
}

inline
boost::signals2::connection  ComboBoxEventSource::connectActionPerformed(const ActionPerformedEventType::group_type &group,
                                                    const ActionPerformedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ActionPerformedEvent.connect(group, listener, at);
}

inline
void  ComboBoxEventSource::disconnectActionPerformed(const ActionPerformedEventType::group_type &group)
{
    _ActionPerformedEvent.disconnect(group);
}

inline
void  ComboBoxEventSource::disconnectAllSlotsActionPerformed(void)
{
    _ActionPerformedEvent.disconnect_all_slots();
}

inline
bool  ComboBoxEventSource::isEmptyActionPerformed(void) const
{
    return _ActionPerformedEvent.empty();
}

inline
UInt32  ComboBoxEventSource::numSlotsActionPerformed(void) const
{
    return _ActionPerformedEvent.num_slots();
}

inline
void ComboBoxEventSource::produceActionPerformed(ActionPerformedEventDetailsType* const e)
{
    produceEvent(ActionPerformedEventId, e);
}

OSG_END_NAMESPACE
