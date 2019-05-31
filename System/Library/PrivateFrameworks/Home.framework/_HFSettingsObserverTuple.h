/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMAccessorySettingsDelegate.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFAccessorySettingsObserver, _HFSettingsObserverTupleOwning;
@class HMAccessorySettings, HMAccessorySetting, NADeallocationSentinel, NSString;

@interface _HFSettingsObserverTuple : NSObject <HMAccessorySettingsDelegate, NAIdentifiable> {

	HMAccessorySettings* _settings;
	HMAccessorySetting* _setting;
	id<HFAccessorySettingsObserver> _observer;
	id<_HFSettingsObserverTupleOwning> _owner;
	NADeallocationSentinel* _observerDeallocationSentinel;

}

@property (nonatomic,retain) HMAccessorySettings * settings;                                     //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) HMAccessorySetting * setting;                                       //@synthesize setting=_setting - In the implementation block
@property (assign,nonatomic,__weak) id<HFAccessorySettingsObserver> observer;                    //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic,__weak) id<_HFSettingsObserverTupleOwning> owner;                    //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NADeallocationSentinel * observerDeallocationSentinel;              //@synthesize observerDeallocationSentinel=_observerDeallocationSentinel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)tupleForSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(HMAccessorySettings *)settings;
-(id<_HFSettingsObserverTupleOwning>)owner;
-(void)setOwner:(id<_HFSettingsObserverTupleOwning>)arg1 ;
-(void)setSettings:(HMAccessorySettings *)arg1 ;
-(void)setObserver:(id<HFAccessorySettingsObserver>)arg1 ;
-(id<HFAccessorySettingsObserver>)observer;
-(void)setSetting:(HMAccessorySetting *)arg1 ;
-(void)settingsDidUpdate:(id)arg1 ;
-(void)settingsWillUpdate:(id)arg1 ;
-(id)initWithSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4 ;
-(void)setObserverDeallocationSentinel:(NADeallocationSentinel *)arg1 ;
-(void)_accessorySettingDidUpdate:(id)arg1 ;
-(void)_accessorySettingReflectionStateDidUpdate:(id)arg1 ;
-(NADeallocationSentinel *)observerDeallocationSentinel;
-(HMAccessorySetting *)setting;
@end

