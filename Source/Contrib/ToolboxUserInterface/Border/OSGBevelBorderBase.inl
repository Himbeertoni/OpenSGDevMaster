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
 **     class BevelBorder!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &BevelBorderBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 BevelBorderBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 BevelBorderBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the BevelBorder::_sfHighlightInner field.

inline
Color4f &BevelBorderBase::editHighlightInner(void)
{
    editSField(HighlightInnerFieldMask);

    return _sfHighlightInner.getValue();
}

//! Get the value of the BevelBorder::_sfHighlightInner field.
inline
const Color4f &BevelBorderBase::getHighlightInner(void) const
{
    return _sfHighlightInner.getValue();
}

//! Set the value of the BevelBorder::_sfHighlightInner field.
inline
void BevelBorderBase::setHighlightInner(const Color4f &value)
{
    editSField(HighlightInnerFieldMask);

    _sfHighlightInner.setValue(value);
}
//! Get the value of the BevelBorder::_sfWidth field.

inline
Real32 &BevelBorderBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the BevelBorder::_sfWidth field.
inline
      Real32  BevelBorderBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the BevelBorder::_sfWidth field.
inline
void BevelBorderBase::setWidth(const Real32 value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the BevelBorder::_sfHighlightOuter field.

inline
Color4f &BevelBorderBase::editHighlightOuter(void)
{
    editSField(HighlightOuterFieldMask);

    return _sfHighlightOuter.getValue();
}

//! Get the value of the BevelBorder::_sfHighlightOuter field.
inline
const Color4f &BevelBorderBase::getHighlightOuter(void) const
{
    return _sfHighlightOuter.getValue();
}

//! Set the value of the BevelBorder::_sfHighlightOuter field.
inline
void BevelBorderBase::setHighlightOuter(const Color4f &value)
{
    editSField(HighlightOuterFieldMask);

    _sfHighlightOuter.setValue(value);
}
//! Get the value of the BevelBorder::_sfShadowInner field.

inline
Color4f &BevelBorderBase::editShadowInner(void)
{
    editSField(ShadowInnerFieldMask);

    return _sfShadowInner.getValue();
}

//! Get the value of the BevelBorder::_sfShadowInner field.
inline
const Color4f &BevelBorderBase::getShadowInner(void) const
{
    return _sfShadowInner.getValue();
}

//! Set the value of the BevelBorder::_sfShadowInner field.
inline
void BevelBorderBase::setShadowInner(const Color4f &value)
{
    editSField(ShadowInnerFieldMask);

    _sfShadowInner.setValue(value);
}
//! Get the value of the BevelBorder::_sfShadowOuter field.

inline
Color4f &BevelBorderBase::editShadowOuter(void)
{
    editSField(ShadowOuterFieldMask);

    return _sfShadowOuter.getValue();
}

//! Get the value of the BevelBorder::_sfShadowOuter field.
inline
const Color4f &BevelBorderBase::getShadowOuter(void) const
{
    return _sfShadowOuter.getValue();
}

//! Set the value of the BevelBorder::_sfShadowOuter field.
inline
void BevelBorderBase::setShadowOuter(const Color4f &value)
{
    editSField(ShadowOuterFieldMask);

    _sfShadowOuter.setValue(value);
}
//! Get the value of the BevelBorder::_sfRaised field.

inline
bool &BevelBorderBase::editRaised(void)
{
    editSField(RaisedFieldMask);

    return _sfRaised.getValue();
}

//! Get the value of the BevelBorder::_sfRaised field.
inline
      bool  BevelBorderBase::getRaised(void) const
{
    return _sfRaised.getValue();
}

//! Set the value of the BevelBorder::_sfRaised field.
inline
void BevelBorderBase::setRaised(const bool value)
{
    editSField(RaisedFieldMask);

    _sfRaised.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void BevelBorderBase::execSync (      BevelBorderBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (HighlightInnerFieldMask & whichField))
        _sfHighlightInner.syncWith(pFrom->_sfHighlightInner);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (HighlightOuterFieldMask & whichField))
        _sfHighlightOuter.syncWith(pFrom->_sfHighlightOuter);

    if(FieldBits::NoField != (ShadowInnerFieldMask & whichField))
        _sfShadowInner.syncWith(pFrom->_sfShadowInner);

    if(FieldBits::NoField != (ShadowOuterFieldMask & whichField))
        _sfShadowOuter.syncWith(pFrom->_sfShadowOuter);

    if(FieldBits::NoField != (RaisedFieldMask & whichField))
        _sfRaised.syncWith(pFrom->_sfRaised);
}
#endif


inline
const Char8 *BevelBorderBase::getClassname(void)
{
    return "BevelBorder";
}
OSG_GEN_CONTAINERPTR(BevelBorder);

OSG_END_NAMESPACE
