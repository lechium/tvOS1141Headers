//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSValue, TVCSAccessory, TVCSHome, TVSStateMachine;

@interface PBHomeAccessoryManager : NSObject
{
    TVSStateMachine *_homeOnboardingStateMachine;	// 8 = 0x8
    TVSStateMachine *_stateMachine;	// 16 = 0x10
    TVCSHome *_home;	// 24 = 0x18
    TVCSAccessory *_accessory;	// 32 = 0x20
    long long _homeConfigurationState;	// 40 = 0x28
    NSValue *_waitingForCloudDataTime;	// 48 = 0x30
}

+ (_Bool)_isDeviceNameAppleTV:(id)arg1;	// IMP=0x00000001000d30d0
+ (_Bool)_isDeviceName:(id)arg1 roomNameInAccessory:(id)arg2;	// IMP=0x00000001000d2da8
+ (_Bool)_isAccessoryInDefaultRoom:(id)arg1;	// IMP=0x00000001000d2c5c
+ (id)sharedInstance;	// IMP=0x00000001000d1588
@property(copy, nonatomic, getter=_waitingForCloudDataTime, setter=_setWaitingForCloudDataTime:) NSValue *waitingForCloudDataTime; // @synthesize waitingForCloudDataTime=_waitingForCloudDataTime;
@property(nonatomic, getter=_homeConfigurationState, setter=_setHomeConfigurationState:) long long homeConfigurationState; // @synthesize homeConfigurationState=_homeConfigurationState;
@property(retain, nonatomic, getter=_accessory, setter=_setAccessory:) TVCSAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic, getter=_home, setter=_setHome:) TVCSHome *home; // @synthesize home=_home;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void).cxx_destruct;	// IMP=0x00000001000d4ad8
@property(readonly, nonatomic, getter=_homeOnboardingStateMachine) TVSStateMachine *homeOnboardingStateMachine; // @synthesize homeOnboardingStateMachine=_homeOnboardingStateMachine;
- (void)_moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2;	// IMP=0x00000001000d3e44
- (void)_moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x00000001000d3a18
- (void)_configureLocalAccessory;	// IMP=0x00000001000d3540
- (void)setupAssistantDidFinish;	// IMP=0x00000001000d2a90
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000d28b0
- (void)_initialiseStateMachine;	// IMP=0x00000001000d1914
- (id)_init;	// IMP=0x00000001000d1648
- (id)init;	// IMP=0x00000001000d1608

@end

