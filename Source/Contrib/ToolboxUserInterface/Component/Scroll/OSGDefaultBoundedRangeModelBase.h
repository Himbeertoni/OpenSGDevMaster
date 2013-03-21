/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class DefaultBoundedRangeModel
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDEFAULTBOUNDEDRANGEMODELBASE_H_
#define _OSGDEFAULTBOUNDEDRANGEMODELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGBoundedRangeModel.h" // Parent

#include "OSGSysFields.h"               // InternalMinimum type

#include "OSGDefaultBoundedRangeModelFields.h"

OSG_BEGIN_NAMESPACE

class DefaultBoundedRangeModel;

//! \brief DefaultBoundedRangeModel Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DefaultBoundedRangeModelBase : public BoundedRangeModel
{
  public:

    typedef BoundedRangeModel Inherited;
    typedef BoundedRangeModel ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DefaultBoundedRangeModel);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        InternalMinimumFieldId = Inherited::NextFieldId,
        InternalMaximumFieldId = InternalMinimumFieldId + 1,
        InternalValueFieldId = InternalMaximumFieldId + 1,
        InternalExtentFieldId = InternalValueFieldId + 1,
        InternalValueIsAdjustingFieldId = InternalExtentFieldId + 1,
        NextFieldId = InternalValueIsAdjustingFieldId + 1
    };

    static const OSG::BitVector InternalMinimumFieldMask =
        (TypeTraits<BitVector>::One << InternalMinimumFieldId);
    static const OSG::BitVector InternalMaximumFieldMask =
        (TypeTraits<BitVector>::One << InternalMaximumFieldId);
    static const OSG::BitVector InternalValueFieldMask =
        (TypeTraits<BitVector>::One << InternalValueFieldId);
    static const OSG::BitVector InternalExtentFieldMask =
        (TypeTraits<BitVector>::One << InternalExtentFieldId);
    static const OSG::BitVector InternalValueIsAdjustingFieldMask =
        (TypeTraits<BitVector>::One << InternalValueIsAdjustingFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFInt32           SFInternalMinimumType;
    typedef SFInt32           SFInternalMaximumType;
    typedef SFInt32           SFInternalValueType;
    typedef SFUInt32          SFInternalExtentType;
    typedef SFBool            SFInternalValueIsAdjustingType;

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

    static  DefaultBoundedRangeModelTransitPtr  create          (void);
    static  DefaultBoundedRangeModel           *createEmpty     (void);

    static  DefaultBoundedRangeModelTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  DefaultBoundedRangeModel            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  DefaultBoundedRangeModelTransitPtr  createDependent  (BitVector bFlags);

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

    SFInt32           _sfInternalMinimum;
    SFInt32           _sfInternalMaximum;
    SFInt32           _sfInternalValue;
    SFUInt32          _sfInternalExtent;
    SFBool            _sfInternalValueIsAdjusting;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DefaultBoundedRangeModelBase(void);
    DefaultBoundedRangeModelBase(const DefaultBoundedRangeModelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DefaultBoundedRangeModelBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleInternalMinimum (void) const;
    EditFieldHandlePtr editHandleInternalMinimum(void);
    GetFieldHandlePtr  getHandleInternalMaximum (void) const;
    EditFieldHandlePtr editHandleInternalMaximum(void);
    GetFieldHandlePtr  getHandleInternalValue   (void) const;
    EditFieldHandlePtr editHandleInternalValue  (void);
    GetFieldHandlePtr  getHandleInternalExtent  (void) const;
    EditFieldHandlePtr editHandleInternalExtent (void);
    GetFieldHandlePtr  getHandleInternalValueIsAdjusting (void) const;
    EditFieldHandlePtr editHandleInternalValueIsAdjusting(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFInt32             *editSFInternalMinimum(void);
            const SFInt32             *getSFInternalMinimum (void) const;

                  SFInt32             *editSFInternalMaximum(void);
            const SFInt32             *getSFInternalMaximum (void) const;

                  SFInt32             *editSFInternalValue  (void);
            const SFInt32             *getSFInternalValue   (void) const;

                  SFUInt32            *editSFInternalExtent (void);
            const SFUInt32            *getSFInternalExtent  (void) const;

                  SFBool              *editSFInternalValueIsAdjusting(void);
            const SFBool              *getSFInternalValueIsAdjusting (void) const;


                  Int32               &editInternalMinimum(void);
                  Int32                getInternalMinimum (void) const;

                  Int32               &editInternalMaximum(void);
                  Int32                getInternalMaximum (void) const;

                  Int32               &editInternalValue  (void);
                  Int32                getInternalValue   (void) const;

                  UInt32              &editInternalExtent (void);
                  UInt32               getInternalExtent  (void) const;

                  bool                &editInternalValueIsAdjusting(void);
                  bool                 getInternalValueIsAdjusting (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setInternalMinimum(const Int32 value);
            void setInternalMaximum(const Int32 value);
            void setInternalValue  (const Int32 value);
            void setInternalExtent (const UInt32 value);
            void setInternalValueIsAdjusting(const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

            void execSync (      DefaultBoundedRangeModelBase *pFrom,
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
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const DefaultBoundedRangeModelBase &source);
};

typedef DefaultBoundedRangeModelBase *DefaultBoundedRangeModelBaseP;

OSG_END_NAMESPACE

#endif /* _OSGDEFAULTBOUNDEDRANGEMODELBASE_H_ */
