/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNNavigationSessionObserver.h>

@class GEONavigationProxy, NSString;

@interface MNNavigationProxyUpdater : NSObject <MNNavigationSessionObserver> {

	GEONavigationProxy* _navigationProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)setIsNavigatingInLowGuidance:(BOOL)arg1 ;
-(void)setVoiceVolume:(unsigned long long)arg1 ;
-(id)init;
-(void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2 ;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 ;
-(void)navigationSession:(id)arg1 didUpdateStepNameInfo:(id)arg2 ;
-(void)navigationSession:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3 ;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 ;
-(void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 ;
-(void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2 ;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4 ;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4 ;
-(void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3 ;
-(void)navigationSession:(id)arg1 triggerHaptics:(int)arg2 ;
-(void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2 ;
-(void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2 ;
-(void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)navigationSession:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2 ;
-(void)navigationSession:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2 ;
-(void)navigationSessionStarted:(id)arg1 ;
-(void)navigationSessionStopped:(id)arg1 ;
-(void)updateClusteredSectionSelectedRideForNavigationSession:(id)arg1 ;
@end

