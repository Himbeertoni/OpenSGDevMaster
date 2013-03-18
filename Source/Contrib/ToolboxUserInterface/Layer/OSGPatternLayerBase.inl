/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class PatternLayer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PatternLayerBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PatternLayerBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PatternLayerBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the PatternLayer::_sfTexture field.
inline
TextureObjChunk * PatternLayerBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

//! Set the value of the PatternLayer::_sfTexture field.
inline
void PatternLayerBase::setTexture(TextureObjChunk * const value)
{
    editSField(TextureFieldMask);

    _sfTexture.setValue(value);
}

//! Get the value of the PatternLayer::_sfTransformation field.
inline
TextureTransformChunk * PatternLayerBase::getTransformation(void) const
{
    return _sfTransformation.getValue();
}

//! Set the value of the PatternLayer::_sfTransformation field.
inline
void PatternLayerBase::setTransformation(TextureTransformChunk * const value)
{
    editSField(TransformationFieldMask);

    _sfTransformation.setValue(value);
}
//! Get the value of the PatternLayer::_sfColor field.

inline
Color4f &PatternLayerBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the PatternLayer::_sfColor field.
inline
const Color4f &PatternLayerBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the PatternLayer::_sfColor field.
inline
void PatternLayerBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}
//! Get the value of the PatternLayer::_sfPatternSize field.

inline
Vec2f &PatternLayerBase::editPatternSize(void)
{
    editSField(PatternSizeFieldMask);

    return _sfPatternSize.getValue();
}

//! Get the value of the PatternLayer::_sfPatternSize field.
inline
const Vec2f &PatternLayerBase::getPatternSize(void) const
{
    return _sfPatternSize.getValue();
}

//! Set the value of the PatternLayer::_sfPatternSize field.
inline
void PatternLayerBase::setPatternSize(const Vec2f &value)
{
    editSField(PatternSizeFieldMask);

    _sfPatternSize.setValue(value);
}
//! Get the value of the PatternLayer::_sfVerticalAlignment field.

inline
Real32 &PatternLayerBase::editVerticalAlignment(void)
{
    editSField(VerticalAlignmentFieldMask);

    return _sfVerticalAlignment.getValue();
}

//! Get the value of the PatternLayer::_sfVerticalAlignment field.
inline
      Real32  PatternLayerBase::getVerticalAlignment(void) const
{
    return _sfVerticalAlignment.getValue();
}

//! Set the value of the PatternLayer::_sfVerticalAlignment field.
inline
void PatternLayerBase::setVerticalAlignment(const Real32 value)
{
    editSField(VerticalAlignmentFieldMask);

    _sfVerticalAlignment.setValue(value);
}
//! Get the value of the PatternLayer::_sfHorizontalAlignment field.

inline
Real32 &PatternLayerBase::editHorizontalAlignment(void)
{
    editSField(HorizontalAlignmentFieldMask);

    return _sfHorizontalAlignment.getValue();
}

//! Get the value of the PatternLayer::_sfHorizontalAlignment field.
inline
      Real32  PatternLayerBase::getHorizontalAlignment(void) const
{
    return _sfHorizontalAlignment.getValue();
}

//! Set the value of the PatternLayer::_sfHorizontalAlignment field.
inline
void PatternLayerBase::setHorizontalAlignment(const Real32 value)
{
    editSField(HorizontalAlignmentFieldMask);

    _sfHorizontalAlignment.setValue(value);
}
//! Get the value of the PatternLayer::_sfHorizontalRepeat field.

inline
UInt32 &PatternLayerBase::editHorizontalRepeat(void)
{
    editSField(HorizontalRepeatFieldMask);

    return _sfHorizontalRepeat.getValue();
}

//! Get the value of the PatternLayer::_sfHorizontalRepeat field.
inline
      UInt32  PatternLayerBase::getHorizontalRepeat(void) const
{
    return _sfHorizontalRepeat.getValue();
}

//! Set the value of the PatternLayer::_sfHorizontalRepeat field.
inline
void PatternLayerBase::setHorizontalRepeat(const UInt32 value)
{
    editSField(HorizontalRepeatFieldMask);

    _sfHorizontalRepeat.setValue(value);
}
//! Get the value of the PatternLayer::_sfVerticalRepeat field.

inline
UInt32 &PatternLayerBase::editVerticalRepeat(void)
{
    editSField(VerticalRepeatFieldMask);

    return _sfVerticalRepeat.getValue();
}

//! Get the value of the PatternLayer::_sfVerticalRepeat field.
inline
      UInt32  PatternLayerBase::getVerticalRepeat(void) const
{
    return _sfVerticalRepeat.getValue();
}

//! Set the value of the PatternLayer::_sfVerticalRepeat field.
inline
void PatternLayerBase::setVerticalRepeat(const UInt32 value)
{
    editSField(VerticalRepeatFieldMask);

    _sfVerticalRepeat.setValue(value);
}
//! Get the value of the PatternLayer::_sfHorizontalRepeatValue field.

