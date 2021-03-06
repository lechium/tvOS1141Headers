/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSMutableSceneSettings.h>
#import <UIKit/UIApplicationSceneSettings.h>

@class NSNumber, NSString;

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>

@property (assign,nonatomic) BOOL underLock; 
@property (assign,nonatomic) int statusBarStyleOverridesToSuppress; 
@property (assign,nonatomic) unsigned long long deactivationReasons; 
@property (assign,nonatomic) long long userInterfaceStyle; 
@property (nonatomic,retain) NSNumber * forcedStatusBarStyle; 
@property (nonatomic,retain) NSNumber * forcedStatusBarHidden; 
@property (assign,nonatomic) BOOL forcedStatusBarForegroundTransparent; 
@property (assign,nonatomic) BOOL deviceOrientationEventsEnabled; 
@property (assign,nonatomic) BOOL canShowAlerts; 
@property (assign,nonatomic) BOOL idleModeEnabled; 
@property (assign,nonatomic) BOOL statusBarDisabled; 
@property (assign,nonatomic) long long deviceOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isUISubclass;
-(void)setDeviceOrientation:(long long)arg1 ;
-(void)setDeviceOrientationEventsEnabled:(BOOL)arg1 ;
-(long long)userInterfaceStyle;
-(long long)deviceOrientation;
-(BOOL)underLock;
-(BOOL)statusBarDisabled;
-(NSNumber *)forcedStatusBarStyle;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(int)statusBarStyleOverridesToSuppress;
-(BOOL)idleModeEnabled;
-(void)setIdleModeEnabled:(BOOL)arg1 ;
-(BOOL)canShowAlerts;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)deactivationReasons;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(NSNumber *)forcedStatusBarHidden;
-(Class)canvasClass;
-(BOOL)forcedStatusBarForegroundTransparent;
-(BOOL)deviceOrientationEventsEnabled;
-(void)setUnderLock:(BOOL)arg1 ;
-(void)setStatusBarStyleOverridesToSuppress:(int)arg1 ;
-(void)setDeactivationReasons:(unsigned long long)arg1 ;
-(void)setForcedStatusBarStyle:(NSNumber *)arg1 ;
-(void)setForcedStatusBarHidden:(NSNumber *)arg1 ;
-(void)setForcedStatusBarForegroundTransparent:(BOOL)arg1 ;
-(void)setCanShowAlerts:(BOOL)arg1 ;
-(void)setStatusBarDisabled:(BOOL)arg1 ;
@end

