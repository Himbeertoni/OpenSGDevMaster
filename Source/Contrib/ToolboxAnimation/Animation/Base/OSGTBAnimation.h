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

#ifndef OSGTBANIMATION_H_
#define OSGTBANIMATION_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTBAnimationBase.h"

//#include "OSGAnimationAdvancer.h"
#include "OSGAnimationEventDetails.h"
#include "OSGStatElemTypes.h"

OSG_BEGIN_NAMESPACE

class OSG_CONTRIBTOOLBOXANIMATION_DLLMAPPING TBAnimation : public TBAnimationBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef TBAnimationBase Inherited;
    typedef TBAnimation     Self;

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

    virtual bool update(const Time& ElapsedTime);
    
    virtual void start(const Time& StartTime=0.0f);

    virtual void seek(const Time& SeekTime);

    virtual void pause(bool ShouldPause);

    virtual bool isPaused(void) const;

    virtual bool isPlaying(void) const;

    virtual void stop(bool DisconnectFromEventProducer = true);

    Real32 getLength(void) const;

    Real32 getCycleLength(void) const;

    virtual Real32 getUnclippedCycleLength(void) const = 0;

    virtual Real32 getUnclippedLength(void) const;

    static StatElemDesc<StatTimeElem   > statAnimUpdateTime;
    static StatElemDesc<StatIntElem    > statNAnimations;

    /*---------------------------------------------------------------------*/
    /*! \name                  Event Connectable                           */
    /*! \{                                                                 */

    void attachUpdateProducer(ReflexiveContainer* const producer);
    void detachUpdateProducer(void);

    virtual bool
    isConnectableEvent(EventDescription const * eventDesc) const;

    virtual EventDescVector getConnectableEvents(void) const;

    virtual bool
        isConnected(EventDescription const * eventDesc) const;

    virtual bool
        disconnectFromEvent(EventDescription const * eventDesc) const;

    boost::signals2::connection 
        connectToEvent(EventDescription const * eventDesc,
                       ReflexiveContainer* const eventProducer) const;
    /*! \}                                                                 */

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in AnimationBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TBAnimation(void);
    TBAnimation(const TBAnimation &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TBAnimation(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    void produceAnimationStarted(void);
    void produceAnimationStopped(void);
    void produceAnimationPaused(void);
    void produceAnimationUnpaused(void);
    void produceAnimationEnded(void);
    void produceAnimationCycled(void);

    virtual void internalUpdate(Real32 t, const Real32 prev_t)=0;

    void handleUpdate(EventDetails* const details);

    boost::signals2::connection _UpdateEventConnection;

    Time _CurrentTime,_PrevTime;
    bool _IsPlaying,_IsPaused;

    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class TBAnimationBase;
    friend class AnimationGroup;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TBAnimation &source);
};

typedef TBAnimation *TBAnimationP;

OSG_END_NAMESPACE

#include "OSGTBAnimationBase.inl"
#include "OSGTBAnimation.inl"

#endif /* _OSGANIMATION_H_ */
