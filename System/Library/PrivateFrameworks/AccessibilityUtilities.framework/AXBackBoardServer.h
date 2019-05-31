/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXServer.h>

@class NSMutableArray;

@interface AXBackBoardServer : AXServer {

	BOOL _overrideGestureRecognition;
	NSMutableArray* _eventListeners;
	NSMutableArray* _zoomAttributeListeners;

}

@property (assign,nonatomic) BOOL invertColorsEnabled; 
@property (assign,nonatomic) BOOL inPreboardMode; 
@property (assign,nonatomic) BOOL inCheckerBoardMode; 
@property (assign,nonatomic) BOOL sessionIsLoginSession; 
+(id)server;
-(id)init;
-(void)dealloc;
-(unsigned long long)guidedAccessAvailability;
-(BOOL)inPreboardMode;
-(BOOL)inCheckerBoardMode;
-(BOOL)supportsAccessibilityDisplayFilters;
-(BOOL)isGuidedAccessActive;
-(void)_willClearServer;
-(id)_serviceName;
-(void)_didConnectToServer;
-(id)_handleEventListener:(id)arg1 ;
-(id)_handleZoomAttributesListener:(id)arg1 ;
-(void)registerSiriViewServicePID:(int)arg1 ;
-(void)registerAccessibilityUIServicePID:(int)arg1 ;
-(void)setInPreboardMode:(BOOL)arg1 ;
-(void)setInCheckerBoardMode:(BOOL)arg1 ;
-(BOOL)supportsBlueLightReduction;
-(void)disableBrightnessFilters;
-(BOOL)brightnessFiltersEnabled;
-(BOOL)blueLightStatusEnabled;
-(void)restoreCachedBrightnessFilters;
-(BOOL)adaptationEnabled;
-(void)resetAccessibilityFeatures;
-(BOOL)_shouldDispatchLocally;
-(id)backboardServiceInstance;
-(void)setSessionIsLoginSession:(BOOL)arg1 ;
-(void)registerAssistiveTouchPID:(int)arg1 ;
-(void)userEventOccurred;
-(void)setVoiceOverItemChooserVisible:(BOOL)arg1 ;
-(void)setLockScreenDimTimerEnabled:(BOOL)arg1 ;
-(void)setCapsLockLightOn:(BOOL)arg1 ;
-(id)_springboardParametersForGuidedAccessAvailability;
-(void)registerGestureConflictWithZoom:(id)arg1 ;
-(void)zoomAttributesChanged:(id)arg1 ;
-(void)registerZoomAttributesChangeHandler:(/*^block*/id)arg1 ;
-(void)adjustSystemZoom:(int)arg1 ;
-(int)accessibilityAssistiveTouchPID;
-(int)accessibilityUIServicePID;
-(BOOL)sessionIsLoginSession;
-(BOOL)invertColorsEnabled;
-(void)setInvertColorsEnabled:(BOOL)arg1 ;
-(void)postEvent:(id)arg1 afterNamedTap:(id)arg2 includeTaps:(id)arg3 ;
-(void)postEvent:(id)arg1 systemEvent:(BOOL)arg2 ;
-(unsigned)contextIdForPosition:(CGPoint)arg1 ;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
-(CGRect)convertFrame:(CGRect)arg1 fromContextId:(unsigned)arg2 toContextId:(unsigned)arg3 ;
-(CGRect)convertFrame:(CGRect)arg1 toContextId:(unsigned)arg2 ;
-(CGRect)convertFrame:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(void)setHearingAidControlIsVisible:(BOOL)arg1 ;
-(void)setSwitchControlRendersDeviceUnusable:(BOOL)arg1 ;
-(void)setSwitchControlHasScreenSwitch:(BOOL)arg1 ;
-(void)setAccessibilityPreferenceAsMobile:(id)arg1 value:(id)arg2 notification:(id)arg3 ;
-(void)setZoomInitialFocusRect:(CGRect)arg1 fromContext:(unsigned)arg2 ;
-(CGRect)zoomInitialFocusRectWithQueryingContext:(unsigned)arg1 ;
-(BOOL)tripleClickHomeButtonPress;
-(void)homeClickSwallowedForGuidedAccess;
-(BOOL)isGuidedAccessInWorkspace;
-(id)guidedAccessEffectiveAppBundleIdentifier;
-(id)performGuidedAccessAutomationCommand:(id)arg1 error:(id*)arg2 ;
-(void)requestGuidedAccessSessionStartWithConfigurationDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestGuidedAccessSessionEndWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isGuidedAccessSelfLockedToApp:(id)arg1 ;
-(BOOL)isGuidedAccessUnmanagedSelfLocked;
-(void)toggleGuidedAccess;
-(id)guidedAccessIgnoredRegions;
-(unsigned long long)currentGuidedAccessModeAndSessionApp:(id*)arg1 ;
-(void)jetsamThirdPartyApps;
-(BOOL)loadGAXBundleForUnmanagedASAM;
-(BOOL)supportsAdaptation;
@end

