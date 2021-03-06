/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORoutePreloader.h>
#import <libobjc.A.dylib/GEORoutePreloaderSubclass.h>

@class GEOTransitDecoderData, GEOTransitSuggestedRoute, _GEOTransitRoutePreloaderData, GEOMapServiceTraits, NSTimer;

@interface GEOTransitRoutePreloader : GEORoutePreloader <GEORoutePreloaderSubclass> {

	GEOTransitDecoderData* _decoderData;
	GEOTransitSuggestedRoute* _suggestedRoute;
	_GEOTransitRoutePreloaderData* _reserved;
	GEOMapServiceTraits* _traits;
	double _endRoutePosition;
	long long _indexOfLastStepWithPreparedBatch;
	NSTimer* _geodCrashTimer;
	double _radialDistanceToImplicateTilesMeters;
	long long _tilesRequested;
	BOOL _shouldPreloadEntireRoute;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> preloaderLog; 
-(BOOL)isSufficientlyLoaded;
-(BOOL)minimalDebuggingEnabled;
-(BOOL)fullDebuggingEnabled;
-(void)beginLoading;
-(int)preloadStateForTile:(const GEOTileKey*)arg1 ;
-(void)getPreloadSetCoordinates:(SCD_Struct_GE29*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3 ;
-(void)updateWithRouteMatch:(id)arg1 ;
-(void)setTraits:(id)arg1 ;
-(id)route;
-(NSObject*<OS_os_log>)preloaderLog;
-(id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(/*^block*/id)arg5 ;
-(void)performTearDown;
-(void)_retryFailuresWithErrorsReset:(BOOL)arg1 ;
-(void)_cancelPreloadTasks;
-(void)_resetErrorCounts;
-(long long)tilesRequested;
-(void)setShouldPreloadEntireRoute:(BOOL)arg1 ;
-(void)_cancelAllBatches;
-(PolylineCoordinate)_polylineCoordinateForDouble:(double)arg1 ;
-(void)_performNextRequests;
-(void)_makeBatchesForSteps:(id)arg1 ;
-(void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg1 ;
-(void)_makeBatchForTilesAroundStationsForSteps:(id)arg1 ;
-(void)_makePreloadBatchForGraph;
-(void)_makePreloadBatchForSteps:(id)arg1 ;
-(void)_makePreloadBatchForPlaceDataOnSteps:(id)arg1 ;
-(void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg1 andPriority:(unsigned)arg2 ;
-(void)_processBatches;
-(void)_processedFinishedBatch:(id)arg1 withPartialStatus:(unsigned long long)arg2 ;
-(void)_loadTilesForBatch:(id)arg1 ;
-(void)_loadPlacecardsForBatch:(id)arg1 ;
-(void)_geodCrashed:(id)arg1 ;
-(void)stopLoading;
@end

