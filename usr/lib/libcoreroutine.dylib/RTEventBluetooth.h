/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RTEventBluetooth : RTEvent <NSSecureCoding> {

	NSString* _deviceIdentifier;
	NSString* _deviceName;
	long long _bluetoothState;
	long long _deviceType;

}

@property (nonatomic,readonly) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                    //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) long long bluetoothState;                 //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,readonly) long long deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringFromBluetoothState:(long long)arg1 ;
-(NSString *)deviceIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)deviceName;
-(long long)deviceType;
-(id)initWithBluetoothState:(long long)arg1 deviceType:(long long)arg2 deviceName:(id)arg3 hardwareAddress:(id)arg4 source:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7 ;
-(long long)bluetoothState;
@end

