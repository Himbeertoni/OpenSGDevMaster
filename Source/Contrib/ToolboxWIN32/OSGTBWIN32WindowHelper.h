/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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

#ifndef _OSGTBWIN32WINDOWHELPER_H_
#define _OSGTBWIN32WINDOWHELPER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTBWIN32WindowHelperBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief TBWIN32WindowHelper class. See \ref
           PageWindowTBWIN32WindowHelper for a description.
*/

class OSG_CONTRIBTOOLBOXWIN32_DLLMAPPING TBWIN32WindowHelper : public TBWIN32WindowHelperBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TBWIN32WindowHelperBase Inherited;
    typedef TBWIN32WindowHelper     Self;

	virtual void terminate(void) override;
    virtual void doActivate  (void) override;
    virtual void doDeactivate(void) override;
    virtual bool doSwap      (void) override;

    virtual bool hasContext  (void) override;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:
	  virtual void onDestroy     (      UInt32          uiContainerId     );
    // Variables should all be in TBWIN32WindowHelperBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TBWIN32WindowHelper(void);
    TBWIN32WindowHelper(const TBWIN32WindowHelper &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TBWIN32WindowHelper(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class TBWIN32WindowHelperBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TBWIN32WindowHelper &source);
};

typedef TBWIN32WindowHelper *TBWIN32WindowHelperP;

OSG_END_NAMESPACE

#include "OSGTBWIN32WindowHelperBase.inl"
#include "OSGTBWIN32WindowHelper.inl"

#endif /* _OSGTBWIN32WINDOWHELPER_H_ */
