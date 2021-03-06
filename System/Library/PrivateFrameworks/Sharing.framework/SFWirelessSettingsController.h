/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@interface SFWirelessSettingsController : NSObject {

	id _delegate;
	BOOL _wifiEnabled;
	BOOL _bluetoothEnabled;
	BOOL _deviceSupportsWAPI;
	BOOL _firstCallbackCompleted;
	BOOL _wirelessCarPlayEnabled;
	BOOL _wirelessAccessPointEnabled;
	SFOperationRef _information;

}

@property (__weak) id<SFWirelessSettingsControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBluetoothEnabled) BOOL bluetoothEnabled; 
@property (getter=isWifiEnabled) BOOL wifiEnabled; 
@property (getter=isWirelessAccessPointEnabled,readonly) BOOL wirelessAccessPointEnabled; 
@property (getter=isWirelessCarPlayEnabled,readonly) BOOL wirelessCarPlayEnabled; 
@property (readonly) BOOL deviceSupportsWAPI; 
-(id)init;
-(void)invalidate;
-(id<SFWirelessSettingsControllerDelegate>)delegate;
-(void)setDelegate:(id<SFWirelessSettingsControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isWifiEnabled;
-(BOOL)deviceSupportsWAPI;
-(BOOL)isBluetoothEnabled;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(void)setBluetoothEnabled:(BOOL)arg1 ;
-(BOOL)isWirelessAccessPointEnabled;
-(BOOL)isWirelessCarPlayEnabled;
@end

