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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------
#include "OSGTBQGL4Widget_qt.h"

#ifdef OSG_WITH_QT

#include <QtGui/qevent.h>

OSG_BEGIN_NAMESPACE

/*! \class OSG::QTWindow

The class for QT-based windows. See \ref PageWindowQT for a description.

*/

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  public                                                                 -
\*-------------------------------------------------------------------------*/

/*------------- constructors & destructors --------------------------------*/

/*! Constructor
*/


TBQGLWidget::TBQGLWidget(      QWidget        *parent,
                           const char           *name,
                           const QGLWidget      *shareWidget,
                                 Qt::WindowFlags f           ) :
    OSGQGLWidget(new GLContext(QGLFormat::defaultFormat()),
              parent, 
              shareWidget, 
              f                                        ) 
{
}

TBQGLWidget::TBQGLWidget(      GLContext       *context,
                                 QWidget         *parent ,
                           const QGLWidget       *shareWidget,
                                 Qt::WindowFlags  f           ) :
    OSGQGLWidget(context, parent, shareWidget, f)
{
}

TBQGLWidget::TBQGLWidget(const QGLFormat       &format,
                                 QWidget         *parent,
                           const char            *name,
                           const QGLWidget       *shareWidget,
                                 Qt::WindowFlags  f           ) :
    OSGQGLWidget(new GLContext(format), parent, shareWidget, f)
{
}


/*! Destructor
*/

TBQGLWidget::~TBQGLWidget( void )
{
}


/*------------------------------ access -----------------------------------*/

void TBQGLWidget::initializeGL(void) 
{
}

void TBQGLWidget::paintGL(void) 
{
}

void TBQGLWidget::resizeGL(int, int) 
{
}

void TBQGLWidget::makeCurrent(void)
{
    Inherited::makeCurrent();
}

void TBQGLWidget::doneCurrent(void)
{
    Inherited::doneCurrent();
}

void TBQGLWidget::swapBuffers(void)
{
    Inherited::swapBuffers();
}

bool TBQGLWidget::event(QEvent *pEvent)
{
    return Inherited::event( pEvent );
}

void TBQGLWidget::resizeEvent(QResizeEvent * ev ) 
{
    Inherited::resizeEvent( ev );
}

void TBQGLWidget::glDraw(void) 
{
    Inherited::glDraw();
}

void TBQGLWidget::paintEvent(QPaintEvent * ev ) 
{ 
    Inherited::paintEvent( ev );
};

void TBQGLWidget::doMakeCurrent(void)
{
    Inherited::doMakeCurrent();
}

void TBQGLWidget::doDoneCurrent(void)
{
    Inherited::doDoneCurrent();
}

void TBQGLWidget::doSwapBuffers(void)
{
    Inherited::doSwapBuffers();
}


OSG_END_NAMESPACE

#endif /* OSG_WITH_QT */
