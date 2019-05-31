//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "PBSExternalControlSystemDelegate.h"

@class NSString, PBSExternalControlSystem, TVSettings3rdPartyRemotesFacade, TVSettingsBluetoothFacade, TVSettingsSelectIRConfigurationViewController;

@interface TVSettingsRemotesViewController : TSKViewController <PBSExternalControlSystemDelegate>
{
    _Bool _updatingPairedAppleRemoteState;	// 8 = 0x8
    _Bool _pairedWithAppleRemote;	// 9 = 0x9
    TVSettingsSelectIRConfigurationViewController *_selectIRConfigurationViewController;	// 16 = 0x10
    PBSExternalControlSystem *_externalControlSystem;	// 24 = 0x18
    TVSettingsBluetoothFacade *_bluetoothFacade;	// 32 = 0x20
    TVSettings3rdPartyRemotesFacade *_remoteFacade;	// 40 = 0x28
}

+ (id)stringForCurrentVolumePolicyWithExternalControlSystem:(id)arg1;	// IMP=0x000000010009edec
@property(retain, nonatomic) TVSettings3rdPartyRemotesFacade *remoteFacade; // @synthesize remoteFacade=_remoteFacade;
@property(retain, nonatomic) TVSettingsBluetoothFacade *bluetoothFacade; // @synthesize bluetoothFacade=_bluetoothFacade;
@property(retain, nonatomic) PBSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_externalControlSystem;
@property(nonatomic, getter=isPairedWithAppleRemote) _Bool pairedWithAppleRemote; // @synthesize pairedWithAppleRemote=_pairedWithAppleRemote;
@property(nonatomic, getter=isUpdatingPairedAppleRemoteState) _Bool updatingPairedAppleRemoteState; // @synthesize updatingPairedAppleRemoteState=_updatingPairedAppleRemoteState;
@property(nonatomic) __weak TVSettingsSelectIRConfigurationViewController *selectIRConfigurationViewController; // @synthesize selectIRConfigurationViewController=_selectIRConfigurationViewController;
- (void).cxx_destruct;	// IMP=0x00000001000a518c
- (void)_remoteFacadeConfigurationChanged;	// IMP=0x00000001000a50a0
- (void)_externalControlSystemConfigurationChanged;	// IMP=0x00000001000a5094
- (void)_updateAppleRemotePairedStateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a4f24
- (void)_fetchAppleRemotePairedState;	// IMP=0x00000001000a4ea0
- (void)_showLearnedRemoteFinishedAlertWithName:(id)arg1;	// IMP=0x00000001000a4bbc
- (void)_setUpPlaybackButtonsForRemoteWithUUID:(id)arg1;	// IMP=0x00000001000a4848
- (void)_showLearnedRemoteOptionsAlertForDevice:(id)arg1 withName:(id)arg2;	// IMP=0x00000001000a43fc
- (void)_learnNewRemote;	// IMP=0x00000001000a4140
- (void)_showSystemControlUnavailableDialog;	// IMP=0x00000001000a3f44
- (_Bool)_canProgramBluetoothRemote;	// IMP=0x00000001000a3f30
- (_Bool)_showLearnedRemotes;	// IMP=0x00000001000a3e84
- (id)_systemControlSettingsGroups;	// IMP=0x00000001000a3248
- (id)_remoteSettingsGroups;	// IMP=0x00000001000a2394
- (id)_appleRemoteSettingGroups;	// IMP=0x00000001000a1738
- (void)externalControlSystemDidUpdatePolicy:(id)arg1;	// IMP=0x00000001000a168c
- (void)externalControlSystem:(id)arg1 didReceiveDeviceEvent:(long long)arg2;	// IMP=0x00000001000a15e0
- (void)externalControlSystem:(id)arg1 didChangeReadyStatus:(_Bool)arg2;	// IMP=0x00000001000a1534
- (void)_activateKonamiCodeForUnpair:(id)arg1;	// IMP=0x00000001000a14e0
- (void)_showSelectedLearnedRemoteOptionsAlertForDevice:(id)arg1 withName:(id)arg2;	// IMP=0x00000001000a00dc
- (void)_didSelectLearnedRemoteItem:(id)arg1;	// IMP=0x000000010009fecc
- (void)_didSelectLearnNewRemoteItem:(id)arg1;	// IMP=0x000000010009fb30
- (void)_didSelectPairAppleRemoteItem:(id)arg1;	// IMP=0x000000010009fa28
- (void)_didSelectVolumeControlItem:(id)arg1;	// IMP=0x000000010009f958
- (void)_togglePowerItem:(id)arg1;	// IMP=0x000000010009f8b8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010009f6b8
- (id)loadSettingGroups;	// IMP=0x000000010009f5cc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010009f57c
- (void)viewDidLoad;	// IMP=0x000000010009f4b8
- (void)dealloc;	// IMP=0x000000010009f440
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010009f1c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

