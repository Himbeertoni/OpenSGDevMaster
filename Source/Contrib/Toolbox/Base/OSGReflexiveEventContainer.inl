
inline
UInt32 ReflexiveEventContainer::getNumEvents(      void            ) const
{
    return getProducerType().getNumEventDescs();
}

inline
GetEventHandlePtr ReflexiveEventContainer::getEvent    (      UInt32 eventId  ) const
{
    const EventDescription *desc = getEventDescription(eventId);

    return (desc != NULL) ? desc->getEvent(*this) : invalidGetEvent();
}

inline
GetEventHandlePtr ReflexiveEventContainer::getEvent    (const Char8 *eventName) const
{
    const EventDescription *desc = getEventDescription(eventName);

    return (desc != NULL) ? desc->getEvent(*this) : invalidGetEvent();
}

inline
const EventProducerType &ReflexiveEventContainer::getProducerType(void) const
{
    return _producerType;
}

inline
boost::signals2::connection ReflexiveEventContainer::connectEvent(UInt32 eventId, 
                                                      const BaseEventType::slot_type &listener,
                                                      boost::signals2::connect_position at)
{
    return boost::signals2::connection();
}
                                              
inline
boost::signals2::connection ReflexiveEventContainer::connectEvent(UInt32 eventId, 
                                                      const BaseEventType::group_type &group,
                                                      const BaseEventType::slot_type &listener,
                                                      boost::signals2::connect_position at)
{
    return boost::signals2::connection();
}
    
inline
void   ReflexiveEventContainer::disconnectEvent(UInt32 eventId, const BaseEventType::group_type &group)
{
}

inline
void   ReflexiveEventContainer::disconnectAllSlotsEvent(UInt32 eventId)
{
}

inline
bool   ReflexiveEventContainer::isEmptyEvent(UInt32 eventId) const
{
    return true;
}

inline
UInt32 ReflexiveEventContainer::numSlotsEvent(UInt32 eventId) const
{
    return 0;
}

inline
EventDescription const * ReflexiveEventContainer::getEventDescription(      UInt32 eventId  ) const
{
    return getProducerType().getEventDescription(eventId);
}
    
inline
EventDescription const * ReflexiveEventContainer::getEventDescription(const Char8 *eventName) const
{
    return getProducerType().findEventDescription(eventName);
}

inline
bool ReflexiveEventContainer::isEventProducer(void) const
{
    return getNumEvents() != 0;
}

inline
bool ReflexiveEventContainer::isEventConnectable(void) const
{
    return getConnectableEvents().size() == 0;
}