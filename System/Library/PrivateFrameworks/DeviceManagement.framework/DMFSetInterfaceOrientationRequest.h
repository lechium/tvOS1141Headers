/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@interface DMFSetInterfaceOrientationRequest : CATTaskRequest {

	BOOL _lockOrientation;
	unsigned long long _interfaceOrientation;

}

@property (assign,nonatomic) BOOL lockOrientation;                                 //@synthesize lockOrientation=_lockOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)interfaceOrientation;
-(void)setInterfaceOrientation:(unsigned long long)arg1 ;
-(BOOL)lockOrientation;
-(void)setLockOrientation:(BOOL)arg1 ;
@end

