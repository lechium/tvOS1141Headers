/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_queue;
@class NSObject, RTLearnedLocationManager, RTEventManager, RTMetricManager, NSManagedObjectContext, RTPersistenceManager, RTDefaultsManager, RTInvocationDispatcher, RTLocationShifter, NSDictionary, NSString;

@interface RTEventModelProvider : NSObject <RTPurgable> {

	BOOL _locationsOfInterestsAvailable;
	int _highProbabilityItemMinNumOfEvents;
	NSObject*<OS_dispatch_queue> _queue;
	RTLearnedLocationManager* _learnedLocationManager;
	RTEventManager* _eventManager;
	RTMetricManager* _metricManager;
	NSManagedObjectContext* _managedObjectContext;
	RTPersistenceManager* _persistenceManager;
	RTDefaultsManager* _defaultsManager;
	RTInvocationDispatcher* _dispatcher;
	RTLocationShifter* _locationShifter;
	double _highProbabilityItemMinProbability;
	double _relativeHighProbabilityItemMinDifference;
	NSDictionary* _locationOfInterestHistograms;

}

@property (assign,nonatomic) BOOL locationsOfInterestsAvailable;                             //@synthesize locationsOfInterestsAvailable=_locationsOfInterestsAvailable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;              //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTEventManager * eventManager;                                  //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                  //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                      //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                            //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                            //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) RTLocationShifter * locationShifter;                            //@synthesize locationShifter=_locationShifter - In the implementation block
@property (assign,nonatomic) double highProbabilityItemMinProbability;                       //@synthesize highProbabilityItemMinProbability=_highProbabilityItemMinProbability - In the implementation block
@property (assign,nonatomic) double relativeHighProbabilityItemMinDifference;                //@synthesize relativeHighProbabilityItemMinDifference=_relativeHighProbabilityItemMinDifference - In the implementation block
@property (assign,nonatomic) int highProbabilityItemMinNumOfEvents;                          //@synthesize highProbabilityItemMinNumOfEvents=_highProbabilityItemMinNumOfEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * locationOfInterestHistograms;                    //@synthesize locationOfInterestHistograms=_locationOfInterestHistograms - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)shutdown;
-(RTDefaultsManager *)defaultsManager;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(RTPersistenceManager *)persistenceManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(RTMetricManager *)metricManager;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)_shutdown;
-(void)purgeManager:(id)arg1 performPurgeOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(RTEventManager *)eventManager;
-(void)_updateRegisteredDefaults:(/*^block*/id)arg1 ;
-(void)updateValueForKey:(id)arg1 expectedClass:(Class)arg2 handler:(/*^block*/id)arg3 ;
-(void)onLearnedLocationManagerNotification:(id)arg1 ;
-(void)_registerScoreBoardSubmission;
-(RTLocationShifter *)locationShifter;
-(void)setLocationShifter:(RTLocationShifter *)arg1 ;
-(id)initWithQueue:(id)arg1 learnedLocationManager:(id)arg2 eventManager:(id)arg3 metricManager:(id)arg4 managedObjectContext:(id)arg5 persistenceManager:(id)arg6 defaultsManager:(id)arg7 ;
-(double)getOverlapTimeForIntervalStart1:(id)arg1 intervalEnd1:(id)arg2 intervalStart2:(id)arg3 intervalEnd2:(id)arg4 ;
-(id)getLOIHistogramForEvents:(id)arg1 andLocationsOfInterest:(id)arg2 ;
-(void)fetchLOIHistogramForEventLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_fetchLOIHistogramForEventLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchAllLOIHistogramsWithHandler:(/*^block*/id)arg1 ;
-(id)getObjectWithName:(id)arg1 source:(unsigned long long)arg2 calendarIdentifier:(id)arg3 fromDictionary:(id)arg4 ;
-(void)addEvent:(id)arg1 toIdentifierDict:(id)arg2 useCalendarIdentifier:(BOOL)arg3 ;
-(BOOL)highProbabilityHistogramItem:(id)arg1 ;
-(BOOL)relativeHighProbabilityHistogramItem:(id)arg1 toItem:(id)arg2 ;
-(id)getAllLOIHistogramsForEvents:(id)arg1 andLocationsOfInterest:(id)arg2 collectMetrics:(BOOL)arg3 ;
-(void)_buildLocationOfInterestHistogramAndCollectMetrics:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)refreshAllLOIHistogramsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)_predictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 ;
-(void)onManagedObjectContextCreated:(id)arg1 ;
-(BOOL)deleteEventModel;
-(BOOL)_persistEventModel;
-(void)_restoreEventModelWithHandler:(/*^block*/id)arg1 ;
-(id)_getLocationOfInterestWithIdentifier:(id)arg1 fromArray:(id)arg2 ;
-(void)_finishRestoreEventModelWithIdentifiers:(id)arg1 histoItems:(id)arg2 locationsOfInterest:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)restoreEventModelIfAppropriate;
-(void)persistEventModel;
-(void)restoreEventModelWithHandler:(/*^block*/id)arg1 ;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)_persistUserInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 ;
-(BOOL)_deleteUserInteractionsBeforeDate:(id)arg1 ;
-(BOOL)locationsOfInterestsAvailable;
-(void)setLocationsOfInterestsAvailable:(BOOL)arg1 ;
-(void)setEventManager:(RTEventManager *)arg1 ;
-(double)highProbabilityItemMinProbability;
-(void)setHighProbabilityItemMinProbability:(double)arg1 ;
-(double)relativeHighProbabilityItemMinDifference;
-(void)setRelativeHighProbabilityItemMinDifference:(double)arg1 ;
-(int)highProbabilityItemMinNumOfEvents;
-(void)setHighProbabilityItemMinNumOfEvents:(int)arg1 ;
-(NSDictionary *)locationOfInterestHistograms;
-(void)setLocationOfInterestHistograms:(NSDictionary *)arg1 ;
-(void)_submitMetricResponseWithInteraction:(unsigned long long)arg1 feedback:(id)arg2 identifier:(id)arg3 ;
-(void)_submitMetricAutofillWithInteraction:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_submitMetricModelWithLearnedNongeocodable:(int)arg1 unlearnedNongeocodable:(int)arg2 ;
-(void)_submitMetricScoreBoardOnDate:(id)arg1 ;
-(BOOL)_hasSuggestedLocationForEvent:(id)arg1 ;
-(id)_suggestedLocationForEvent:(id)arg1 ;
-(void)_submitMetricScoreBoardOnDate:(id)arg1 submissionHandler:(/*^block*/id)arg2 ;
-(void)_submitMetricScoreBoardFromStartDate:(id)arg1 endDate:(id)arg2 submissionHandler:(/*^block*/id)arg3 ;
-(id)lastDateOfLOIVisits:(id)arg1 ;
-(id)_geoLocationOfEvent:(id)arg1 ;
-(unsigned long long)_locationStateOfEvent:(id)arg1 ;
-(unsigned long long)verifyPresenceOfUserWithEventLocation:(id)arg1 deviceLOIs:(id)arg2 ;
-(id)categoryForLocationState:(unsigned long long)arg1 ttlTrigggerd:(BOOL)arg2 ;
-(id)keywordForCategory:(id)arg1 visited:(unsigned long long)arg2 ;
-(id)appendFieldToCategoryString:(id)arg1 field:(id)arg2 value:(long long)arg3 ;
-(unsigned long long)lengthOfEvent:(id)arg1 ;
-(unsigned long long)timeOfDayOfEvent:(id)arg1 ;
-(id)scoreBoardFromEventCounter:(id)arg1 categories:(id)arg2 ;
@end

