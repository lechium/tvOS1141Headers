/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSArray, PKRemotePaymentInstrument, NSUUID;

@interface PKRemoteDevice : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isLocked;
	BOOL _userDisabled;
	BOOL _deviceDisabled;
	NSString* _deviceName;
	long long _type;
	NSString* _modelIdentifier;
	NSDate* _lastSeen;
	long long _proximityState;
	NSArray* _remotePaymentInstruments;
	PKRemotePaymentInstrument* _defaultRemotePaymentInstrument;
	NSString* _uniqueID;
	NSUUID* _bluetoothUUID;

}

@property (nonatomic,retain) NSString * deviceName;                                                   //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) long long type;                                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * modelIdentifier;                                              //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * lastSeen;                                                       //@synthesize lastSeen=_lastSeen - In the implementation block
@property (nonatomic,readonly) BOOL canMakePayments; 
@property (assign,nonatomic) long long proximityState;                                                //@synthesize proximityState=_proximityState - In the implementation block
@property (assign,nonatomic) BOOL isLocked;                                                           //@synthesize isLocked=_isLocked - In the implementation block
@property (assign,nonatomic) BOOL userDisabled;                                                       //@synthesize userDisabled=_userDisabled - In the implementation block
@property (assign,nonatomic) BOOL deviceDisabled;                                                     //@synthesize deviceDisabled=_deviceDisabled - In the implementation block
@property (nonatomic,retain) NSArray * remotePaymentInstruments;                                      //@synthesize remotePaymentInstruments=_remotePaymentInstruments - In the implementation block
@property (nonatomic,retain) PKRemotePaymentInstrument * defaultRemotePaymentInstrument;              //@synthesize defaultRemotePaymentInstrument=_defaultRemotePaymentInstrument - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                                                       //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSUUID * bluetoothUUID;                                                  //@synthesize bluetoothUUID=_bluetoothUUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(/*^block*/id)acceptedComparatorForSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2 webService:(id)arg3 ;
+(/*^block*/id)preferenceComparator;
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(BOOL)isLocked;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)proximityState;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)userDisabled;
-(PKRemotePaymentInstrument *)defaultRemotePaymentInstrument;
-(NSArray *)remotePaymentInstruments;
-(void)setRemotePaymentInstruments:(NSArray *)arg1 ;
-(NSDate *)lastSeen;
-(BOOL)canMakePayments;
-(void)setUserDisabled:(BOOL)arg1 ;
-(void)setDeviceDisabled:(BOOL)arg1 ;
-(BOOL)deviceDisabled;
-(long long)_deviceTypeForModelIdentifier:(id)arg1 ;
-(BOOL)isEqualToRemoteDevice:(id)arg1 ;
-(id)initWithIDSDevice:(id)arg1 ;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(void)setLastSeen:(NSDate *)arg1 ;
-(void)setProximityState:(long long)arg1 ;
-(void)setIsLocked:(BOOL)arg1 ;
-(void)setDefaultRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(NSUUID *)bluetoothUUID;
-(void)setBluetoothUUID:(NSUUID *)arg1 ;
-(id)pk_idsDestination;
-(NSString *)modelIdentifier;
@end

