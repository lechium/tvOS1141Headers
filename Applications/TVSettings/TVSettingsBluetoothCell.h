//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKTableViewTextCell.h"

@class NSString, TVSBluetoothDevice, TVSettingsBluetoothRecognizer, UIImageView;

@interface TVSettingsBluetoothCell : TSKTableViewTextCell
{
    UIImageView *_batteryIconView;	// 8 = 0x8
    TVSettingsBluetoothRecognizer *_touchGesture;	// 16 = 0x10
    NSString *_originalText;	// 24 = 0x18
    TVSBluetoothDevice *_bluetoothDevice;	// 32 = 0x20
}

@property(retain, nonatomic) TVSBluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
- (void).cxx_destruct;	// IMP=0x00000001000c2274
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000001000c225c
- (void)_touchGesture:(id)arg1;	// IMP=0x00000001000c2110
- (void)_updateBatteryImage;	// IMP=0x00000001000c1eec
- (void)_enableTouchGestureIfPossible;	// IMP=0x00000001000c1e68
- (void)_updateAccessoryTintColor;	// IMP=0x00000001000c1d10
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000c1c40
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000001000c1b68
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000c1a94
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000c19a4
- (void)layoutSubviews;	// IMP=0x00000001000c1650
- (void)prepareForReuse;	// IMP=0x00000001000c1480
- (void)dealloc;	// IMP=0x00000001000c1430
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000c1290

@end
