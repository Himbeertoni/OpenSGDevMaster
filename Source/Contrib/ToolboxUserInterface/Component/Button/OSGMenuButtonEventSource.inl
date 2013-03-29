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
const EventProducerType &MenuButtonEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 MenuButtonEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
boost::signals2::connection  MenuButtonEventSource::connectMenuActionPerformed(const MenuActionPerformedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MenuActionPerformedEvent.connect(listener, at);
}

inline
boost::signals2::connection  MenuButtonEventSource::connectMenuActionPerformed(const MenuActionPerformedEventType::group_type &group,
                                                    const MenuActionPerformedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MenuActionPerformedEvent.connect(group, listener, at);
}

inline
void  MenuButtonEventSource::disconnectMenuActionPerformed(const MenuActionPerformedEventType::group_type &group)
{
    _MenuActionPerformedEvent.disconnect(group);
}

inline
void  MenuButtonEventSource::disconnectAllSlotsMenuActionPerformed(void)
{
    _MenuActionPerformedEvent.disconnect_all_slots();
}

inline
bool  MenuButtonEventSource::isEmptyMenuActionPerformed(void) const
{
    return _MenuActionPerformedEvent.empty();
}

inline
UInt32  MenuButtonEventSource::numSlotsMenuActionPerformed(void) const
{
    return _MenuActionPerformedEvent.num_slots();
}

inline
void MenuButtonEventSource::produceMenuActionPerformed(MenuActionPerformedEventDetailsType* const e)
{
    produceEvent(MenuActionPerformedEventId, e);
}

OSG_END_NAMESPACE
