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

#ifndef _OSGTBWINDOW_H_
#define _OSGTBWINDOW_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTBWindowBase.h"
#include "OSGWindowEventProducer.h"

OSG_BEGIN_NAMESPACE

/*! \brief TBWindow class. See \ref
           PageSystemTBWindow for a description.
*/

class OSG_SYSTEM_DLLMAPPING TBWindow : public TBWindowBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TBWindowBase Inherited;
    typedef TBWindow     Self;

#if 1
    virtual void openWindow(const Pnt2f& ScreenPosition,
                       const Vec2f& Size,
                       const std::string& WindowName) = 0;

    virtual void closeWindow(void) = 0;
    
    virtual void mainLoop(void) = 0;

    //Set the Window Position
    virtual void setPosition(Pnt2f Pos) = 0;

    //Set the Window Position
    virtual Pnt2f getPosition(void) const = 0;

    //Set the Window size
    virtual void setSize(Vec2us Size) = 0;

	virtual void setSize(UInt16 width,
                                 UInt16 height) = 0;

    //Get the Window size
    virtual Vec2f getSize(void) const = 0;

    //Focused
    //Set the Window Focus
    virtual void setFocused(bool Focused) = 0;

    //Get the Window Focus
    virtual bool getFocused(void) const = 0;

    //Visible / Iconify / Normal
    //Set the Window Visible
    virtual void setVisible(bool Visible) = 0;

    //Get the Window Visible
    virtual bool getVisible(void) const = 0;

    //Set the Window Iconify
    virtual void setIconify(bool Iconify) = 0;

    //Get the Window Iconify
    virtual bool getIconify(void) const = 0;

    //Fullscreen
    virtual void setFullscreen(bool Fullscreen) = 0;

    //Get the Window Fullscreen
    virtual bool getFullscreen(void) const = 0;

    //Set the text on the Title bar of the window
    virtual void setTitle(const std::string& TitleText) = 0;

    //Get the text of the Title bar of the window
    virtual std::string getTitle(void) = 0;

    //Set the window to allow or not allow Resizing
    virtual void setResizable(bool IsResizable) = 0;

    //Get whether or not the window allows resizing
    virtual bool getResizable(void) = 0;

    //Set the window to draw or not draw it's border
    virtual void setDrawBorder(bool DrawBorder) = 0;

    //Get wether or not the window is drawing a border
    virtual bool getDrawBorder(void) = 0;

    virtual void setShowCursor(bool showCursor) = 0;

    virtual bool getShowCursor(void) const = 0;
    
    virtual void setAttachMouseToCursor(bool attach) = 0;
    
    virtual bool getAttachMouseToCursor(void) const = 0;

    virtual Vec2f getDesktopSize(void) const = 0;

    virtual std::vector<BoostPath> openFileDialog(const std::string& WindowTitle,
        const std::vector<WindowEventProducer::FileDialogFilter>& Filters,
        const BoostPath& InitialDir,
        bool AllowMultiSelect) = 0;

    virtual BoostPath saveFileDialog(const std::string& DialogTitle,
                    const std::vector<WindowEventProducer::FileDialogFilter>& Filters,
                    const std::string& InitialFile,
                    const BoostPath& InitialDirectory,
                    bool PromptForOverwrite
                    ) = 0;


    virtual void draw(void) = 0;
    virtual void update(void) = 0;

    virtual bool attachWindow(void) = 0;

    virtual UInt32 getKeyModifiers(void) const = 0;
    virtual KeyEventDetails::KeyState getKeyState(KeyEventDetails::Key TheKey) const = 0;
    
    virtual Pnt2f getMousePosition(void) const = 0;

    virtual std::string getClipboard(void) const = 0;

    virtual void putClipboard(const std::string& Value) = 0;
#else
    virtual void openWindow(const Pnt2f& ScreenPosition,
                       const Vec2f& Size,
                       const std::string& WindowName);

    virtual void closeWindow(void);
    
    virtual void mainLoop(void);

    //Set the Window Position
    virtual void setPosition(Pnt2f Pos);

    //Set the Window Position
    virtual Pnt2f getPosition(void) const;

    //Set the Window size
    virtual void setSize(Vec2us Size);

	virtual void setSize(UInt16 width,
                                 UInt16 height);

    //Get the Window size
    virtual Vec2f getSize(void) const;

    //Focused
    //Set the Window Focus
    virtual void setFocused(bool Focused);

    //Get the Window Focus
    virtual bool getFocused(void) const;

    //Visible / Iconify / Normal
    //Set the Window Visible
    virtual void setVisible(bool Visible);

    //Get the Window Visible
    virtual bool getVisible(void) const;

    //Set the Window Iconify
    virtual void setIconify(bool Iconify);

    //Get the Window Iconify
    virtual bool getIconify(void) const;

    //Fullscreen
    virtual void setFullscreen(bool Fullscreen);

    //Get the Window Fullscreen
    virtual bool getFullscreen(void) const;

    //Set the text on the Title bar of the window
    virtual void setTitle(const std::string& TitleText);

    //Get the text of the Title bar of the window
    virtual std::string getTitle(void);

    //Set the window to allow or not allow Resizing
    virtual void setResizable(bool IsResizable);

    //Get whether or not the window allows resizing
    virtual bool getResizable(void);

    //Set the window to draw or not draw it's border
    virtual void setDrawBorder(bool DrawBorder);

    //Get wether or not the window is drawing a border
    virtual bool getDrawBorder(void);

    virtual void setShowCursor(bool showCursor);

    virtual bool getShowCursor(void) const;
    
    virtual void setAttachMouseToCursor(bool attach);
    
    virtual bool getAttachMouseToCursor(void) const;

    virtual Vec2f getDesktopSize(void) const;

    virtual std::vector<BoostPath> openFileDialog(const std::string& WindowTitle,
        const std::vector<WindowEventProducer::FileDialogFilter>& Filters,
        const BoostPath& InitialDir,
        bool AllowMultiSelect);

    virtual BoostPath saveFileDialog(const std::string& DialogTitle,
                    const std::vector<WindowEventProducer::FileDialogFilter>& Filters,
                    const std::string& InitialFile,
                    const BoostPath& InitialDirectory,
                    bool PromptForOverwrite
                    );


    virtual void draw(void);
    virtual void update(void);

    virtual bool attachWindow(void);

    virtual UInt32 getKeyModifiers(void) const;
    virtual KeyEventDetails::KeyState getKeyState(KeyEventDetails::Key TheKey) const;
    
    virtual Pnt2f getMousePosition(void) const;

    virtual std::string getClipboard(void) const;

    virtual void putClipboard(const std::string& Value);
#endif
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

    // Variables should all be in TBWindowBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TBWindow(void);
    TBWindow(const TBWindow &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TBWindow(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class TBWindowBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TBWindow &source);
};

typedef TBWindow *TBWindowP;

OSG_END_NAMESPACE

#include "OSGTBWindowBase.inl"
#include "OSGTBWindow.inl"

#endif /* _OSGTBWINDOW_H_ */
