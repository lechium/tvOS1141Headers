/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSMutableSceneClientSettings.h>
#import <UIKit/UIApplicationSceneClientSettings.h>

@class NSString, FBSDisplayMode;

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings> {

	BOOL _statusBarForegroundTransparent;

}

@property (assign,nonatomic) long long statusBarStyle; 
@property (assign,nonatomic) BOOL statusBarHidden; 
@property (assign,getter=isStatusBarForegroundTransparent,nonatomic) BOOL statusBarForegroundTransparent;              //@synthesize statusBarForegroundTransparent=_statusBarForegroundTransparent - In the implementation block
@property (assign,nonatomic) unsigned statusBarContextID; 
@property (assign,nonatomic) long long defaultStatusBarStyle; 
@property (assign,nonatomic) BOOL defaultStatusBarHidden; 
@property (assign,nonatomic) long long userInterfaceStyle; 
@property (nonatomic,copy) NSString * defaultPNGName; 
@property (assign,nonatomic) double defaultPNGExpirationTime; 
@property (assign,nonatomic) long long compatibilityMode; 
@property (assign,nonatomic) BOOL deviceOrientationEventsEnabled; 
@property (assign,nonatomic) BOOL interfaceOrientationChangesDisabled; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations; 
@property (assign,nonatomic) BOOL idleTimerDisabled; 
@property (assign,nonatomic) unsigned long long proximityDetectionModes; 
@property (assign,nonatomic) double controlCenterAmbiguousActivationMargin; 
@property (assign,nonatomic) long long controlCenterRevealMode; 
@property (assign,nonatomic) long long notificationCenterRevealMode; 
@property (assign,nonatomic) UIEdgeInsets primaryWindowOverlayInsets; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,nonatomic) BOOL idleModeVisualEffectsEnabled; 
@property (assign,nonatomic) long long whitePointAdaptivityStyle; 
@property (assign,nonatomic) long long overscanCompensation; 
@property (nonatomic,retain) FBSDisplayMode * requestedDisplayMode; 
@property (assign,getter=isReachabilitySupported,nonatomic) BOOL reachabilitySupported; 
@property (assign,nonatomic) BOOL wantsExclusiveForeground; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)interfaceOrientation;
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(void)setWantsExclusiveForeground:(BOOL)arg1 ;
-(BOOL)isUISubclass;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setDeviceOrientationEventsEnabled:(BOOL)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(void)setStatusBarStyle:(long long)arg1 ;
-(long long)userInterfaceStyle;
-(BOOL)statusBarHidden;
-(long long)statusBarStyle;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)setCompatibilityMode:(long long)arg1 ;
-(void)setDefaultStatusBarStyle:(long long)arg1 ;
-(void)setDefaultStatusBarHidden:(BOOL)arg1 ;
-(void)setDefaultPNGName:(NSString *)arg1 ;
-(void)setDefaultPNGExpirationTime:(double)arg1 ;
-(unsigned long long)proximityDetectionModes;
-(void)setProximityDetectionModes:(unsigned long long)arg1 ;
-(void)setIdleModeVisualEffectsEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPrimaryWindowOverlayInsets:(UIEdgeInsets)arg1 ;
-(NSString *)defaultPNGName;
-(long long)compatibilityMode;
-(void)setStatusBarContextID:(unsigned)arg1 ;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)overscanCompensation;
-(void)setOverscanCompensation:(long long)arg1 ;
-(BOOL)deviceOrientationEventsEnabled;
-(BOOL)isStatusBarForegroundTransparent;
-(void)setStatusBarForegroundTransparent:(BOOL)arg1 ;
-(unsigned)statusBarContextID;
-(long long)defaultStatusBarStyle;
-(BOOL)defaultStatusBarHidden;
-(double)defaultPNGExpirationTime;
-(BOOL)interfaceOrientationChangesDisabled;
-(BOOL)idleTimerDisabled;
-(double)controlCenterAmbiguousActivationMargin;
-(long long)controlCenterRevealMode;
-(long long)notificationCenterRevealMode;
-(UIEdgeInsets)primaryWindowOverlayInsets;
-(BOOL)idleModeVisualEffectsEnabled;
-(long long)whitePointAdaptivityStyle;
-(FBSDisplayMode *)requestedDisplayMode;
-(BOOL)isReachabilitySupported;
-(BOOL)wantsExclusiveForeground;
-(void)setInterfaceOrientationChangesDisabled:(BOOL)arg1 ;
-(void)setControlCenterAmbiguousActivationMargin:(double)arg1 ;
-(void)setControlCenterRevealMode:(long long)arg1 ;
-(void)setNotificationCenterRevealMode:(long long)arg1 ;
-(void)setRequestedDisplayMode:(FBSDisplayMode *)arg1 ;
-(void)setReachabilitySupported:(BOOL)arg1 ;
@end

