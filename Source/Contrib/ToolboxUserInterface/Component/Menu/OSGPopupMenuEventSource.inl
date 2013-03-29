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
#include "OSGPopupMenuEventDetails.h"

OSG_BEGIN_NAMESPACE
//! access the producer type of the class
inline
const EventProducerType &PopupMenuEventSource::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 PopupMenuEventSource::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
boost::signals2::connection  PopupMenuEventSource::connectPopupMenuWillBecomeVisible(const PopupMenuWillBecomeVisibleEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _PopupMenuWillBecomeVisibleEvent.connect(listener, at);
}

inline
boost::signals2::connection  PopupMenuEventSource::connectPopupMenuWillBecomeVisible(const PopupMenuWillBecomeVisibleEventType::group_type &group,
                                                    const PopupMenuWillBecomeVisibleEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _PopupMenuWillBecomeVisibleEvent.connect(group, listener, at);
}

inline
void  PopupMenuEventSource::disconnectPopupMenuWillBecomeVisible(const PopupMenuWillBecomeVisibleEventType::group_type &group)
{
    _PopupMenuWillBecomeVisibleEvent.disconnect(group);
}

inline
void  PopupMenuEventSource::disconnectAllSlotsPopupMenuWillBecomeVisible(void)
{
    _PopupMenuWillBecomeVisibleEvent.disconnect_all_slots();
}

inline
bool  PopupMenuEventSource::isEmptyPopupMenuWillBecomeVisible(void) const
{
    return _PopupMenuWillBecomeVisibleEvent.empty();
}

inline
UInt32  PopupMenuEventSource::numSlotsPopupMenuWillBecomeVisible(void) const
{
    return _PopupMenuWillBecomeVisibleEvent.num_slots();
}

inline
void PopupMenuEventSource::producePopupMenuWillBecomeVisible(PopupMenuWillBecomeVisibleEventDetailsType* const e)
{
    produceEvent(PopupMenuWillBecomeVisibleEventId, e);
}

inline
boost::signals2::connection  PopupMenuEventSource::connectPopupMenuWillBecomeInvisible(const PopupMenuWillBecomeInvisibleEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _PopupMenuWillBecomeInvisibleEvent.connect(listener, at);
}

inline
boost::signals2::connection  PopupMenuEventSource::connectPopupMenuWillBecomeInvisible(const PopupMenuWillBecomeInvisibleEventType::group_type &group,
                                                    const PopupMenuWillBecomeInvisibleEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _PopupMenuWillBecomeInvisibleEvent.connect(group, listener, at);
}

inline
void  PopupMenuEventSource::disconnectPopupMenuWillBecomeInvisible(const PopupMenuWillBecomeInvisibleEventType::group_type &group)
{
    _PopupMenuWillBecomeInvisibleEvent.disconnect(group);
}

inline
void  PopupMenuEventSource::disconnectAllSlotsPopupMenuWillBecomeInvisible(void)
{
    _PopupMenuWillBecomeInvisibleEvent.disconnect_all_slots();
}

inline
bool  PopupMenuEventSource::isEmptyPopupMenuWillBecomeInvisible(void) const
{
    return _PopupMenuWillBecomeInvisibleEvent.empty();
}

inline
UInt32  PopupMenuEventSource::numSlotsPopupMenuWillBecomeInvisible(void) const
{
    return _PopupMenuWillBecomeInvisibleEvent.num_slots();
}

inline
void PopupMenuEventSource::producePopupMenuWillBecomeInvisible(PopupMenuWillBecomeInvisibleEventDetailsType* const e)
{
    produceEvent(PopupMenuWillBecomeInvisibleEventId, e);
}

inline
boost::signals2::connection  PopupMenuEventSource::connectPopupMenuCanceled(const PopupMenuCanceledEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _PopupMenuCanceledEvent.connect(listener, at);
}

inline
boost::signals2::connection  PopupMenuEventSource::connectPopupMenuCanceled(const PopupMenuCanceledEventType::group_type &group,
                                                    const PopupMenuCanceledEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _PopupMenuCanceledEvent.connect(group, listener, at);
}

inline
void  PopupMenuEventSource::disconnectPopupMenuCanceled(const PopupMenuCanceledEventType::group_type &group)
{
    _PopupMenuCanceledEvent.disconnect(group);
}

inline
void  PopupMenuEventSource::disconnectAllSlotsPopupMenuCanceled(void)
{
    _PopupMenuCanceledEvent.disconnect_all_slots();
}

inline
bool  PopupMenuEventSource::isEmptyPopupMenuCanceled(void) const
{
    return _PopupMenuCanceledEvent.empty();
}

inline
UInt32  PopupMenuEventSource::numSlotsPopupMenuCanceled(void) const
{
    return _PopupMenuCanceledEvent.num_slots();
}

inline
void PopupMenuEventSource::producePopupMenuCanceled(PopupMenuCanceledEventDetailsType* const e)
{
    produceEvent(PopupMenuCanceledEventId, e);
}

inline
boost::signals2::connection  PopupMenuEventSource::connectPopupMenuContentsChanged(const PopupMenuContentsChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _PopupMenuContentsChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  PopupMenuEventSource::connectPopupMenuContentsChanged(const PopupMenuContentsChangedEventType::group_type &group,
                                                    const PopupMenuContentsChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _PopupMenuContentsChangedEvent.connect(group, listener, at);
}

inline
void  PopupMenuEventSource::disconnectPopupMenuContentsChanged(const PopupMenuContentsChangedEventType::group_type &group)
{
    _PopupMenuContentsChangedEvent.disconnect(group);
}

inline
void  PopupMenuEventSource::disconnectAllSlotsPopupMenuContentsChanged(void)
{
    _PopupMenuContentsChangedEvent.disconnect_all_slots();
}

inline
bool  PopupMenuEventSource::isEmptyPopupMenuContentsChanged(void) const
{
    return _PopupMenuContentsChangedEvent.empty();
}

inline
UInt32  PopupMenuEventSource::numSlotsPopupMenuContentsChanged(void) const
{
    return _PopupMenuContentsChangedEvent.num_slots();
}

inline
void PopupMenuEventSource::producePopupMenuContentsChanged(PopupMenuContentsChangedEventDetailsType* const e)
{
    produceEvent(PopupMenuContentsChangedEventId, e);
}

OSG_END_NAMESPACE
