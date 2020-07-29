//
//  PtpWebcamPtp.h
//  PTP Webcam
//
//  Created by Dömötör Gulyás on 27.07.2020.
//  Copyright © 2020 Doemoetoer Gulyas. All rights reserved.
//

#ifndef PtpWebcamPtp_h
#define PtpWebcamPtp_h

#define PTP_TYPE_COMMAND 0x0001

#define PTP_CMD_GETDEVICEINFO	0x1001
#define PTP_CMD_GETNUMOBJECTS	0x1006
//#define PTP_CMD_GETOBJECT		0x1009

#define PTP_CMD_GETPROPDESC		0x1014
#define PTP_CMD_GETPROPVAL		0x1015
#define PTP_CMD_SETPROPVAL		0x1016

#define PTP_CMD_NIKON_STARTLIVEVIEW		0x9201
#define PTP_CMD_NIKON_STOPLIVEVIEW		0x9202
#define PTP_CMD_NIKON_GETLIVEVIEWIMG	0x9203

#define PTP_CMD_CANON_GETEVFIMG			0x902C

#define PTP_RSP_OK					0x2001
#define PTP_RSP_INCOMPLETETRANSFER	0x2007
#define PTP_RSP_DEVICEBUSY			0x2019
#define PTP_RSP_NIKON_NOTLIVEVIEW	0xA00B

#define PTP_CMD_NIKON_AFDRIVE			0x90C1
#define PTP_CMD_NIKON_DEVICEREADY		0x90C8
#define PTP_CMD_NIKON_GETVENDORPROPS	0x90CA
#define MTP_CMD_GETOBJECTPROPSSUPPORTED	0x9801
#define PTP_CMD_NIKON_MFDRIVE			0x9204
	#define PTP_NIKON_MFDRIVE_CLOSER	0x00000001
	#define PTP_NIKON_MFDRIVE_FARTHER	0x00000002

#define PTP_PROP_BATTERYLEVEL	0x5001
#define PTP_PROP_WHITEBALANCE	0x5005
#define PTP_PROP_FNUM			0x5007
#define PTP_PROP_FLEN			0x5008
#define PTP_PROP_FOCUSDISTANCE	0x5009
#define PTP_PROP_EXPOSURETIME	0x500D
#define PTP_PROP_EXPOSUREPM		0x500E
#define PTP_PROP_EXPOSUREISO	0x500F
#define PTP_PROP_EXPOSUREBIAS	0x5010

#define PTP_PROP_NIKON_ANGLELEVEL			0xD067
#define PTP_PROP_NIKON_ANGLELEVELPITCHING	0xD07D
#define PTP_PROP_NIKON_ANGLELEVELYAWING		0xD07E
#define PTP_PROP_NIKON_WARNINGSTATUS		0xD102
#define PTP_PROP_NIKON_LV_APPLYSETTINGS		0xD17B
#define PTP_PROP_NIKON_LV_MODE				0xD1A0
#define PTP_PROP_NIKON_LV_DRIVEMODE			0xD1A1
#define PTP_PROP_NIKON_LV_STATUS			0xD1A2
#define PTP_PROP_NIKON_LV_EXPOSURE_PREVIEW	0xD1A5
#define PTP_PROP_NIKON_LV_SELECTOR			0xD1A6
#define PTP_PROP_NIKON_LV_WHITEBALANCE		0xD1A7
#define PTP_PROP_NIKON_MOVIE_EXPOSUREBIAS	0xD1AB
#define PTP_PROP_NIKON_LV_IMAGESIZE			0xD1AC
#define PTP_PROP_NIKON_LV_IMAGECOMPRESSION	0xD1BC

#define PTP_PROP_CANON_APERTURE				0xD101
#define PTP_PROP_CANON_EXPOSURETIME			0xD102
#define PTP_PROP_CANON_ISO					0xD103
#define PTP_PROP_CANON_EXPOSUREBIAS			0xD104
#define PTP_PROP_CANON_AUTOEXPOSURE			0xD105
#define PTP_PROP_CANON_METERINGMODE			0xD107
#define PTP_PROP_CANON_AUTOPOWEROFF			0xD114

#define PTP_PROP_CANON_LV_EYEDETECT			0xD12C
#define PTP_PROP_CANON_LV_CFILTERKIND		0xD137
#define PTP_PROP_CANON_EVF_OUTPUTDEVICE		0xD1B0
#define PTP_PROP_CANON_EVF_MODE				0xD1B1
#define PTP_PROP_CANON_EVF_DOF_PREVIEW		0xD1B2
#define PTP_PROP_CANON_EVF_WHITEBALANCE		0xD1B4
#define PTP_PROP_CANON_EVF_COLORTEMP		0xD1B6
#define PTP_PROP_CANON_EVF_EXPOSURE_PREVIEW	0xD1B7
//#define PTP_PROP_CANON_EVF_ZOOM				0x????
//#define PTP_PROP_CANON_EVF_ZOOMPOSITION		0x????
//#define PTP_PROP_CANON_EVF_ZOOMRECT			0x????
//#define PTP_PROP_CANON_EVF_IMAGEPOSITION		0x????
//#define PTP_PROP_CANON_EVF_COORDINATES		0x????
#define PTP_PROP_CANON_LV_AFMODE				0xD1BA
#define PTP_PROP_CANON_LV_TYPESELECT			0xD1BC


#define PTP_EVENT_DEVICEPROPCHANGED			0x4006

enum {
	PTP_DATATYPE_INVALID,
	PTP_DATATYPE_UINT8_RAW,
	PTP_DATATYPE_SINT16_RAW,
	PTP_DATATYPE_UINT16_RAW,
	PTP_DATATYPE_UINT32_RAW,
};


#endif /* PtpWebcamPtp_h */
