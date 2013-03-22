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
 **     class Titlebar
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTITLEBARBASE_H_
#define _OSGTITLEBARBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribToolboxUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGPanel.h" // Parent

#include "OSGButtonFields.h"            // IconifyButton type
#include "OSGLabelFields.h"             // TitleLabel type
#include "OSGUIDrawObjectCanvasFields.h" // FrameIcon type
#include "OSGSysFields.h"               // DrawClose type

#include "OSGTitlebarFields.h"

OSG_BEGIN_NAMESPACE

class Titlebar;

//! \brief Titlebar Base Class.

class OSG_CONTRIBTOOLBOXUSERINTERFACE_DLLMAPPING TitlebarBase : public Panel
{
  public:

    typedef Panel Inherited;
    typedef Panel ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Titlebar);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        IconifyButtonFieldId = Inherited::NextFieldId,
        MaximizeButtonFieldId = IconifyButtonFieldId + 1,
        CloseButtonFieldId = MaximizeButtonFieldId + 1,
        TitleLabelFieldId = CloseButtonFieldId + 1,
        FrameIconFieldId = TitleLabelFieldId + 1,
        DrawCloseFieldId = FrameIconFieldId + 1,
        DrawMaximizeFieldId = DrawCloseFieldId + 1,
        DrawIconifyFieldId = DrawMaximizeFieldId + 1,
        NextFieldId = DrawIconifyFieldId + 1
    };

    static const OSG::BitVector IconifyButtonFieldMask =
        (TypeTraits<BitVector>::One << IconifyButtonFieldId);
    static const OSG::BitVector MaximizeButtonFieldMask =
        (TypeTraits<BitVector>::One << MaximizeButtonFieldId);
    static const OSG::BitVector CloseButtonFieldMask =
        (TypeTraits<BitVector>::One << CloseButtonFieldId);
    static const OSG::BitVector TitleLabelFieldMask =
        (TypeTraits<BitVector>::One << TitleLabelFieldId);
    static const OSG::BitVector FrameIconFieldMask =
        (TypeTraits<BitVector>::One << FrameIconFieldId);
    static const OSG::BitVector DrawCloseFieldMask =
        (TypeTraits<BitVector>::One << DrawCloseFieldId);
    static const OSG::BitVector DrawMaximizeFieldMask =
        (TypeTraits<BitVector>::One << DrawMaximizeFieldId);
    static const OSG::BitVector DrawIconifyFieldMask =
        (TypeTraits<BitVector>::One << DrawIconifyFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecButtonPtr  SFIconifyButtonType;
    typedef SFUnrecButtonPtr  SFMaximizeButtonType;
    typedef SFUnrecButtonPtr  SFCloseButtonType;
    typedef SFUnrecLabelPtr   SFTitleLabelType;
    typedef SFUnrecUIDrawObjectCanvasPtr SFFrameIconType;
    typedef SFBool            SFDrawCloseType;
    typedef SFBool            SFDrawMaximizeType;
    typedef SFBool            SFDrawIconifyType;

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

            const SFUnrecButtonPtr    *getSFIconifyButton  (void) const;
                  SFUnrecButtonPtr    *editSFIconifyButton  (void);
            const SFUnrecButtonPtr    *getSFMaximizeButton (void) const;
                  SFUnrecButtonPtr    *editSFMaximizeButton (void);
            const SFUnrecButtonPtr    *getSFCloseButton    (void) const;
                  SFUnrecButtonPtr    *editSFCloseButton    (void);
            const SFUnrecLabelPtr     *getSFTitleLabel     (void) const;
                  SFUnrecLabelPtr     *editSFTitleLabel     (void);
            const SFUnrecUIDrawObjectCanvasPtr *getSFFrameIcon      (void) const;
                  SFUnrecUIDrawObjectCanvasPtr *editSFFrameIcon      (void);

                  SFBool              *editSFDrawClose      (void);
            const SFBool              *getSFDrawClose       (void) const;

                  SFBool              *editSFDrawMaximize   (void);
            const SFBool              *getSFDrawMaximize    (void) const;

                  SFBool              *editSFDrawIconify    (void);
            const SFBool              *getSFDrawIconify     (void) const;


                  Button * getIconifyButton  (void) const;

                  Button * getMaximizeButton (void) const;

                  Button * getCloseButton    (void) const;

                  Label * getTitleLabel     (void) const;

                  UIDrawObjectCanvas * getFrameIcon      (void) const;

                  bool                &editDrawClose      (void);
                  bool                 getDrawClose       (void) const;

                  bool                &editDrawMaximize   (void);
                  bool                 getDrawMaximize    (void) const;

                  bool                &editDrawIconify    (void);
                  bool                 getDrawIconify     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setIconifyButton  (Button * const value);
            void setMaximizeButton (Button * const value);
            void setCloseButton    (Button * const value);
            void setTitleLabel     (Label * const value);
            void setFrameIcon      (UIDrawObjectCanvas * const value);
            void setDrawClose      (const bool value);
            void setDrawMaximize   (const bool value);
            void setDrawIconify    (const bool value);

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

    static  TitlebarTransitPtr  create          (void);
    static  Titlebar           *createEmpty     (void);

    static  TitlebarTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  Titlebar            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TitlebarTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecButtonPtr  _sfIconifyButton;
    SFUnrecButtonPtr  _sfMaximizeButton;
    SFUnrecButtonPtr  _sfCloseButton;
    SFUnrecLabelPtr   _sfTitleLabel;
    SFUnrecUIDrawObjectCanvasPtr _sfFrameIcon;
    SFBool            _sfDrawClose;
    SFBool            _sfDrawMaximize;
    SFBool            _sfDrawIconify;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TitlebarBase(void);
    TitlebarBase(const TitlebarBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TitlebarBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Titlebar *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleIconifyButton   (void) const;
    EditFieldHandlePtr editHandleIconifyButton  (void);
    GetFieldHandlePtr  getHandleMaximizeButton  (void) const;
    EditFieldHandlePtr editHandleMaximizeButton (void);
    GetFieldHandlePtr  getHandleCloseButton     (void) const;
    EditFieldHandlePtr editHandleCloseButton    (void);
    GetFieldHandlePtr  getHandleTitleLabel      (void) const;
    EditFieldHandlePtr editHandleTitleLabel     (void);
    GetFieldHandlePtr  getHandleFrameIcon       (void) const;
    EditFieldHandlePtr editHandleFrameIcon      (void);
    GetFieldHandlePtr  getHandleDrawClose       (void) const;
    EditFieldHandlePtr editHandleDrawClose      (void);
    GetFieldHandlePtr  getHandleDrawMaximize    (void) const;
    EditFieldHandlePtr editHandleDrawMaximize   (void);
    GetFieldHandlePtr  getHandleDrawIconify     (void) const;
    EditFieldHandlePtr editHandleDrawIconify    (void);

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

            void execSync (      TitlebarBase *pFrom,
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
    void operator =(const TitlebarBase &source);
};

typedef TitlebarBase *TitlebarBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTITLEBARBASE_H_ */