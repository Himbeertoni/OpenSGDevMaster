/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class SkeletonBlendedGeometry
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSKELETONBLENDEDGEOMETRYBASE_H_
#define _OSGSKELETONBLENDEDGEOMETRYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxAnimationDef.h"

//#include "OSGBaseTypes.h"

#include "OSGGeometry.h" // Parent

#include "OSGGeometryFields.h"          // BaseGeometry type
#include "OSGGeoIntegralPropertyFields.h" // InternalWeightIndexes type
#include "OSGGeoVectorPropertyFields.h" // InternalWeights type
#include "OSGNodeFields.h"              // InternalJoints type
#include "OSGMathFields.h"              // InternalJointInvBindTransformations type

#include "OSGSkeletonBlendedGeometryFields.h"


OSG_BEGIN_NAMESPACE

class SkeletonBlendedGeometry;

//! \brief SkeletonBlendedGeometry Base Class.

class OSG_CONTRIBTOOLBOXANIMATION_DLLMAPPING SkeletonBlendedGeometryBase : public Geometry
{
  public:

    typedef Geometry Inherited;
    typedef Geometry ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SkeletonBlendedGeometry);


    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        BaseGeometryFieldId = Inherited::NextFieldId,
        InternalWeightIndexesFieldId = BaseGeometryFieldId + 1,
        InternalWeightsFieldId = InternalWeightIndexesFieldId + 1,
        InternalJointsFieldId = InternalWeightsFieldId + 1,
        InternalJointInvBindTransformationsFieldId = InternalJointsFieldId + 1,
        BindTransformationFieldId = InternalJointInvBindTransformationsFieldId + 1,
		EventSourceFieldId = BindTransformationFieldId + 1,
        NextFieldId = EventSourceFieldId + 1
    };

    static const OSG::BitVector BaseGeometryFieldMask =
        (TypeTraits<BitVector>::One << BaseGeometryFieldId);
    static const OSG::BitVector InternalWeightIndexesFieldMask =
        (TypeTraits<BitVector>::One << InternalWeightIndexesFieldId);
    static const OSG::BitVector InternalWeightsFieldMask =
        (TypeTraits<BitVector>::One << InternalWeightsFieldId);
    static const OSG::BitVector InternalJointsFieldMask =
        (TypeTraits<BitVector>::One << InternalJointsFieldId);
    static const OSG::BitVector InternalJointInvBindTransformationsFieldMask =
        (TypeTraits<BitVector>::One << InternalJointInvBindTransformationsFieldId);
    static const OSG::BitVector BindTransformationFieldMask =
        (TypeTraits<BitVector>::One << BindTransformationFieldId);
    static const OSG::BitVector EventSourceFieldMask =
        (TypeTraits<BitVector>::One << EventSourceFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecGeometryPtr SFBaseGeometryType;
    typedef SFUnrecChildGeoIntegralPropertyPtr SFInternalWeightIndexesType;
    typedef SFUnrecChildGeoVectorPropertyPtr SFInternalWeightsType;
    typedef MFUnrecNodePtr    MFInternalJointsType;
    typedef MFMatrix          MFInternalJointInvBindTransformationsType;
    typedef SFMatrix          SFBindTransformationType;
    typedef SFUnrecEventContainerPtr SFEventSourceType;


    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecGeometryPtr  *getSFBaseGeometry   (void) const;
                  SFUnrecGeometryPtr  *editSFBaseGeometry   (void);
            const SFUnrecChildGeoVectorPropertyPtr *getSFInternalWeights(void) const;
                  SFUnrecChildGeoVectorPropertyPtr *editSFInternalWeights(void);

                  SFMatrix            *editSFBindTransformation(void);
            const SFMatrix            *getSFBindTransformation (void) const;


                  Geometry * getBaseGeometry   (void) const;

                  GeoVectorProperty * getInternalWeights(void) const;

                  Matrix              &editBindTransformation(void);
            const Matrix              &getBindTransformation (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setBaseGeometry   (Geometry * const value);
            void setInternalWeights(GeoVectorProperty * const value);
            void setBindTransformation(const Matrix &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  SkeletonBlendedGeometryTransitPtr  create          (void);
    static  SkeletonBlendedGeometry           *createEmpty     (void);

    static  SkeletonBlendedGeometryTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SkeletonBlendedGeometry            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SkeletonBlendedGeometryTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecGeometryPtr _sfBaseGeometry;
    SFUnrecChildGeoIntegralPropertyPtr _sfInternalWeightIndexes;
    SFUnrecChildGeoVectorPropertyPtr _sfInternalWeights;
    MFUnrecNodePtr    _mfInternalJoints;
    MFMatrix          _mfInternalJointInvBindTransformations;
    SFMatrix          _sfBindTransformation;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SkeletonBlendedGeometryBase(void);
    SkeletonBlendedGeometryBase(const SkeletonBlendedGeometryBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SkeletonBlendedGeometryBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const SkeletonBlendedGeometry *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Child linking                                                */
    /*! \{                                                                 */

    virtual bool unlinkChild(FieldContainer * const pChild,
                             UInt16           const childFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleBaseGeometry    (void) const;
    EditFieldHandlePtr editHandleBaseGeometry   (void);
    GetFieldHandlePtr  getHandleInternalWeightIndexes (void) const;
    EditFieldHandlePtr editHandleInternalWeightIndexes(void);
    GetFieldHandlePtr  getHandleInternalWeights (void) const;
    EditFieldHandlePtr editHandleInternalWeights(void);
    GetFieldHandlePtr  getHandleInternalJoints  (void) const;
    EditFieldHandlePtr editHandleInternalJoints (void);
    GetFieldHandlePtr  getHandleInternalJointInvBindTransformations (void) const;
    EditFieldHandlePtr editHandleInternalJointInvBindTransformations(void);
    GetFieldHandlePtr  getHandleBindTransformation (void) const;
    EditFieldHandlePtr editHandleBindTransformation(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecChildGeoIntegralPropertyPtr *getSFInternalWeightIndexes (void) const;
                  SFUnrecChildGeoIntegralPropertyPtr *editSFInternalWeightIndexes(void);
            const MFUnrecNodePtr      *getMFInternalJoints  (void) const;
                  MFUnrecNodePtr      *editMFInternalJoints (void);

                  MFMatrix            *editMFInternalJointInvBindTransformations(void);
            const MFMatrix            *getMFInternalJointInvBindTransformations (void) const;


                  GeoIntegralProperty * getInternalWeightIndexes(void) const;

                  Node * getInternalJoints (const UInt32 index) const;

                  Matrix              &editInternalJointInvBindTransformations(const UInt32 index);
            const Matrix              &getInternalJointInvBindTransformations (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setInternalWeightIndexes(GeoIntegralProperty * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToInternalJoints           (Node * const value   );
    void assignInternalJoints           (const MFUnrecNodePtr    &value);
    void removeFromInternalJoints (UInt32                uiIndex );
    void removeObjFromInternalJoints(Node * const value   );
    void clearInternalJoints            (void                          );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      SkeletonBlendedGeometryBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:



    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SkeletonBlendedGeometryBase &source);
};

typedef SkeletonBlendedGeometryBase *SkeletonBlendedGeometryBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSKELETONBLENDEDGEOMETRYBASE_H_ */