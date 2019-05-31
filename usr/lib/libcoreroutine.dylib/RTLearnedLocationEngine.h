/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTPurgable.h>

@protocol RTLearnedLocationEngineProtocol, OS_dispatch_queue;
@class RTLearnedLocationEngineTrainingMetrics, NSObject, RTAccountManager, RTConnectionsLocationManager, RTContactsManager, RTDefaultsManager, RTDiagnostics, RTEventManager, RTFingerprintManager, RTLearnedLocationStore, RTLocationStore, RTLocationManager, RTMapServiceManager, RTMapsSupportManager, RTMetricManager, RTMotionActivityManager, RTPersonalizationPortraitManager, RTVisitManager, NSString;

@interface RTLearnedLocationEngine : NSObject <RTPurgable> {

	BOOL _monitorFingerprints;
	id<RTLearnedLocationEngineProtocol> _delegate;
	RTLearnedLocationEngineTrainingMetrics* _trainingMetrics;
	NSObject*<OS_dispatch_queue> _queue;
	RTAccountManager* _accountManager;
	RTConnectionsLocationManager* _connectionsLocationManager;
	RTContactsManager* _contactsManager;
	RTDefaultsManager* _defaultsManager;
	RTDiagnostics* _diagnostics;
	RTEventManager* _eventManager;
	RTFingerprintManager* _fingerprintManager;
	RTLearnedLocationStore* _learnedLocationStore;
	RTLocationStore* _locationStore;
	RTLocationManager* _locationManager;
	RTMapServiceManager* _mapServiceManager;
	RTMapsSupportManager* _mapsSupportManager;
	RTMetricManager* _metricManager;
	RTMotionActivityManager* _motionActivityManager;
	RTPersonalizationPortraitManager* _portraitManager;
	RTVisitManager* _visitManager;

}

