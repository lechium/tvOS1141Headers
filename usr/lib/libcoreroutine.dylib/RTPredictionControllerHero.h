/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@class RTDataProviderHeroApp, RTApplicationManager;

@interface RTPredictionControllerHero : RTNotifier {

	RTDataProviderHeroApp* _dataProvider;
	RTApplicationManager* _applicationManager;

}

@property (nonatomic,retain) RTDataProviderHeroApp * dataProvider;                   //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) RTApplicationManager * applicationManager;              //@synthesize applicationManager=_applicationManager - In the implementation block
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(void)setDataProvider:(RTDataProviderHeroApp *)arg1 ;
-(RTDataProviderHeroApp *)dataProvider;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)_startMonitoringForPredictedApplications;
-(void)onHeroAppPrediction:(id)arg1 ;
-(void)_onHeroAppPrediction:(id)arg1 ;
-(void)_stopMonitoringForPredictedApplications;
-(RTApplicationManager *)applicationManager;
-(void)setApplicationManager:(RTApplicationManager *)arg1 ;
-(void)fetchPredictedApplications:(/*^block*/id)arg1 ;
-(void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedApplicationsWithPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopMonitoringForPredictedApplications;
-(id)initWithDataProvider:(id)arg1 applicationManager:(id)arg2 ;
-(void)startMonitoringForPredictedApplications;
-(void)onApplicationChange:(id)arg1 ;
-(void)_onApplicationChange:(id)arg1 ;
-(void)_refreshAllData;
@end

