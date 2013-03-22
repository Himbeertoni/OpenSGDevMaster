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
 **     class TextUIDrawObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextUIDrawObjectBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TextUIDrawObjectBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TextUIDrawObjectBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TextUIDrawObject::_sfPosition field.

inline
Pnt2f &TextUIDrawObjectBase::editPosition(void)
{
    editSField(PositionFieldMask);

    return _sfPosition.getValue();
}

//! Get the value of the TextUIDrawObject::_sfPosition field.
inline
const Pnt2f &TextUIDrawObjectBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

//! Set the value of the TextUIDrawObject::_sfPosition field.
inline
void TextUIDrawObjectBase::setPosition(const Pnt2f &value)
{
    editSField(PositionFieldMask);

    _sfPosition.setValue(value);
}
//! Get the value of the TextUIDrawObject::_sfText field.

inline
std::string &TextUIDrawObjectBase::editText(void)
{
    editSField(TextFieldMask);

    return _sfText.getValue();
}

//! Get the value of the TextUIDrawObject::_sfText field.
inline
const std::string &TextUIDrawObjectBase::getText(void) const
{
    return _sfText.getValue();
}

//! Set the value of the TextUIDrawObject::_sfText field.
inline
void TextUIDrawObjectBase::setText(const std::string &value)
{
    editSField(TextFieldMask);

    _sfText.setValue(value);
}

//! Get the value of the TextUIDrawObject::_sfFont field.
inline
UIFont * TextUIDrawObjectBase::getFont(void) const
{
    return _sfFont.getValue();
}

//! Set the value of the TextUIDrawObject::_sfFont field.
inline
void TextUIDrawObjectBase::setFont(UIFont * const value)
{
    editSField(FontFieldMask);

    _sfFont.setValue(value);
}
//! Get the value of the TextUIDrawObject::_sfColor field.

inline
Color4f &TextUIDrawObjectBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the TextUIDrawObject::_sfColor field.
inline
const Color4f &TextUIDrawObjectBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the TextUIDrawObject::_sfColor field.
inline
void TextUIDrawObjectBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}
//! Get the value of the TextUIDrawObject::_sfOpacity field.

inline
Real32 &TextUIDrawObjectBase::editOpacity(void)
{
    editSField(OpacityFieldMask);

    return _sfOpacity.getValue();
}

//! Get the value of the TextUIDrawObject::_sfOpacity field.
inline
      Real32  TextUIDrawObjectBase::getOpacity(void) const
{
    return _sfOpacity.getValue();
}

//! Set the value of the TextUIDrawObject::_sfOpacity field.
inline
void TextUIDrawObjectBase::setOpacity(const Real32 value)
{
    editSField(OpacityFieldMask);

    _sfOpacity.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TextUIDrawObjectBase::execSync (      TextUIDrawObjectBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pFrom->_sfPosition);

    if(FieldBits::NoField != (TextFieldMask & whichField))
        _sfText.syncWith(pFrom->_sfText);

    if(FieldBits::NoField != (FontFieldMask & whichField))
        _sfFont.syncWith(pFrom->_sfFont);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
        _sfOpacity.syncWith(pFrom->_sfOpacity);
}
#endif


inline
const Char8 *TextUIDrawObjectBase::getClassname(void)
{
    return "TextUIDrawObject";
}
OSG_GEN_CONTAINERPTR(TextUIDrawObject);

OSG_END_NAMESPACE
