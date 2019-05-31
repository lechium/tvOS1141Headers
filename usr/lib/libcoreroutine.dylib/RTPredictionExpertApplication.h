/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPredictionExpert.h>

@class RTDefaultsManager, RTMediaRemote, NSPredicate, RTPredictionExpertApplicationDataSource;

@interface RTPredictionExpertApplication : RTPredictionExpert {

	RTDefaultsManager* _defaultsManager;
	RTMediaRemote* _mediaRemote;
	double _maxEventAge;
	double _deresolution;
	NSPredicate* _appLaunchFilterPredicate;
	NSPredicate* _nowPlayingFilterPredicate;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                 //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTMediaRemote * mediaRemote;                                         //@synthesize mediaRemote=_mediaRemote - In the implementation block
@property (assign,nonatomic) double maxEventAge;                                                  //@synthesize maxEventAge=_maxEventAge - In the implementation block
@property (assign,nonatomic) double deresolution;                                                 //@synthesize deresolution=_deresolution - In the implementation block
@property (nonatomic,retain) NSPredicate * appLaunchFilterPredicate;                              //@synthesize appLaunchFilterPredicate=_appLaunchFilterPredicate - In the implementation block
@property (nonatomic,retain) NSPredicate * nowPlayingFilterPredicate;                             //@synthesize nowPlayingFilterPredicate=_nowPlayingFilterPredicate - In the implementation block
@property (nonatomic,readonly) RTPredictionExpertApplicationDataSource * dataSource; 
-(void)processData:(/*^block*/id)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(id)supportedEventClasses;
-(void)_processEventsWithAppLaunchEvents:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTMediaRemote *)mediaRemote;
-(void)setMediaRemote:(RTMediaRemote *)arg1 ;
-(id)initWithQueue:(id)arg1 category:(long long)arg2 dataSource:(id)arg3 defaultsManager:(id)arg4 mediaRemote:(id)arg5 featureAddons:(id)arg6 ;
-(id)dateIntervalForAppLaunchEvent:(id)arg1 ;
-(id)initWithQueue:(id)arg1 category:(long long)arg2 dataSource:(id)arg3 ;
-(id)globalAppLaunchCountedSetFrom:(id)arg1 ;
-(void)_fetchEventsFromDataProvider:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_processFilteredEvents:(id)arg1 appLaunchEvents:(id)arg2 histogram:(id)arg3 filterOnAppLaunchDate:(BOOL)arg4 filterOnEventDate:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(id)dateIntervalForEvent:(id)arg1 ;
-(id)_createEventStoreWithClasses:(id)arg1 ;
-(double)maxEventAge;
-(void)setMaxEventAge:(double)arg1 ;
-(double)deresolution;
-(void)setDeresolution:(double)arg1 ;
-(NSPredicate *)appLaunchFilterPredicate;
-(void)setAppLaunchFilterPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)nowPlayingFilterPredicate;
-(void)setNowPlayingFilterPredicate:(NSPredicate *)arg1 ;
-(id)_createExpertMetric;
-(void)createExpertMetricWithHandler:(/*^block*/id)arg1 ;
@end

