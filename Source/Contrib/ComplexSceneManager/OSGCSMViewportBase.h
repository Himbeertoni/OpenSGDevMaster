/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class CSMViewport
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCSMVIEWPORTBASE_H_
#define _OSGCSMVIEWPORTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGNodeFields.h"              // Root type
#include "OSGCameraFields.h"            // Camera type
#include "OSGBackgroundFields.h"        // Background type
#include "OSGForegroundFields.h"        // Foregrounds type
#include "OSGVecFields.h"               // LeftBottom type
#include "OSGSysFields.h"               // TravMask type
#include "OSGRenderOptionsFields.h"     // RenderOptions type
#include "OSGBaseFields.h"              // StereoMode type
#include "OSGMouseDataFields.h"         // MouseDataVC type
#include "OSGMTouchDataFields.h"        // MTouchDataVC type

#include "OSGCSMViewportFields.h"

OSG_BEGIN_NAMESPACE


class CSMViewport;

//! \brief CSMViewport Base Class.

class OSG_CONTRIBCSM_DLLMAPPING CSMViewportBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CSMViewport);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RootFieldId = Inherited::NextFieldId,
        CameraFieldId = RootFieldId + 1,
        BackgroundFieldId = CameraFieldId + 1,
        ForegroundsFieldId = BackgroundFieldId + 1,
        LeftBottomFieldId = ForegroundsFieldId + 1,
        RightTopFieldId = LeftBottomFieldId + 1,
        TravMaskFieldId = RightTopFieldId + 1,
        RenderOptionsFieldId = TravMaskFieldId + 1,
        StereoModeFieldId = RenderOptionsFieldId + 1,
        PassiveFieldId = StereoModeFieldId + 1,
        ServerIdFieldId = PassiveFieldId + 1,
        MouseDataVCFieldId = ServerIdFieldId + 1,
        MTouchDataVCFieldId = MouseDataVCFieldId + 1,
        NextFieldId = MTouchDataVCFieldId + 1
    };

    static const OSG::BitVector RootFieldMask =
        (TypeTraits<BitVector>::One << RootFieldId);
    static const OSG::BitVector CameraFieldMask =
        (TypeTraits<BitVector>::One << CameraFieldId);
    static const OSG::BitVector BackgroundFieldMask =
        (TypeTraits<BitVector>::One << BackgroundFieldId);
    static const OSG::BitVector ForegroundsFieldMask =
        (TypeTraits<BitVector>::One << ForegroundsFieldId);
    static const OSG::BitVector LeftBottomFieldMask =
        (TypeTraits<BitVector>::One << LeftBottomFieldId);
    static const OSG::BitVector RightTopFieldMask =
        (TypeTraits<BitVector>::One << RightTopFieldId);
    static const OSG::BitVector TravMaskFieldMask =
        (TypeTraits<BitVector>::One << TravMaskFieldId);
    static const OSG::BitVector RenderOptionsFieldMask =
        (TypeTraits<BitVector>::One << RenderOptionsFieldId);
    static const OSG::BitVector StereoModeFieldMask =
        (TypeTraits<BitVector>::One << StereoModeFieldId);
    static const OSG::BitVector PassiveFieldMask =
        (TypeTraits<BitVector>::One << PassiveFieldId);
    static const OSG::BitVector ServerIdFieldMask =
        (TypeTraits<BitVector>::One << ServerIdFieldId);
    static const OSG::BitVector MouseDataVCFieldMask =
        (TypeTraits<BitVector>::One << MouseDataVCFieldId);
    static const OSG::BitVector MTouchDataVCFieldMask =
        (TypeTraits<BitVector>::One << MTouchDataVCFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecNodePtr    SFRootType;
    typedef SFUnrecCameraPtr  SFCameraType;
    typedef SFUnrecBackgroundPtr SFBackgroundType;
    typedef MFUnrecForegroundPtr MFForegroundsType;
    typedef SFVec2f           SFLeftBottomType;
    typedef SFVec2f           SFRightTopType;
    typedef SFUInt32          SFTravMaskType;
    typedef SFUnrecRenderOptionsPtr SFRenderOptionsType;
    typedef SFString          SFStereoModeType;
    typedef SFBool            SFPassiveType;
    typedef SFInt32           SFServerIdType;
    typedef SFMouseData       SFMouseDataVCType;
    typedef SFMTouchData      SFMTouchDataVCType;

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

            const SFUnrecNodePtr      *getSFRoot           (void) const;
                  SFUnrecNodePtr      *editSFRoot           (void);
            const SFUnrecCameraPtr    *getSFCamera         (void) const;
                  SFUnrecCameraPtr    *editSFCamera         (void);
            const SFUnrecBackgroundPtr *getSFBackground     (void) const;
                  SFUnrecBackgroundPtr *editSFBackground     (void);
            const MFUnrecForegroundPtr *getMFForegrounds    (void) const;
                  MFUnrecForegroundPtr *editMFForegrounds    (void);

                  SFVec2f             *editSFLeftBottom     (void);
            const SFVec2f             *getSFLeftBottom      (void) const;

                  SFVec2f             *editSFRightTop       (void);
            const SFVec2f             *getSFRightTop        (void) const;

                  SFUInt32            *editSFTravMask       (void);
            const SFUInt32            *getSFTravMask        (void) const;
            const SFUnrecRenderOptionsPtr *getSFRenderOptions  (void) const;
                  SFUnrecRenderOptionsPtr *editSFRenderOptions  (void);

                  SFString            *editSFStereoMode     (void);
            const SFString            *getSFStereoMode      (void) const;

                  SFBool              *editSFPassive        (void);
            const SFBool              *getSFPassive         (void) const;

                  SFInt32             *editSFServerId       (void);
            const SFInt32             *getSFServerId        (void) const;

                  SFMouseData         *editSFMouseDataVC    (void);
            const SFMouseData         *getSFMouseDataVC     (void) const;

                  SFMTouchData        *editSFMTouchDataVC   (void);
            const SFMTouchData        *getSFMTouchDataVC    (void) const;


                  Node * getRoot           (void) const;

                  Camera * getCamera         (void) const;

                  Background * getBackground     (void) const;

                  Foreground * getForegrounds    (const UInt32 index) const;

                  Vec2f               &editLeftBottom     (void);
            const Vec2f               &getLeftBottom      (void) const;

                  Vec2f               &editRightTop       (void);
            const Vec2f               &getRightTop        (void) const;

                  UInt32              &editTravMask       (void);
                  UInt32               getTravMask        (void) const;

                  RenderOptions * getRenderOptions  (void) const;

                  std::string         &editStereoMode     (void);
            const std::string         &getStereoMode      (void) const;

                  bool                &editPassive        (void);
                  bool                 getPassive         (void) const;

                  Int32               &editServerId       (void);
                  Int32                getServerId        (void) const;

                  MouseData           &editMouseDataVC    (void);
            const MouseData           &getMouseDataVC     (void) const;

                  MTouchData          &editMTouchDataVC   (void);
            const MTouchData          &getMTouchDataVC    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRoot           (Node * const value);
            void setCamera         (Camera * const value);
            void setBackground     (Background * const value);
            void setLeftBottom     (const Vec2f &value);
            void setRightTop       (const Vec2f &value);
            void setTravMask       (const UInt32 value);
            void setRenderOptions  (RenderOptions * const value);
            void setStereoMode     (const std::string &value);
            void setPassive        (const bool value);
            void setServerId       (const Int32 value);
            void setMouseDataVC    (const MouseData &value);
            void setMTouchDataVC   (const MTouchData &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToForegrounds           (Foreground * const value   );
    void assignForegrounds          (const MFUnrecForegroundPtr &value);
    void removeFromForegrounds (UInt32               uiIndex );
    void removeObjFromForegrounds(Foreground * const value   );
    void clearForegrounds            (void                         );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  CSMViewportTransitPtr  create          (void);
    static  CSMViewport           *createEmpty     (void);

    static  CSMViewportTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CSMViewport            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  CSMViewportTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecNodePtr    _sfRoot;
    SFUnrecCameraPtr  _sfCamera;
    SFUnrecBackgroundPtr _sfBackground;
    MFUnrecForegroundPtr _mfForegrounds;
    SFVec2f           _sfLeftBottom;
    SFVec2f           _sfRightTop;
    SFUInt32          _sfTravMask;
    SFUnrecRenderOptionsPtr _sfRenderOptions;
    SFString          _sfStereoMode;
    SFBool            _sfPassive;
    SFInt32           _sfServerId;
    SFMouseData       _sfMouseDataVC;
    SFMTouchData      _sfMTouchDataVC;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CSMViewportBase(void);
    CSMViewportBase(const CSMViewportBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CSMViewportBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const CSMViewport *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRoot            (void) const;
    EditFieldHandlePtr editHandleRoot           (void);
    GetFieldHandlePtr  getHandleCamera          (void) const;
    EditFieldHandlePtr editHandleCamera         (void);
    GetFieldHandlePtr  getHandleBackground      (void) const;
    EditFieldHandlePtr editHandleBackground     (void);
    GetFieldHandlePtr  getHandleForegrounds     (void) const;
    EditFieldHandlePtr editHandleForegrounds    (void);
    GetFieldHandlePtr  getHandleLeftBottom      (void) const;
    EditFieldHandlePtr editHandleLeftBottom     (void);
    GetFieldHandlePtr  getHandleRightTop        (void) const;
    EditFieldHandlePtr editHandleRightTop       (void);
    GetFieldHandlePtr  getHandleTravMask        (void) const;
    EditFieldHandlePtr editHandleTravMask       (void);
    GetFieldHandlePtr  getHandleRenderOptions   (void) const;
    EditFieldHandlePtr editHandleRenderOptions  (void);
    GetFieldHandlePtr  getHandleStereoMode      (void) const;
    EditFieldHandlePtr editHandleStereoMode     (void);
    GetFieldHandlePtr  getHandlePassive         (void) const;
    EditFieldHandlePtr editHandlePassive        (void);
    GetFieldHandlePtr  getHandleServerId        (void) const;
    EditFieldHandlePtr editHandleServerId       (void);
    GetFieldHandlePtr  getHandleMouseDataVC     (void) const;
    EditFieldHandlePtr editHandleMouseDataVC    (void);
    GetFieldHandlePtr  getHandleMTouchDataVC    (void) const;
    EditFieldHandlePtr editHandleMTouchDataVC   (void);

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

            void execSync (      CSMViewportBase *pFrom,
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
    void operator =(const CSMViewportBase &source);
};

typedef CSMViewportBase *CSMViewportBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCSMVIEWPORTBASE_H_ */
