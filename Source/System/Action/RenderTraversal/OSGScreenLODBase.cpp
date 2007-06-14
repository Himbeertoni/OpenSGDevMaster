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
 **     class ScreenLOD!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESCREENLODINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGScreenLODBase.h"
#include "OSGScreenLOD.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ScreenLOD
    A ScreenLOD node enables smart LOD selection based on screen size.  It must be used in combination with 
    the RenderTraversal Action.

    See Ref:ScreenLOD
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          ScreenLODBase::_mfCoverageOverride
    A list of percentages to override the default LOD behavior.  These percentages are used
    to determine which lod to use based on screen size percentage.  If the percentage covered by
    the node bounding volume is less then entry 0, we use child 0.  If is is greater then entry 0
    less then entry 1, then we use child 1 and so on.
    Ex: [0.05, 0.01, 0.001]
*/


void ScreenLODBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const MFReal32 *(ScreenLODBase::*GetMFCoverageOverrideF)(void) const;

    GetMFCoverageOverrideF GetMFCoverageOverride = &ScreenLODBase::getMFCoverageOverride;
#endif

    pDesc = new MFReal32::Description(
        MFReal32::getClassType(),
        "coverageOverride",
        "A list of percentages to override the default LOD behavior.  These percentages are used\n"
        "to determine which lod to use based on screen size percentage.  If the percentage covered by\n"
        "the node bounding volume is less then entry 0, we use child 0.  If is is greater then entry 0\n"
        "less then entry 1, then we use child 1 and so on.\n"
        "Ex: [0.05, 0.01, 0.001]\n",
        CoverageOverrideFieldId, CoverageOverrideFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ScreenLODBase::editMFCoverageOverride),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFCoverageOverride));
#else
        reinterpret_cast<FieldGetMethodSig >(&ScreenLODBase::getMFCoverageOverride));
#endif

    oType.addInitialDesc(pDesc);
}


