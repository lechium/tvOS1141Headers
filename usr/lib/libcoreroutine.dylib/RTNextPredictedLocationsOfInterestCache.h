/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTNextPredictedLocationsOfInterestCacheDelegate, OS_dispatch_queue;
@class NSObject, NSArray, RTDataProtectionManager, RTStarkManager;

@interface RTNextPredictedLocationsOfInterestCache : NSObject {

	BOOL _enabled;
	id<RTNextPredictedLocationsOfInterestCacheDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _nextPredictedLocationsOfInterest;
	RTDataProtectionManager* _dataProtectionManager;
	RTStarkManager* _starkManager;

}

@property (assign,nonatomic) BOOL enabled;                                                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSArray * nextPredictedLocationsOfInterest;                                       //@synthesize nextPredictedLocationsOfInterest=_nextPredictedLocationsOfInterest - In the implementation block
@property (nonatomic,retain) RTDataProtectionManager * dataProtectionManager;                                  //@synthesize dataProtectionManager=_dataProtectionManager - In the implementation block
@property (nonatomic,retain) RTStarkManager * starkManager;                                                    //@synthesize starkManager=_starkManager - In the implementation block
@property (assign,nonatomic,__weak) id<RTNextPredictedLocationsOfInterestCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)cachePath;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(BOOL)enabled;
-(id<RTNextPredictedLocationsOfInterestCacheDelegate>)delegate;
-(void)setDelegate:(id<RTNextPredictedLocationsOfInterestCacheDelegate>)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)purge;
-(void)clear;
-(NSObject*<OS_dispatch_queue>)queue;
-(RTDataProtectionManager *)dataProtectionManager;
-(void)setDataProtectionManager:(RTDataProtectionManager *)arg1 ;
-(NSArray *)nextPredictedLocationsOfInterest;
-(void)setNextPredictedLocationsOfInterest:(NSArray *)arg1 ;
-(void)onDataProtectionNotification:(id)arg1 ;
-(id)initWithQueue:(id)arg1 dataProtectionManager:(id)arg2 starkManager:(id)arg3 ;
-(void)cacheNextPredictedLocationsOfInterest:(id)arg1 ;
-(id)getCachedNextPredictedLocationsOfInterest;
-(void)handleUnlockedSinceBoot:(BOOL)arg1 ;
-(void)onStarkNotification:(id)arg1 ;
-(void)handleStarkTrustedConnectionEstablished:(BOOL)arg1 ;
-(RTStarkManager *)starkManager;
-(void)setStarkManager:(RTStarkManager *)arg1 ;
@end

