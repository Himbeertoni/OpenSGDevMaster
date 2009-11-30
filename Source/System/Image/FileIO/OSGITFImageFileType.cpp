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
//-------------------------------
// Includes  
//-------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGITFImageFileType.h"
#include "OSGGeoReferenceAttachment.h"
#include "OSGImageFileHandler.h"

OSG_USING_NAMESPACE


TiledImageBlockAccessor::~TiledImageBlockAccessor(void)
{
}

bool TiledImageBlockAccessor::isOpen(void)
{
    return (_vImages.size() != 0);
}


TiledImageBlockAccessor::TiledImageBlockAccessor(void) :
     Inherited   ( ),
    _uiRows      (0),
    _uiColumns   (0),
    _vImages     ( ),
    _vSampleDescs( ),
    _vI16Buffer  ( )
{
}

void TiledImageBlockAccessor::open(const Char8 *szFilename)
{
    fprintf(stderr, "Open Tiled %s\n", szFilename);

    FILE *pFile = fopen(szFilename, "r");

    Char8 szRow[1024];

    const Char8 *szDelim = " \t\n ";

    std::string szBuffer;

    if(pFile != NULL)
    {
        while(!feof(pFile))
        {
            fgets(szRow, 1024, pFile);
            
            szBuffer.append(szRow);
        }
 
        fprintf(stderr, "got %s\n", szBuffer.c_str());

        string_token_iterator cIt (szBuffer, szDelim);
        string_token_iterator cEnd;

        _uiColumns = TypeTraits<UInt32>::getFromCString((*cIt).c_str());

        fprintf(stderr, "C: %d\n", _uiColumns);

        ++cIt;

        _uiRows = TypeTraits<UInt32>::getFromCString((*cIt).c_str());

        fprintf(stderr, "R: %d\n", _uiRows);
        
        ++cIt;

        for(UInt32 i = 0; i < _uiRows * _uiColumns; ++i)
        {
            if(cIt == cEnd)
            {
                break;
            }

            fprintf(stderr, "File -%s-\n", (*cIt).c_str());

            ImageBlockAccessorPtr pAccess = 
                ImageFileHandler::the()->open((*cIt).c_str());

            _vImages.push_back(pAccess);

            ++cIt;

        }

        if(_vImages.size() != _uiRows * _uiColumns || _vImages.size() == 0)
        {
            fprintf(stderr, "Images missing %d %d\n",
                    _vImages.size(),
                    _uiRows * _uiColumns);

            _vImages.clear();

            return;
        }

        _vSampleDescs.resize(_vImages.size());

        UInt32 uiIdx      = 0;
        UInt32 uiOtherIdx = 0;

        _vSampleDescs[0].setBounds( 0, 
                                    0, 
                                   _vImages[0]->getSize()[0],
                                   _vImages[0]->getSize()[1]);

        for(UInt32 i = 1; i < _uiRows; ++i)
        {
            uiIdx      = i * _uiColumns;
            uiOtherIdx = uiIdx - _uiColumns;

            _vSampleDescs[uiIdx].setBounds(
                _vSampleDescs[uiOtherIdx].x0,
                _vSampleDescs[uiOtherIdx].y1,
                _vImages     [uiIdx     ]->getSize()[0],
                _vImages     [uiIdx     ]->getSize()[1]);
        }

        for(UInt32 i = 1; i < _uiColumns; ++i)
        {
            _vSampleDescs[i].setBounds(
                _vSampleDescs[i - 1].x1,
                _vSampleDescs[i - 1].y0,
                _vImages     [i    ]->getSize()[0],
                _vImages     [i    ]->getSize()[1]);
        }


        for(UInt32 i = 1; i < _uiRows; ++i)
        {
            for(UInt32 j = 1; j < _uiColumns; ++j)
            { 
                uiIdx      =  i      * _uiColumns +  j;
                uiOtherIdx = (i - 1) * _uiColumns + (j - 1);

                _vSampleDescs[uiIdx].setBounds(
                    _vSampleDescs[uiOtherIdx].x1,
                    _vSampleDescs[uiOtherIdx].y1,
                    _vImages     [uiIdx     ]->getSize()[0],
                    _vImages     [uiIdx     ]->getSize()[1]);
            }
        }

        for(UInt32 i = 0; i < _uiRows; ++i)
        {
            for(UInt32 j = 0; j < _uiColumns; ++j)
            {
                uiIdx = i * _uiColumns + j;

                fprintf(stderr, "(%d)(%d %d) | %d %d %d %d\n",
                        uiIdx, i, j,
                        _vSampleDescs[uiIdx].x0,
                        _vSampleDescs[uiIdx].y0,
                        _vSampleDescs[uiIdx].x1,
                        _vSampleDescs[uiIdx].y1);
            }
        }

        _vSize.setValues(_vSampleDescs.back().x1,
                         _vSampleDescs.back().y1);
                         
        GeoReferenceAttachmentPtr pFirstRef = 
            _vImages.front()->getGeoRef();

        OSG::setRefd(_pGeoRef, GeoReferenceAttachment::create());

        _pGeoRef->setOrigin       (pFirstRef->getOrigin       ());
        _pGeoRef->setPixelSize    (pFirstRef->getPixelSize    ());
        _pGeoRef->setEllipsoidAxis(pFirstRef->getEllipsoidAxis());
        _pGeoRef->setDatum        (pFirstRef->getDatum        ());

        _eImgType   = _vImages.front()->getType  ();
        _eImgFormat = _vImages.front()->getFormat();

        fclose(pFile);
    }
}

 bool TiledImageBlockAccessor::readBlockA16(Vec2i   vSampleOrigin,
                                            Int32   iTextureSize,
                                            UInt16 *pTarget,
                                            Int32   iTargetSizeBytes)
{
#if 0
    UInt32 destIdx = 0;

    UInt8 *pDst = (UInt8 *) pTarget;

    Int32 xMin = vSampleOrigin.x();
    Int32 xMax = vSampleOrigin.x() + iTextureSize;

    Int32 yMin = vSampleOrigin.y();
    Int32 yMax = vSampleOrigin.y() + iTextureSize;

    for(UInt32 y = yMin; y < yMax; y++)
    {
        for(UInt32 x = xMin; x < xMax; x++)
        {
            for(UInt32 i = 0; i < 2; i++)
            {
                pDst[destIdx] = 0;

                destIdx++;
            }
        }
        
        destIdx += (iTextureSize - (xMax - xMin)) * 2;
    }
#endif

    return true;
}

