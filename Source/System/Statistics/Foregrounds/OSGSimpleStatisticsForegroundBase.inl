/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class SimpleStatisticsForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SimpleStatisticsForegroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SimpleStatisticsForegroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 SimpleStatisticsForegroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SimpleStatisticsForeground::_sfSize field.

inline
Real32 &SimpleStatisticsForegroundBase::editSize(void)
{
    editSField(SizeFieldMask);

    return _sfSize.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfSize field.
inline
const Real32 &SimpleStatisticsForegroundBase::getSize(void) const
{
    return _sfSize.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &SimpleStatisticsForegroundBase::getSize(void)
{
    return this->editSize();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfSize field.
inline
void SimpleStatisticsForegroundBase::setSize(const Real32 &value)
{
    editSField(SizeFieldMask);

    _sfSize.setValue(value);
}
//! Get the value of the SimpleStatisticsForeground::_sfColor field.

inline
Color4f &SimpleStatisticsForegroundBase::editColor(void)
{
    editSField(ColorFieldMask);

    return _sfColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getColor(void) const
{
    return _sfColor.getValue();
}

#ifdef OSG_1_COMPAT
inline
Color4f &SimpleStatisticsForegroundBase::getColor(void)
{
    return this->editColor();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfColor field.
inline
void SimpleStatisticsForegroundBase::setColor(const Color4f &value)
{
    editSField(ColorFieldMask);

    _sfColor.setValue(value);
}
//! Get the value of the SimpleStatisticsForeground::_sfShadowColor field.

inline
Color4f &SimpleStatisticsForegroundBase::editShadowColor(void)
{
    editSField(ShadowColorFieldMask);

    return _sfShadowColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfShadowColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getShadowColor(void) const
{
    return _sfShadowColor.getValue();
}

#ifdef OSG_1_COMPAT
inline
Color4f &SimpleStatisticsForegroundBase::getShadowColor(void)
{
    return this->editShadowColor();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfShadowColor field.
inline
void SimpleStatisticsForegroundBase::setShadowColor(const Color4f &value)
{
    editSField(ShadowColorFieldMask);

    _sfShadowColor.setValue(value);
}
//! Get the value of the SimpleStatisticsForeground::_sfBgColor field.

inline
Color4f &SimpleStatisticsForegroundBase::editBgColor(void)
{
    editSField(BgColorFieldMask);

    return _sfBgColor.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfBgColor field.
inline
const Color4f &SimpleStatisticsForegroundBase::getBgColor(void) const
{
    return _sfBgColor.getValue();
}

#ifdef OSG_1_COMPAT
inline
Color4f &SimpleStatisticsForegroundBase::getBgColor(void)
{
    return this->editBgColor();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfBgColor field.
inline
void SimpleStatisticsForegroundBase::setBgColor(const Color4f &value)
{
    editSField(BgColorFieldMask);

    _sfBgColor.setValue(value);
}
//! Get the value of the SimpleStatisticsForeground::_sfFamily field.

inline
std::string &SimpleStatisticsForegroundBase::editFamily(void)
{
    editSField(FamilyFieldMask);

    return _sfFamily.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfFamily field.
inline
const std::string &SimpleStatisticsForegroundBase::getFamily(void) const
{
    return _sfFamily.getValue();
}

#ifdef OSG_1_COMPAT
inline
std::string &SimpleStatisticsForegroundBase::getFamily(void)
{
    return this->editFamily();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfFamily field.
inline
void SimpleStatisticsForegroundBase::setFamily(const std::string &value)
{
    editSField(FamilyFieldMask);

    _sfFamily.setValue(value);
}
//! Get the value of the SimpleStatisticsForeground::_sfShadowOffset field.

inline
Vec2f &SimpleStatisticsForegroundBase::editShadowOffset(void)
{
    editSField(ShadowOffsetFieldMask);

    return _sfShadowOffset.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfShadowOffset field.
inline
const Vec2f &SimpleStatisticsForegroundBase::getShadowOffset(void) const
{
    return _sfShadowOffset.getValue();
}

#ifdef OSG_1_COMPAT
inline
Vec2f &SimpleStatisticsForegroundBase::getShadowOffset(void)
{
    return this->editShadowOffset();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfShadowOffset field.
inline
void SimpleStatisticsForegroundBase::setShadowOffset(const Vec2f &value)
{
    editSField(ShadowOffsetFieldMask);

    _sfShadowOffset.setValue(value);
}
//! Get the value of the SimpleStatisticsForeground::_sfHorizontalAlign field.

inline
UInt8 &SimpleStatisticsForegroundBase::editHorizontalAlign(void)
{
    editSField(HorizontalAlignFieldMask);

    return _sfHorizontalAlign.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
const UInt8 &SimpleStatisticsForegroundBase::getHorizontalAlign(void) const
{
    return _sfHorizontalAlign.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt8 &SimpleStatisticsForegroundBase::getHorizontalAlign(void)
{
    return this->editHorizontalAlign();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfHorizontalAlign field.
inline
void SimpleStatisticsForegroundBase::setHorizontalAlign(const UInt8 &value)
{
    editSField(HorizontalAlignFieldMask);

    _sfHorizontalAlign.setValue(value);
}
//! Get the value of the SimpleStatisticsForeground::_sfVerticalAlign field.

inline
UInt8 &SimpleStatisticsForegroundBase::editVerticalAlign(void)
{
    editSField(VerticalAlignFieldMask);

    return _sfVerticalAlign.getValue();
}

//! Get the value of the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
const UInt8 &SimpleStatisticsForegroundBase::getVerticalAlign(void) const
{
    return _sfVerticalAlign.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt8 &SimpleStatisticsForegroundBase::getVerticalAlign(void)
{
    return this->editVerticalAlign();
}
#endif

//! Set the value of the SimpleStatisticsForeground::_sfVerticalAlign field.
inline
void SimpleStatisticsForegroundBase::setVerticalAlign(const UInt8 &value)
{
    editSField(VerticalAlignFieldMask);

    _sfVerticalAlign.setValue(value);
}

//! Get the value of the \a index element the SimpleStatisticsForeground::_mfFormats field.
inline
const std::string &SimpleStatisticsForegroundBase::getFormats(const UInt32 index) const
{
    return _mfFormats[index];
}

inline
std::string &SimpleStatisticsForegroundBase::editFormats(const UInt32 index)
{
    editMField(FormatsFieldMask, _mfFormats);

    return _mfFormats[index];
}

//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
MFString &SimpleStatisticsForegroundBase::editFormats(void)
{
    editMField(FormatsFieldMask, _mfFormats);

    return _mfFormats;
}

#ifdef OSG_1_COMPAT
inline
std::string &SimpleStatisticsForegroundBase::getFormats(const UInt32 index)
{
    return this->editFormats(index);
}

inline
MFString &SimpleStatisticsForegroundBase::getFormats(void)
{
    return this->editFormats();
}

#endif


//! Get the SimpleStatisticsForeground::_mfFormats field.
inline
const MFString &SimpleStatisticsForegroundBase::getFormats(void) const
{
    return _mfFormats;
}

//! create a new instance of the class
inline
SimpleStatisticsForegroundPtr SimpleStatisticsForegroundBase::create(void) 
{
    SimpleStatisticsForegroundPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<SimpleStatisticsForeground::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void SimpleStatisticsForegroundBase::execSync(      SimpleStatisticsForegroundBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (FormatsFieldMask & whichField))
        _mfFormats.syncWith(pOther->_mfFormats, 
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pOther->_sfSize);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pOther->_sfColor);

    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
        _sfShadowColor.syncWith(pOther->_sfShadowColor);

    if(FieldBits::NoField != (BgColorFieldMask & whichField))
        _sfBgColor.syncWith(pOther->_sfBgColor);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
        _sfFamily.syncWith(pOther->_sfFamily);

    if(FieldBits::NoField != (ShadowOffsetFieldMask & whichField))
        _sfShadowOffset.syncWith(pOther->_sfShadowOffset);

    if(FieldBits::NoField != (HorizontalAlignFieldMask & whichField))
        _sfHorizontalAlign.syncWith(pOther->_sfHorizontalAlign);

    if(FieldBits::NoField != (VerticalAlignFieldMask & whichField))
        _sfVerticalAlign.syncWith(pOther->_sfVerticalAlign);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void SimpleStatisticsForegroundBase::execSync (      SimpleStatisticsForegroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (FormatsFieldMask & whichField))
        _mfFormats.syncWith(pFrom->_mfFormats, 
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pFrom->_sfSize);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _sfColor.syncWith(pFrom->_sfColor);

    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
        _sfShadowColor.syncWith(pFrom->_sfShadowColor);

    if(FieldBits::NoField != (BgColorFieldMask & whichField))
        _sfBgColor.syncWith(pFrom->_sfBgColor);

    if(FieldBits::NoField != (FamilyFieldMask & whichField))
        _sfFamily.syncWith(pFrom->_sfFamily);

    if(FieldBits::NoField != (ShadowOffsetFieldMask & whichField))
        _sfShadowOffset.syncWith(pFrom->_sfShadowOffset);

    if(FieldBits::NoField != (HorizontalAlignFieldMask & whichField))
        _sfHorizontalAlign.syncWith(pFrom->_sfHorizontalAlign);

    if(FieldBits::NoField != (VerticalAlignFieldMask & whichField))
        _sfVerticalAlign.syncWith(pFrom->_sfVerticalAlign);
}
#endif

#if 0
inline
void SimpleStatisticsForegroundBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (FormatsFieldMask & whichField))
    {
        _mfFormats.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *SimpleStatisticsForegroundBase::getClassname(void)
{
    return "SimpleStatisticsForeground";
}

typedef PointerBuilder<SimpleStatisticsForeground>::ObjPtr          SimpleStatisticsForegroundPtr;
typedef PointerBuilder<SimpleStatisticsForeground>::ObjPtrConst     SimpleStatisticsForegroundPtrConst;
typedef PointerBuilder<SimpleStatisticsForeground>::ObjConstPtr     SimpleStatisticsForegroundConstPtr;

typedef PointerBuilder<SimpleStatisticsForeground>::ObjPtrArg       SimpleStatisticsForegroundPtrArg;
typedef PointerBuilder<SimpleStatisticsForeground>::ObjConstPtrArg  SimpleStatisticsForegroundConstPtrArg;
typedef PointerBuilder<SimpleStatisticsForeground>::ObjPtrConstArg  SimpleStatisticsForegroundPtrConstArg;

OSG_END_NAMESPACE

#define OSGSIMPLESTATISTICSFOREGROUNDBASE_INLINE_CVSID "@(#)$Id$"

