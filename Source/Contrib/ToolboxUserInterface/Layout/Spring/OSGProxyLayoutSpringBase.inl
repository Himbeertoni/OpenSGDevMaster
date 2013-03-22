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
 **     class ProxyLayoutSpring!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ProxyLayoutSpringBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ProxyLayoutSpringBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ProxyLayoutSpringBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ProxyLayoutSpring::_sfEdge field.

inline
UInt32 &ProxyLayoutSpringBase::editEdge(void)
{
    editSField(EdgeFieldMask);

    return _sfEdge.getValue();
}

//! Get the value of the ProxyLayoutSpring::_sfEdge field.
inline
      UInt32  ProxyLayoutSpringBase::getEdge(void) const
{
    return _sfEdge.getValue();
}

//! Set the value of the ProxyLayoutSpring::_sfEdge field.
inline
void ProxyLayoutSpringBase::setEdge(const UInt32 value)
{
    editSField(EdgeFieldMask);

    _sfEdge.setValue(value);
}

//! Get the value of the ProxyLayoutSpring::_sfComponent field.
inline
Component * ProxyLayoutSpringBase::getComponent(void) const
{
    return _sfComponent.getValue();
}

//! Set the value of the ProxyLayoutSpring::_sfComponent field.
inline
void ProxyLayoutSpringBase::setComponent(Component * const value)
{
    editSField(ComponentFieldMask);

    _sfComponent.setValue(value);
}

//! Get the value of the ProxyLayoutSpring::_sfLayout field.
inline
SpringLayout * ProxyLayoutSpringBase::getLayout(void) const
{
    return _sfLayout.getValue();
}

//! Set the value of the ProxyLayoutSpring::_sfLayout field.
inline
void ProxyLayoutSpringBase::setLayout(SpringLayout * const value)
{
    editSField(LayoutFieldMask);

    _sfLayout.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ProxyLayoutSpringBase::execSync (      ProxyLayoutSpringBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (EdgeFieldMask & whichField))
        _sfEdge.syncWith(pFrom->_sfEdge);

    if(FieldBits::NoField != (ComponentFieldMask & whichField))
        _sfComponent.syncWith(pFrom->_sfComponent);

    if(FieldBits::NoField != (LayoutFieldMask & whichField))
        _sfLayout.syncWith(pFrom->_sfLayout);
}
#endif


inline
const Char8 *ProxyLayoutSpringBase::getClassname(void)
{
    return "ProxyLayoutSpring";
}
OSG_GEN_CONTAINERPTR(ProxyLayoutSpring);

OSG_END_NAMESPACE
