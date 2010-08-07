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
 **     class ColorDisplayFilter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGImage.h"                   // TableImage Class
#include "OSGSimpleSHLChunk.h"          // FilterShader Class

#include "OSGColorDisplayFilterBase.h"
#include "OSGColorDisplayFilter.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ColorDisplayFilter
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          ColorDisplayFilterBase::_sfGamma
    Gamma value of the rendered image
*/

/*! \var Matrix          ColorDisplayFilterBase::_sfMatrix
    Color transformation matrix
*/

/*! \var UInt32          ColorDisplayFilterBase::_sfColorTableWidth
    
*/

/*! \var UInt32          ColorDisplayFilterBase::_sfColorTableHeight
    
*/

/*! \var UInt32          ColorDisplayFilterBase::_sfColorTableDepth
    
*/

/*! \var Color3f         ColorDisplayFilterBase::_mfColorTable
    Shading table
*/

/*! \var Image *         ColorDisplayFilterBase::_sfTableImage
    
*/

/*! \var SimpleSHLChunk * ColorDisplayFilterBase::_sfFilterShader
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ColorDisplayFilter *>::_type("ColorDisplayFilterPtr", "DisplayFilterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ColorDisplayFilter *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ColorDisplayFilter *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ColorDisplayFilter *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ColorDisplayFilterBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "gamma",
        "Gamma value of the rendered image\n",
        GammaFieldId, GammaFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorDisplayFilter::editHandleGamma),
        static_cast<FieldGetMethodSig >(&ColorDisplayFilter::getHandleGamma));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "matrix",
        "Color transformation matrix\n",
        MatrixFieldId, MatrixFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorDisplayFilter::editHandleMatrix),
        static_cast<FieldGetMethodSig >(&ColorDisplayFilter::getHandleMatrix));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "colorTableWidth",
        "",
        ColorTableWidthFieldId, ColorTableWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorDisplayFilter::editHandleColorTableWidth),
        static_cast<FieldGetMethodSig >(&ColorDisplayFilter::getHandleColorTableWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "colorTableHeight",
        "",
        ColorTableHeightFieldId, ColorTableHeightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorDisplayFilter::editHandleColorTableHeight),
        static_cast<FieldGetMethodSig >(&ColorDisplayFilter::getHandleColorTableHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "colorTableDepth",
        "",
        ColorTableDepthFieldId, ColorTableDepthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorDisplayFilter::editHandleColorTableDepth),
        static_cast<FieldGetMethodSig >(&ColorDisplayFilter::getHandleColorTableDepth));

    oType.addInitialDesc(pDesc);

    pDesc = new MFColor3f::Description(
        MFColor3f::getClassType(),
        "colorTable",
        "Shading table\n",
        ColorTableFieldId, ColorTableFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ColorDisplayFilter::editHandleColorTable),
        static_cast<FieldGetMethodSig >(&ColorDisplayFilter::getHandleColorTable));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "tableImage",
        "",
        TableImageFieldId, TableImageFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&ColorDisplayFilter::editHandleTableImage),
        static_cast<FieldGetMethodSig >(&ColorDisplayFilter::getHandleTableImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecSimpleSHLChunkPtr::Description(
        SFUnrecSimpleSHLChunkPtr::getClassType(),
        "filterShader",
        "",
        FilterShaderFieldId, FilterShaderFieldMask,
        false,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&ColorDisplayFilter::editHandleFilterShader),
        static_cast<FieldGetMethodSig >(&ColorDisplayFilter::getHandleFilterShader));

    oType.addInitialDesc(pDesc);
}


ColorDisplayFilterBase::TypeObject ColorDisplayFilterBase::_type(
    ColorDisplayFilterBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ColorDisplayFilterBase::createEmptyLocal),
    ColorDisplayFilter::initMethod,
    ColorDisplayFilter::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ColorDisplayFilter::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ColorDisplayFilter\"\n"
    "   parent=\"DisplayFilter\"\n"
    "   library=\"EffectGroups\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   >   \n"
    "  <Field\n"
    "\t name=\"gamma\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"1.0\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tGamma value of the rendered image\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"matrix\"\n"
    "\t type=\"Matrix\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tColor transformation matrix\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"colorTableWidth\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"1\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"colorTableHeight\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"1\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"colorTableDepth\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"2\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"colorTable\"\n"
    "\t type=\"Color3f\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t>\n"
    "\tShading table\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"tableImage\"\n"
    "     type=\"Image\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     category=\"pointer\"\n"
    "     access=\"protected\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "    </Field>\n"
    "    <Field\n"
    "\t   name=\"filterShader\"\n"
    "\t   type=\"SimpleSHLChunk\"\n"
    "\t   cardinality=\"single\"\n"
    "\t   visibility=\"external\"\n"
    "\t   defaultValue=\"NULL\"\n"
    "\t   access=\"protected\"\n"
    "       category=\"pointer\"\n"
    "       fieldFlags=\"FClusterLocal\"\n"
    "\t   >\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ColorDisplayFilterBase::getType(void)
{
    return _type;
}

const FieldContainerType &ColorDisplayFilterBase::getType(void) const
{
    return _type;
}

UInt32 ColorDisplayFilterBase::getContainerSize(void) const
{
    return sizeof(ColorDisplayFilter);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *ColorDisplayFilterBase::editSFGamma(void)
{
    editSField(GammaFieldMask);

    return &_sfGamma;
}

const SFReal32 *ColorDisplayFilterBase::getSFGamma(void) const
{
    return &_sfGamma;
}


SFMatrix *ColorDisplayFilterBase::editSFMatrix(void)
{
    editSField(MatrixFieldMask);

    return &_sfMatrix;
}

const SFMatrix *ColorDisplayFilterBase::getSFMatrix(void) const
{
    return &_sfMatrix;
}


SFUInt32 *ColorDisplayFilterBase::editSFColorTableWidth(void)
{
    editSField(ColorTableWidthFieldMask);

    return &_sfColorTableWidth;
}

const SFUInt32 *ColorDisplayFilterBase::getSFColorTableWidth(void) const
{
    return &_sfColorTableWidth;
}


SFUInt32 *ColorDisplayFilterBase::editSFColorTableHeight(void)
{
    editSField(ColorTableHeightFieldMask);

    return &_sfColorTableHeight;
}

const SFUInt32 *ColorDisplayFilterBase::getSFColorTableHeight(void) const
{
    return &_sfColorTableHeight;
}


SFUInt32 *ColorDisplayFilterBase::editSFColorTableDepth(void)
{
    editSField(ColorTableDepthFieldMask);

    return &_sfColorTableDepth;
}

const SFUInt32 *ColorDisplayFilterBase::getSFColorTableDepth(void) const
{
    return &_sfColorTableDepth;
}


MFColor3f *ColorDisplayFilterBase::editMFColorTable(void)
{
    editMField(ColorTableFieldMask, _mfColorTable);

    return &_mfColorTable;
}

const MFColor3f *ColorDisplayFilterBase::getMFColorTable(void) const
{
    return &_mfColorTable;
}


//! Get the ColorDisplayFilter::_sfTableImage field.
const SFUnrecImagePtr *ColorDisplayFilterBase::getSFTableImage(void) const
{
    return &_sfTableImage;
}

SFUnrecImagePtr     *ColorDisplayFilterBase::editSFTableImage     (void)
{
    editSField(TableImageFieldMask);

    return &_sfTableImage;
}

//! Get the ColorDisplayFilter::_sfFilterShader field.
const SFUnrecSimpleSHLChunkPtr *ColorDisplayFilterBase::getSFFilterShader(void) const
{
    return &_sfFilterShader;
}

SFUnrecSimpleSHLChunkPtr *ColorDisplayFilterBase::editSFFilterShader   (void)
{
    editSField(FilterShaderFieldMask);

    return &_sfFilterShader;
}





/*------------------------------ access -----------------------------------*/

