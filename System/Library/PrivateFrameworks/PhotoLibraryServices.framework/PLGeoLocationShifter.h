/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLGeoLocationShifterDelegate;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, NSMutableOrderedSet, NSMutableSet, PLGeoLocationShiftResult, GEOLocationShifter;

@interface PLGeoLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _locationShiftQueue;
	NSMutableOrderedSet* _assetsToShift;
	BOOL _shiftOperationInProgress;
	BOOL _isRunning;
	NSMutableSet* _inFlightRequestIDs;
	PLGeoLocationShiftResult* _currentBatchResult;
	GEOLocationShifter* _locationShifter;
	id<PLGeoLocationShifterDelegate> _delegate;

}

@property (assign,nonatomic) id<PLGeoLocationShifterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasWork; 
+(BOOL)isLocationShiftRequiredForCoordinate:(CLLocationCoordinate2D)arg1 ;
+(unsigned)locationShiftFunctionVersion;
-(BOOL)hasWork;
-(id)init;
-(id<PLGeoLocationShifterDelegate>)delegate;
-(void)setDelegate:(id<PLGeoLocationShifterDelegate>)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)start;
-(void)stop;
-(void)enqueueAssetIDs:(id)arg1 ;
-(id)shifterStatus;
-(void)_updateShiftOperationStatus;
-(void)_runShiftOperation;
-(void)_beginBatch:(id)arg1 ;
-(void)_processShiftRequestWithAssetID:(id)arg1 coordinate:(id)arg2 ;
-(void)_shiftCompletedForAssetID:(id)arg1 withSuccess:(BOOL)arg2 needsRetry:(BOOL)arg3 shiftedCoordinate:(CGPoint)arg4 ;
-(void)_completeBatchIfReady;
@end

