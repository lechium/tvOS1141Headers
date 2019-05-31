//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVSBluetoothManagerDelegate.h"
#import "TVSBluetoothManagerObserver.h"

@class NSString, TVSBluetoothDevice;

@interface SATVBluetoothKeyboardManager : NSObject <TVSBluetoothManagerObserver, TVSBluetoothManagerDelegate>
{
    id <SATVBluetoothKeyboardManagerDelegate> _delegate;	// 8 = 0x8
    TVSBluetoothDevice *_pairingDevice;	// 16 = 0x10
}

@property(retain, nonatomic) TVSBluetoothDevice *pairingDevice; // @synthesize pairingDevice=_pairingDevice;
@property(nonatomic) __weak id <SATVBluetoothKeyboardManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100041584
- (id)_pairedKeyboard;	// IMP=0x00000001000413ac
- (void)_removeSelfFromBluetoothManager;	// IMP=0x00000001000412c0
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x00000001000412b0
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x00000001000411b4
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x00000001000410f0
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x0000000100040ff8
- (void)bluetoothManagerDidUpdateDiscoveredDevices:(id)arg1;	// IMP=0x0000000100040c40
- (void)stopPairing;	// IMP=0x0000000100040c08
- (void)cancelPINPairing;	// IMP=0x0000000100040bb0
- (void)startPairing;	// IMP=0x0000000100040b24
- (void)dealloc;	// IMP=0x0000000100040ad8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

