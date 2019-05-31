//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSPowerMonitorObserver.h"

@class NSString, SSDisplay;

@interface PREIdleSleepManager : NSObject <BSPowerMonitorObserver>
{
    _Bool _displayDim;	// 8 = 0x8
    _Bool _allowIdleTimerToBeReset;	// 9 = 0x9
    SSDisplay *_display;	// 16 = 0x10
}

+ (id)sharedController;	// IMP=0x00000001000040d4
@property(retain, nonatomic) SSDisplay *display; // @synthesize display=_display;
@property(nonatomic) _Bool allowIdleTimerToBeReset; // @synthesize allowIdleTimerToBeReset=_allowIdleTimerToBeReset;
@property(nonatomic, getter=isDisplayDim) _Bool displayDim; // @synthesize displayDim=_displayDim;
- (void).cxx_destruct;	// IMP=0x0000000100005108
- (void)powerMonitorSystemDidWakeFromSleep:(id)arg1;	// IMP=0x0000000100005038
- (void)powerMonitorSystemWillWakeFromSleep:(id)arg1;	// IMP=0x0000000100004fcc
- (void)powerMonitorSystemWillSleep:(id)arg1;	// IMP=0x0000000100004f60
- (void)powerMonitorSystemSleepRequestAborted:(id)arg1;	// IMP=0x0000000100004ef4
- (_Bool)powerMonitorSystemSleepRequested:(id)arg1;	// IMP=0x0000000100004e84
- (void)_startAllowingIdleTimer;	// IMP=0x0000000100004e64
- (void)_requestedUserEventNotificationOccurred;	// IMP=0x0000000100004e60
- (void)_userEventPresenceTimerExpired;	// IMP=0x0000000100004e5c
- (void)_userEventOccurred;	// IMP=0x0000000100004e4c
- (void)_userEventsDidIdle;	// IMP=0x0000000100004e40
- (void)resetIdleTimerAndUndim:(_Bool)arg1;	// IMP=0x0000000100004cd4
- (double)_nextLockTimeDuration;	// IMP=0x0000000100004c8c
- (void)setPreventIdleSleep:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0000000100004c14
- (void)_preventIdleSleepForNumberOfSeconds:(float)arg1;	// IMP=0x0000000100004b24
- (void)_preventIdleSleep;	// IMP=0x0000000100004acc
- (void)_allowIdleSleep;	// IMP=0x0000000100004a74
- (void)dimDisplay;	// IMP=0x00000001000048c0
- (void)undimDisplay;	// IMP=0x00000001000048a0
- (void)_undimDisplayForce;	// IMP=0x00000001000046a8
- (void)_setHIDUILockedState:(_Bool)arg1;	// IMP=0x000000010000466c
- (id)init;	// IMP=0x0000000100004154

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

