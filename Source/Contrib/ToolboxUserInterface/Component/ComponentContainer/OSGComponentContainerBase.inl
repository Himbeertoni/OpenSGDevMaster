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
 **     class ComponentContainer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ComponentContainerBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ComponentContainerBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ComponentContainerBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the ComponentContainer::_sfLayout field.
inline
Layout * ComponentContainerBase::getLayout(void) const
{
    return _sfLayout.getValue();
}

//! Set the value of the ComponentContainer::_sfLayout field.
inline
void ComponentContainerBase::setLayout(Layout * const value)
{
    editSField(LayoutFieldMask);

    _sfLayout.setValue(value);
}
//! Get the value of the ComponentContainer::_sfInset field.

inline
Vec4f &ComponentContainerBase::editInset(void)
{
    editSField(InsetFieldMask);

    return _sfInset.getValue();
}

//! Get the value of the ComponentContainer::_sfInset field.
inline
const Vec4f &ComponentContainerBase::getInset(void) const
{
    return _sfInset.getValue();
}

//! Set the value of the ComponentContainer::_sfInset field.
inline
void ComponentContainerBase::setInset(const Vec4f &value)
{
    editSField(InsetFieldMask);

    _sfInset.setValue(value);
}

//! Get the value of the \a index element the ComponentContainer::_mfChildren field.
inline
Component * ComponentContainerBase::getChildren(const UInt32 index) const
{
    return _mfChildren[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ComponentContainerBase::execSync (      ComponentContainerBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ChildrenFieldMask & whichField))
        _mfChildren.syncWith(pFrom->_mfChildren,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (LayoutFieldMask & whichField))
        _sfLayout.syncWith(pFrom->_sfLayout);

    if(FieldBits::NoField != (InsetFieldMask & whichField))
        _sfInset.syncWith(pFrom->_sfInset);
}
#endif


inline
const Char8 *ComponentContainerBase::getClassname(void)
{
    return "ComponentContainer";
}
OSG_GEN_CONTAINERPTR(ComponentContainer);

OSG_END_NAMESPACE

