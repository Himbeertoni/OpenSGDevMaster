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
 **     class BoxLayout
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBOXLAYOUTBASE_H_
#define _OSGBOXLAYOUTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGLayout.h" // Parent

#include "OSGSysFields.h"               // Orientation type

#include "OSGBoxLayoutFields.h"

OSG_BEGIN_NAMESPACE

class BoxLayout;

//! \brief BoxLayout Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING BoxLayoutBase : public Layout
{
  public:

    typedef Layout Inherited;
    typedef Layout ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(BoxLayout);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        OrientationFieldId = Inherited::NextFieldId,
        MajorAxisAlignmentFieldId = OrientationFieldId + 1,
        MinorAxisAlignmentFieldId = MajorAxisAlignmentFieldId + 1,
        ComponentAlignmentFieldId = MinorAxisAlignmentFieldId + 1,
        MajorAxisMinimumGapFieldId = ComponentAlignmentFieldId + 1,
        MajorAxisMaximumGapFieldId = MajorAxisMinimumGapFieldId + 1,
        NextFieldId = MajorAxisMaximumGapFieldId + 1
    };

    static const OSG::BitVector OrientationFieldMask =
        (TypeTraits<BitVector>::One << OrientationFieldId);
    static const OSG::BitVector MajorAxisAlignmentFieldMask =
        (TypeTraits<BitVector>::One << MajorAxisAlignmentFieldId);
    static const OSG::BitVector MinorAxisAlignmentFieldMask =
        (TypeTraits<BitVector>::One << MinorAxisAlignmentFieldId);
    static const OSG::BitVector ComponentAlignmentFieldMask =
        (TypeTraits<BitVector>::One << ComponentAlignmentFieldId);
    static const OSG::BitVector MajorAxisMinimumGapFieldMask =
        (TypeTraits<BitVector>::One << MajorAxisMinimumGapFieldId);
    static const OSG::BitVector MajorAxisMaximumGapFieldMask =
        (TypeTraits<BitVector>::One << MajorAxisMaximumGapFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFOrientationType;
    typedef SFReal32          SFMajorAxisAlignmentType;
    typedef SFReal32          SFMinorAxisAlignmentType;
    typedef SFReal32          SFComponentAlignmentType;
    typedef SFReal32          SFMajorAxisMinimumGapType;
    typedef SFReal32          SFMajorAxisMaximumGapType;

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


                  SFUInt32            *editSFOrientation    (void);
            const SFUInt32            *getSFOrientation     (void) const;

                  SFReal32            *editSFMajorAxisAlignment(void);
            const SFReal32            *getSFMajorAxisAlignment (void) const;

                  SFReal32            *editSFMinorAxisAlignment(void);
            const SFReal32            *getSFMinorAxisAlignment (void) const;

                  SFReal32            *editSFComponentAlignment(void);
            const SFReal32            *getSFComponentAlignment (void) const;

                  SFReal32            *editSFMajorAxisMinimumGap(void);
            const SFReal32            *getSFMajorAxisMinimumGap (void) const;

                  SFReal32            *editSFMajorAxisMaximumGap(void);
            const SFReal32            *getSFMajorAxisMaximumGap (void) const;


                  UInt32              &editOrientation    (void);
                  UInt32               getOrientation     (void) const;

                  Real32              &editMajorAxisAlignment(void);
                  Real32               getMajorAxisAlignment (void) const;

                  Real32              &editMinorAxisAlignment(void);
                  Real32               getMinorAxisAlignment (void) const;

                  Real32              &editComponentAlignment(void);
                  Real32               getComponentAlignment (void) const;

                  Real32              &editMajorAxisMinimumGap(void);
                  Real32               getMajorAxisMinimumGap (void) const;

                  Real32              &editMajorAxisMaximumGap(void);
                  Real32               getMajorAxisMaximumGap (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setOrientation    (const UInt32 value);
            void setMajorAxisAlignment(const Real32 value);
            void setMinorAxisAlignment(const Real32 value);
            void setComponentAlignment(const Real32 value);
            void setMajorAxisMinimumGap(const Real32 value);
            void setMajorAxisMaximumGap(const Real32 value);

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

    static  BoxLayoutTransitPtr  create          (void);
    static  BoxLayout           *createEmpty     (void);

    static  BoxLayoutTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  BoxLayout            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  BoxLayoutTransitPtr  createDependent  (BitVector bFlags);

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

    SFUInt32          _sfOrientation;
    SFReal32          _sfMajorAxisAlignment;
    SFReal32          _sfMinorAxisAlignment;
    SFReal32          _sfComponentAlignment;
    SFReal32          _sfMajorAxisMinimumGap;
    SFReal32          _sfMajorAxisMaximumGap;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BoxLayoutBase(void);
    BoxLayoutBase(const BoxLayoutBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BoxLayoutBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleOrientation     (void) const;
    EditFieldHandlePtr editHandleOrientation    (void);
    GetFieldHandlePtr  getHandleMajorAxisAlignment (void) const;
    EditFieldHandlePtr editHandleMajorAxisAlignment(void);
    GetFieldHandlePtr  getHandleMinorAxisAlignment (void) const;
    EditFieldHandlePtr editHandleMinorAxisAlignment(void);
    GetFieldHandlePtr  getHandleComponentAlignment (void) const;
    EditFieldHandlePtr editHandleComponentAlignment(void);
    GetFieldHandlePtr  getHandleMajorAxisMinimumGap (void) const;
    EditFieldHandlePtr editHandleMajorAxisMinimumGap(void);
    GetFieldHandlePtr  getHandleMajorAxisMaximumGap (void) const;
    EditFieldHandlePtr editHandleMajorAxisMaximumGap(void);

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

            void execSync (      BoxLayoutBase *pFrom,
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
    void operator =(const BoxLayoutBase &source);
};

typedef BoxLayoutBase *BoxLayoutBaseP;

OSG_END_NAMESPACE

#endif /* _OSGBOXLAYOUTBASE_H_ */