ScreenLODBase::TypeObject ScreenLODBase::_type(
    ScreenLODBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ScreenLODBase::createEmpty,
    ScreenLOD::initMethod,
    (InitalInsertDescFunc) &ScreenLODBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ScreenLOD\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"RenderTrav\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "        isNodeCore=\"true\"\n"
    ">\n"
    "A ScreenLOD node enables smart LOD selection based on screen size.  It must be used in combination with \n"
    "the RenderTraversal Action.\n"
    "\n"
    "See Ref:ScreenLOD\n"
    "\t<Field\n"
    "\t\tname=\"coverageOverride\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tA list of percentages to override the default LOD behavior.  These percentages are used\n"
    "       to determine which lod to use based on screen size percentage.  If the percentage covered by\n"
    "       the node bounding volume is less then entry 0, we use child 0.  If is is greater then entry 0\n"
    "       less then entry 1, then we use child 1 and so on.\n"
    "       Ex: [0.05, 0.01, 0.001]\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A ScreenLOD node enables smart LOD selection based on screen size.  It must be used in combination with \n"
    "the RenderTraversal Action.\n"
    "\n"
    "See Ref:ScreenLOD\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ScreenLODBase::getType(void)
{
    return _type;
}

const FieldContainerType &ScreenLODBase::getType(void) const
{
    return _type;
}

UInt32 ScreenLODBase::getContainerSize(void) const
{
    return sizeof(ScreenLOD);
}

/*------------------------- decorator get ------------------------------*/


MFReal32 *ScreenLODBase::editMFCoverageOverride(void)
{
    editMField(CoverageOverrideFieldMask, _mfCoverageOverride);

    return &_mfCoverageOverride;
}

const MFReal32 *ScreenLODBase::getMFCoverageOverride(void) const
{
    return &_mfCoverageOverride;
}

#ifdef OSG_1_GET_COMPAT
MFReal32            *ScreenLODBase::getMFCoverageOverride(void)
{
    return this->editMFCoverageOverride();
}
#endif



/*********************************** Non-ptr code ********************************/
void ScreenLODBase::pushToCoverageOverride(const Real32& value)
{
    editMField(CoverageOverrideFieldMask, _mfCoverageOverride);
    _mfCoverageOverride.push_back(value);
}

void ScreenLODBase::insertIntoCoverageOverride(UInt32                uiIndex,
                                                   const Real32& value   )
{
    editMField(CoverageOverrideFieldMask, _mfCoverageOverride);

    MFReal32::iterator fieldIt = _mfCoverageOverride.begin();

    fieldIt += uiIndex;

    _mfCoverageOverride.insert(fieldIt, value);
}

void ScreenLODBase::replaceInCoverageOverride(UInt32                uiIndex,
                                                       const Real32& value   )
{
    if(uiIndex >= _mfCoverageOverride.size())
        return;

    editMField(CoverageOverrideFieldMask, _mfCoverageOverride);

    _mfCoverageOverride[uiIndex] = value;
}

void ScreenLODBase::replaceInCoverageOverride(const Real32& pOldElem,
                                                        const Real32& pNewElem)
{
    Int32  elemIdx = _mfCoverageOverride.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(CoverageOverrideFieldMask, _mfCoverageOverride);

        MFReal32::iterator fieldIt = _mfCoverageOverride.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ScreenLODBase::removeFromCoverageOverride(UInt32 uiIndex)
{
    if(uiIndex < _mfCoverageOverride.size())
    {
        editMField(CoverageOverrideFieldMask, _mfCoverageOverride);

        MFReal32::iterator fieldIt = _mfCoverageOverride.begin();

        fieldIt += uiIndex;
        _mfCoverageOverride.erase(fieldIt);
    }
}

void ScreenLODBase::removeFromCoverageOverride(const Real32& value)
{
    Int32 iElemIdx = _mfCoverageOverride.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(CoverageOverrideFieldMask, _mfCoverageOverride);

        MFReal32::iterator fieldIt = _mfCoverageOverride.begin();

        fieldIt += iElemIdx;

        _mfCoverageOverride.erase(fieldIt);
    }
}

void ScreenLODBase::clearCoverageOverride(void)
{
    editMField(CoverageOverrideFieldMask, _mfCoverageOverride);

    _mfCoverageOverride.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 ScreenLODBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CoverageOverrideFieldMask & whichField))
    {
        returnValue += _mfCoverageOverride.getBinSize();
    }

    return returnValue;
}

void ScreenLODBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CoverageOverrideFieldMask & whichField))
    {
        _mfCoverageOverride.copyToBin(pMem);
    }
}

void ScreenLODBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CoverageOverrideFieldMask & whichField))
    {
        _mfCoverageOverride.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ScreenLODPtr ScreenLODBase::create(void)
{
    ScreenLODPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<ScreenLOD::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ScreenLODPtr ScreenLODBase::createEmpty(void)
{
    ScreenLODPtr returnValue;

    newPtr<ScreenLOD>(returnValue);

    return returnValue;
}

FieldContainerPtr ScreenLODBase::shallowCopy(void) const
{
    ScreenLODPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ScreenLOD *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ScreenLODBase::ScreenLODBase(void) :
    Inherited(),
    _mfCoverageOverride       ()
{
}

ScreenLODBase::ScreenLODBase(const ScreenLODBase &source) :
    Inherited(source),
    _mfCoverageOverride       (source._mfCoverageOverride       )
{
}

/*-------------------------- destructors ----------------------------------*/

ScreenLODBase::~ScreenLODBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void ScreenLODBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ScreenLODBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ScreenLODBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ScreenLODBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ScreenLODBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ScreenLODBase::createAspectCopy(void) const
{
    ScreenLODPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ScreenLOD *>(this));

    return returnValue;
}
#endif

void ScreenLODBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfCoverageOverride.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ScreenLODPtr>::_type("ScreenLODPtr", "GroupPtr");
#endif


OSG_END_NAMESPACE
