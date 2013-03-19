#ifndef OSG_EVENTCONTAINERFORWARDS_H_
#define OSG_EVENTCONTAINERFORWARDS_H_

#include "OSGContainerForwards.h"


#include "boost/shared_ptr.hpp"
#include <boost/signals2.hpp>

OSG_BEGIN_NAMESPACE

class ReflexiveContainer;

class GetFieldHandle;
class EditFieldHandle;

typedef boost::shared_ptr<GetFieldHandle > GetFieldHandlePtr;
typedef boost::shared_ptr<EditFieldHandle> EditFieldHandlePtr;

typedef EditFieldHandlePtr(ReflexiveContainer::*FieldEditMethod)(void );
typedef GetFieldHandlePtr (ReflexiveContainer::*FieldGetMethod )(void) const;

typedef EditFieldHandlePtr(ReflexiveContainer::*FieldIndexEditMethod)(UInt32);
typedef GetFieldHandlePtr (ReflexiveContainer::*FieldIndexGetMethod )(
    UInt32) const;

class EventDetails;
typedef boost::signals2::signal<void (EventDetails* const , UInt32)> BaseEventType;

class GetEventHandle;

typedef boost::shared_ptr<GetEventHandle > GetEventHandlePtr;

class Activity;

typedef GetEventHandlePtr(ReflexiveContainer::*EventGetMethod)(void) const;

OSG_END_NAMESPACE

#endif