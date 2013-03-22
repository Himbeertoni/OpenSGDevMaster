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
 **     class GridLayout
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGRIDLAYOUTBASE_H_
#define _OSGGRIDLAYOUTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGLayout.h" // Parent

#include "OSGSysFields.h"               // Rows type

#include "OSGGridLayoutFields.h"

OSG_BEGIN_NAMESPACE

class GridLayout;

//! \brief GridLayout Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING GridLayoutBase : public Layout
{
  public:

    typedef Layout Inherited;
    typedef Layout ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(GridLayout);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RowsFieldId = Inherited::NextFieldId,
        ColumnsFieldId = RowsFieldId + 1,
        HorizontalGapFieldId = ColumnsFieldId + 1,
        VerticalGapFieldId = HorizontalGapFieldId + 1,
        NextFieldId = VerticalGapFieldId + 1
    };

    static const OSG::BitVector RowsFieldMask =
        (TypeTraits<BitVector>::One << RowsFieldId);
    static const OSG::BitVector ColumnsFieldMask =
        (TypeTraits<BitVector>::One << ColumnsFieldId);
    static const OSG::BitVector HorizontalGapFieldMask =
        (TypeTraits<BitVector>::One << HorizontalGapFieldId);
    static const OSG::BitVector VerticalGapFieldMask =
        (TypeTraits<BitVector>::One << VerticalGapFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFRowsType;
    typedef SFUInt32          SFColumnsType;
    typedef SFReal32          SFHorizontalGapType;
    typedef SFReal32          SFVerticalGapType;

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


                  SFUInt32            *editSFRows           (void);
            const SFUInt32            *getSFRows            (void) const;

                  SFUInt32            *editSFColumns        (void);
            const SFUInt32            *getSFColumns         (void) const;

                  SFReal32            *editSFHorizontalGap  (void);
            const SFReal32            *getSFHorizontalGap   (void) const;

                  SFReal32            *editSFVerticalGap    (void);
            const SFReal32            *getSFVerticalGap     (void) const;


                  UInt32              &editRows           (void);
                  UInt32               getRows            (void) const;

                  UInt32              &editColumns        (void);
                  UInt32               getColumns         (void) const;

                  Real32              &editHorizontalGap  (void);
                  Real32               getHorizontalGap   (void) const;

                  Real32              &editVerticalGap    (void);
                  Real32               getVerticalGap     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRows           (const UInt32 value);
            void setColumns        (const UInt32 value);
            void setHorizontalGap  (const Real32 value);
            void setVerticalGap    (const Real32 value);

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

    static  GridLayoutTransitPtr  create          (void);
    static  GridLayout           *createEmpty     (void);

    static  GridLayoutTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  GridLayout            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  GridLayoutTransitPtr  createDependent  (BitVector bFlags);

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

    SFUInt32          _sfRows;
    SFUInt32          _sfColumns;
    SFReal32          _sfHorizontalGap;
    SFReal32          _sfVerticalGap;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GridLayoutBase(void);
    GridLayoutBase(const GridLayoutBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GridLayoutBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRows            (void) const;
    EditFieldHandlePtr editHandleRows           (void);
    GetFieldHandlePtr  getHandleColumns         (void) const;
    EditFieldHandlePtr editHandleColumns        (void);
    GetFieldHandlePtr  getHandleHorizontalGap   (void) const;
    EditFieldHandlePtr editHandleHorizontalGap  (void);
    GetFieldHandlePtr  getHandleVerticalGap     (void) const;
    EditFieldHandlePtr editHandleVerticalGap    (void);

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

            void execSync (      GridLayoutBase *pFrom,
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
    void operator =(const GridLayoutBase &source);
};

typedef GridLayoutBase *GridLayoutBaseP;

OSG_END_NAMESPACE

#endif /* _OSGGRIDLAYOUTBASE_H_ */