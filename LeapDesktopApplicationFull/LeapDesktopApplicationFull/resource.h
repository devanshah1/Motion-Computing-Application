/*******************************************************************************************
*
*  Source File Name = resource.h
*
*  Descriptive Name = Contains the global definitions for resources to be used throughout
*                     the project. This includes images, font, dictionary resources.
*
*  List of Functions/Classes:
*
*     N / A
*
*  Dependencies:
*
*     Make sure that the cinder resource header file is available and accessible.
*
*  Restrictions:
*
*     Make sure that all resource linker options are set correctly to avoid failures. Compiling supported
*     only on windows 32 bit.
*
*
*  Supported Platforms:
*       Windows 32 bit
*
*  Project Developers:
*      Devan Shah        (100428864)
*      Ravikumar Patel   (100423830)
*      Parth Patel       (100392782)
*      Miguel Arindaeng  (100394094)
*
*  Change Log:
*    DATE      DESCRIPTION                                           Name
*  dd/mmm/yyyy
*  ========================================================================================
*  02/02/2015  Initial drop - File contains global resource          Devan Shah 100428864
*                             declaration to be used throughout
*                             all cpp files.
*
*  31/03/2015  Fix - Minor issue with RES_FONT and pragma once       Devan Shah 100428864
*
*  07/04/2015  Updating - Changing LeapGestureFeedBack class and     Devan Shah 100428864
*                         file name to LeapDesktopAppFull
*
*******************************************************************************************/
#pragma once
#include "cinder/CinderResources.h"

// Custom Font
#define RES_FONT				    CINDER_RESOURCE( ../resources/, YanoneKaffeesatz-Regular.ttf, 128, TTF_FONT )

// Gesture Feedback Images
#define RES_CLOCKWISE_IMAGE	        CINDER_RESOURCE( ../resources/, clockWise.png, 1, IMAGE )
#define RES_COUNTERCLOCKWISE_IMAGE  CINDER_RESOURCE( ../resources/, counterClockWise.png, 2, IMAGE )
#define RES_KEYTAP_IMAGE	        CINDER_RESOURCE( ../resources/, keyTap1.png, 3, IMAGE )
#define RES_KEYTAPRELEASE_IMAGE	    CINDER_RESOURCE( ../resources/, keyTap2.png, 4, IMAGE )
#define RES_SUPPORTEDGESTURES_IMAGE	CINDER_RESOURCE( ../resources/, supportedGestures.png, 5, IMAGE )
#define RES_SWIPEDOWN_IMAGE	        CINDER_RESOURCE( ../resources/, swipeDown.png, 6, IMAGE )
#define RES_SWIPELEFT_IMAGE	        CINDER_RESOURCE( ../resources/, swipeLeft.png, 7, IMAGE )
#define RES_SWIPERIGHT_IMAGE	    CINDER_RESOURCE( ../resources/, swipeRight.png, 8, IMAGE )
#define RES_SWIPEUP_IMAGE	        CINDER_RESOURCE( ../resources/, swipeUp.png, 9, IMAGE )
