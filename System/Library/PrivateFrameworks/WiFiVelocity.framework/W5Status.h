/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class W5WiFiStatus, W5AWDLStatus, W5BluetoothStatus, W5NetworkStatus, W5PowerStatus;

@interface W5Status : NSObject <NSCopying, NSSecureCoding> {

	W5WiFiStatus* _wifi;
	W5AWDLStatus* _awdl;
	W5BluetoothStatus* _bluetooth;
	W5NetworkStatus* _network;
	W5PowerStatus* _power;

}

@property (nonatomic,copy) W5WiFiStatus * wifi;                        //@synthesize wifi=_wifi - In the implementation block
@property (nonatomic,copy) W5AWDLStatus * awdl;                        //@synthesize awdl=_awdl - In the implementation block
@property (nonatomic,copy) W5BluetoothStatus * bluetooth;              //@synthesize bluetooth=_bluetooth - In the implementation block
@property (nonatomic,copy) W5NetworkStatus * network;                  //@synthesize network=_network - In the implementation block
@property (nonatomic,copy) W5PowerStatus * power;                      //@synthesize power=_power - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setWifi:(W5WiFiStatus *)arg1 ;
-(W5WiFiStatus *)wifi;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToStatus:(id)arg1 ;
-(W5NetworkStatus *)network;
-(void)setNetwork:(W5NetworkStatus *)arg1 ;
-(W5AWDLStatus *)awdl;
-(W5BluetoothStatus *)bluetooth;
-(W5PowerStatus *)power;
-(void)setAwdl:(W5AWDLStatus *)arg1 ;
-(void)setBluetooth:(W5BluetoothStatus *)arg1 ;
-(void)setPower:(W5PowerStatus *)arg1 ;
@end