inline
Real32 &PatternLayerBase::editHorizontalRepeatValue(void)
{
    editSField(HorizontalRepeatValueFieldMask);

    return _sfHorizontalRepeatValue.getValue();
}

//! Get the value of the PatternLayer::_sfHorizontalRepeatValue field.
inline
      Real32  PatternLayerBase::getHorizontalRepeatValue(void) const
{
    return _sfHorizontalRepeatValue.getValue();
}

//! Set the value of the PatternLayer::_sfHorizontalRepeatValue field.
inline
void PatternLayerBase::setHorizontalRepeatValue(const Real32 value)
{
    editSField(HorizontalRepeatValueFieldMask);

    _sfHorizontalRepeatValue.setValue(value);
}
//! Get the value of the PatternLayer::_sfVerticalRepeatValue field.

inline
Real32 &PatternLayerBase::editVerticalRepeatValue(void)
{
    editSField(VerticalRepeatValueFieldMask);

    return _sfVerticalRepeatValue.getValue();
}

//! Get the value of the PatternLayer::_sfVerticalRepeatValue field.
inline
      Real32  PatternLayerBase::getVerticalRepeatValue(void) const
{
    return _sfVerticalRepeatValue.getValue();
}

//! Set the value of the PatternLayer::_sfVerticalRepeatValue field.
inline
void PatternLayerBase::setVerticalRepeatValue(const Real32 value)
{
    editSField(VerticalRepeatValueFieldMask);

    _sfVerticalRepeatValue.setValue(value);
}
//! Get the value of the PatternLayer::_sfTopLeftTextureCoord field.

inline
Vec2f &PatternLayerBase::editTopLeftTextureCoord(void)
{
    editSField(TopLeftTextureCoordFieldMask);

    return _sfTopLeftTextureCoord.getValue();
}

//! Get the value of the PatternLayer::_sfTopLeftTextureCoord field.
inline
const Vec2f &PatternLayerBase::getTopLeftTextureCoord(void) const
{
    return _sfTopLeftTextureCoord.getValue();
}

//! Set the value of the PatternLayer::_sfTopLeftTextureCoord field.
inline
void PatternLayerBase::setTopLeftTextureCoord(const Vec2f &value)
{
    editSField(TopLeftTextureCoordFieldMask);

    _sfTopLeftTextureCoord.setValue(value);
}
//! Get the value of the PatternLayer::_sfBottomRightTextureCoord field.

inline
Vec2f &PatternLayerBase::editBottomRightTextureCoord(void)
{
    editSField(BottomRightTextureCoordFieldMask);

    return _sfBottomRightTextureCoord.getValue();
}

//! Get the value of the PatternLayer::_sfBottomRightTextureCoord field.
inline
const Vec2f &PatternLayerBase::getBottomRightTextureCoord(void) const
{
    return _sfBottomRightTextureCoord.getValue();
}

//! Set the value of the PatternLayer::_sfBottomRightTextureCoord field.
inline
void PatternLayerBase::setBottomRightTextureCoord(const Vec2f &value)
{
    editSField(BottomRightTextureCoordFieldMask);

    _sfBottomRightTextureCoord.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void PatternLayerBase::execSync (      PatternLayerBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pFrom->_sfTexture);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
        _sfTransformation.syncWith(pFrom->_sfTransformation);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (PatternSizeFieldMask & whichField))
        _sfPatternSize.syncWith(pFrom->_sfPatternSize);

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
        _sfVerticalAlignment.syncWith(pFrom->_sfVerticalAlignment);

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
        _sfHorizontalAlignment.syncWith(pFrom->_sfHorizontalAlignment);

    if(FieldBits::NoField != (HorizontalRepeatFieldMask & whichField))
        _sfHorizontalRepeat.syncWith(pFrom->_sfHorizontalRepeat);

    if(FieldBits::NoField != (VerticalRepeatFieldMask & whichField))
        _sfVerticalRepeat.syncWith(pFrom->_sfVerticalRepeat);

    if(FieldBits::NoField != (HorizontalRepeatValueFieldMask & whichField))
        _sfHorizontalRepeatValue.syncWith(pFrom->_sfHorizontalRepeatValue);

    if(FieldBits::NoField != (VerticalRepeatValueFieldMask & whichField))
        _sfVerticalRepeatValue.syncWith(pFrom->_sfVerticalRepeatValue);

    if(FieldBits::NoField != (TopLeftTextureCoordFieldMask & whichField))
        _sfTopLeftTextureCoord.syncWith(pFrom->_sfTopLeftTextureCoord);

    if(FieldBits::NoField != (BottomRightTextureCoordFieldMask & whichField))
        _sfBottomRightTextureCoord.syncWith(pFrom->_sfBottomRightTextureCoord);
}
#endif


inline
const Char8 *PatternLayerBase::getClassname(void)
{
    return "PatternLayer";
}
OSG_GEN_CONTAINERPTR(PatternLayer);

OSG_END_NAMESPACE

