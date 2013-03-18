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

#ifndef _OSGTBWIN32WINDOW_H_
#define _OSGTBWIN32WINDOW_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTBWIN32WindowBase.h"

#include "OSGKeyEventDetails.h"
#include "OSGWindowEventProducer.h"

#define CPP11_OVERRIDE override

OSG_BEGIN_NAMESPACE

/*! \brief TBWIN32Window class. See \ref
           PageWindowWIN32TBWIN32Window for a description.
*/

class OSG_WINDOW_DLLMAPPING TBWIN32Window : public TBWIN32WindowBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TBWIN32WindowBase Inherited;
    typedef TBWIN32Window     Self;

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
	
    static LRESULT CALLBACK staticWndProc(HWND hwnd, UINT uMsg,
                                          WPARAM wParam, LPARAM lParam);

#if 0
    const HWND                &getHwnd            (void) const;
#endif	
	void assignHwnd(const HWND &value); 


    virtual bool attachWindow(void) CPP11_OVERRIDE;
    virtual Window* initWindow(void) CPP11_OVERRIDE;
    virtual void mainLoop(void) CPP11_OVERRIDE;

    //Set the Window Position
    virtual void setPosition(Pnt2f Pos) CPP11_OVERRIDE;

    //Set the Window Position
    virtual Pnt2f getPosition(void) const CPP11_OVERRIDE;

    //Set the Window size
    virtual void setSize(Vec2us Size) CPP11_OVERRIDE;

    //Get the Window size
    virtual Vec2f getSize(void) const CPP11_OVERRIDE;

    //Focused
    //Set the Window Focus
    virtual void setFocused(bool Focused) CPP11_OVERRIDE;

    //Get the Window Focus
    virtual bool getFocused(void) const CPP11_OVERRIDE;

    //Visible / Iconify / Normal
    //Set the Window Visible
    virtual void setVisible(bool Visible) CPP11_OVERRIDE;

    //Get the Window Visible
    virtual bool getVisible(void) const CPP11_OVERRIDE;

    //Set the Window Iconify
    virtual void setIconify(bool Iconify) CPP11_OVERRIDE;

    //Get the Window Iconify
    virtual bool getIconify(void) const CPP11_OVERRIDE;

    //Fullscreen
    virtual void setFullscreen(bool Fullscreen) CPP11_OVERRIDE;

    //Set the text on the Title bar of the window
    virtual void setTitle(const std::string& TitleText) CPP11_OVERRIDE;

    //Get the text of the Title bar of the window
    virtual std::string getTitle(void) CPP11_OVERRIDE;

    //Set the window to allow or not allow Resizing
    virtual void setResizable(bool IsResizable) CPP11_OVERRIDE;

    //Get whether or not the window allows resizing
    virtual bool getResizable(void) CPP11_OVERRIDE;

    //Set the window to draw or not draw it's border
    virtual void setDrawBorder(bool DrawBorder) CPP11_OVERRIDE;

    //Get wether or not the window is drawing a border
    virtual bool getDrawBorder(void) CPP11_OVERRIDE;

    //Get the Window Fullscreen
    virtual bool getFullscreen(void) const CPP11_OVERRIDE;

    virtual void setShowCursor(bool showCursor) CPP11_OVERRIDE;

    virtual bool getShowCursor(void) const CPP11_OVERRIDE;

    virtual void setAttachMouseToCursor(bool attach) CPP11_OVERRIDE;

    virtual bool getAttachMouseToCursor(void) const CPP11_OVERRIDE;


    virtual void setCursorPos(Vec2f Pos);

    virtual UInt32 getKeyModifiers(void) const CPP11_OVERRIDE;
    virtual KeyEventDetails::KeyState getKeyState(KeyEventDetails::Key TheKey) const CPP11_OVERRIDE;
    virtual Pnt2f getMousePosition(void) const CPP11_OVERRIDE;

    virtual std::string getClipboard(void) const CPP11_OVERRIDE;

    virtual void putClipboard(const std::string Value) CPP11_OVERRIDE;

    virtual void openWindow(const Pnt2f& ScreenPosition,
                            const Vec2f& Size,
                            const std::string& WindowName) CPP11_OVERRIDE;

    virtual void closeWindow(void) CPP11_OVERRIDE;

    virtual void draw(void) CPP11_OVERRIDE;
    virtual void update(void) CPP11_OVERRIDE;

    virtual Vec2f getDesktopSize(void) const CPP11_OVERRIDE;

    virtual std::vector<BoostPath> openFileDialog(const std::string& WindowTitle,
                                             const std::vector<OSG::WindowEventProducer::FileDialogFilter>& Filters,
                                             const BoostPath& InitialDir,
                                             bool AllowMultiSelect) CPP11_OVERRIDE;

    virtual BoostPath saveFileDialog(const std::string& DialogTitle,
                                const std::vector<OSG::WindowEventProducer::FileDialogFilter>& Filters,
                                const std::string& InitialFile,
                                const BoostPath& InitialDirectory,
                                bool PromptForOverwrite
                               ) CPP11_OVERRIDE;


    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in TBWIN32WindowBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TBWIN32Window(void);
    TBWIN32Window(const TBWIN32Window &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TBWIN32Window(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
	typedef std::map<HWND, TBWIN32Window* > TBWIN32HWNDToProducerMap;
    static TBWIN32HWNDToProducerMap _WIN32HWNDToProducerMap;
    
    LRESULT WndProc(HWND hwnd, UINT uMsg,
                           WPARAM wParam, LPARAM lParam);

    static KeyEventDetails::Key determineKey(WPARAM key);
    /*---------------------------------------------------------------------*/
    /*! \name                MT Construction                               */
    /*! \{                                                                 */

    void onCreate       (const TBWIN32Window *source = NULL);

    void onDestroy      (      UInt32  uiContainerId);

	virtual void init(GLInitFunctor oFunc = GLInitFunctor());
	virtual void terminate   (void) CPP11_OVERRIDE;	
    virtual void doActivate  (void) CPP11_OVERRIDE;
    virtual void doDeactivate(void) CPP11_OVERRIDE;
    virtual bool doSwap      (void) CPP11_OVERRIDE;

    virtual bool hasContext  (void) CPP11_OVERRIDE;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name      Window system implementation functions                  */
    /*! \{                                                                 */
    /*! \}                                                                 */
    
	virtual void setCursor(void);
    
    bool _MouseOverWindow;

    static const UINT WIN32_DRAW_MESSAGE = WM_USER + 1;
    static const UINT WIN32_UPDATE_MESSAGE = WM_USER + 2;

    Pnt2f _PreviousWindowPosition;
    Vec2f _PreviousWindowSize;
    bool _IsFullscreen;

    bool _IsMouseCursorAssociated;
    bool _HandleNextMouseMove;
    Pnt2f _PreviousCursorPos;

    bool _RunMainLoop;
    bool _Active;

    /*==========================  PRIVATE  ================================*/	
  private:

    friend class FieldContainer;
    friend class TBWIN32WindowBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TBWIN32Window &source);
};

typedef TBWIN32Window *TBWIN32WindowP;

OSG_END_NAMESPACE

#include "OSGTBWIN32WindowBase.inl"
#include "OSGTBWIN32Window.inl"

#endif /* _OSGTBWIN32WINDOW_H_ */
