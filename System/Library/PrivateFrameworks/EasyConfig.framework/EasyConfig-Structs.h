/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned channelOfDestinationAP : 1;
	unsigned channelOfSWAP : 1;
	unsigned easyConfigStoppedReasonError : 1;
	unsigned enterSetupCodeMs : 1;
	unsigned rssiOfDestinationAP : 1;
	unsigned rssiOfSWAP : 1;
	unsigned secondsToApplyConfig : 1;
	unsigned secondsToCompleteFullConfig : 1;
	unsigned secondsToCompleteMFiSAPAuth : 1;
	unsigned secondsToCompletePostConfigCheck : 1;
	unsigned secondsToFindPostConfigDevice : 1;
	unsigned secondsToFindPreConfigDevice : 1;
	unsigned secondsToGetLinkUpOnDestination : 1;
	unsigned secondsToGetLinkUpOnSWAP : 1;
	unsigned snrOfDestinationAP : 1;
	unsigned snrOfSWAP : 1;
	unsigned wifiJoinDestinationAPError : 1;
	unsigned wifiJoinSWAPError : 1;
	unsigned adminPasswordSet : 1;
	unsigned destinationNetworkPSKInKeychain : 1;
	unsigned destinationNetworkRecommendationUsed : 1;
	unsigned hitJoiningDestinationAPTimeout : 1;
	unsigned hitJoiningTargetSWAPTimeout : 1;
	unsigned pauseAfterApply : 1;
	unsigned playPasswordSet : 1;
	unsigned userChangedFriendlyName : 1;
} SCD_Struct_AW1;

typedef struct BonjourBrowser* BonjourBrowserRef;

typedef struct HTTPClientPrivate* HTTPClientPrivateRef;

typedef struct MFiSAP* MFiSAPRef;

typedef struct PairingSessionPrivate* PairingSessionPrivateRef;

typedef struct {
	double startTime;
	unsigned char userChangedFriendlyName;
	unsigned char playPasswordSet;
	unsigned char adminPasswordSet;
	unsigned char destinationNetworkRecommendationUsed;
	double secondsToGetLinkUpOnSWAP;
	int wifiJoinSWAPError;
	unsigned char hitJoiningTargetSWAPTimeout;
	int rssiOfSWAP;
	unsigned snrOfSWAP;
	unsigned channelOfSWAP;
} SCD_Struct_Ea6;

typedef struct {
	double secondsToGetLinkUpOnDestination;
	int wifiJoinDestinationAPError;
	unsigned char destinationNetworkPSKInKeychain;
	unsigned char hitJoiningDestinationAPTimeout;
	int rssiOfDestinationAP;
	unsigned snrOfDestinationAP;
	unsigned channelOfDestinationAP;
} SCD_Struct_Ea7;

typedef struct {
	void context;
	/*function pointer*/void* showSetupCode_f;
	/*function pointer*/void* hideSetupCode_f;
	/*function pointer*/void* promptForSetupCode_f;
	/*function pointer*/void* copyIdentity_f;
	/*function pointer*/void* findPeer_f;
	/*function pointer*/void* savePeer_f;
	/*function pointer*/void* resumeRequest_f;
	/*function pointer*/void* resumeResponse_f;
} SCD_Struct_Ea8;