bool TiledImageBlockAccessor::readBlockA16(Vec2i   vSampleOrigin,
                                           Int32   iTextureSize,
                                           Int16  *pTarget,
                                           Int32   iTargetSizeBytes)
{
    Vec2i vLow  (vSampleOrigin.x(), vSampleOrigin.y());

    Vec2i vHeigh(vSampleOrigin.x() + iTextureSize, 
                 vSampleOrigin.y() + iTextureSize);

    UInt32 iFound = 0;

    Int32 iLow   = -1;
    Int32 iHeigh = -1;

    for(UInt32 i = 0; i < _vSampleDescs.size(); ++i)
    {
        if(_vSampleDescs[i].contains(vLow) == true)
        {
            iLow = i;

            ++iFound;
        }
        
        if(_vSampleDescs[i].contains(vHeigh) == true)
        {
            iHeigh = i;

            ++iFound;
        }

        if(iFound == 2)
            break;
    }


    if(iLow == -1 && iHeigh == -1)
    {
        UInt32 destIdx = 0;

        for(UInt32 y = 0; y < iTextureSize; y++)
        {
            for(UInt32 x = 0; x < iTextureSize; x++)
            {
                pTarget[destIdx] = 20000;
                    
                destIdx++;
            }
        }    
    }
    else if(iLow == iHeigh)
    {
        Vec2i vNewSampleOrigin(vSampleOrigin.x() - _vSampleDescs[iLow].x0,
                               vSampleOrigin.y() - _vSampleDescs[iLow].y0);

        return _vImages[iLow]->readBlockA16(vNewSampleOrigin,
                                            iTextureSize,
                                            pTarget,
                                            iTargetSizeBytes);
    }
    else if( (iHeigh - iLow) == 1)
    {
        UInt32 destIdx = 0;

        for(UInt32 y = 0; y < iTextureSize; y++)
        {
            for(UInt32 x = 0; x < iTextureSize; x++)
            {
                pTarget[destIdx] = 6000;
                    
                destIdx++;
            }
        }    

        read2HBlocksA16(iLow,
                        iHeigh,
                        vSampleOrigin,
                        iTextureSize,
                        pTarget,
                        iTargetSizeBytes);
    }
    else if( (iHeigh - iLow) == _uiColumns)
    {
        UInt32 destIdx = 0;

        for(UInt32 y = 0; y < iTextureSize; y++)
        {
            for(UInt32 x = 0; x < iTextureSize; x++)
            {
                pTarget[destIdx] = 7000;
                    
                destIdx++;
            }
        }    

        read2VBlocksA16(iLow,
                        iHeigh,
                        vSampleOrigin,
                        iTextureSize,
                        pTarget,
                        iTargetSizeBytes);
    }
    else if( (iHeigh - iLow) == (_uiColumns + 1))
    {
        UInt32 destIdx = 0;

        for(UInt32 y = 0; y < iTextureSize; y++)
        {
            for(UInt32 x = 0; x < iTextureSize; x++)
            {
                pTarget[destIdx] = 8000;
                    
                destIdx++;
            }
        }    

        read4BlocksA16(iLow,
                       iHeigh,
                       vSampleOrigin,
                       iTextureSize,
                       pTarget,
                       iTargetSizeBytes);
    }
    else if(iLow != -1 && iHeigh == -1)
    {
/*
        fprintf(stderr, "%d | %d : %d\n", 
                iFound,
                iLow, 
                iHeigh);
 */
        Vec2i vNewSampleOrigin(vSampleOrigin.x() - _vSampleDescs[iLow].x0,
                               vSampleOrigin.y() - _vSampleDescs[iLow].y0);

        return _vImages[iLow]->readBlockA16(vNewSampleOrigin,
                                            iTextureSize,
                                            pTarget,
                                            iTargetSizeBytes);
    }
    else
    {
/*
        fprintf(stderr, "%d %d | %d %d\n", 
                vLow[0],   vLow[1],
                vHeigh[0], vHeigh[1]);

        fprintf(stderr, "%d | %d : %d\n", 
                iFound,
                iLow, 
                iHeigh);
 */
        UInt32 destIdx = 0;

        for(UInt32 y = 0; y < iTextureSize; y++)
        {
            for(UInt32 x = 0; x < iTextureSize; x++)
            {
                pTarget[destIdx] = 15000;
                    
                destIdx++;
            }
        }    
    }

    return true;
}

