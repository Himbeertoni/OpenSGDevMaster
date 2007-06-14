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
 **     class SimpleStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESIMPLESTAGEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGCamera.h> // Camera Class
#include <OSGBackground.h> // Background Class
#include <OSGForeground.h> // Foregrounds Class

#include "OSGSimpleStageBase.h"
#include "OSGSimpleStage.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SimpleStage
    Extension to the Stage core that provides for viewport support, a camera, backgrounds, and foreground.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          SimpleStageBase::_sfLeft
    The left edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    left border. All other values are illegal.
*/

/*! \var Real32          SimpleStageBase::_sfRight
    The right edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    right border. All other values are illegal.
*/

/*! \var Real32          SimpleStageBase::_sfBottom
    The bottom edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    bottom border. All other values are illegal.
*/

/*! \var Real32          SimpleStageBase::_sfTop
    The top edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    top border. All other values are illegal.
*/

/*! \var CameraPtr       SimpleStageBase::_sfCamera
    The Camera used to render the viewport.
*/

/*! \var BackgroundPtr   SimpleStageBase::_sfBackground
    The background used to clear this viewport.
*/

/*! \var ForegroundPtr   SimpleStageBase::_mfForegrounds
    The foreground additions to the rendered image.
*/


void SimpleStageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(SimpleStageBase::*GetSFLeftF)(void) const;

    GetSFLeftF GetSFLeft = &SimpleStageBase::getSFLeft;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "left",
        "The left edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "left border. All other values are illegal.\n",
        LeftFieldId, LeftFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleStageBase::editSFLeft),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLeft));
#else
        reinterpret_cast<FieldGetMethodSig >(&SimpleStageBase::getSFLeft));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(SimpleStageBase::*GetSFRightF)(void) const;

    GetSFRightF GetSFRight = &SimpleStageBase::getSFRight;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "right",
        "The right edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "right border. All other values are illegal.\n",
        RightFieldId, RightFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleStageBase::editSFRight),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFRight));
#else
        reinterpret_cast<FieldGetMethodSig >(&SimpleStageBase::getSFRight));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(SimpleStageBase::*GetSFBottomF)(void) const;

    GetSFBottomF GetSFBottom = &SimpleStageBase::getSFBottom;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "bottom",
        "The bottom edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "bottom border. All other values are illegal.\n",
        BottomFieldId, BottomFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleStageBase::editSFBottom),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBottom));
#else
        reinterpret_cast<FieldGetMethodSig >(&SimpleStageBase::getSFBottom));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(SimpleStageBase::*GetSFTopF)(void) const;

    GetSFTopF GetSFTop = &SimpleStageBase::getSFTop;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "top",
        "The top edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "top border. All other values are illegal.\n",
        TopFieldId, TopFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleStageBase::editSFTop),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTop));
#else
        reinterpret_cast<FieldGetMethodSig >(&SimpleStageBase::getSFTop));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFCameraPtr::Description(
        SFCameraPtr::getClassType(),
        "camera",
        "The Camera used to render the viewport.\n",
        CameraFieldId, CameraFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&SimpleStageBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&SimpleStageBase::getSFCamera));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBackgroundPtr::Description(
        SFBackgroundPtr::getClassType(),
        "background",
        "The background used to clear this viewport.\n",
        BackgroundFieldId, BackgroundFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&SimpleStageBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&SimpleStageBase::getSFBackground));

    oType.addInitialDesc(pDesc);

    pDesc = new MFForegroundPtr::Description(
        MFForegroundPtr::getClassType(),
        "foregrounds",
        "The foreground additions to the rendered image.\n",
        ForegroundsFieldId, ForegroundsFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&SimpleStageBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&SimpleStageBase::getMFForegrounds));

    oType.addInitialDesc(pDesc);
}


