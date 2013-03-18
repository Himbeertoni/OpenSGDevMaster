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
 **     class FilePathAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &FilePathAttachmentBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 FilePathAttachmentBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 FilePathAttachmentBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the FilePathAttachment::_sfPath field.

inline
BoostPath &FilePathAttachmentBase::editPath(void)
{
    editSField(PathFieldMask);

    return _sfPath.getValue();
}

//! Get the value of the FilePathAttachment::_sfPath field.
inline
const BoostPath &FilePathAttachmentBase::getPath(void) const
{
    return _sfPath.getValue();
}

//! Set the value of the FilePathAttachment::_sfPath field.
inline
void FilePathAttachmentBase::setPath(const BoostPath &value)
{
    editSField(PathFieldMask);

    _sfPath.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void FilePathAttachmentBase::execSync (      FilePathAttachmentBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (PathFieldMask & whichField))
        _sfPath.syncWith(pFrom->_sfPath);
}
#endif


inline
const Char8 *FilePathAttachmentBase::getClassname(void)
{
    return "FilePathAttachment";
}
OSG_GEN_CONTAINERPTR(FilePathAttachment);

OSG_END_NAMESPACE

