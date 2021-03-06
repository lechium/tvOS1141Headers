/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteLoginAuthenticationRequest.h>
#import <libobjc.A.dylib/HMRemoteLoginMessageProtocol.h>

@class NSString, NSDictionary;

@interface HMDRemoteLoginProxyAuthenticationRequest : HMDRemoteLoginAuthenticationRequest <HMRemoteLoginMessageProtocol> {

	NSString* _username;
	NSString* _rawPassword;
	NSString* _passwordToken;
	NSString* _altDSID;

}

@property (nonatomic,retain) NSString * username;                          //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * rawPassword;                       //@synthesize rawPassword=_rawPassword - In the implementation block
@property (nonatomic,retain) NSString * passwordToken;                     //@synthesize passwordToken=_passwordToken - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                           //@synthesize altDSID=_altDSID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * messagePayload; 
+(id)messageName;
+(BOOL)supportsSecureCoding;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
-(id)messageName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setRawPassword:(NSString *)arg1 ;
-(void)setPasswordToken:(NSString *)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)passwordToken;
-(NSString *)altDSID;
-(NSString *)rawPassword;
-(NSDictionary *)messagePayload;
-(id)xpcMessageName;
@end

