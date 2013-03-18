/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#ifndef _OSGTBQ4GLWIDGET_H_
#define _OSGTBQ4GLWIDGET_H_
#ifdef __sgi
#pragma once
#endif

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include "OSGConfig.h"

#ifdef OSG_WITH_QT

#include "OSGContribToolboxQtDef.h"
#include "OSGBaseTypes.h"

#include "OSGQ4GLWidget_qt.h"

namespace OSG {

class QT4Window;

/*! \brief OSGQGL widget class. See \ref PageWindowQT for a description. 
    \ingroup GrpWindowQt4Obj
    \ingroup GrpLibOSGWindowQt4
    \includebasedoc
 */

class OSG_CONTRIBTOOLBOXQT_DLLMAPPING TBQGLWidget : public OSGQGLWidget
{
    Q_OBJECT

    /*==========================  PUBLIC  =================================*/

  public:

    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TBQGLWidget(      QWidget         *parent,
                 const Char8           *name         = 0,
                 const QGLWidget       *shareWidget  = 0,
                       Qt::WindowFlags  f            = 0 );
    TBQGLWidget(      GLContext       *context,
                       QWidget         *parent      = 0,
                 const QGLWidget       *shareWidget = 0,
                       Qt::WindowFlags  f           = 0 );

    TBQGLWidget(const QGLFormat       &format      = QGLFormat::defaultFormat(),
                       QWidget         *parent      = 0,
                 const Char8           *name        = 0,
                 const QGLWidget       *shareWidget = 0,
                       Qt::WindowFlags  f           = 0 );
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Desstructor                                */
    /*! \{                                                                 */

    virtual ~TBQGLWidget();

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 OpenGL handling                              */
    /*! \{                                                                 */
    
    void makeCurrent(void);
    void doneCurrent(void);
    void swapBuffers(void);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    typedef OSGQGLWidget Inherited;

    /*---------------------------------------------------------------------*/
    /*! \name                 OpenGL handling                              */
    /*! \{                                                                 */

    virtual void initializeGL(void);
    virtual void paintGL     (void);
    virtual void resizeGL    (int w, int h);
    virtual void glDraw      (void);

    virtual bool event       (QEvent       *pEvent);
    virtual void resizeEvent (QResizeEvent *pEvent);
    virtual void paintEvent  (QPaintEvent  *pEvent);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 OpenGL handling                              */
    /*! \{                                                                 */

    void doMakeCurrent(void);
    void doDoneCurrent(void);
    void doSwapBuffers(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class QT4Window;

    /* prohibit default function (move to 'public' if needed) */
    TBQGLWidget(const TBQGLWidget &source);
    /* prohibit default function (move to 'public' if needed) */
    void operator =(const TBQGLWidget &source);
};

typedef TBQGLWidget * TBQGLWidgetP;                      

}

#include "OSGQ4GLWidget_qt.inl"

#endif // OSG_WITH_QT

#endif // _OSGQGL4WIDGET_H_