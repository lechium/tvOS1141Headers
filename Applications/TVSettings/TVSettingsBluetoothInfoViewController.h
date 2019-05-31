//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TVSBluetoothDevice;

@interface TVSettingsBluetoothInfoViewController : TSKViewController
{
    TVSBluetoothDevice *_bluetoothDevice;	// 8 = 0x8
}

@property(retain, nonatomic) TVSBluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
- (void).cxx_destruct;	// IMP=0x000000010007985c
- (void)_findInfoForAccessory:(id)arg1;	// IMP=0x0000000100079680
- (void)_connectDevice:(id)arg1;	// IMP=0x000000010007960c
- (void)_unpairDevice:(id)arg1;	// IMP=0x0000000100079130
- (void)_disconnectDevice:(id)arg1;	// IMP=0x00000001000790bc
- (id)loadSettingGroups;	// IMP=0x0000000100077f1c

@end