bool TiledImageBlockAccessor::read2HBlocksA16(Int32   iLow,
                                              Int32   iHeigh,
                                              Vec2i   vSampleOrigin,
                                              Int32   iTextureSize,
                                              Int16  *pTarget,
                                              Int32   iTargetSizeBytes)
{
    Vec2i vNewSampleOrigin(vSampleOrigin.x() - _vSampleDescs[iLow].x0,
                           vSampleOrigin.y() - _vSampleDescs[iLow].y0);

    _vImages[iLow]->readBlockA16(vNewSampleOrigin,
                                 iTextureSize,
                                 pTarget,
                                 iTargetSizeBytes);
    

    _vI16Buffer.resize(iTextureSize * iTextureSize);

    vNewSampleOrigin.setValues(0,
                               vSampleOrigin.y() - _vSampleDescs[iLow  ].y0);

    _vImages[iHeigh]->readBlockA16(vNewSampleOrigin,
                                   iTextureSize,
                                   &(_vI16Buffer[0]),
                                   iTargetSizeBytes);

    UInt32 destIdx = 0;
    UInt32 srcIdx  = 0;

    Int32 xMin = vSampleOrigin.x();
    Int32 xMax = vSampleOrigin.x() + iTextureSize;
    
    Int32 yMin = vSampleOrigin.y();
    Int32 yMax = vSampleOrigin.y() + iTextureSize;

    for(UInt32 y = yMin; y < yMax; y++)
    {
        srcIdx = (y - yMin) * iTextureSize;

        for(UInt32 x = xMin; x < xMax; x++)
        {
            if(x >= _vSampleDescs[iHeigh].x0)
            {
                pTarget[destIdx] = _vI16Buffer[srcIdx];

                ++srcIdx;
            }

            ++destIdx;
        }

    }

    return true;
}

