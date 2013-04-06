/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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
 **     class TreeSelectionModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &TreeSelectionModelBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TreeSelectionModelBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TreeSelectionModelBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

//Test
/*------------------------------ get -----------------------------------*/

    //Field EventSource
//! Get the value of the TreeSelectionModel::_sfEventSource field.
inline
TreeSelectionModelEventSource * TreeSelectionModelBase::getEventSource(void) const
{
    return _sfEventSource.getValue();
}

//! Set the value of the TreeSelectionModel::_sfEventSource field.
inline
void TreeSelectionModelBase::setEventSource(TreeSelectionModelEventSource * const value)
{
    editSField(EventSourceFieldMask);

    _sfEventSource.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TreeSelectionModelBase::execSync (      TreeSelectionModelBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (EventSourceFieldMask & whichField))
        _sfEventSource.syncWith(pFrom->_sfEventSource);
}
#endif


inline
const Char8 *TreeSelectionModelBase::getClassname(void)
{
    return "TreeSelectionModel";
}
OSG_GEN_CONTAINERPTR(TreeSelectionModel);

OSG_END_NAMESPACE

