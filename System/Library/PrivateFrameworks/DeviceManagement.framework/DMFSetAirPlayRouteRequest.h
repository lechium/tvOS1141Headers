/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface DMFSetAirPlayRouteRequest : CATTaskRequest {

	BOOL _suppressPasscodePrompt;
	NSString* _routeUID;
	NSString* _password;

}

@property (nonatomic,copy) NSString * routeUID;                        //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,copy) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL suppressPasscodePrompt;              //@synthesize suppressPasscodePrompt=_suppressPasscodePrompt - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSString *)routeUID;
-(void)setRouteUID:(NSString *)arg1 ;
-(BOOL)suppressPasscodePrompt;
-(void)setSuppressPasscodePrompt:(BOOL)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
@end