SimpleStageBase::TypeObject SimpleStageBase::_type(
    SimpleStageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &SimpleStageBase::createEmpty,
    SimpleStage::initMethod,
    (InitalInsertDescFunc) &SimpleStageBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "        name=\"SimpleStage\"\n"
    "        parent=\"Stage\"\n"
    "        library=\"Group\"\n"
    "        pointerfieldtypes=\"none\"\n"
    "        structure=\"concrete\"\n"
    "        systemcomponent=\"true\"\n"
    "        parentsystemcomponent=\"true\"\n"
    "        decoratable=\"false\"\n"
    "        useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "Extension to the Stage core that provides for viewport support, a camera, backgrounds, and foreground.\n"
    "\n"
    "        <Field\n"
    "                name=\"left\"\n"
    "                type=\"Real32\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        defaultValue=\"0.f\"\n"
    "        >\n"
    "        The left edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "        the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "        left border. All other values are illegal.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"right\"\n"
    "                type=\"Real32\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        defaultValue=\"1.f\"\n"
    "        >\n"
    "        The right edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "        the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "        right border. All other values are illegal.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"bottom\"\n"
    "                type=\"Real32\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        defaultValue=\"0.f\"\n"
    "        >\n"
    "        The bottom edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "        the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "        bottom border. All other values are illegal.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"top\"\n"
    "                type=\"Real32\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        defaultValue=\"1.f\"\n"
    "        >\n"
    "        The top edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "        the Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "        top border. All other values are illegal.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"camera\"\n"
    "                type=\"CameraPtr\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        The Camera used to render the viewport.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"background\"\n"
    "                type=\"BackgroundPtr\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        The background used to clear this viewport.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"foregrounds\"\n"
    "                type=\"ForegroundPtr\"\n"
    "                cardinality=\"multi\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        The foreground additions to the rendered image.\n"
    "        </Field>\n"
    "</FieldContainer>\n",
    "Extension to the Stage core that provides for viewport support, a camera, backgrounds, and foreground.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleStageBase::getType(void)
{
    return _type;
}

const FieldContainerType &SimpleStageBase::getType(void) const
{
    return _type;
}

UInt32 SimpleStageBase::getContainerSize(void) const
{
    return sizeof(SimpleStage);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *SimpleStageBase::editSFLeft(void)
{
    editSField(LeftFieldMask);

    return &_sfLeft;
}

const SFReal32 *SimpleStageBase::getSFLeft(void) const
{
    return &_sfLeft;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *SimpleStageBase::getSFLeft           (void)
{
    return this->editSFLeft           ();
}
#endif

SFReal32 *SimpleStageBase::editSFRight(void)
{
    editSField(RightFieldMask);

    return &_sfRight;
}

const SFReal32 *SimpleStageBase::getSFRight(void) const
{
    return &_sfRight;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *SimpleStageBase::getSFRight          (void)
{
    return this->editSFRight          ();
}
#endif

SFReal32 *SimpleStageBase::editSFBottom(void)
{
    editSField(BottomFieldMask);

    return &_sfBottom;
}

const SFReal32 *SimpleStageBase::getSFBottom(void) const
{
    return &_sfBottom;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *SimpleStageBase::getSFBottom         (void)
{
    return this->editSFBottom         ();
}
#endif

SFReal32 *SimpleStageBase::editSFTop(void)
{
    editSField(TopFieldMask);

    return &_sfTop;
}

const SFReal32 *SimpleStageBase::getSFTop(void) const
{
    return &_sfTop;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *SimpleStageBase::getSFTop            (void)
{
    return this->editSFTop            ();
}
#endif

//! Get the SimpleStage::_sfCamera field.
const SFCameraPtr *SimpleStageBase::getSFCamera(void) const
{
    return &_sfCamera;
}

//! Get the SimpleStage::_sfBackground field.
const SFBackgroundPtr *SimpleStageBase::getSFBackground(void) const
{
    return &_sfBackground;
}

//! Get the SimpleStage::_mfForegrounds field.
const MFForegroundPtr *SimpleStageBase::getMFForegrounds(void) const
{
    return &_mfForegrounds;
}


void SimpleStageBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == CameraFieldId)
    {
        static_cast<SimpleStage *>(this)->setCamera(
            dynamic_cast<CameraPtr>(pNewElement));
    }
    if(uiFieldId == BackgroundFieldId)
    {
        static_cast<SimpleStage *>(this)->setBackground(
            dynamic_cast<BackgroundPtr>(pNewElement));
    }
    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<SimpleStage *>(this)->pushToForegrounds(
            dynamic_cast<ForegroundPtr>(pNewElement));
    }
}

void SimpleStageBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<SimpleStage *>(this)->insertIntoForegrounds(
            uiIndex,
            dynamic_cast<ForegroundPtr>(pNewElement));
    }
}

void SimpleStageBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<SimpleStage *>(this)->replaceInForegrounds(
            uiIndex,
            dynamic_cast<ForegroundPtr>(pNewElement));
    }
}

void SimpleStageBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<SimpleStage *>(this)->replaceInForegrounds(
            dynamic_cast<ForegroundPtr>(pOldElement),
            dynamic_cast<ForegroundPtr>(pNewElement));
    }
}

void SimpleStageBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<SimpleStage *>(this)->removeFromForegrounds(
            uiIndex);
    }
}

void SimpleStageBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<SimpleStage *>(this)->removeFromForegrounds(
            dynamic_cast<ForegroundPtr>(pElement));
    }
}

void SimpleStageBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == CameraFieldId)
    {
        static_cast<SimpleStage *>(this)->setCamera(NullFC);
    }
    if(uiFieldId == BackgroundFieldId)
    {
        static_cast<SimpleStage *>(this)->setBackground(NullFC);
    }
    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<SimpleStage *>(this)->clearForegrounds();
    }
}

void SimpleStageBase::pushToForegrounds(ForegroundPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(ForegroundsFieldMask, _mfForegrounds);

    addRef(value);

    _mfForegrounds.push_back(value);
}

void SimpleStageBase::insertIntoForegrounds(UInt32                uiIndex,
                                                   ForegroundPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(ForegroundsFieldMask, _mfForegrounds);

    MFForegroundPtr::iterator fieldIt = _mfForegrounds.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfForegrounds.insert(fieldIt, value);
}

