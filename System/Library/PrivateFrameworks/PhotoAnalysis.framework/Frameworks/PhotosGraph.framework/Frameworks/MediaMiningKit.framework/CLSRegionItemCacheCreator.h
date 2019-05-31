/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSArray, NSObject;

@interface CLSRegionItemCacheCreator : NSObject {

	NSArray* _queryPerformers;
	BOOL _simulatesTimeout;
	NSObject*<OS_os_log> _loggingConnection;
	double _timeoutInterval;
	unsigned long long _numberOfRetries;

}

@property (assign,getter=isSimulatingTimeout,nonatomic) BOOL simulatesTimeout;              //@synthesize simulatesTimeout=_simulatesTimeout - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRetries;                            //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> loggingConnection;                        //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,readonly) NSArray * queryPerformers;                                   //@synthesize queryPerformers=_queryPerformers - In the implementation block
+(id)createPlacesForBusinessItems:(id)arg1 ;
+(id)businessItemsForRegion:(id)arg1 ;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(BOOL)isSimulatingTimeout;
-(void)setSimulatesTimeout:(BOOL)arg1 ;
-(unsigned long long)numberOfRetries;
-(void)logAggdGeoLookupCounterAndDurationForQueryPerformer:(id)arg1 lookupDuration:(id)arg2 ;
-(void)logAggdGeoLookupFailureResultForQueryPerformer:(id)arg1 ;
-(id)incrementRequestCounterForQueryPerformer:(id)arg1 counterTable:(id)arg2 ;
-(void)logRequestCounterValuesFromLookupTable:(id)arg1 ;
-(NSArray *)queryPerformers;
-(NSObject*<OS_os_log>)loggingConnection;
-(id)initWithQueryPerformers:(id)arg1 ;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
-(BOOL)createCacheForRegions:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)setNumberOfRetries:(unsigned long long)arg1 ;
@end
