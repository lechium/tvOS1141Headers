/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface DMFRequestAirPlayMirroringRequest : CATTaskRequest {

	BOOL _force;
	NSString* _destinationName;
	NSString* _destinationDeviceID;
	NSString* _password;
	double _scanWaitInterval;

}

@property (nonatomic,copy) NSString * destinationName;                  //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,copy) NSString * destinationDeviceID;              //@synthesize destinationDeviceID=_destinationDeviceID - In the implementation block
@property (nonatomic,copy) NSString * password;                         //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL force;                                //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) double scanWaitInterval;                   //@synthesize scanWaitInterval=_scanWaitInterval - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)setDestinationName:(NSString *)arg1 ;
-(NSString *)destinationName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setForce:(BOOL)arg1 ;
-(BOOL)force;
-(NSString *)password;
-(NSString *)destinationDeviceID;
-(double)scanWaitInterval;
-(void)setDestinationDeviceID:(NSString *)arg1 ;
-(void)setScanWaitInterval:(double)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
@end

