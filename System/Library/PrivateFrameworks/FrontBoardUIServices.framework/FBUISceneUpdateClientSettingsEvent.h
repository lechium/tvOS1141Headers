/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardUIServices/FBUISceneEvent.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff;

@interface FBUISceneUpdateClientSettingsEvent : FBUISceneEvent {

	FBSSceneClientSettings* _settings;
	FBSSceneClientSettingsDiff* _diff;

}

@property (nonatomic,copy) FBSSceneClientSettings * settings;                        //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) FBSSceneClientSettingsDiff * settingsDiff;              //@synthesize diff=_diff - In the implementation block
-(void)dealloc;
-(FBSSceneClientSettings *)settings;
-(void)setSettings:(FBSSceneClientSettings *)arg1 ;
-(FBSSceneClientSettingsDiff *)settingsDiff;
-(void)setSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
@end

