/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@class NSDate, RTInvocationDispatcher, NSUserDefaults, RTMetricManager, RTReachabilityManager, ASAssetQuery;

@interface RTAssetManager : RTNotifier {

	BOOL _ready;
	long long _currentReachability;
	NSDate* _dateOfLastUpdateAttempt;
	NSDate* _dateOfLastSuccessfulUpdate;
	RTInvocationDispatcher* _dispatcher;
	NSUserDefaults* _userDefaults;
	RTMetricManager* _metricManager;
	RTReachabilityManager* _reachabilityManager;
	ASAssetQuery* _assetQuery;

}

@property (assign,nonatomic) long long currentReachability;                            //@synthesize currentReachability=_currentReachability - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastUpdateAttempt;                         //@synthesize dateOfLastUpdateAttempt=_dateOfLastUpdateAttempt - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastSuccessfulUpdate;                      //@synthesize dateOfLastSuccessfulUpdate=_dateOfLastSuccessfulUpdate - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                      //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                            //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                          //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTReachabilityManager * reachabilityManager;              //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (assign,nonatomic) BOOL ready;                                               //@synthesize ready=_ready - In the implementation block
@property (nonatomic,retain) ASAssetQuery * assetQuery;                                //@synthesize assetQuery=_assetQuery - In the implementation block
-(id)init;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(void)setCurrentReachability:(long long)arg1 ;
-(long long)currentReachability;
-(void)_setup;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(RTMetricManager *)metricManager;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(BOOL)ready;
-(void)setReady:(BOOL)arg1 ;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)forceUpdateAssetMetadata;
-(id)initWithUserDefaults:(id)arg1 metricManager:(id)arg2 reachabilityManager:(id)arg3 ;
-(void)_invalidateAssetQuery;
-(void)performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_finalizeAssetUpdateOperationWithError:(id)arg1 ;
-(void)_downloadAsset:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_installAsset:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setDateOfLastSuccessfulUpdate:(NSDate *)arg1 ;
-(void)setDateOfLastUpdateAttempt:(NSDate *)arg1 ;
-(void)onReachabilityChange:(id)arg1 ;
-(void)updateAssetServerURL:(id)arg1 assetType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSDate *)dateOfLastUpdateAttempt;
-(NSDate *)dateOfLastSuccessfulUpdate;
-(RTReachabilityManager *)reachabilityManager;
-(void)setReachabilityManager:(RTReachabilityManager *)arg1 ;
-(ASAssetQuery *)assetQuery;
-(void)setAssetQuery:(ASAssetQuery *)arg1 ;
-(void)_submitAssertVersionMetric;
-(void)_registerForMetricSubmission;
-(void)_submitAssertVersionMetricWithHandler:(/*^block*/id)arg1 ;
@end