UInt32 ColorDisplayFilterBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GammaFieldMask & whichField))
    {
        returnValue += _sfGamma.getBinSize();
    }
    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        returnValue += _sfMatrix.getBinSize();
    }
    if(FieldBits::NoField != (ColorTableWidthFieldMask & whichField))
    {
        returnValue += _sfColorTableWidth.getBinSize();
    }
    if(FieldBits::NoField != (ColorTableHeightFieldMask & whichField))
    {
        returnValue += _sfColorTableHeight.getBinSize();
    }
    if(FieldBits::NoField != (ColorTableDepthFieldMask & whichField))
    {
        returnValue += _sfColorTableDepth.getBinSize();
    }
    if(FieldBits::NoField != (ColorTableFieldMask & whichField))
    {
        returnValue += _mfColorTable.getBinSize();
    }
    if(FieldBits::NoField != (TableImageFieldMask & whichField))
    {
        returnValue += _sfTableImage.getBinSize();
    }
    if(FieldBits::NoField != (FilterShaderFieldMask & whichField))
    {
        returnValue += _sfFilterShader.getBinSize();
    }

    return returnValue;
}

void ColorDisplayFilterBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GammaFieldMask & whichField))
    {
        _sfGamma.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorTableWidthFieldMask & whichField))
    {
        _sfColorTableWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorTableHeightFieldMask & whichField))
    {
        _sfColorTableHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorTableDepthFieldMask & whichField))
    {
        _sfColorTableDepth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorTableFieldMask & whichField))
    {
        _mfColorTable.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TableImageFieldMask & whichField))
    {
        _sfTableImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FilterShaderFieldMask & whichField))
    {
        _sfFilterShader.copyToBin(pMem);
    }
}

void ColorDisplayFilterBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GammaFieldMask & whichField))
    {
        editSField(GammaFieldMask);
        _sfGamma.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        editSField(MatrixFieldMask);
        _sfMatrix.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorTableWidthFieldMask & whichField))
    {
        editSField(ColorTableWidthFieldMask);
        _sfColorTableWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorTableHeightFieldMask & whichField))
    {
        editSField(ColorTableHeightFieldMask);
        _sfColorTableHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorTableDepthFieldMask & whichField))
    {
        editSField(ColorTableDepthFieldMask);
        _sfColorTableDepth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorTableFieldMask & whichField))
    {
        editMField(ColorTableFieldMask, _mfColorTable);
        _mfColorTable.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TableImageFieldMask & whichField))
    {
        editSField(TableImageFieldMask);
        _sfTableImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FilterShaderFieldMask & whichField))
    {
        editSField(FilterShaderFieldMask);
        _sfFilterShader.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ColorDisplayFilterTransitPtr ColorDisplayFilterBase::createLocal(BitVector bFlags)
{
    ColorDisplayFilterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ColorDisplayFilter>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ColorDisplayFilterTransitPtr ColorDisplayFilterBase::createDependent(BitVector bFlags)
{
    ColorDisplayFilterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ColorDisplayFilter>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ColorDisplayFilterTransitPtr ColorDisplayFilterBase::create(void)
{
    ColorDisplayFilterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ColorDisplayFilter>(tmpPtr);
    }

    return fc;
}

ColorDisplayFilter *ColorDisplayFilterBase::createEmptyLocal(BitVector bFlags)
{
    ColorDisplayFilter *returnValue;

    newPtr<ColorDisplayFilter>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ColorDisplayFilter *ColorDisplayFilterBase::createEmpty(void)
{
    ColorDisplayFilter *returnValue;

    newPtr<ColorDisplayFilter>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ColorDisplayFilterBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ColorDisplayFilter *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ColorDisplayFilter *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ColorDisplayFilterBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ColorDisplayFilter *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ColorDisplayFilter *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ColorDisplayFilterBase::shallowCopy(void) const
{
    ColorDisplayFilter *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ColorDisplayFilter *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ColorDisplayFilterBase::ColorDisplayFilterBase(void) :
    Inherited(),
    _sfGamma                  (Real32(1.0)),
    _sfMatrix                 (),
    _sfColorTableWidth        (UInt32(1)),
    _sfColorTableHeight       (UInt32(1)),
    _sfColorTableDepth        (UInt32(2)),
    _mfColorTable             (),
    _sfTableImage             (NULL),
    _sfFilterShader           (NULL)
{
}

ColorDisplayFilterBase::ColorDisplayFilterBase(const ColorDisplayFilterBase &source) :
    Inherited(source),
    _sfGamma                  (source._sfGamma                  ),
    _sfMatrix                 (source._sfMatrix                 ),
    _sfColorTableWidth        (source._sfColorTableWidth        ),
    _sfColorTableHeight       (source._sfColorTableHeight       ),
    _sfColorTableDepth        (source._sfColorTableDepth        ),
    _mfColorTable             (source._mfColorTable             ),
    _sfTableImage             (NULL),
    _sfFilterShader           (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

ColorDisplayFilterBase::~ColorDisplayFilterBase(void)
{
}

void ColorDisplayFilterBase::onCreate(const ColorDisplayFilter *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ColorDisplayFilter *pThis = static_cast<ColorDisplayFilter *>(this);

        pThis->setTableImage(source->getTableImage());

        pThis->setFilterShader(source->getFilterShader());
    }
}

GetFieldHandlePtr ColorDisplayFilterBase::getHandleGamma           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfGamma,
             this->getType().getFieldDesc(GammaFieldId),
             const_cast<ColorDisplayFilterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorDisplayFilterBase::editHandleGamma          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfGamma,
             this->getType().getFieldDesc(GammaFieldId),
             this));


    editSField(GammaFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorDisplayFilterBase::getHandleMatrix          (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             const_cast<ColorDisplayFilterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorDisplayFilterBase::editHandleMatrix         (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             this));


    editSField(MatrixFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorDisplayFilterBase::getHandleColorTableWidth (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfColorTableWidth,
             this->getType().getFieldDesc(ColorTableWidthFieldId),
             const_cast<ColorDisplayFilterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorDisplayFilterBase::editHandleColorTableWidth(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfColorTableWidth,
             this->getType().getFieldDesc(ColorTableWidthFieldId),
             this));


    editSField(ColorTableWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorDisplayFilterBase::getHandleColorTableHeight (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfColorTableHeight,
             this->getType().getFieldDesc(ColorTableHeightFieldId),
             const_cast<ColorDisplayFilterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorDisplayFilterBase::editHandleColorTableHeight(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfColorTableHeight,
             this->getType().getFieldDesc(ColorTableHeightFieldId),
             this));


    editSField(ColorTableHeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorDisplayFilterBase::getHandleColorTableDepth (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfColorTableDepth,
             this->getType().getFieldDesc(ColorTableDepthFieldId),
             const_cast<ColorDisplayFilterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorDisplayFilterBase::editHandleColorTableDepth(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfColorTableDepth,
             this->getType().getFieldDesc(ColorTableDepthFieldId),
             this));


    editSField(ColorTableDepthFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorDisplayFilterBase::getHandleColorTable      (void) const
{
    MFColor3f::GetHandlePtr returnValue(
        new  MFColor3f::GetHandle(
             &_mfColorTable,
             this->getType().getFieldDesc(ColorTableFieldId),
             const_cast<ColorDisplayFilterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorDisplayFilterBase::editHandleColorTable     (void)
{
    MFColor3f::EditHandlePtr returnValue(
        new  MFColor3f::EditHandle(
             &_mfColorTable,
             this->getType().getFieldDesc(ColorTableFieldId),
             this));


    editMField(ColorTableFieldMask, _mfColorTable);

    return returnValue;
}

GetFieldHandlePtr ColorDisplayFilterBase::getHandleTableImage      (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfTableImage,
             this->getType().getFieldDesc(TableImageFieldId),
             const_cast<ColorDisplayFilterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorDisplayFilterBase::editHandleTableImage     (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfTableImage,
             this->getType().getFieldDesc(TableImageFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ColorDisplayFilter::setTableImage,
                    static_cast<ColorDisplayFilter *>(this), _1));

    editSField(TableImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr ColorDisplayFilterBase::getHandleFilterShader    (void) const
{
    SFUnrecSimpleSHLChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecSimpleSHLChunkPtr::GetHandle(
             &_sfFilterShader,
             this->getType().getFieldDesc(FilterShaderFieldId),
             const_cast<ColorDisplayFilterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ColorDisplayFilterBase::editHandleFilterShader   (void)
{
    SFUnrecSimpleSHLChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecSimpleSHLChunkPtr::EditHandle(
             &_sfFilterShader,
             this->getType().getFieldDesc(FilterShaderFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ColorDisplayFilter::setFilterShader,
                    static_cast<ColorDisplayFilter *>(this), _1));

    editSField(FilterShaderFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ColorDisplayFilterBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ColorDisplayFilter *pThis = static_cast<ColorDisplayFilter *>(this);

    pThis->execSync(static_cast<ColorDisplayFilter *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ColorDisplayFilterBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ColorDisplayFilter *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ColorDisplayFilter *>(pRefAspect),
                  dynamic_cast<const ColorDisplayFilter *>(this));

    return returnValue;
}
#endif

void ColorDisplayFilterBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ColorDisplayFilter *>(this)->setTableImage(NULL);

    static_cast<ColorDisplayFilter *>(this)->setFilterShader(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfColorTable.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
