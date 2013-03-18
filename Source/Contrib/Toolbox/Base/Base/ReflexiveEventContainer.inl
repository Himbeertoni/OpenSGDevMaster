
inline
UInt32 ReflexiveContainer::getNumEvents(      void            ) const
{
    return getProducerType().getNumEventDescs();
}

inline
GetEventHandlePtr ReflexiveContainer::getEvent    (      UInt32 eventId  ) const
{
    const EventDescription *desc = getEventDescription(eventId);

    return (desc != NULL) ? desc->getEvent(*this) : invalidGetEvent();
}

inline
GetEventHandlePtr ReflexiveContainer::getEvent    (const Char8 *eventName) const
{
    const EventDescription *desc = getEventDescription(eventName);

    return (desc != NULL) ? desc->getEvent(*this) : invalidGetEvent();
}

inline
const EventProducerType &ReflexiveContainer::getProducerType(void) const
{
    return _producerType;
}

inline
boost::signals2::connection ReflexiveContainer::connectEvent(UInt32 eventId, 
                                                      const BaseEventType::slot_type &listener,
                                                      boost::signals2::connect_position at)
{
    return boost::signals2::connection();
}
                                              
inline
boost::signals2::connection ReflexiveContainer::connectEvent(UInt32 eventId, 
                                                      const BaseEventType::group_type &group,
                                                      const BaseEventType::slot_type &listener,
                                                      boost::signals2::connect_position at)
{
    return boost::signals2::connection();
}
    
inline
void   ReflexiveContainer::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
}

inline
void   ReflexiveContainer::disconnectAllSlotsEvent(UInt32 eventId)
{
}

inline
bool   ReflexiveContainer::isEmptyEvent(UInt32 eventId) const
{
    return true;
}

inline
UInt32 ReflexiveContainer::numSlotsEvent(UInt32 eventId) const
{
    return 0;
}

inline
EventDescription const * ReflexiveContainer::getEventDescription(      UInt32 eventId  ) const
{
    return getProducerType().getEventDescription(eventId);
}
    
inline
EventDescription const * ReflexiveContainer::getEventDescription(const Char8 *eventName) const
{
    return getProducerType().findEventDescription(eventName);
}

inline
bool ReflexiveContainer::isEventProducer(void) const
{
    return getNumEvents() != 0;
}

inline
bool ReflexiveContainer::isEventConnectable(void) const
{
    return getConnectableEvents().size() == 0;
}