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
 **     class ShaderExecutableVarChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGShaderProgramVariableChunk.h" // ProgramVarChunks Class
#include "OSGShaderProgramVariables.h"  // Variables Class

#include "OSGShaderExecutableVarChunkBase.h"
#include "OSGShaderExecutableVarChunk.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderExecutableVarChunk
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ShaderProgramVariableChunk * ShaderExecutableVarChunkBase::_mfProgramVarChunks
    
*/

/*! \var ShaderProgramVariables * ShaderExecutableVarChunkBase::_sfVariables
    fragment program object
*/

/*! \var Int32           ShaderExecutableVarChunkBase::_mfVariableLocations
    fragment program object
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderExecutableVarChunk *>::_type("ShaderExecutableVarChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderExecutableVarChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderExecutableVarChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderExecutableVarChunk *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderExecutableVarChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUncountedShaderProgramVariableChunkPtr::Description(
        MFUncountedShaderProgramVariableChunkPtr::getClassType(),
        "programVarChunks",
        "",
        ProgramVarChunksFieldId, ProgramVarChunksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&ShaderExecutableVarChunk::invalidEditField),
        static_cast     <FieldGetMethodSig >(&ShaderExecutableVarChunk::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecChildShaderProgramVariablesPtr::Description(
        SFUnrecChildShaderProgramVariablesPtr::getClassType(),
        "variables",
        "fragment program object\n",
        VariablesFieldId, VariablesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderExecutableVarChunk::editHandleVariables),
        static_cast<FieldGetMethodSig >(&ShaderExecutableVarChunk::getHandleVariables));

    oType.addInitialDesc(pDesc);

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "variableLocations",
        "fragment program object\n",
        VariableLocationsFieldId, VariableLocationsFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderExecutableVarChunk::editHandleVariableLocations),
        static_cast<FieldGetMethodSig >(&ShaderExecutableVarChunk::getHandleVariableLocations));

    oType.addInitialDesc(pDesc);
}


ShaderExecutableVarChunkBase::TypeObject ShaderExecutableVarChunkBase::_type(
    ShaderExecutableVarChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ShaderExecutableVarChunkBase::createEmptyLocal),
    ShaderExecutableVarChunk::initMethod,
    ShaderExecutableVarChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderExecutableVarChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderExecutableVarChunk\"\n"
    "   parent=\"StateChunk\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"programVarChunks\"\n"
    "\t type=\"ShaderProgramVariableChunk\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"none\"\n"
    "     category=\"uncountedpointer\"\n"
    "     >\n"
    "  </Field>\n"
    "<!--  <Field\n"
    "\t name=\"ShaderExecytableChunk\"\n"
    "\t type=\"ShaderExecutableChunk\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"NULL\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "\t >\n"
    "  </Field> -->\n"
    "  <Field\n"
    "\t name=\"variables\"\n"
    "\t type=\"ShaderProgramVariables\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"childpointer\"\n"
    "     childParentType=\"FieldContainer\"\n"
    "     linkParentField=\"Parents\"\n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"variableLocations\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"internal\"\n"
    "\t access=\"protected\"\n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderExecutableVarChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderExecutableVarChunkBase::getType(void) const
{
    return _type;
}

UInt32 ShaderExecutableVarChunkBase::getContainerSize(void) const
{
    return sizeof(ShaderExecutableVarChunk);
}

/*------------------------- decorator get ------------------------------*/



//! Get the ShaderExecutableVarChunk::_sfVariables field.
const SFUnrecChildShaderProgramVariablesPtr *ShaderExecutableVarChunkBase::getSFVariables(void) const
{
    return &_sfVariables;
}

SFUnrecChildShaderProgramVariablesPtr *ShaderExecutableVarChunkBase::editSFVariables      (void)
{
    editSField(VariablesFieldMask);

    return &_sfVariables;
}

MFInt32 *ShaderExecutableVarChunkBase::editMFVariableLocations(void)
{
    editMField(VariableLocationsFieldMask, _mfVariableLocations);

    return &_mfVariableLocations;
}

const MFInt32 *ShaderExecutableVarChunkBase::getMFVariableLocations(void) const
{
    return &_mfVariableLocations;
}






/*------------------------------ access -----------------------------------*/

UInt32 ShaderExecutableVarChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ProgramVarChunksFieldMask & whichField))
    {
        returnValue += _mfProgramVarChunks.getBinSize();
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        returnValue += _sfVariables.getBinSize();
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        returnValue += _mfVariableLocations.getBinSize();
    }

    return returnValue;
}

void ShaderExecutableVarChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ProgramVarChunksFieldMask & whichField))
    {
        _mfProgramVarChunks.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        _sfVariables.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        _mfVariableLocations.copyToBin(pMem);
    }
}

void ShaderExecutableVarChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ProgramVarChunksFieldMask & whichField))
    {
        editMField(ProgramVarChunksFieldMask, _mfProgramVarChunks);
        _mfProgramVarChunks.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VariablesFieldMask & whichField))
    {
        editSField(VariablesFieldMask);
        _sfVariables.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VariableLocationsFieldMask & whichField))
    {
        editMField(VariableLocationsFieldMask, _mfVariableLocations);
        _mfVariableLocations.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderExecutableVarChunkTransitPtr ShaderExecutableVarChunkBase::createLocal(BitVector bFlags)
{
    ShaderExecutableVarChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderExecutableVarChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderExecutableVarChunkTransitPtr ShaderExecutableVarChunkBase::createDependent(BitVector bFlags)
{
    ShaderExecutableVarChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderExecutableVarChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderExecutableVarChunkTransitPtr ShaderExecutableVarChunkBase::create(void)
{
    ShaderExecutableVarChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderExecutableVarChunk>(tmpPtr);
    }

    return fc;
}

ShaderExecutableVarChunk *ShaderExecutableVarChunkBase::createEmptyLocal(BitVector bFlags)
{
    ShaderExecutableVarChunk *returnValue;

    newPtr<ShaderExecutableVarChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderExecutableVarChunk *ShaderExecutableVarChunkBase::createEmpty(void)
{
    ShaderExecutableVarChunk *returnValue;

    newPtr<ShaderExecutableVarChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderExecutableVarChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderExecutableVarChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderExecutableVarChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderExecutableVarChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderExecutableVarChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderExecutableVarChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderExecutableVarChunkBase::shallowCopy(void) const
{
    ShaderExecutableVarChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderExecutableVarChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderExecutableVarChunkBase::ShaderExecutableVarChunkBase(void) :
    Inherited(),
    _mfProgramVarChunks       (),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfVariableLocations      ()
{
}

ShaderExecutableVarChunkBase::ShaderExecutableVarChunkBase(const ShaderExecutableVarChunkBase &source) :
    Inherited(source),
    _mfProgramVarChunks       (),
    _sfVariables              (this,
                          VariablesFieldId,
                          ShaderProgramVariables::ParentsFieldId),
    _mfVariableLocations      (source._mfVariableLocations      )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderExecutableVarChunkBase::~ShaderExecutableVarChunkBase(void)
{
}

/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool ShaderExecutableVarChunkBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == VariablesFieldId)
    {
        ShaderProgramVariables * pTypedChild =
            dynamic_cast<ShaderProgramVariables *>(pChild);

        if(pTypedChild != NULL)
        {
            if(pTypedChild == _sfVariables.getValue())
            {
                editSField(VariablesFieldMask);

                _sfVariables.setValue(NULL);

                return true;
            }

            FWARNING(("ShaderExecutableVarChunkBase::unlinkParent: Child <-> "
                      "Parent link inconsistent.\n"));

            return false;
        }

        return false;
    }


    return Inherited::unlinkChild(pChild, childFieldId);
}

void ShaderExecutableVarChunkBase::onCreate(const ShaderExecutableVarChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ShaderExecutableVarChunk *pThis = static_cast<ShaderExecutableVarChunk *>(this);

        pThis->setVariables(source->getVariables());
    }
}

GetFieldHandlePtr ShaderExecutableVarChunkBase::getHandleProgramVarChunks (void) const
{
    MFUncountedShaderProgramVariableChunkPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableVarChunkBase::editHandleProgramVarChunks(void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableVarChunkBase::getHandleVariables       (void) const
{
    SFUnrecChildShaderProgramVariablesPtr::GetHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::GetHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId),
             const_cast<ShaderExecutableVarChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableVarChunkBase::editHandleVariables      (void)
{
    SFUnrecChildShaderProgramVariablesPtr::EditHandlePtr returnValue(
        new  SFUnrecChildShaderProgramVariablesPtr::EditHandle(
             &_sfVariables,
             this->getType().getFieldDesc(VariablesFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ShaderExecutableVarChunk::setVariables,
                    static_cast<ShaderExecutableVarChunk *>(this), _1));

    editSField(VariablesFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderExecutableVarChunkBase::getHandleVariableLocations (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfVariableLocations,
             this->getType().getFieldDesc(VariableLocationsFieldId),
             const_cast<ShaderExecutableVarChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderExecutableVarChunkBase::editHandleVariableLocations(void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfVariableLocations,
             this->getType().getFieldDesc(VariableLocationsFieldId),
             this));


    editMField(VariableLocationsFieldMask, _mfVariableLocations);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderExecutableVarChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderExecutableVarChunk *pThis = static_cast<ShaderExecutableVarChunk *>(this);

    pThis->execSync(static_cast<ShaderExecutableVarChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderExecutableVarChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderExecutableVarChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderExecutableVarChunk *>(pRefAspect),
                  dynamic_cast<const ShaderExecutableVarChunk *>(this));

    return returnValue;
}
#endif

void ShaderExecutableVarChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ShaderExecutableVarChunk *>(this)->setVariables(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfVariableLocations.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
