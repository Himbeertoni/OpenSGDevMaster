/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class EventContainer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGEventContainerBase.h"
#include "OSGEventContainer.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::EventContainer
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<EventContainer *, nsOSG>::_type(
    "EventContainerPtr", 
    "AttachmentContainerPtr", 
    EventContainer::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(EventContainer *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           EventContainer *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           EventContainer *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void EventContainerBase::classDescInserter(TypeObject &oType)
{
}


EventContainerBase::TypeObject EventContainerBase::_type(
    EventContainerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    NULL,
    EventContainer::initMethod,
    EventContainer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&EventContainer::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"EventContainer\"\n"
    "    parent=\"AttachmentContainer\"\n"
    "    library=\"ContribToolbox\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &EventContainerBase::getType(void)
{
    return _type;
}

const FieldContainerType &EventContainerBase::getType(void) const
{
    return _type;
}

UInt32 EventContainerBase::getContainerSize(void) const
{
    return sizeof(EventContainer);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT EventContainerBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void EventContainerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void EventContainerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}




/*------------------------- constructors ----------------------------------*/

EventContainerBase::EventContainerBase(void) :
    Inherited()
{
}

EventContainerBase::EventContainerBase(const EventContainerBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

EventContainerBase::~EventContainerBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void EventContainerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    EventContainer *pThis = static_cast<EventContainer *>(this);

    pThis->execSync(static_cast<EventContainer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void EventContainerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE