//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSExternalControlSystemDelegate.h"
#import "PBVolumeControllerDelegate.h"

@class NSString, PBSExternalControlSystem, PBVolumeController, TVSStateMachine;

@interface PBExternalControlSystem : NSObject <PBSExternalControlSystemDelegate, PBVolumeControllerDelegate>
{
    PBSExternalControlSystem *_externalControlSystem;	// 8 = 0x8
    PBVolumeController *_volumeController;	// 16 = 0x10
    TVSStateMachine *_volumeBehaviorStateMachine;	// 24 = 0x18
}

+ (_Bool)isAppleIRRemotePaired;	// IMP=0x00000001000dd65c
+ (void)unpairAppleIRRemote;	// IMP=0x00000001000dd608
+ (void)pairAppleIRRemote;	// IMP=0x00000001000dd5b4
+ (_Bool)volumeControlEnabled;	// IMP=0x00000001000dd540
+ (_Bool)volumeControlNeedsConfiguring;	// IMP=0x00000001000dd304
+ (id)sharedSystem;	// IMP=0x00000001000dd2a8
+ (id)_sharedInstance;	// IMP=0x00000001000df568
@property(retain, nonatomic) TVSStateMachine *volumeBehaviorStateMachine; // @synthesize volumeBehaviorStateMachine=_volumeBehaviorStateMachine;
@property(retain, nonatomic) PBVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) PBSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_externalControlSystem;
- (void).cxx_destruct;	// IMP=0x00000001000df514
- (void)_initializeVolumeBehaviorStateMachine;	// IMP=0x00000001000dec58
- (void)_listenForNowPlayingAppNotifications;	// IMP=0x00000001000deb7c
- (void)_listenForVolumeButtonOverrideUpdates;	// IMP=0x00000001000deb18
- (void)volumeSupportedChanged:(id)arg1 forOutputContext:(unsigned long long)arg2;	// IMP=0x00000001000dead0
- (void)externalControlSystemDidRequestAlternateRouteVolumeDown:(id)arg1 behavior:(long long)arg2;	// IMP=0x00000001000de87c
- (void)externalControlSystemDidRequestAlternateRouteVolumeUp:(id)arg1 behavior:(long long)arg2;	// IMP=0x00000001000de628
- (void)externalControlSystem:(id)arg1 didHandleRemoteControlButtonReleased:(long long)arg2;	// IMP=0x00000001000de4f8
- (void)externalControlSystem:(id)arg1 didHandleRemoteControlButtonPressed:(long long)arg2;	// IMP=0x00000001000de3c8
- (void)externalControlSystemDidUpdatePolicy:(id)arg1;	// IMP=0x00000001000ddf08
- (void)externalControlSystem:(id)arg1 didReceiveRequest:(long long)arg2;	// IMP=0x00000001000ddb40
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000dd980
- (id)init;	// IMP=0x00000001000dd7fc
- (void)tvs_bindDisplayModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x00000001000dd708
- (id)DisplayModeBinding;	// IMP=0x00000001000dd6b4
- (_Bool)_shouldSuppressWakeForRemoteControlButton:(long long)arg1;	// IMP=0x00000001000df6a4
- (void)_handleDisplayModeDidChange;	// IMP=0x00000001000df5e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
