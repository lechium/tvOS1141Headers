/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNSettings, MNObserverHashTable;

@interface MNSettingsManager : NSObject {

	MNSettings* _settings;
	MNObserverHashTable* _observers;

}

@property (nonatomic,readonly) MNSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)sharedInstance;
-(MNSettings *)settings;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)updateForSettings:(id)arg1 ;
-(void)_setVolumeFromDefaults;
@end
