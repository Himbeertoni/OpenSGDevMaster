/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
 *          David Naylor                                                     *
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
 **     class SkeletonBlendedGeometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &SkeletonBlendedGeometryBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SkeletonBlendedGeometryBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SkeletonBlendedGeometryBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the SkeletonBlendedGeometry::_sfBaseGeometry field.
inline
Geometry * SkeletonBlendedGeometryBase::getBaseGeometry(void) const
{
    return _sfBaseGeometry.getValue();
}

//! Set the value of the SkeletonBlendedGeometry::_sfBaseGeometry field.
inline
void SkeletonBlendedGeometryBase::setBaseGeometry(Geometry * const value)
{
    editSField(BaseGeometryFieldMask);

    _sfBaseGeometry.setValue(value);
}

//! Get the value of the SkeletonBlendedGeometry::_sfInternalWeightIndexes field.
inline
GeoIntegralProperty * SkeletonBlendedGeometryBase::getInternalWeightIndexes(void) const
{
    return _sfInternalWeightIndexes.getValue();
}

//! Set the value of the SkeletonBlendedGeometry::_sfInternalWeightIndexes field.
inline
void SkeletonBlendedGeometryBase::setInternalWeightIndexes(GeoIntegralProperty * const value)
{
    editSField(InternalWeightIndexesFieldMask);

    _sfInternalWeightIndexes.setValue(value);
}

//! Get the value of the SkeletonBlendedGeometry::_sfInternalWeights field.
inline
GeoVectorProperty * SkeletonBlendedGeometryBase::getInternalWeights(void) const
{
    return _sfInternalWeights.getValue();
}

//! Set the value of the SkeletonBlendedGeometry::_sfInternalWeights field.
inline
void SkeletonBlendedGeometryBase::setInternalWeights(GeoVectorProperty * const value)
{
    editSField(InternalWeightsFieldMask);

    _sfInternalWeights.setValue(value);
}
//! Get the value of the SkeletonBlendedGeometry::_sfBindTransformation field.

inline
Matrix &SkeletonBlendedGeometryBase::editBindTransformation(void)
{
    editSField(BindTransformationFieldMask);

    return _sfBindTransformation.getValue();
}

//! Get the value of the SkeletonBlendedGeometry::_sfBindTransformation field.
inline
const Matrix &SkeletonBlendedGeometryBase::getBindTransformation(void) const
{
    return _sfBindTransformation.getValue();
}

//! Set the value of the SkeletonBlendedGeometry::_sfBindTransformation field.
inline
void SkeletonBlendedGeometryBase::setBindTransformation(const Matrix &value)
{
    editSField(BindTransformationFieldMask);

    _sfBindTransformation.setValue(value);
}

//! Get the value of the SkeletonBlendedGeometry::_sfEventSource field.
inline
SkeletonBlendedGeometryEventSource * SkeletonBlendedGeometryBase::getEventSource(void) const
{
    return _sfEventSource.getValue();
}

//! Set the value of the SkeletonBlendedGeometry::_sfEventSource field.
inline
void SkeletonBlendedGeometryBase::setEventSource(SkeletonBlendedGeometryEventSource * const value)
{
    editSField(EventSourceFieldMask);

    _sfEventSource.setValue(value);
}

//! Get the value of the \a index element the SkeletonBlendedGeometry::_mfInternalJoints field.
inline
Node * SkeletonBlendedGeometryBase::getInternalJoints(const UInt32 index) const
{
    return _mfInternalJoints[index];
}

//! Get the value of the \a index element the SkeletonBlendedGeometry::_mfInternalJointInvBindTransformations field.
inline
const Matrix &SkeletonBlendedGeometryBase::getInternalJointInvBindTransformations(const UInt32 index) const
{
    return _mfInternalJointInvBindTransformations[index];
}

inline
Matrix &SkeletonBlendedGeometryBase::editInternalJointInvBindTransformations(const UInt32 index)
{
    editMField(InternalJointInvBindTransformationsFieldMask, _mfInternalJointInvBindTransformations);

    return _mfInternalJointInvBindTransformations[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void SkeletonBlendedGeometryBase::execSync (      SkeletonBlendedGeometryBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (BaseGeometryFieldMask & whichField))
        _sfBaseGeometry.syncWith(pFrom->_sfBaseGeometry);

    if(FieldBits::NoField != (InternalWeightIndexesFieldMask & whichField))
        _sfInternalWeightIndexes.syncWith(pFrom->_sfInternalWeightIndexes);

    if(FieldBits::NoField != (InternalWeightsFieldMask & whichField))
        _sfInternalWeights.syncWith(pFrom->_sfInternalWeights);

    if(FieldBits::NoField != (InternalJointsFieldMask & whichField))
        _mfInternalJoints.syncWith(pFrom->_mfInternalJoints,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (InternalJointInvBindTransformationsFieldMask & whichField))
        _mfInternalJointInvBindTransformations.syncWith(pFrom->_mfInternalJointInvBindTransformations,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (BindTransformationFieldMask & whichField))
        _sfBindTransformation.syncWith(pFrom->_sfBindTransformation);

    if(FieldBits::NoField != (EventSourceFieldMask & whichField))
        _sfEventSource.syncWith(pFrom->_sfEventSource);
}
#endif


inline
const Char8 *SkeletonBlendedGeometryBase::getClassname(void)
{
    return "SkeletonBlendedGeometry";
}
OSG_GEN_CONTAINERPTR(SkeletonBlendedGeometry);

OSG_END_NAMESPACE

