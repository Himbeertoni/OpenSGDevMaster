/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class DisplayFilter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGDisplayFilterBase.h"
#include "OSGDisplayFilter.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DisplayFilter
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            DisplayFilterBase::_sfEnabled
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DisplayFilter *>::_type("DisplayFilterPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DisplayFilter *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DisplayFilter *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DisplayFilter *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DisplayFilterBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "enabled",
        "",
        EnabledFieldId, EnabledFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DisplayFilter::editHandleEnabled),
        static_cast<FieldGetMethodSig >(&DisplayFilter::getHandleEnabled));

    oType.addInitialDesc(pDesc);
}


DisplayFilterBase::TypeObject DisplayFilterBase::_type(
    DisplayFilterBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    DisplayFilter::initMethod,
    DisplayFilter::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DisplayFilter::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"DisplayFilter\"\n"
    "   parent=\"AttachmentContainer\"\n"
    "   library=\"EffectGroups\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"abstract\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   >   \n"
    "  <Field\n"
    "\t name=\"enabled\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     defaultValue=\"true\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DisplayFilterBase::getType(void)
{
    return _type;
}

const FieldContainerType &DisplayFilterBase::getType(void) const
{
    return _type;
}

UInt32 DisplayFilterBase::getContainerSize(void) const
{
    return sizeof(DisplayFilter);
}

/*------------------------- decorator get ------------------------------*/


SFBool *DisplayFilterBase::editSFEnabled(void)
{
    editSField(EnabledFieldMask);

    return &_sfEnabled;
}

const SFBool *DisplayFilterBase::getSFEnabled(void) const
{
    return &_sfEnabled;
}






/*------------------------------ access -----------------------------------*/

UInt32 DisplayFilterBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        returnValue += _sfEnabled.getBinSize();
    }

    return returnValue;
}

void DisplayFilterBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyToBin(pMem);
    }
}

void DisplayFilterBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        editSField(EnabledFieldMask);
        _sfEnabled.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

DisplayFilterBase::DisplayFilterBase(void) :
    Inherited(),
    _sfEnabled                (bool(true))
{
}

DisplayFilterBase::DisplayFilterBase(const DisplayFilterBase &source) :
    Inherited(source),
    _sfEnabled                (source._sfEnabled                )
{
}


/*-------------------------- destructors ----------------------------------*/

DisplayFilterBase::~DisplayFilterBase(void)
{
}


GetFieldHandlePtr DisplayFilterBase::getHandleEnabled         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfEnabled,
             this->getType().getFieldDesc(EnabledFieldId),
             const_cast<DisplayFilterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DisplayFilterBase::editHandleEnabled        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfEnabled,
             this->getType().getFieldDesc(EnabledFieldId),
             this));


    editSField(EnabledFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DisplayFilterBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DisplayFilter *pThis = static_cast<DisplayFilter *>(this);

    pThis->execSync(static_cast<DisplayFilter *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void DisplayFilterBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
