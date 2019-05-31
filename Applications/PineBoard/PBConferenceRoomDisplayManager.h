//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBApplicationProcessObserver.h"
#import "PBScreenSaverManagerObserver.h"

@class NSString, TVSStateMachine;

@interface PBConferenceRoomDisplayManager : NSObject <PBScreenSaverManagerObserver, FBApplicationProcessObserver>
{
    _Bool _crdActive;	// 8 = 0x8
    TVSStateMachine *_stateMachine;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000e1f10
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic, getter=isCRDActive) _Bool crdActive; // @synthesize crdActive=_crdActive;
- (void).cxx_destruct;	// IMP=0x00000001000e4470
- (void)_updateIfCRDDisabledWhileActive;	// IMP=0x00000001000e43b0
- (void)_updateIfCRDForcedOnWhileIdle;	// IMP=0x00000001000e42a8
- (void)_handleLoadingTimeout;	// IMP=0x00000001000e4260
- (id)_showCRDWaitingScreen;	// IMP=0x00000001000e41cc
- (void)_exitCRDApp;	// IMP=0x00000001000e3fdc
- (id)_launchCRDApp;	// IMP=0x00000001000e3da8
- (void)_initializeStateMachine;	// IMP=0x00000001000e2764
- (void)_handleSettingsChanged;	// IMP=0x00000001000e2708
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000e2640
- (void)screenSaverManagerDidDismissScreenSaver:(id)arg1;	// IMP=0x00000001000e2620
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x00000001000e2600
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x00000001000e25e0
- (void)screenSaverManagerWillPresentScreenSaver:(id)arg1;	// IMP=0x00000001000e25c0
- (_Bool)dismissCRDWaitingScreen;	// IMP=0x00000001000e2504
- (void)handleTermination;	// IMP=0x00000001000e24e4
- (void)canStopCRDWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e2338
- (void)endStopCRD;	// IMP=0x00000001000e2318
- (void)beginStopCRD;	// IMP=0x00000001000e22f8
- (_Bool)startCRDWithReason:(unsigned long long)arg1;	// IMP=0x00000001000e21b4
- (void)dealloc;	// IMP=0x00000001000e20ec
- (id)_init;	// IMP=0x00000001000e2008
- (id)init;	// IMP=0x00000001000e1fc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