@property (assign,nonatomic) BOOL monitorFingerprints;                                                 //@synthesize monitorFingerprints=_monitorFingerprints - In the implementation block
@property (nonatomic,retain) RTLearnedLocationEngineTrainingMetrics * trainingMetrics;                 //@synthesize trainingMetrics=_trainingMetrics - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RTAccountManager * accountManager;                                      //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,readonly) RTConnectionsLocationManager * connectionsLocationManager;              //@synthesize connectionsLocationManager=_connectionsLocationManager - In the implementation block
@property (nonatomic,readonly) RTContactsManager * contactsManager;                                    //@synthesize contactsManager=_contactsManager - In the implementation block
@property (nonatomic,readonly) RTDefaultsManager * defaultsManager;                                    //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,readonly) RTDiagnostics * diagnostics;                                            //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,readonly) RTEventManager * eventManager;                                          //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,readonly) RTFingerprintManager * fingerprintManager;                              //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,readonly) RTLearnedLocationStore * learnedLocationStore;                          //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,readonly) RTLocationStore * locationStore;                                        //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,readonly) RTLocationManager * locationManager;                                    //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) RTMapServiceManager * mapServiceManager;                                //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,readonly) RTMapsSupportManager * mapsSupportManager;                              //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (nonatomic,readonly) RTMetricManager * metricManager;                                        //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,readonly) RTMotionActivityManager * motionActivityManager;                        //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,readonly) RTPersonalizationPortraitManager * portraitManager;                     //@synthesize portraitManager=_portraitManager - In the implementation block
@property (nonatomic,readonly) RTVisitManager * visitManager;                                          //@synthesize visitManager=_visitManager - In the implementation block
@property (assign,nonatomic,__weak) id<RTLearnedLocationEngineProtocol> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)locationFromMapItem:(id)arg1 ;
+(id)locationFromAggregateVisits:(id)arg1 ;
+(id)visitFromAggregateVisits:(id)arg1 ;
+(double)confidenceFromDataPointCount:(unsigned long long)arg1 ;
-(void)setup;
-(id)init;
-(id<RTLearnedLocationEngineProtocol>)delegate;
-(void)setDelegate:(id<RTLearnedLocationEngineProtocol>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(RTDiagnostics *)diagnostics;
-(void)_setup;
-(RTLocationManager *)locationManager;
-(void)shutdown;
-(RTDefaultsManager *)defaultsManager;
-(RTMetricManager *)metricManager;
-(RTVisitManager *)visitManager;
-(void)_shutdown;
-(void)_onVisitManagerNotification:(id)arg1 ;
-(void)onVisitManagerNotification:(id)arg1 ;
-(RTAccountManager *)accountManager;
-(RTFingerprintManager *)fingerprintManager;
-(RTLocationStore *)locationStore;
-(RTMapServiceManager *)mapServiceManager;
-(RTConnectionsLocationManager *)connectionsLocationManager;
-(void)purgeManager:(id)arg1 performPurgeOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_trainWithHandler:(/*^block*/id)arg1 ;
-(void)trainWithHandler:(/*^block*/id)arg1 ;
-(RTContactsManager *)contactsManager;
-(RTLearnedLocationStore *)learnedLocationStore;
-(RTEventManager *)eventManager;
-(RTMapsSupportManager *)mapsSupportManager;
-(RTMotionActivityManager *)motionActivityManager;
-(RTPersonalizationPortraitManager *)portraitManager;
-(id)initWithAccountManager:(id)arg1 connectionsLocationManager:(id)arg2 contactsManager:(id)arg3 defaultsManager:(id)arg4 diagnostics:(id)arg5 eventManager:(id)arg6 fingerprintManager:(id)arg7 learnedLocationStore:(id)arg8 locationManager:(id)arg9 locationStore:(id)arg10 mapServiceManager:(id)arg11 mapsSupportManager:(id)arg12 metricManager:(id)arg13 motionActivityManager:(id)arg14 portraitManager:(id)arg15 visitManager:(id)arg16 ;
-(void)_setupXpcActivityTrain;
-(id)_lastVisit;
-(id)_visitsFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 ;
-(id)_filterVisits:(id)arg1 ;
-(id)_enabledMapItemProviders;
-(id)_mapItemsForVisit:(id)arg1 error:(id*)arg2 ;
-(id)_bestMapItemForVisit:(id)arg1 fromMapItems:(id)arg2 error:(id*)arg3 ;
-(id)_bestMapItemForVisit:(id)arg1 error:(id*)arg2 ;
-(id)_placeForMapItem:(id)arg1 error:(id*)arg2 ;
-(id)_updateExistingPlaceNearMapItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processVisits:(id)arg1 error:(id*)arg2 ;
-(BOOL)_trainVisitsFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 ;
-(void)_trainLocationsOfInterestModelWithHandler:(/*^block*/id)arg1 ;
-(void)trainLocationsOfInterestModelWithHandler:(/*^block*/id)arg1 ;
-(BOOL)_trainLocationsOfInterestModelWithError:(id*)arg1 ;
-(void)_purge;
-(id)_meCardContactWithError:(id*)arg1 ;
-(id)_postalAddressMapItemsOfContact:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processMeCardWithError:(id*)arg1 ;
-(void)_onContactsManagerNotification:(id)arg1 ;
-(void)onContactsManagerNotification:(id)arg1 ;
-(void)setMonitorFingerprints:(BOOL)arg1 ;
-(void)_onFingerprintManagerNotification:(id)arg1 ;
-(void)onFingerprintManagerNotification:(id)arg1 ;
-(void)_updateMonitorFingerprintsWithVisit:(id)arg1 ;
-(id)_hydrateMapItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)_hydrateMapItemsOfPlacesWithError:(id*)arg1 ;
-(void)_setupTrainingMetricsFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)_teardownTrainingMetrics;
-(void)_logLocationsOfInterest;
-(BOOL)_updatePlaceTypesFromInferenceWithError:(id*)arg1 ;
-(id)_inferPlaceTypesWithError:(id*)arg1 ;
-(BOOL)_retrainVisitsWithoutPlaces:(id*)arg1 ;
-(id)_updateExistingPlace:(id)arg1 ifBetterMapItem:(id)arg2 error:(id*)arg3 ;
-(BOOL)monitorFingerprints;
-(RTLearnedLocationEngineTrainingMetrics *)trainingMetrics;
-(void)setTrainingMetrics:(RTLearnedLocationEngineTrainingMetrics *)arg1 ;
@end

