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
 **     class DiscUIDrawObject
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDISCUIDRAWOBJECTBASE_H_
#define _OSGDISCUIDRAWOBJECTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGUIDrawObject.h" // Parent

#include "OSGVecFields.h"               // Center type
#include "OSGSysFields.h"               // Width type
#include "OSGBaseFields.h"              // CenterColor type

#include "OSGDiscUIDrawObjectFields.h"

OSG_BEGIN_NAMESPACE

class DiscUIDrawObject;

//! \brief DiscUIDrawObject Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING DiscUIDrawObjectBase : public UIDrawObject
{
  public:

    typedef UIDrawObject Inherited;
    typedef UIDrawObject ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DiscUIDrawObject);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        CenterFieldId = Inherited::NextFieldId,
        WidthFieldId = CenterFieldId + 1,
        HeightFieldId = WidthFieldId + 1,
        StartAngleRadFieldId = HeightFieldId + 1,
        EndAngleRadFieldId = StartAngleRadFieldId + 1,
        SubDivisionsFieldId = EndAngleRadFieldId + 1,
        CenterColorFieldId = SubDivisionsFieldId + 1,
        OuterColorFieldId = CenterColorFieldId + 1,
        OpacityFieldId = OuterColorFieldId + 1,
        NextFieldId = OpacityFieldId + 1
    };

    static const OSG::BitVector CenterFieldMask =
        (TypeTraits<BitVector>::One << CenterFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector StartAngleRadFieldMask =
        (TypeTraits<BitVector>::One << StartAngleRadFieldId);
    static const OSG::BitVector EndAngleRadFieldMask =
        (TypeTraits<BitVector>::One << EndAngleRadFieldId);
    static const OSG::BitVector SubDivisionsFieldMask =
        (TypeTraits<BitVector>::One << SubDivisionsFieldId);
    static const OSG::BitVector CenterColorFieldMask =
        (TypeTraits<BitVector>::One << CenterColorFieldId);
    static const OSG::BitVector OuterColorFieldMask =
        (TypeTraits<BitVector>::One << OuterColorFieldId);
    static const OSG::BitVector OpacityFieldMask =
        (TypeTraits<BitVector>::One << OpacityFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFPnt2f           SFCenterType;
    typedef SFReal32          SFWidthType;
    typedef SFReal32          SFHeightType;
    typedef SFReal32          SFStartAngleRadType;
    typedef SFReal32          SFEndAngleRadType;
    typedef SFUInt16          SFSubDivisionsType;
    typedef SFColor4f         SFCenterColorType;
    typedef SFColor4f         SFOuterColorType;
    typedef SFReal32          SFOpacityType;

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


                  SFPnt2f             *editSFCenter         (void);
            const SFPnt2f             *getSFCenter          (void) const;

                  SFReal32            *editSFWidth          (void);
            const SFReal32            *getSFWidth           (void) const;

                  SFReal32            *editSFHeight         (void);
            const SFReal32            *getSFHeight          (void) const;

                  SFReal32            *editSFStartAngleRad  (void);
            const SFReal32            *getSFStartAngleRad   (void) const;

                  SFReal32            *editSFEndAngleRad    (void);
            const SFReal32            *getSFEndAngleRad     (void) const;

                  SFUInt16            *editSFSubDivisions   (void);
            const SFUInt16            *getSFSubDivisions    (void) const;

                  SFColor4f           *editSFCenterColor    (void);
            const SFColor4f           *getSFCenterColor     (void) const;

                  SFColor4f           *editSFOuterColor     (void);
            const SFColor4f           *getSFOuterColor      (void) const;

                  SFReal32            *editSFOpacity        (void);
            const SFReal32            *getSFOpacity         (void) const;


                  Pnt2f               &editCenter         (void);
            const Pnt2f               &getCenter          (void) const;

                  Real32              &editWidth          (void);
                  Real32               getWidth           (void) const;

                  Real32              &editHeight         (void);
                  Real32               getHeight          (void) const;

                  Real32              &editStartAngleRad  (void);
                  Real32               getStartAngleRad   (void) const;

                  Real32              &editEndAngleRad    (void);
                  Real32               getEndAngleRad     (void) const;

                  UInt16              &editSubDivisions   (void);
                  UInt16               getSubDivisions    (void) const;

                  Color4f             &editCenterColor    (void);
            const Color4f             &getCenterColor     (void) const;

                  Color4f             &editOuterColor     (void);
            const Color4f             &getOuterColor      (void) const;

                  Real32              &editOpacity        (void);
                  Real32               getOpacity         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setCenter         (const Pnt2f &value);
            void setWidth          (const Real32 value);
            void setHeight         (const Real32 value);
            void setStartAngleRad  (const Real32 value);
            void setEndAngleRad    (const Real32 value);
            void setSubDivisions   (const UInt16 value);
            void setCenterColor    (const Color4f &value);
            void setOuterColor     (const Color4f &value);
            void setOpacity        (const Real32 value);

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

    static  DiscUIDrawObjectTransitPtr  create          (void);
    static  DiscUIDrawObject           *createEmpty     (void);

    static  DiscUIDrawObjectTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  DiscUIDrawObject            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  DiscUIDrawObjectTransitPtr  createDependent  (BitVector bFlags);

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

    SFPnt2f           _sfCenter;
    SFReal32          _sfWidth;
    SFReal32          _sfHeight;
    SFReal32          _sfStartAngleRad;
    SFReal32          _sfEndAngleRad;
    SFUInt16          _sfSubDivisions;
    SFColor4f         _sfCenterColor;
    SFColor4f         _sfOuterColor;
    SFReal32          _sfOpacity;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DiscUIDrawObjectBase(void);
    DiscUIDrawObjectBase(const DiscUIDrawObjectBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DiscUIDrawObjectBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleCenter          (void) const;
    EditFieldHandlePtr editHandleCenter         (void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleHeight          (void) const;
    EditFieldHandlePtr editHandleHeight         (void);
    GetFieldHandlePtr  getHandleStartAngleRad   (void) const;
    EditFieldHandlePtr editHandleStartAngleRad  (void);
    GetFieldHandlePtr  getHandleEndAngleRad     (void) const;
    EditFieldHandlePtr editHandleEndAngleRad    (void);
    GetFieldHandlePtr  getHandleSubDivisions    (void) const;
    EditFieldHandlePtr editHandleSubDivisions   (void);
    GetFieldHandlePtr  getHandleCenterColor     (void) const;
    EditFieldHandlePtr editHandleCenterColor    (void);
    GetFieldHandlePtr  getHandleOuterColor      (void) const;
    EditFieldHandlePtr editHandleOuterColor     (void);
    GetFieldHandlePtr  getHandleOpacity         (void) const;
    EditFieldHandlePtr editHandleOpacity        (void);

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

            void execSync (      DiscUIDrawObjectBase *pFrom,
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
    void operator =(const DiscUIDrawObjectBase &source);
};

typedef DiscUIDrawObjectBase *DiscUIDrawObjectBaseP;

OSG_END_NAMESPACE

#endif /* _OSGDISCUIDRAWOBJECTBASE_H_ */