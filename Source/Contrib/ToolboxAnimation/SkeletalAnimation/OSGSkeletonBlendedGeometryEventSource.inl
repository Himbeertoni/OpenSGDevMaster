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

inline
UInt32 SkeletonBlendedGeometryEventSourceBase::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *SkeletonBlendedGeometryEventSourceBase::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *SkeletonBlendedGeometryEventSourceBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 SkeletonBlendedGeometryEventSourceBase::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  SkeletonBlendedGeometryEventSourceBase::connectSkeletonChanged(const SkeletonChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _SkeletonChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  SkeletonBlendedGeometryEventSourceBase::connectSkeletonChanged(const SkeletonChangedEventType::group_type &group,
                                                    const SkeletonChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _SkeletonChangedEvent.connect(group, listener, at);
}

inline
void  SkeletonBlendedGeometryEventSourceBase::disconnectSkeletonChanged(const SkeletonChangedEventType::group_type &group)
{
    _SkeletonChangedEvent.disconnect(group);
}

inline
void  SkeletonBlendedGeometryEventSourceBase::disconnectAllSlotsSkeletonChanged(void)
{
    _SkeletonChangedEvent.disconnect_all_slots();
}

inline
bool  SkeletonBlendedGeometryEventSourceBase::isEmptySkeletonChanged(void) const
{
    return _SkeletonChangedEvent.empty();
}

inline
UInt32  SkeletonBlendedGeometryEventSourceBase::numSlotsSkeletonChanged(void) const
{
    return _SkeletonChangedEvent.num_slots();
}

inline
void SkeletonBlendedGeometryEventSourceBase::produceSkeletonChanged(SkeletonChangedEventDetailsType* const e)
{
    produceEvent(SkeletonChangedEventId, e);
}
OSG_END_NAMESPACE
