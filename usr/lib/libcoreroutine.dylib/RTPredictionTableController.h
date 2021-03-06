/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, RTPersistenceManager, RTMetricManager;

@interface RTPredictionTableController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _predictionTableName;
	RTPersistenceManager* _persistenceManager;
	RTMetricManager* _metricManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * predictionTableName;                         //@synthesize predictionTableName=_predictionTableName - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;              //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                        //@synthesize metricManager=_metricManager - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(RTMetricManager *)metricManager;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(id)initWithPredictionTableName:(id)arg1 persistenceManager:(id)arg2 metricManager:(id)arg3 ;
-(id)_fetchPredictionTable:(id)arg1 error:(id*)arg2 ;
-(void)createPredictionTable:(/*^block*/id)arg1 ;
-(void)_createPredictionTableWithContext:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deletePredictionTable:(/*^block*/id)arg1 ;
-(void)_deletePredictionTableWithContext:(id)arg1 save:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(id)_evaluateAddonsAndFilterPredictionsForObject:(id)arg1 predictionTable:(id)arg2 ;
-(id)_createFeatureAddonsFromConditionsMO:(id)arg1 ;
-(id)_combinedFilterPredicateFromAddons:(id)arg1 ;
-(void)addResults:(id)arg1 featureAddons:(id)arg2 ;
-(void)_addResults:(id)arg1 featureAddons:(id)arg2 predictionTable:(id)arg3 ;
-(void)dumpPredictionTable:(/*^block*/id)arg1 ;
-(void)_dumpPredictionTable:(id)arg1 ;
-(NSString *)predictionTableName;
-(void)setPredictionTableName:(NSString *)arg1 ;
-(void)fetchPredictionTablePropertyListRepresentationWithHandler:(/*^block*/id)arg1 ;
-(void)_predictionTableMetricWithHandler:(/*^block*/id)arg1 ;
-(id)_predictionTableMetricOfPredictionTable:(id)arg1 ;
-(void)predictionTableMetricWithHandler:(/*^block*/id)arg1 ;
-(void)logRecommendedApps;
-(void)_logRecommendedApps:(id)arg1 ;
@end

