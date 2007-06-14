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
 **     class ShaderParameterVec4f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERVEC4FINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterVec4fBase.h"
#include "OSGShaderParameterVec4f.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterVec4f
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec4f           ShaderParameterVec4fBase::_sfValue
    parameter value
*/


void ShaderParameterVec4fBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFVec4f *(ShaderParameterVec4fBase::*GetSFValueF)(void) const;

    GetSFValueF GetSFValue = &ShaderParameterVec4fBase::getSFValue;
#endif

    pDesc = new SFVec4f::Description(
        SFVec4f::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShaderParameterVec4fBase::editSFValue),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFValue));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShaderParameterVec4fBase::getSFValue));
#endif

    oType.addInitialDesc(pDesc);
}


ShaderParameterVec4fBase::TypeObject ShaderParameterVec4fBase::_type(
    ShaderParameterVec4fBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ShaderParameterVec4fBase::createEmpty,
    ShaderParameterVec4f::initMethod,
    (InitalInsertDescFunc) &ShaderParameterVec4fBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterVec4f\"\n"
    "\tparent=\"ShaderParameter\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Vec4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterVec4fBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterVec4fBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterVec4fBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterVec4f);
}

/*------------------------- decorator get ------------------------------*/


SFVec4f *ShaderParameterVec4fBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFVec4f *ShaderParameterVec4fBase::getSFValue(void) const
{
    return &_sfValue;
}

#ifdef OSG_1_GET_COMPAT
SFVec4f             *ShaderParameterVec4fBase::getSFValue          (void)
{
    return this->editSFValue          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterVec4fBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterVec4fBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void ShaderParameterVec4fBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderParameterVec4fPtr ShaderParameterVec4fBase::create(void)
{
    ShaderParameterVec4fPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<ShaderParameterVec4f::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterVec4fPtr ShaderParameterVec4fBase::createEmpty(void)
{
    ShaderParameterVec4fPtr returnValue;

    newPtr<ShaderParameterVec4f>(returnValue);

    return returnValue;
}

FieldContainerPtr ShaderParameterVec4fBase::shallowCopy(void) const
{
    ShaderParameterVec4fPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ShaderParameterVec4f *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ShaderParameterVec4fBase::ShaderParameterVec4fBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

ShaderParameterVec4fBase::ShaderParameterVec4fBase(const ShaderParameterVec4fBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}

/*-------------------------- destructors ----------------------------------*/

ShaderParameterVec4fBase::~ShaderParameterVec4fBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void ShaderParameterVec4fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ShaderParameterVec4fBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterVec4fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterVec4fBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ShaderParameterVec4fBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ShaderParameterVec4fBase::createAspectCopy(void) const
{
    ShaderParameterVec4fPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterVec4f *>(this));

    return returnValue;
}
#endif

void ShaderParameterVec4fBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterVec4fPtr>::_type("ShaderParameterVec4fPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterVec4fPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ShaderParameterVec4fPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ShaderParameterVec4fPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
