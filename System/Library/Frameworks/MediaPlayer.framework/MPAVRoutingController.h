/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MPAVRoutingControllerDelegate;
@class NSObject, NSArray, NSMutableSet, MPAVRoute, NSMutableArray, MPAVRoutingDataSource, NSString, NSSet;

@interface MPAVRoutingController : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSArray* _cachedRoutes;
	NSArray* _cachedPickedRoutes;
	NSMutableSet* _pendingPickedRoutes;
	MPAVRoute* _legacyCachedRoute;
	NSMutableArray* _asyncFetchingCompletionHandlers;
	BOOL _asyncFetchingRoutes;
	long long _externalScreenType;
	BOOL _hasExternalScreenType;
	BOOL _scheduledSendDelegateRoutesChanged;
	long long _volumeControlStateForPickedRoute;
	int _deviceAvailabilityNotifyToken;
	BOOL _deviceAvailabilityOverrideState;
	BOOL _fetchAvailableRoutesSynchronously;
	id<MPAVRoutingControllerDelegate> _delegate;
	MPAVRoutingDataSource* _dataSource;
	NSString* _name;
	long long _discoveryMode;
	NSString* _category;
	long long _routeTypes;

}

@property (assign,nonatomic,__weak) id<MPAVRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MPAVRoutingDataSource * dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long discoveryMode;                                        //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (assign,nonatomic) BOOL fetchAvailableRoutesSynchronously;                         //@synthesize fetchAvailableRoutesSynchronously=_fetchAvailableRoutesSynchronously - In the implementation block
@property (nonatomic,readonly) long long externalScreenType; 
@property (nonatomic,copy,readonly) NSArray * availableRoutes; 
@property (nonatomic,copy) NSString * category;                                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) long long routeTypes;                                           //@synthesize routeTypes=_routeTypes - In the implementation block
@property (nonatomic,readonly) MPAVRoute * pickedRoute; 
@property (nonatomic,readonly) NSArray * pickedRoutes; 
@property (nonatomic,readonly) NSSet * pendingPickedRoutes;                                  //@synthesize pendingPickedRoutes=_pendingPickedRoutes - In the implementation block
@property (nonatomic,readonly) MPAVRoute * pendingPickedRoute; 
@property (nonatomic,readonly) BOOL hasPendingPickedRoutes; 
@property (nonatomic,readonly) BOOL volumeControlIsAvailable; 
@property (nonatomic,readonly) BOOL supportsMultipleSelection; 
+(id)_iconImageForRoute:(id)arg1 ;
+(id)_currentDeviceRoutingIconImageName;
+(id)systemRouteWithContextUID:(id)arg1 ;
+(void)getActiveRouteWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
+(void)_getActiveRouteWithTimeout:(double)arg1 discoveredRoutes:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)systemRoute;
+(id)_currentDeviceRoutingIconImage;
+(void)getActiveRouteWithCompletion:(/*^block*/id)arg1 ;
+(void)setActiveRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id<MPAVRoutingControllerDelegate>)delegate;
-(void)setDelegate:(id<MPAVRoutingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(MPAVRoutingDataSource *)dataSource;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(id)initWithName:(id)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(BOOL)volumeControlIsAvailable;
-(void)setFetchAvailableRoutesSynchronously:(BOOL)arg1 ;
-(MPAVRoute *)pickedRoute;
-(void)clearCachedRoutes;
-(BOOL)pickBestDeviceRoute;
-(long long)externalScreenType;
-(NSArray *)availableRoutes;
-(BOOL)airtunesRouteIsPicked;
-(BOOL)wirelessDisplayRouteIsPicked;
-(BOOL)routeOtherThanHandsetAndSpeakerAvailable;
-(NSArray *)pickedRoutes;
-(long long)discoveryMode;
-(id)initWithDataSource:(id)arg1 name:(id)arg2 ;
-(BOOL)fetchAvailableRoutesSynchronously;
-(void)_scheduleSendDelegateRoutesChanged;
-(void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)_externalScreenType:(BOOL*)arg1 ;
-(void)_setExternalScreenType:(long long)arg1 ;
-(void)_updateCachedRoutes;
-(id)_pickedRoutesInArray:(id)arg1 ;
-(BOOL)routeIsLeaderOfEndpoint:(id)arg1 ;
-(long long)_volumeControlStateForPickedRoute;
-(void)_setVolumeControlStateForPickedRoute:(long long)arg1 ;
-(void)_onQueueClearCachedRoutes;
-(BOOL)pickRoute:(id)arg1 withPassword:(id)arg2 ;
-(BOOL)pickRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addPendingRoute:(id)arg1 ;
-(void)_removePendingRoute:(id)arg1 ;
-(void)_sendDelegateFailedToPickRouteWithError:(id)arg1 ;
-(BOOL)supportsMultipleSelection;
-(BOOL)addPickedRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_updateGroupMembership:(long long)arg1 forRoute:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)removePickedRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)pickRoute:(id)arg1 ;
-(BOOL)_deviceAvailabilityOverrideState;
-(void)_refreshPendingRoutes;
-(void)_sendDelegatePickedRoutesChanged;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(void)_routeStatusDidChangeNotification:(id)arg1 ;
-(void)_volumeControlAvailabilityDidChangeNotification:(id)arg1 ;
-(void)_externalScreenTypeDidChangeNotification:(id)arg1 ;
-(void)_activeAudioRouteDidChangeNotification:(id)arg1 ;
-(void)_onQueueSetExternalScreenType:(long long)arg1 ;
-(void)getActiveRouteWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRouteTypes:(long long)arg1 ;
-(BOOL)routeIsPendingPick:(id)arg1 ;
-(BOOL)hasPendingPickedRoutes;
-(MPAVRoute *)pendingPickedRoute;
-(void)fetchAvailableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)videoRouteForRoute:(id)arg1 ;
-(BOOL)addPickedRoute:(id)arg1 ;
-(BOOL)removePickedRoute:(id)arg1 ;
-(BOOL)pickHandsetRoute;
-(BOOL)pickSpeakerRoute;
-(void)unpickAirPlayScreenRouteWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)speakerRouteIsPicked;
-(BOOL)handsetRouteIsPicked;
-(BOOL)receiverRouteIsPicked;
-(BOOL)wirelessDisplayRoutesAvailable;
-(BOOL)routeOtherThanHandsetAvailable;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)logCurrentRoutes;
-(id)_pickedRouteInArray:(id)arg1 ;
-(long long)routeTypes;
-(NSSet *)pendingPickedRoutes;
@end

