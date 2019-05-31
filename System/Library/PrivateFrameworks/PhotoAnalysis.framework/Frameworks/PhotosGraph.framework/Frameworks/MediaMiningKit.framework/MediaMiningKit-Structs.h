/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGImage* CGImageRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_CL5;

typedef struct {
	long long numberOfLocations;
	long long numberOfResolvedLocations;
	long long numberOfUnneededLocations;
} SCD_Struct_CL6;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __CFSet* CFSetRef;

typedef struct CLSRoutineServiceStatisticsStruct {
	BOOL routineAvailable;
	unsigned long long numberOfLocationsOfInterest;
	unsigned long long numberOfVisits;
	unsigned long long numberOfTimeMatches;
	unsigned long long numberOfCloseByLocationMatches;
	unsigned long long numberOfRemoteLocationMatches;
	unsigned long long numberOfMatchRequests;
	double pinningVisitsRatio;
} CLSRoutineServiceStatisticsStruct;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;
