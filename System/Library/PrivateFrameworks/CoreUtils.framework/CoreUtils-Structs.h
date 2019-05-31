/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct __CFBitVector* CFBitVectorRef;

typedef struct {
	unsigned char bytes[6];
} SCD_Struct_CU3;

typedef struct BTAccessoryManagerImpl* BTAccessoryManagerImplRef;

typedef struct BTSessionImpl* BTSessionImplRef;

typedef struct BTLocalDeviceImpl* BTLocalDeviceImplRef;

typedef struct {
	/*function pointer*/void* statusEvent;
	/*function pointer*/void* leTestStopped;
	/*function pointer*/void* afhMapChanged;
} SCD_Struct_CU7;

typedef struct BTPairingAgentImpl* BTPairingAgentImplRef;

typedef struct BTDeviceImpl* BTDeviceImplRef;

typedef struct channel* channelRef;

typedef struct channel_ring_desc* channel_ring_descRef;

typedef struct BonjourAdvertiserPrivate* BonjourAdvertiserPrivateRef;

typedef struct BonjourBrowser* BonjourBrowserRef;

typedef union {
	unsigned char __u6_addr8[16];
	unsigned short __u6_addr16[8];
	unsigned __u6_addr32[4];
} SCD_Union_CU14;

typedef struct sockaddr {
	unsigned char sa_len;
	unsigned char sa_family;
	char sa_data[14];
} sockaddr;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct in6_addr {
	SCD_Union_CU14 __u6_addr;
} in6_addr;

typedef struct sockaddr_in6 {
	unsigned char sin6_len;
	unsigned char sin6_family;
	unsigned short sin6_port;
	unsigned sin6_flowinfo;
	in6_addr sin6_addr;
	unsigned sin6_scope_id;
} sockaddr_in6;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef union {
	sockaddr sa;
	sockaddr_in v4;
	sockaddr_in6 v6;
} SCD_Union_CU20;

typedef struct iovec {
	void iov_base;
	unsigned long long iov_len;
} iovec;

typedef struct _NSZone* NSZoneRef;

typedef struct PairingSessionPrivate* PairingSessionPrivateRef;

typedef struct CryptoAEADPrivate* CryptoAEADPrivateRef;

typedef struct OpaqueIOPSPowerSourceID* OpaqueIOPSPowerSourceIDRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct AsyncConnection* AsyncConnectionRef;

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
} SCD_Struct_CU28;

typedef struct {
	double secondsToGetLinkUpOnDestination;
	int wifiJoinDestinationAPError;
	unsigned char destinationNetworkPSKInKeychain;
	unsigned char hitJoiningDestinationAPTimeout;
	int rssiOfDestinationAP;
	unsigned snrOfDestinationAP;
	unsigned channelOfDestinationAP;
} SCD_Struct_CU29;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

