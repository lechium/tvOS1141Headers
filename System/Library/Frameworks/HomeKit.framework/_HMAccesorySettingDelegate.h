/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _HMAccesorySettingDelegate <NSObject>
@optional
-(void)_setting:(id)arg1 didAddConstraint:(id)arg2;
-(void)_setting:(id)arg1 didRemoveConstraint:(id)arg2;

@required
-(void)_settingWillUpdateReflected:(id)arg1;
-(void)_settingDidUpdateReflected:(id)arg1;
-(void)_settingWillUpdateValue:(id)arg1;
-(void)_settingDidUpdateValue:(id)arg1;

@end
