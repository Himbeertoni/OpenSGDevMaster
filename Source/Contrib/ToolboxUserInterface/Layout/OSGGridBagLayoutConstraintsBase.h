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
 **     class GridBagLayoutConstraints
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGRIDBAGLAYOUTCONSTRAINTSBASE_H_
#define _OSGGRIDBAGLAYOUTCONSTRAINTSBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGLayoutConstraints.h" // Parent

#include "OSGSysFields.h"               // GridX type

#include "OSGGridBagLayoutConstraintsFields.h"

OSG_BEGIN_NAMESPACE

class GridBagLayoutConstraints;

//! \brief GridBagLayoutConstraints Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING GridBagLayoutConstraintsBase : public LayoutConstraints
{
  public:

    typedef LayoutConstraints Inherited;
    typedef LayoutConstraints ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(GridBagLayoutConstraints);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        GridXFieldId = Inherited::NextFieldId,
        GridYFieldId = GridXFieldId + 1,
        GridWidthFieldId = GridYFieldId + 1,
        GridHeightFieldId = GridWidthFieldId + 1,
        FillFieldId = GridHeightFieldId + 1,
        HorizontalAlignmentFieldId = FillFieldId + 1,
        VerticalAlignmentFieldId = HorizontalAlignmentFieldId + 1,
        WeightXFieldId = VerticalAlignmentFieldId + 1,
        WeightYFieldId = WeightXFieldId + 1,
        InternalPadXFieldId = WeightYFieldId + 1,
        InternalPadYFieldId = InternalPadXFieldId + 1,
        PadLeftFieldId = InternalPadYFieldId + 1,
        PadRightFieldId = PadLeftFieldId + 1,
        PadTopFieldId = PadRightFieldId + 1,
        PadBottomFieldId = PadTopFieldId + 1,
        NextFieldId = PadBottomFieldId + 1
    };

    static const OSG::BitVector GridXFieldMask =
        (TypeTraits<BitVector>::One << GridXFieldId);
    static const OSG::BitVector GridYFieldMask =
        (TypeTraits<BitVector>::One << GridYFieldId);
    static const OSG::BitVector GridWidthFieldMask =
        (TypeTraits<BitVector>::One << GridWidthFieldId);
    static const OSG::BitVector GridHeightFieldMask =
        (TypeTraits<BitVector>::One << GridHeightFieldId);
    static const OSG::BitVector FillFieldMask =
        (TypeTraits<BitVector>::One << FillFieldId);
    static const OSG::BitVector HorizontalAlignmentFieldMask =
        (TypeTraits<BitVector>::One << HorizontalAlignmentFieldId);
    static const OSG::BitVector VerticalAlignmentFieldMask =
        (TypeTraits<BitVector>::One << VerticalAlignmentFieldId);
    static const OSG::BitVector WeightXFieldMask =
        (TypeTraits<BitVector>::One << WeightXFieldId);
    static const OSG::BitVector WeightYFieldMask =
        (TypeTraits<BitVector>::One << WeightYFieldId);
    static const OSG::BitVector InternalPadXFieldMask =
        (TypeTraits<BitVector>::One << InternalPadXFieldId);
    static const OSG::BitVector InternalPadYFieldMask =
        (TypeTraits<BitVector>::One << InternalPadYFieldId);
    static const OSG::BitVector PadLeftFieldMask =
        (TypeTraits<BitVector>::One << PadLeftFieldId);
    static const OSG::BitVector PadRightFieldMask =
        (TypeTraits<BitVector>::One << PadRightFieldId);
    static const OSG::BitVector PadTopFieldMask =
        (TypeTraits<BitVector>::One << PadTopFieldId);
    static const OSG::BitVector PadBottomFieldMask =
        (TypeTraits<BitVector>::One << PadBottomFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt16          SFGridXType;
    typedef SFUInt16          SFGridYType;
    typedef SFUInt16          SFGridWidthType;
    typedef SFUInt16          SFGridHeightType;
    typedef SFUInt32          SFFillType;
    typedef SFReal32          SFHorizontalAlignmentType;
    typedef SFReal32          SFVerticalAlignmentType;
    typedef SFReal32          SFWeightXType;
    typedef SFReal32          SFWeightYType;
    typedef SFUInt32          SFInternalPadXType;
    typedef SFUInt32          SFInternalPadYType;
    typedef SFUInt32          SFPadLeftType;
    typedef SFUInt32          SFPadRightType;
    typedef SFUInt32          SFPadTopType;
    typedef SFUInt32          SFPadBottomType;

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


                  SFUInt16            *editSFGridX          (void);
            const SFUInt16            *getSFGridX           (void) const;

                  SFUInt16            *editSFGridY          (void);
            const SFUInt16            *getSFGridY           (void) const;

                  SFUInt16            *editSFGridWidth      (void);
            const SFUInt16            *getSFGridWidth       (void) const;

                  SFUInt16            *editSFGridHeight     (void);
            const SFUInt16            *getSFGridHeight      (void) const;

                  SFUInt32            *editSFFill           (void);
            const SFUInt32            *getSFFill            (void) const;

                  SFReal32            *editSFHorizontalAlignment(void);
            const SFReal32            *getSFHorizontalAlignment (void) const;

                  SFReal32            *editSFVerticalAlignment(void);
            const SFReal32            *getSFVerticalAlignment (void) const;

                  SFReal32            *editSFWeightX        (void);
            const SFReal32            *getSFWeightX         (void) const;

                  SFReal32            *editSFWeightY        (void);
            const SFReal32            *getSFWeightY         (void) const;

                  SFUInt32            *editSFInternalPadX   (void);
            const SFUInt32            *getSFInternalPadX    (void) const;

                  SFUInt32            *editSFInternalPadY   (void);
            const SFUInt32            *getSFInternalPadY    (void) const;

                  SFUInt32            *editSFPadLeft        (void);
            const SFUInt32            *getSFPadLeft         (void) const;

                  SFUInt32            *editSFPadRight       (void);
            const SFUInt32            *getSFPadRight        (void) const;

                  SFUInt32            *editSFPadTop         (void);
            const SFUInt32            *getSFPadTop          (void) const;

                  SFUInt32            *editSFPadBottom      (void);
            const SFUInt32            *getSFPadBottom       (void) const;


                  UInt16              &editGridX          (void);
                  UInt16               getGridX           (void) const;

                  UInt16              &editGridY          (void);
                  UInt16               getGridY           (void) const;

                  UInt16              &editGridWidth      (void);
                  UInt16               getGridWidth       (void) const;

                  UInt16              &editGridHeight     (void);
                  UInt16               getGridHeight      (void) const;

                  UInt32              &editFill           (void);
                  UInt32               getFill            (void) const;

                  Real32              &editHorizontalAlignment(void);
                  Real32               getHorizontalAlignment (void) const;

                  Real32              &editVerticalAlignment(void);
                  Real32               getVerticalAlignment (void) const;

                  Real32              &editWeightX        (void);
                  Real32               getWeightX         (void) const;

                  Real32              &editWeightY        (void);
                  Real32               getWeightY         (void) const;

                  UInt32              &editInternalPadX   (void);
                  UInt32               getInternalPadX    (void) const;

                  UInt32              &editInternalPadY   (void);
                  UInt32               getInternalPadY    (void) const;

                  UInt32              &editPadLeft        (void);
                  UInt32               getPadLeft         (void) const;

                  UInt32              &editPadRight       (void);
                  UInt32               getPadRight        (void) const;

                  UInt32              &editPadTop         (void);
                  UInt32               getPadTop          (void) const;

                  UInt32              &editPadBottom      (void);
                  UInt32               getPadBottom       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setGridX          (const UInt16 value);
            void setGridY          (const UInt16 value);
            void setGridWidth      (const UInt16 value);
            void setGridHeight     (const UInt16 value);
            void setFill           (const UInt32 value);
            void setHorizontalAlignment(const Real32 value);
            void setVerticalAlignment(const Real32 value);
            void setWeightX        (const Real32 value);
            void setWeightY        (const Real32 value);
            void setInternalPadX   (const UInt32 value);
            void setInternalPadY   (const UInt32 value);
            void setPadLeft        (const UInt32 value);
            void setPadRight       (const UInt32 value);
            void setPadTop         (const UInt32 value);
            void setPadBottom      (const UInt32 value);

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

    static  GridBagLayoutConstraintsTransitPtr  create          (void);
    static  GridBagLayoutConstraints           *createEmpty     (void);

    static  GridBagLayoutConstraintsTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  GridBagLayoutConstraints            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  GridBagLayoutConstraintsTransitPtr  createDependent  (BitVector bFlags);

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

    SFUInt16          _sfGridX;
    SFUInt16          _sfGridY;
    SFUInt16          _sfGridWidth;
    SFUInt16          _sfGridHeight;
    SFUInt32          _sfFill;
    SFReal32          _sfHorizontalAlignment;
    SFReal32          _sfVerticalAlignment;
    SFReal32          _sfWeightX;
    SFReal32          _sfWeightY;
    SFUInt32          _sfInternalPadX;
    SFUInt32          _sfInternalPadY;
    SFUInt32          _sfPadLeft;
    SFUInt32          _sfPadRight;
    SFUInt32          _sfPadTop;
    SFUInt32          _sfPadBottom;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GridBagLayoutConstraintsBase(void);
    GridBagLayoutConstraintsBase(const GridBagLayoutConstraintsBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GridBagLayoutConstraintsBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleGridX           (void) const;
    EditFieldHandlePtr editHandleGridX          (void);
    GetFieldHandlePtr  getHandleGridY           (void) const;
    EditFieldHandlePtr editHandleGridY          (void);
    GetFieldHandlePtr  getHandleGridWidth       (void) const;
    EditFieldHandlePtr editHandleGridWidth      (void);
    GetFieldHandlePtr  getHandleGridHeight      (void) const;
    EditFieldHandlePtr editHandleGridHeight     (void);
    GetFieldHandlePtr  getHandleFill            (void) const;
    EditFieldHandlePtr editHandleFill           (void);
    GetFieldHandlePtr  getHandleHorizontalAlignment (void) const;
    EditFieldHandlePtr editHandleHorizontalAlignment(void);
    GetFieldHandlePtr  getHandleVerticalAlignment (void) const;
    EditFieldHandlePtr editHandleVerticalAlignment(void);
    GetFieldHandlePtr  getHandleWeightX         (void) const;
    EditFieldHandlePtr editHandleWeightX        (void);
    GetFieldHandlePtr  getHandleWeightY         (void) const;
    EditFieldHandlePtr editHandleWeightY        (void);
    GetFieldHandlePtr  getHandleInternalPadX    (void) const;
    EditFieldHandlePtr editHandleInternalPadX   (void);
    GetFieldHandlePtr  getHandleInternalPadY    (void) const;
    EditFieldHandlePtr editHandleInternalPadY   (void);
    GetFieldHandlePtr  getHandlePadLeft         (void) const;
    EditFieldHandlePtr editHandlePadLeft        (void);
    GetFieldHandlePtr  getHandlePadRight        (void) const;
    EditFieldHandlePtr editHandlePadRight       (void);
    GetFieldHandlePtr  getHandlePadTop          (void) const;
    EditFieldHandlePtr editHandlePadTop         (void);
    GetFieldHandlePtr  getHandlePadBottom       (void) const;
    EditFieldHandlePtr editHandlePadBottom      (void);

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

            void execSync (      GridBagLayoutConstraintsBase *pFrom,
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
    void operator =(const GridBagLayoutConstraintsBase &source);
};

typedef GridBagLayoutConstraintsBase *GridBagLayoutConstraintsBaseP;

OSG_END_NAMESPACE

#endif /* _OSGGRIDBAGLAYOUTCONSTRAINTSBASE_H_ */