void SimpleStageBase::replaceInForegrounds(UInt32                uiIndex,
                                                       ForegroundPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfForegrounds.size())
        return;

    editMField(ForegroundsFieldMask, _mfForegrounds);

    addRef(value);

    subRef(_mfForegrounds[uiIndex]);

    _mfForegrounds[uiIndex] = value;
}

void SimpleStageBase::replaceInForegrounds(ForegroundPtrConstArg pOldElem,
                                                        ForegroundPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfForegrounds.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ForegroundsFieldMask, _mfForegrounds);

        MFForegroundPtr::iterator fieldIt = _mfForegrounds.begin();

        fieldIt += elemIdx;

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void SimpleStageBase::removeFromForegrounds(UInt32 uiIndex)
{
    if(uiIndex < _mfForegrounds.size())
    {
        editMField(ForegroundsFieldMask, _mfForegrounds);

        MFForegroundPtr::iterator fieldIt = _mfForegrounds.begin();

        fieldIt += uiIndex;

        subRef(*fieldIt);

        _mfForegrounds.erase(fieldIt);
    }
}

void SimpleStageBase::removeFromForegrounds(ForegroundPtrConstArg value)
{
    Int32 iElemIdx = _mfForegrounds.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ForegroundsFieldMask, _mfForegrounds);

        MFForegroundPtr::iterator fieldIt = _mfForegrounds.begin();

        fieldIt += iElemIdx;

        subRef(*fieldIt);

        _mfForegrounds.erase(fieldIt);
    }
}
void SimpleStageBase::clearForegrounds(void)
{
    editMField(ForegroundsFieldMask, _mfForegrounds);

    MFForegroundPtr::iterator       fieldIt  = _mfForegrounds.begin();
    MFForegroundPtr::const_iterator fieldEnd = _mfForegrounds.end  ();

    while(fieldIt != fieldEnd)
    {
        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfForegrounds.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 SimpleStageBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        returnValue += _sfLeft.getBinSize();
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        returnValue += _sfRight.getBinSize();
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        returnValue += _sfBottom.getBinSize();
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        returnValue += _sfTop.getBinSize();
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        returnValue += _sfCamera.getBinSize();
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        returnValue += _sfBackground.getBinSize();
    }
    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
    {
        returnValue += _mfForegrounds.getBinSize();
    }

    return returnValue;
}

void SimpleStageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
    {
        _mfForegrounds.copyToBin(pMem);
    }
}

void SimpleStageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
    {
        _mfForegrounds.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SimpleStagePtr SimpleStageBase::create(void)
{
    SimpleStagePtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<SimpleStage::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
SimpleStagePtr SimpleStageBase::createEmpty(void)
{
    SimpleStagePtr returnValue;

    newPtr<SimpleStage>(returnValue);

    return returnValue;
}

FieldContainerPtr SimpleStageBase::shallowCopy(void) const
{
    SimpleStagePtr returnValue;

    newPtr(returnValue, dynamic_cast<const SimpleStage *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

SimpleStageBase::SimpleStageBase(void) :
    Inherited(),
    _sfLeft                   (Real32(0.f)),
    _sfRight                  (Real32(1.f)),
    _sfBottom                 (Real32(0.f)),
    _sfTop                    (Real32(1.f)),
    _sfCamera                 (),
    _sfBackground             (),
    _mfForegrounds            ()
{
}

SimpleStageBase::SimpleStageBase(const SimpleStageBase &source) :
    Inherited(source),
    _sfLeft                   (source._sfLeft                   ),
    _sfRight                  (source._sfRight                  ),
    _sfBottom                 (source._sfBottom                 ),
    _sfTop                    (source._sfTop                    ),
    _sfCamera                 (),
    _sfBackground             (),
    _mfForegrounds            ()
{
}

/*-------------------------- destructors ----------------------------------*/

SimpleStageBase::~SimpleStageBase(void)
{
}

void SimpleStageBase::onCreate(const SimpleStage *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setCamera(source->getCamera());

        this->setBackground(source->getBackground());

        MFForegroundPtr::const_iterator ForegroundsIt  =
            source->_mfForegrounds.begin();
        MFForegroundPtr::const_iterator ForegroundsEnd =
            source->_mfForegrounds.end  ();

        while(ForegroundsIt != ForegroundsEnd)
        {
            this->pushToForegrounds(*ForegroundsIt);

            ++ForegroundsIt;
        }
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void SimpleStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<SimpleStageBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void SimpleStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SimpleStageBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void SimpleStageBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr SimpleStageBase::createAspectCopy(void) const
{
    SimpleStagePtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SimpleStage *>(this));

    return returnValue;
}
#endif

void SimpleStageBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SimpleStage *>(this)->setCamera(NullFC);

    static_cast<SimpleStage *>(this)->setBackground(NullFC);


    static_cast<SimpleStage *>(this)->clearForegrounds();
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SimpleStagePtr>::_type("SimpleStagePtr", "StagePtr");
#endif


OSG_END_NAMESPACE
