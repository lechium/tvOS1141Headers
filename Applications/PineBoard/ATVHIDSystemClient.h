//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SSIndicatorLight;

@interface ATVHIDSystemClient : NSObject
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
    struct __IOHIDEventSystemClient *_btKeyboardHIDSystemClient;	// 16 = 0x10
    NSArray *_normalEventRouters;	// 24 = 0x18
    _Bool _deviceIsSleeping;	// 32 = 0x20
    SSIndicatorLight *_sil;	// 40 = 0x28
}

+ (_Bool)_buttonEvent:(struct __IOHIDEvent *)arg1 containsUsage:(long long)arg2;	// IMP=0x000000010005ff9c
+ (_Bool)isRemoteAppEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010005ff8c
+ (_Bool)isCECButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010005ff7c
+ (_Bool)isIRRemoteButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010005ff6c
+ (_Bool)isBluetoothKeyboardButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010005ff24
+ (id)sharedInstance;	// IMP=0x000000010005f9c0
- (void).cxx_destruct;	// IMP=0x00000001000621ac
- (void)_delayedInstallSleepTimeHIDEventRouters;	// IMP=0x0000000100061e48
- (void)_delayedInstallNormalHIDEventRouters;	// IMP=0x0000000100061c7c
- (void)_updateEventRouters;	// IMP=0x0000000100061b7c
- (void)_handleWillWakeNotification:(id)arg1;	// IMP=0x0000000100061804
- (void)_handleWillSleepNotification:(id)arg1;	// IMP=0x00000001000613d8
- (void)_setSILForButtonDown:(_Bool)arg1;	// IMP=0x00000001000613bc
- (void)setSILStateForHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010006128c
- (void)setSILState_On;	// IMP=0x00000001000610dc
- (void)setSILState_Off;	// IMP=0x0000000100060f2c
- (void)_processGenericDesktopEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100060e38
- (void)_processConsumerEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100060d78
- (void)_processBatterySystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100060d68
- (void)_processAppleVendorDebugEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100060c48
- (void)_processAppleVendorIRRemoteEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100060bd0
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000609c0
- (void)setupHIDEventRouters;	// IMP=0x0000000100060054
- (void)dealloc;	// IMP=0x000000010005fe84
- (void)_startKeyboardHIDClient;	// IMP=0x000000010005fcd0
- (int)_init;	// IMP=0x000000010005fa9c
- (id)init;	// IMP=0x000000010005fa14

@end

