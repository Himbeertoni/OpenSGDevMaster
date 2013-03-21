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

#ifndef _OSGWINDOWEVENTPRODUCEREVENTSOURCE_H_
#define _OSGWINDOWEVENTPRODUCEREVENTSOURCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGWindowEventProducerEventSourceBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief WindowEventProducerEventSource class. See \ref
           PageContribToolboxWindowWindowEventProducerEventSource for a description.
*/

class OSG_CONTRIBTOOLBOXWINDOW_DLLMAPPING WindowEventProducerEventSource : public WindowEventProducerEventSourceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef WindowEventProducerEventSourceBase Inherited;
    typedef WindowEventProducerEventSource     Self;

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

    // Variables should all be in WindowEventProducerEventSourceBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    WindowEventProducerEventSource(void);
    WindowEventProducerEventSource(const WindowEventProducerEventSource &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~WindowEventProducerEventSource(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class WindowEventProducerEventSourceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const WindowEventProducerEventSource &source);
};

typedef WindowEventProducerEventSource *WindowEventProducerEventSourceP;

OSG_END_NAMESPACE
#include "OSGWindowEventDetails.h"
#include "OSGMouseEventDetails.h"
#include "OSGKeyEventDetails.h"
#include "OSGMouseWheelEventDetails.h"
#include "OSGUpdateEventDetails.h"
#include "OSGWindowEventProducerEventSourceBase.inl"
#include "OSGWindowEventProducerEventSource.inl"

#endif /* _OSGWINDOWEVENTPRODUCEREVENTSOURCE_H_ */
