/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
} SCD_Struct_PG0;

typedef struct _NSZone* NSZoneRef;

typedef struct PGRoutineInfoStruct {
	BOOL routineAvailable;
	unsigned long long numberOfLocationsOfInterest;
	unsigned long long numberOfVisits;
	unsigned long long numberOfTimeMatches;
	unsigned long long numberOfCloseByLocationMatches;
	unsigned long long numberOfRemoteLocationMatches;
	unsigned long long numberOfMatchRequests;
	double pinningVisitsRatio;
} PGRoutineInfoStruct;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