bool TiledImageBlockAccessor::read2VBlocksA16(Int32   iLow,
                                              Int32   iHeigh,
                                              Vec2i   vSampleOrigin,
                                              Int32   iTextureSize,
                                              Int16  *pTarget,
                                              Int32   iTargetSizeBytes)
{
    Vec2i vNewSampleOrigin(vSampleOrigin.x() - _vSampleDescs[iLow].x0,
                           vSampleOrigin.y() - _vSampleDescs[iLow].y0);

    _vImages[iLow]->readBlockA16(vNewSampleOrigin,
                                 iTextureSize,
                                 pTarget,
                                 iTargetSizeBytes);
    

    _vI16Buffer.resize(iTextureSize * iTextureSize);

    vNewSampleOrigin.setValues(vSampleOrigin.x() - _vSampleDescs[iLow  ].x0,
                               0);

    _vImages[iHeigh]->readBlockA16(vNewSampleOrigin,
                                   iTextureSize,
                                   &(_vI16Buffer[0]),
                                   iTargetSizeBytes);

    UInt32 destIdx = 0;
    UInt32 srcIdx  = 0;

    Int32 xMin = vSampleOrigin.x();
    Int32 xMax = vSampleOrigin.x() + iTextureSize;
    
    Int32 yMin = vSampleOrigin.y();
    Int32 yMax = vSampleOrigin.y() + iTextureSize;

    for(UInt32 y = yMin; y < yMax; y++)
    {
        for(UInt32 x = xMin; x < xMax; x++)
        {
            if(y >= _vSampleDescs[iHeigh].y0)
            {
                pTarget[destIdx] = _vI16Buffer[srcIdx];

                ++srcIdx;
            }

            ++destIdx;
        }
    }

    return true;
}

