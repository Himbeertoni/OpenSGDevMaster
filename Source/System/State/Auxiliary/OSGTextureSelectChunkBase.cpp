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
 **     class TextureSelectChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTURESELECTCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGTextureBaseChunk.h> // Textures Class

#include "OSGTextureSelectChunkBase.h"
#include "OSGTextureSelectChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureSelectChunk
    \ingroup GrpSystemState

    The TextureSelectChunk allows choosing from a field of textures. It can be 
    used to change between a set of textures more easily than adding/removing 
    chunks the the used material, and can be used in places where only chunks
    are allowed.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var UInt32          TextureSelectChunkBase::_sfChoice
    Texture selector
*/

/*! \var TextureBaseChunkPtr TextureSelectChunkBase::_mfTextures
    Texture chunks to choose from 
*/


void TextureSelectChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(TextureSelectChunkBase::*GetSFChoiceF)(void) const;

    GetSFChoiceF GetSFChoice = &TextureSelectChunkBase::getSFChoice;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "choice",
        "Texture selector\n",
        ChoiceFieldId, ChoiceFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureSelectChunkBase::editSFChoice),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFChoice));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureSelectChunkBase::getSFChoice));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new MFTextureBaseChunkPtr::Description(
        MFTextureBaseChunkPtr::getClassType(),
        "textures",
        "Texture chunks to choose from \n",
        TexturesFieldId, TexturesFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&TextureSelectChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&TextureSelectChunkBase::getMFTextures));

    oType.addInitialDesc(pDesc);
}


TextureSelectChunkBase::TypeObject TextureSelectChunkBase::_type(
    TextureSelectChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TextureSelectChunkBase::createEmpty,
    TextureSelectChunk::initMethod,
    (InitalInsertDescFunc) &TextureSelectChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextureSelectChunk\"\n"
    "\tparent=\"TextureBaseChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "The TextureSelectChunk allows choosing from a field of textures. It can be \n"
    "used to change between a set of textures more easily than adding/removing \n"
    "chunks the the used material, and can be used in places where only chunks\n"
    "are allowed.\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"choice\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t>\n"
    "\tTexture selector\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"textures\"\n"
    "\t\ttype=\"TextureBaseChunkPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tTexture chunks to choose from \n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "The TextureSelectChunk allows choosing from a field of textures. It can be \n"
    "used to change between a set of textures more easily than adding/removing \n"
    "chunks the the used material, and can be used in places where only chunks\n"
    "are allowed.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureSelectChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextureSelectChunkBase::getType(void) const
{
    return _type;
}

UInt32 TextureSelectChunkBase::getContainerSize(void) const
{
    return sizeof(TextureSelectChunk);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *TextureSelectChunkBase::editSFChoice(void)
{
    editSField(ChoiceFieldMask);

    return &_sfChoice;
}

const SFUInt32 *TextureSelectChunkBase::getSFChoice(void) const
{
    return &_sfChoice;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *TextureSelectChunkBase::getSFChoice         (void)
{
    return this->editSFChoice         ();
}
#endif

//! Get the TextureSelectChunk::_mfTextures field.
const MFTextureBaseChunkPtr *TextureSelectChunkBase::getMFTextures(void) const
{
    return &_mfTextures;
}


void TextureSelectChunkBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == TexturesFieldId)
    {
        static_cast<TextureSelectChunk *>(this)->pushToTextures(
            dynamic_cast<TextureBaseChunkPtr>(pNewElement));
    }
}

void TextureSelectChunkBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == TexturesFieldId)
    {
        static_cast<TextureSelectChunk *>(this)->insertIntoTextures(
            uiIndex,
            dynamic_cast<TextureBaseChunkPtr>(pNewElement));
    }
}

void TextureSelectChunkBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == TexturesFieldId)
    {
        static_cast<TextureSelectChunk *>(this)->replaceInTextures(
            uiIndex,
            dynamic_cast<TextureBaseChunkPtr>(pNewElement));
    }
}

void TextureSelectChunkBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

    if(uiFieldId == TexturesFieldId)
    {
        static_cast<TextureSelectChunk *>(this)->replaceInTextures(
            dynamic_cast<TextureBaseChunkPtr>(pOldElement),
            dynamic_cast<TextureBaseChunkPtr>(pNewElement));
    }
}

void TextureSelectChunkBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

    if(uiFieldId == TexturesFieldId)
    {
        static_cast<TextureSelectChunk *>(this)->removeFromTextures(
            uiIndex);
    }
}

void TextureSelectChunkBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

    if(uiFieldId == TexturesFieldId)
    {
        static_cast<TextureSelectChunk *>(this)->removeFromTextures(
            dynamic_cast<TextureBaseChunkPtr>(pElement));
    }
}

void TextureSelectChunkBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == TexturesFieldId)
    {
        static_cast<TextureSelectChunk *>(this)->clearTextures();
    }
}

