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

#ifndef _OSGKEYFRAMEBASICSEQUENCE_H_
#define _OSGKEYFRAMEBASICSEQUENCE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGKeyframeBasicSequenceBase.h"
#include "OSGVector.h"

OSG_BEGIN_NAMESPACE

/*! \brief KeyframeBasicSequence class. See \ref
           PageDynamicsKeyframeBasicSequence for a description.
*/

class OSG_CONTRIBTOOLBOXANIMATION_DLLMAPPING KeyframeBasicSequence : public KeyframeBasicSequenceBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef KeyframeBasicSequenceBase Inherited;
    typedef KeyframeBasicSequence     Self;

    typedef std::string          GenericType;

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


    virtual GenericType getKeyValue (const UInt32       index )       = 0;

    virtual GenericType getKeyValue (const UInt32       index ) const = 0;

    virtual void        getKeyValue (      GenericType &val,
                                  const UInt32       index )       = 0;

    virtual void        getKeyValue (      GenericType &val,
                                  const UInt32       index ) const = 0;


    virtual void        setKeyframe (const GenericType &val,
                                          const Real32 &key,
                                  const UInt32       index )       = 0;

    virtual void        addKeyframe (const GenericType &val,
                                          const Real32 &key   )       = 0;

    virtual void        insertKeyframe(const GenericType &val,
                                          const Real32 &key,
                                    const UInt32 index)            = 0;

    virtual void        push_back(const GenericType &val,
                                          const Real32 &key   )       = 0;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in KeyframeBasicSequenceBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    KeyframeBasicSequence(void);
    KeyframeBasicSequence(const KeyframeBasicSequence &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~KeyframeBasicSequence(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class KeyframeBasicSequenceBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const KeyframeBasicSequence &source);
};

typedef KeyframeBasicSequence *KeyframeBasicSequenceP;

OSG_END_NAMESPACE

#include "OSGKeyframeBasicSequenceBase.inl"
#include "OSGKeyframeBasicSequence.inl"

#endif /* _OSGKEYFRAMEBASICSEQUENCE_H_ */
