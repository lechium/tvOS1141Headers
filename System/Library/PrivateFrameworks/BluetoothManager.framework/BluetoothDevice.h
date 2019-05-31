/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BluetoothManager/BluetoothManager-Structs.h>
@class NSString;

@interface BluetoothDevice : NSObject {

	NSString* _name;
	NSString* _address;
	BTDeviceImplRef _device;
	unsigned _connectingServiceMask;

}
-(BOOL)connected;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(id)address;
-(unsigned)vendorId;
-(void)dealloc;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)batteryLevel;
-(void)connect;
-(void)disconnect;
-(BOOL)magicPaired;
-(void)unpair;
-(unsigned)productId;
-(BOOL)setUserName:(id)arg1 ;
-(void)_clearName;
-(id)initWithDevice:(BTDeviceImplRef)arg1 address:(id)arg2 ;
-(BOOL)_isNameCached;
-(id)scoUID;
-(unsigned long long)connectedServicesCount;
-(BOOL)inEarDetectEnabled;
-(BOOL)setInEarDetectEnabled:(BOOL)arg1 ;
-(unsigned)micMode;
-(BOOL)setMicMode:(unsigned)arg1 ;
-(unsigned)doubleTapAction;
-(BOOL)setDoubleTapAction:(unsigned)arg1 ;
-(unsigned)doubleTapCapability;
-(unsigned)doubleTapActionEx:(unsigned*)arg1 rightAction:(unsigned*)arg2 ;
-(BOOL)setDoubleTapActionEx:(unsigned)arg1 rightAction:(unsigned)arg2 ;
-(unsigned)listeningMode;
-(BOOL)setListeningMode:(unsigned)arg1 ;
-(int)accessorySettingFeatureBitMask;
-(BOOL)magicPairedDeviceNameUpdated;
-(BOOL)isAccessory;
-(id)getServiceSetting:(unsigned)arg1 key:(id)arg2 ;
-(void)setServiceSetting:(unsigned)arg1 key:(id)arg2 value:(id)arg3 ;
-(void)connectWithServices:(unsigned)arg1 ;
-(void)acceptSSP:(long long)arg1 ;
-(void)startVoiceCommand;
-(void)endVoiceCommand;
-(SCD_Struct_Bl2)syncSettings;
-(void)setSyncSettings:(SCD_Struct_Bl2)arg1 ;
-(id)syncGroups;
-(void)setSyncGroup:(int)arg1 enabled:(BOOL)arg2 ;
-(BOOL)isAppleAudioDevice;
-(void)setConnectingServicemask:(unsigned)arg1 ;
-(unsigned)getConnectingServiceMask;
-(void)setPIN:(id)arg1 ;
-(unsigned long long)connectedServices;
-(BTDeviceImplRef)device;
-(void)setDevice:(BTDeviceImplRef)arg1 ;
-(BOOL)paired;
-(unsigned)majorClass;
-(unsigned)minorClass;
-(BOOL)supportsBatteryLevel;
-(BOOL)cloudPaired;
@end

