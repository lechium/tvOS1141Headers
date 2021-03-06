/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSSceneClientSettings.h>
#import <UIKit/UIApplicationSceneClientSettings.h>
@class NSString, FBSDisplayMode;


@protocol UIApplicationSceneClientSettings <NSObject>
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (getter=isStatusBarForegroundTransparent,nonatomic,readonly) BOOL statusBarForegroundTransparent; 
@property (nonatomic,readonly) unsigned statusBarContextID; 
@property (nonatomic,readonly) long long defaultStatusBarStyle; 
@property (nonatomic,readonly) BOOL defaultStatusBarHidden; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,copy,readonly) NSString * defaultPNGName; 
@property (nonatomic,readonly) double defaultPNGExpirationTime; 
@property (nonatomic,readonly) long long compatibilityMode; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL interfaceOrientationChangesDisabled; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations; 
@property (nonatomic,readonly) BOOL idleTimerDisabled; 
@property (nonatomic,readonly) unsigned long long proximityDetectionModes; 
@property (nonatomic,readonly) double controlCenterAmbiguousActivationMargin; 
@property (nonatomic,readonly) long long controlCenterRevealMode; 
@property (nonatomic,readonly) long long notificationCenterRevealMode; 
@property (nonatomic,readonly) UIEdgeInsets primaryWindowOverlayInsets; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) BOOL idleModeVisualEffectsEnabled; 
@property (nonatomic,readonly) long long whitePointAdaptivityStyle; 
@property (nonatomic,readonly) long long overscanCompensation; 
@property (nonatomic,readonly) FBSDisplayMode * requestedDisplayMode; 
@property (getter=isReachabilitySupported,nonatomic,readonly) BOOL reachabilitySupported; 
@property (nonatomic,readonly) BOOL wantsExclusiveForeground; 
@required
-(long long)interfaceOrientation;
-(long long)userInterfaceStyle;
-(BOOL)statusBarHidden;
-(long long)statusBarStyle;
-(long long)backgroundStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(unsigned long long)proximityDetectionModes;
-(NSString *)defaultPNGName;
-(long long)compatibilityMode;
-(long long)overscanCompensation;
-(BOOL)deviceOrientationEventsEnabled;
-(BOOL)isStatusBarForegroundTransparent;
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

@end


@class NSString, FBSDisplayMode;

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) BOOL statusBarHidden; 
@property (getter=isStatusBarForegroundTransparent,nonatomic,readonly) BOOL statusBarForegroundTransparent; 
@property (nonatomic,readonly) unsigned statusBarContextID; 
@property (nonatomic,readonly) long long defaultStatusBarStyle; 
@property (nonatomic,readonly) BOOL defaultStatusBarHidden; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (nonatomic,copy,readonly) NSString * defaultPNGName; 
@property (nonatomic,readonly) double defaultPNGExpirationTime; 
@property (nonatomic,readonly) long long compatibilityMode; 
@property (nonatomic,readonly) BOOL deviceOrientationEventsEnabled; 
@property (nonatomic,readonly) BOOL interfaceOrientationChangesDisabled; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations; 
@property (nonatomic,readonly) BOOL idleTimerDisabled; 
@property (nonatomic,readonly) unsigned long long proximityDetectionModes; 
@property (nonatomic,readonly) double controlCenterAmbiguousActivationMargin; 
@property (nonatomic,readonly) long long controlCenterRevealMode; 
@property (nonatomic,readonly) long long notificationCenterRevealMode; 
@property (nonatomic,readonly) UIEdgeInsets primaryWindowOverlayInsets; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) BOOL idleModeVisualEffectsEnabled; 
@property (nonatomic,readonly) long long whitePointAdaptivityStyle; 
@property (nonatomic,readonly) long long overscanCompensation; 
@property (nonatomic,readonly) FBSDisplayMode * requestedDisplayMode; 
@property (getter=isReachabilitySupported,nonatomic,readonly) BOOL reachabilitySupported; 
@property (nonatomic,readonly) BOOL wantsExclusiveForeground; 
-(long long)interfaceOrientation;
-(BOOL)isUISubclass;
-(long long)userInterfaceStyle;
-(BOOL)statusBarHidden;
-(long long)statusBarStyle;
-(long long)backgroundStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(unsigned long long)proximityDetectionModes;
-(NSString *)defaultPNGName;
-(long long)compatibilityMode;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)overscanCompensation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)deviceOrientationEventsEnabled;
-(BOOL)isStatusBarForegroundTransparent;
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
-(id)keyDescriptionForOtherSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofOtherSetting:(unsigned long long)arg3 ;
@end

