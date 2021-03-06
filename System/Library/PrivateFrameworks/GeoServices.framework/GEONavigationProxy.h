/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOServerFormattedStepStringFormatter;
#import <GeoServices/GeoServices-Structs.h>
@class NSXPCConnection, NSString, GEOComposedRoute, GEOLocation, GEORouteMatch, NSData, NSArray, GEONameInfo, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, GEONavigationGuidanceState, GEOCompanionRouteDetails, GEOCompanionRouteStatus, GEOCompanionRouteContext;

@interface GEONavigationProxy : NSObject {

	NSXPCConnection* _navdConnection;
	NSXPCConnection* _nanomapscdConnection;
	int _navigationStartedToken;
	BOOL _hasNavigationStartedToken;
	NSString* _destinationName;
	GEOComposedRoute* _route;
	GEOLocation* _lastLocation;
	BOOL _locationUnreliable;
	GEORouteMatch* _routeMatch;
	NSString* _currentRoadName;
	BOOL _guidancePromptsEnabled;
	NSData* _activeRouteDetailsData;
	NSArray* _rideSelections;
	unsigned long long _stepIndex;
	unsigned long long _displayedStepIndex;
	GEONameInfo* _stepNameInfo;
	SCD_Struct_GE29 _positionFromSign;
	SCD_Struct_GE29 _positionFromManeuver;
	SCD_Struct_GE29 _positionFromDestination;
	unsigned long long _announcementStage;
	unsigned long long _nextAnnouncementStage;
	double _timeUntilNextAnnouncement;
	GEONavigationRouteSummary* _routeSummary;
	GEONavigationRouteTransitSummary* _transitRouteSummary;
	GEONavigationGuidanceState* _guidanceState;
	NSData* _trafficIncidentAlertDetailsData;
	int _navigationVoiceVolume;
	BOOL _isNavigatingInLowGuidance;
	GEOCompanionRouteDetails* _companionRouteDetails;
	GEOCompanionRouteStatus* _companionRouteStatus;
	GEOCompanionRouteContext* _companionRouteContext;
	BOOL _shouldSendRouteWithStatus;
	id<GEOServerFormattedStepStringFormatter> _formatter;

}

@property (retain) id<GEOServerFormattedStepStringFormatter> formatter;              //@synthesize formatter=_formatter - In the implementation block
-(void)setStepIndex:(unsigned long long)arg1 ;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(void)setRouteMatch:(id)arg1 ;
-(void)startWithDestinationName:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(void)setNavigationState:(int)arg1 ;
-(void)setLastLocation:(id)arg1 ;
-(void)setDestinationName:(id)arg1 ;
-(void)setCurrentRoadName:(id)arg1 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setActiveRouteDetailsData:(id)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)setStepNameInfo:(id)arg1 ;
-(void)setClusteredSectionSelectedRideFromRoute:(id)arg1 routeID:(id)arg2 ;
-(void)setPositionFromSign:(SCD_Struct_GE29)arg1 ;
-(void)setPositionFromManeuver:(SCD_Struct_GE29)arg1 ;
-(void)setPositionFromDestination:(SCD_Struct_GE29)arg1 ;
-(void)setAnnouncementStage:(unsigned long long)arg1 ;
-(void)setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2 ;
-(void)setTrafficIncidentDetailsData:(id)arg1 ;
-(void)setNavigationVoiceVolume:(int)arg1 ;
-(void)setIsNavigatingInLowGuidance:(BOOL)arg1 ;
-(void)triggerHaptics:(int)arg1 ;
-(void)_clearState;
-(void)_openNavdConnection;
-(void)_closeNavdConnection;
-(void)_sendRouteSummary;
-(void)_sendTransitSummary;
-(void)_sendGuidanceState;
-(void)_sendCurrentRoadName;
-(void)_sendStepIndex;
-(void)_sendStepNameInfo;
-(void)_sendRideSelections;
-(void)_sendActiveRouteDetailsData;
-(void)_sendPositionFromSign;
-(void)_sendPositionFromManeuver;
-(void)_sendPositionFromDestination;
-(void)_sendTrafficIncidentAlertDetailsData;
-(void)_sendNavigationVoiceVolume;
-(void)_openNanomapscdConnection;
-(void)_closeNanomapscdConnection;
-(void)_updateCompanionRouteStatus;
-(void)_markCurrentHapticsAsTriggered;
-(void)_sendCompanionRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3 ;
-(void)_sendCompanionRouteStatus;
-(void)_sendCoalescedCompanionRouteStatus;
-(void)_invalidateNavigationSessionWithRouteContext:(id)arg1 ;
-(id<GEOServerFormattedStepStringFormatter>)formatter;
-(void)setFormatter:(id<GEOServerFormattedStepStringFormatter>)arg1 ;
-(void)dealloc;
-(void)stop;
@end

