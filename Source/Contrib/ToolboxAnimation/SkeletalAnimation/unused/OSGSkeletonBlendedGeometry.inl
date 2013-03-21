/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), David Naylor               *
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
GeoVectorProperty* SkeletonBlendedGeometry::getWeights(void) const
{
    return getInternalWeights();
}

inline
GeoIntegralProperty* SkeletonBlendedGeometry::getWeightIndexes(void) const
{
    return getInternalWeightIndexes();
}

inline
void SkeletonBlendedGeometry::setWeights(GeoVectorProperty* const weights  )
{
    setInternalWeights(weights);
}

inline
void SkeletonBlendedGeometry::setWeightIndexes(GeoIntegralProperty* const indexes)
{
    setInternalWeightIndexes(indexes);
}


inline
UInt32 SkeletonBlendedGeometryBase::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *SkeletonBlendedGeometryBase::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *SkeletonBlendedGeometryBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 SkeletonBlendedGeometryBase::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  SkeletonBlendedGeometryBase::connectSkeletonChanged(const SkeletonChangedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _SkeletonChangedEvent.connect(listener, at);
}

inline
boost::signals2::connection  SkeletonBlendedGeometryBase::connectSkeletonChanged(const SkeletonChangedEventType::group_type &group,
                                                    const SkeletonChangedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _SkeletonChangedEvent.connect(group, listener, at);
}

inline
void  SkeletonBlendedGeometryBase::disconnectSkeletonChanged(const SkeletonChangedEventType::group_type &group)
{
    _SkeletonChangedEvent.disconnect(group);
}

inline
void  SkeletonBlendedGeometryBase::disconnectAllSlotsSkeletonChanged(void)
{
    _SkeletonChangedEvent.disconnect_all_slots();
}

inline
bool  SkeletonBlendedGeometryBase::isEmptySkeletonChanged(void) const
{
    return _SkeletonChangedEvent.empty();
}

inline
UInt32  SkeletonBlendedGeometryBase::numSlotsSkeletonChanged(void) const
{
    return _SkeletonChangedEvent.num_slots();
}

inline
void SkeletonBlendedGeometryBase::produceSkeletonChanged(SkeletonChangedEventDetailsType* const e)
{
    produceEvent(SkeletonChangedEventId, e);
}

OSG_END_NAMESPACE
