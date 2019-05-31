/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapServiceTicket;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList, NSMutableSet, NSMutableArray;

@interface _GEOTransitPreloadBatch : NSObject {

	GEOTileKeyList* _tilesToLoad;
	NSMutableSet* _placeDatasToLoad;
	unsigned long long status;
	unsigned long long generation;
	unsigned long long errCount;
	unsigned long long bytesLoaded;
	unsigned long long bytesLoadedFromNetwork;
	double startTime;
	double endTime;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* coords;
	NSMutableArray* _latLngToLoad;
	unsigned priority;
	id<GEOMapServiceTicket> placeDataRequestTicketForBatch;
	double endTimeForScheduleFreshness;

}

@property (nonatomic,retain) GEOTileKeyList * tilesToLoad;                 //@synthesize tilesToLoad=_tilesToLoad - In the implementation block
@property (nonatomic,retain) NSMutableSet * placeDatasToLoad;              //@synthesize placeDatasToLoad=_placeDatasToLoad - In the implementation block
-(double)dataRateKB;
-(double)networkDataRateKB;
-(GEOTileKeyList *)tilesToLoad;
-(void)setTilesToLoad:(GEOTileKeyList *)arg1 ;
-(NSMutableSet *)placeDatasToLoad;
-(void)setPlaceDatasToLoad:(NSMutableSet *)arg1 ;
-(id)init;
@end