bool TiledImageBlockAccessor::read4BlocksA16(Int32   iLow,
                                             Int32   iHeigh,
                                             Vec2i   vSampleOrigin,
                                             Int32   iTextureSize,
                                             Int16  *pTarget,
                                             Int32   iTargetSizeBytes)
{
    Vec2i vNewSampleOrigin(vSampleOrigin.x() - _vSampleDescs[iLow].x0,
                           vSampleOrigin.y() - _vSampleDescs[iLow].y0);

    _vImages[iLow]->readBlockA16(vNewSampleOrigin,
                                 iTextureSize,
                                 pTarget,
                                 iTargetSizeBytes);
    

    _vI16Buffer.resize(iTextureSize * iTextureSize);

    vNewSampleOrigin.setValues(0,
                               vSampleOrigin.y() - _vSampleDescs[iLow  ].y0);

    _vImages[iLow + 1]->readBlockA16(vNewSampleOrigin,
                                     iTextureSize,
                                     &(_vI16Buffer[0]),
                                     iTargetSizeBytes);
    
    UInt32 destIdx = 0;
    UInt32 srcIdx  = 0;

    Int32 xMin = vSampleOrigin.x();
    Int32 xMax = vSampleOrigin.x() + iTextureSize;
    
    Int32 yMin = vSampleOrigin.y();
    Int32 yMax = vSampleOrigin.y() + iTextureSize;

    for(UInt32 y = yMin; y < yMax; y++)
    {
        srcIdx = (y - yMin) * iTextureSize;

        for(UInt32 x = xMin; x < xMax; x++)
        {
            if(x >= _vSampleDescs[iLow + 1].x0)
            {
                pTarget[destIdx] = _vI16Buffer[srcIdx];

                ++srcIdx;
            }

            ++destIdx;
        }
    }

    vNewSampleOrigin.setValues(vSampleOrigin.x() - _vSampleDescs[iLow  ].x0,
                               0);

    _vImages[iLow + _uiColumns]->readBlockA16(vNewSampleOrigin,
                                              iTextureSize,
                                              &(_vI16Buffer[0]),
                                              iTargetSizeBytes);
    
    destIdx = 0;
    srcIdx  = 0;

    for(UInt32 y = yMin; y < yMax; y++)
    {
        for(UInt32 x = xMin; x < xMax; x++)
        {
            if(y >= _vSampleDescs[iLow + _uiColumns].y0)
            {
                pTarget[destIdx] = _vI16Buffer[srcIdx];

                ++srcIdx;
            }

            ++destIdx;
        }
    }

    vNewSampleOrigin.setValues(0, 0);

    _vImages[iHeigh]->readBlockA16(vNewSampleOrigin,
                                   iTextureSize,
                                   &(_vI16Buffer[0]),
                                   iTargetSizeBytes);
    destIdx = 0;
    srcIdx  = 0;

    for(UInt32 y = yMin; y < yMax; y++)
    {
        srcIdx = (y - yMin) * iTextureSize;

        for(UInt32 x = xMin; x < xMax; x++)
        {
            if(x >= _vSampleDescs[iHeigh].x0 &&
               y >= _vSampleDescs[iHeigh].y0)
            {
                pTarget[destIdx] = _vI16Buffer[srcIdx];

                ++srcIdx;
            }

            ++destIdx;
        }
    }

    return true;
}

/*! \class OSG::GDALImageFileType 
    \ingroup GrpSystemImage
  
  Image File Type to read/write and store/restore Image objects as
  GDAL (tif/tiff suffix) data.
  
  To be able to load TIFF images you need the IJG TIFF library, 
  (check the Prerequisites page on www.opensg.org). 
  The lib comes with all Linux distributions.
  
  You have to --enable-tif in the configure line to enable
  the singleton object.
  
 */


// Static Class Varible implementations:
static const Char8 *suffixArray[] = 
{
    "itf"
};

ITFImageFileType ITFImageFileType:: _the("image/itf",
                                         suffixArray, 
                                         sizeof(suffixArray),
                                         0);


//-------------------------------------------------------------------------
/*! Tries to fill the image object with the data read from
    the given fileName. Returns true on success.
 */


//-------------------------------------------------------------------------
/*! Tries to write the image object to the given output stream.
    Returns true on success.
*/


bool ITFImageFileType::validateHeader(const Char8 *fileName, bool &implemented)
{
    implemented = true;

    return true;
}

ImageBlockAccessorPtr ITFImageFileType::open(const Char8 *fileName)
{
    TiledImageBlockAccessorPtr returnValue(new TiledImageBlockAccessor);

    returnValue->open(fileName);

    return returnValue;
}

//-------------------------------------------------------------------------
/*! Constructor used for the singleton object
 */

ITFImageFileType::ITFImageFileType(const Char8  *mimeType,
                                   const Char8  *suffixArray[],
                                         UInt16  suffixByteCount,
                                         UInt32  flags) :
    Inherited(mimeType,
              suffixArray, 
              suffixByteCount, 
              flags          )
{
}

//-------------------------------------------------------------------------
/*! Destructor
 */

ITFImageFileType::~ITFImageFileType(void)
{
}
