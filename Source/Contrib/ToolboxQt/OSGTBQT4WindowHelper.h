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

#ifndef _OSGTBQT4WINDOWHELPER_H_
#define _OSGTBQT4WINDOWHELPER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTBQT4WindowHelperBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief TBQT4WindowHelper class. See \ref
           PageWindowTBQT4WindowHelper for a description.
*/

class OSG_CONTRIBTOOLBOXQT_DLLMAPPING TBQT4WindowHelper : public TBQT4WindowHelperBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TBQT4WindowHelperBase Inherited;
    typedef TBQT4WindowHelper     Self;

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

    //Made public:
	virtual void terminate(void) override;
    virtual void doActivate  (void) override;
    virtual void doDeactivate(void) override;
    virtual bool doSwap      (void) override;

    virtual bool hasContext  (void) override;


    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in TBQT4WindowHelperBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TBQT4WindowHelper(void);
    TBQT4WindowHelper(const TBQT4WindowHelper &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TBQT4WindowHelper(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class TBQT4WindowHelperBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TBQT4WindowHelper &source);
};

typedef TBQT4WindowHelper *TBQT4WindowHelperP;

OSG_END_NAMESPACE

#include "OSGTBQT4WindowHelperBase.inl"
#include "OSGTBQT4WindowHelper.inl"

#endif /* _OSGTBQT4WINDOWHELPER_H_ */
