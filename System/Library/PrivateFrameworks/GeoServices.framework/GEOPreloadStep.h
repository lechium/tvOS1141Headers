/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList;

@interface GEOPreloadStep : NSObject {

	SCD_Struct_GE29 coord;
	double routeIdx;
	GEOTileKeyList* wantedTiles;
	double startTime;
	double endTime;
	unsigned bytesLoaded;
	unsigned bytesLoadedFromNetwork;
	unsigned generation;
	unsigned numRetries;
	unsigned hasError : 1;
	unsigned hasLifetimeError : 1;
	unsigned nearManeuver : 1;
	unsigned loading : 1;
	unsigned loaded : 1;
	unsigned preempted : 1;

}
-(BOOL)okToLoad;
-(void)resetErrors;
-(double)dataRateKB;
-(double)networkDataRateKB;
@end