void TextureSelectChunkBase::pushToTextures(TextureBaseChunkPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(TexturesFieldMask, _mfTextures);

    addRef(value);

    _mfTextures.push_back(value);
}

void TextureSelectChunkBase::insertIntoTextures(UInt32                uiIndex,
                                                   TextureBaseChunkPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(TexturesFieldMask, _mfTextures);

    MFTextureBaseChunkPtr::iterator fieldIt = _mfTextures.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfTextures.insert(fieldIt, value);
}

void TextureSelectChunkBase::replaceInTextures(UInt32                uiIndex,
                                                       TextureBaseChunkPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfTextures.size())
        return;

    editMField(TexturesFieldMask, _mfTextures);

    addRef(value);

    subRef(_mfTextures[uiIndex]);

    _mfTextures[uiIndex] = value;
}

void TextureSelectChunkBase::replaceInTextures(TextureBaseChunkPtrConstArg pOldElem,
                                                        TextureBaseChunkPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfTextures.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(TexturesFieldMask, _mfTextures);

        MFTextureBaseChunkPtr::iterator fieldIt = _mfTextures.begin();

        fieldIt += elemIdx;

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void TextureSelectChunkBase::removeFromTextures(UInt32 uiIndex)
{
    if(uiIndex < _mfTextures.size())
    {
        editMField(TexturesFieldMask, _mfTextures);

        MFTextureBaseChunkPtr::iterator fieldIt = _mfTextures.begin();

        fieldIt += uiIndex;

        subRef(*fieldIt);

        _mfTextures.erase(fieldIt);
    }
}

void TextureSelectChunkBase::removeFromTextures(TextureBaseChunkPtrConstArg value)
{
    Int32 iElemIdx = _mfTextures.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(TexturesFieldMask, _mfTextures);

        MFTextureBaseChunkPtr::iterator fieldIt = _mfTextures.begin();

        fieldIt += iElemIdx;

        subRef(*fieldIt);

        _mfTextures.erase(fieldIt);
    }
}
void TextureSelectChunkBase::clearTextures(void)
{
    editMField(TexturesFieldMask, _mfTextures);

    MFTextureBaseChunkPtr::iterator       fieldIt  = _mfTextures.begin();
    MFTextureBaseChunkPtr::const_iterator fieldEnd = _mfTextures.end  ();

    while(fieldIt != fieldEnd)
    {
        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfTextures.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 TextureSelectChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        returnValue += _sfChoice.getBinSize();
    }
    if(FieldBits::NoField != (TexturesFieldMask & whichField))
    {
        returnValue += _mfTextures.getBinSize();
    }

    return returnValue;
}

void TextureSelectChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        _sfChoice.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexturesFieldMask & whichField))
    {
        _mfTextures.copyToBin(pMem);
    }
}

void TextureSelectChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        _sfChoice.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexturesFieldMask & whichField))
    {
        _mfTextures.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TextureSelectChunkPtr TextureSelectChunkBase::create(void)
{
    TextureSelectChunkPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<TextureSelectChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
TextureSelectChunkPtr TextureSelectChunkBase::createEmpty(void)
{
    TextureSelectChunkPtr returnValue;

    newPtr<TextureSelectChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr TextureSelectChunkBase::shallowCopy(void) const
{
    TextureSelectChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const TextureSelectChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TextureSelectChunkBase::TextureSelectChunkBase(void) :
    Inherited(),
    _sfChoice                 (UInt32(0)),
    _mfTextures               ()
{
}

TextureSelectChunkBase::TextureSelectChunkBase(const TextureSelectChunkBase &source) :
    Inherited(source),
    _sfChoice                 (source._sfChoice                 ),
    _mfTextures               ()
{
}

/*-------------------------- destructors ----------------------------------*/

TextureSelectChunkBase::~TextureSelectChunkBase(void)
{
}

void TextureSelectChunkBase::onCreate(const TextureSelectChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFTextureBaseChunkPtr::const_iterator TexturesIt  =
            source->_mfTextures.begin();
        MFTextureBaseChunkPtr::const_iterator TexturesEnd =
            source->_mfTextures.end  ();

        while(TexturesIt != TexturesEnd)
        {
            this->pushToTextures(*TexturesIt);

            ++TexturesIt;
        }
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void TextureSelectChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<TextureSelectChunkBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void TextureSelectChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TextureSelectChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void TextureSelectChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TextureSelectChunkBase::createAspectCopy(void) const
{
    TextureSelectChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextureSelectChunk *>(this));

    return returnValue;
}
#endif

void TextureSelectChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


    static_cast<TextureSelectChunk *>(this)->clearTextures();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextureSelectChunkPtr>::_type("TextureSelectChunkPtr", "TextureBaseChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextureSelectChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, TextureSelectChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, TextureSelectChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
