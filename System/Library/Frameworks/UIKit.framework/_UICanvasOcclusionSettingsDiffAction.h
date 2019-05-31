/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UICanvasSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, NSString;

@interface _UICanvasOcclusionSettingsDiffAction : NSObject <_UICanvasSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsBackgroundAndOcclusionDiffInspector;

}

@property (nonatomic,retain) UIApplicationSceneSettingsDiffInspector * sceneSettingsBackgroundAndOcclusionDiffInspector;              //@synthesize sceneSettingsBackgroundAndOcclusionDiffInspector=_sceneSettingsBackgroundAndOcclusionDiffInspector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performActionsForCanvas:(id)arg1 withUpdatedScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 ;
-(UIApplicationSceneSettingsDiffInspector *)sceneSettingsBackgroundAndOcclusionDiffInspector;
-(void)setSceneSettingsBackgroundAndOcclusionDiffInspector:(UIApplicationSceneSettingsDiffInspector *)arg1 ;
@end

