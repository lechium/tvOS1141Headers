/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNGuidanceManager.h>
#import <libobjc.A.dylib/MNTimeManagerObserver.h>

@protocol MNGuidanceManagerDelegate, MNAnnoucementStrategy;
@class MNNavigationSession, NSMutableArray, GEOComposedGuidanceEvent, NSMutableDictionary, MNGuidanceSignInfo, MNAnnouncementPlanEvent, MNLocation, NSArray, NSString;

@interface MNGuidanceEventManager : NSObject <MNGuidanceManager, MNTimeManagerObserver> {

	id<MNGuidanceManagerDelegate> _delegate;
	MNNavigationSession* _navigationSession;
	NSMutableArray* _events;
	GEOComposedGuidanceEvent* _nextEvent;
	id<MNAnnoucementStrategy> _announcementStrategy;
	NSMutableDictionary* _announcementsSpoken;
	NSMutableDictionary* _hapticsTriggered;
	GEOComposedGuidanceEvent* _currentLaneGuidanceEvent;
	MNGuidanceSignInfo* _signInfo;
	GEOComposedGuidanceEvent* _startSpokenGuidanceEvent;
	GEOComposedGuidanceEvent* _getOnRouteSpokenGuidanceEvent;
	GEOComposedGuidanceEvent* _endSpokenGuidanceEvent;
	GEOComposedGuidanceEvent* _returnToRouteSpokenGuidanceEvent;
	NSMutableArray* _startSignGuidanceEvents;
	GEOComposedGuidanceEvent* _endSignGuidanceEvent;
	GEOComposedGuidanceEvent* _returnToRouteSignGuidanceEvent;
	BOOL _hasBeenOnRouteOnce;
	BOOL _canSpeakReturnToRouteAnnouncement;
	double _timeLastAnnouncementStarted;
	double _timeLastAnnouncementEnded;
	MNAnnouncementPlanEvent* _lastAnnouncementEvent;
	unsigned long long _lastStepIndex;
	BOOL _hasStickyEvents;
	MNLocation* _location;
	double _speed;
	NSMutableArray* _validEvents;
	NSMutableDictionary* _feedback;
	NSArray* _previousSignEvents;
	GEOComposedGuidanceEvent* _previousLaneGuidanceEvent;

}

@property (nonatomic,readonly) NSArray * events;                                         //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) MNLocation * location;                                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double speed;                                               //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic,__weak) id<MNGuidanceManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MNGuidanceManagerDelegate>)delegate;
-(void)setDelegate:(id<MNGuidanceManagerDelegate>)arg1 ;
-(void)dealloc;
-(void)setSpeed:(double)arg1 ;
-(void)reset;
-(double)speed;
-(void)stop;
-(MNLocation *)location;
-(void)setLocation:(MNLocation *)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(void)updateDestination:(id)arg1 ;
-(void)updateForReroute:(id)arg1 ;
-(void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2 ;
-(double)timeSinceLastAnnouncement;
-(double)timeUntilNextAnnouncement;
-(BOOL)repeatLastGuidanceAnnouncement:(id)arg1 ;
-(void)updateForReturnToRoute;
-(void)timeManagerDidChangeProvider:(id)arg1 ;
-(void)_initSpecialGuidanceEvents;
-(double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3 ;
-(void)_stepDidChange;
-(void)_filterValidEvents;
-(id)_spokenEventsRemainingInStep;
-(BOOL)_shouldUseLocation:(id)arg1 ;
-(void)_considerAnnouncements;
-(void)_considerHaptics;
-(void)_considerLaneGuidance;
-(void)_considerSignGuidance;
-(void)_considerStickiness;
-(void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2 ;
-(double)_calculateDurationToSpeakEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3 ;
-(void)_notifySpeechEvent:(id)arg1 variant:(unsigned long long)arg2 ;
-(double)_timeRemainingForEvent:(id)arg1 ;
-(id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 withMinIndex:(unsigned long long)arg3 selectedIndex:(out unsigned long long*)arg4 ;
-(BOOL)_hasSpokenEvent:(id)arg1 ;
-(void)_markEventSpoken:(id)arg1 ;
-(double)_timeUntilEventTrigger:(id)arg1 ;
-(id)_serverStringDictionaryForEvent:(id)arg1 spoken:(BOOL)arg2 ;
-(double)_adjustedVehicleSpeed;
-(BOOL)_isValidEvent:(id)arg1 ;
-(BOOL)_isEventValid:(id)arg1 start:(double)arg2 end:(double)arg3 ;
-(NSArray *)events;
@end
