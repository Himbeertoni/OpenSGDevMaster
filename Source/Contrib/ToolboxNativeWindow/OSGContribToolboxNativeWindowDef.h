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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#ifndef _OSGCONTRIBTOOLBOXNATIVEWINDOWDEF_H_
#define _OSGCONTRIBTOOLBOXNATIVEWINDOWDEF_H_
#ifdef __sgi
#pragma once
#endif

//---------------------------------------------------------------------------
//  Defines
//---------------------------------------------------------------------------
#if defined(WIN32)
#   ifdef OSG_COMPILECONTRIBTOOLBOXNATIVEWINDOWLIB
#       define OSG_CONTRIBTOOLBOXNATIVEWINDOW_DLLMAPPING  __declspec(dllexport)
#       define OSG_CONTRIBTOOLBOXNATIVEWINDOW_EXPIMP_TMPL 
#   else
#       define OSG_CONTRIBTOOLBOXNATIVEWINDOW_DLLMAPPING  __declspec(dllimport)
#       define OSG_CONTRIBTOOLBOXNATIVEWINDOW_EXPIMP_TMPL   extern
#   endif
#else
#define OSG_CONTRIBTOOLBOXNATIVEWINDOW_DLLMAPPING
#define OSG_CONTRIBTOOLBOXNATIVEWINDOW_EXPIMP_TMPL
#endif

#endif /* _OSGCONTRIBTOOLBOXWIN32DEF_H_ */
