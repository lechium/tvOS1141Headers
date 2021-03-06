/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocol.h>

@class NEIPv4Settings, NEIPv6Settings;

@interface NEVPNProtocolPPP : NEVPNProtocol {

	BOOL _verboseLoggingEnabled;
	long long _authenticationMethod;
	NEIPv4Settings* _IPv4Settings;
	NEIPv6Settings* _IPv6Settings;

}

@property (assign) long long authenticationMethod;              //@synthesize authenticationMethod=_authenticationMethod - In the implementation block
@property (assign) BOOL verboseLoggingEnabled;                  //@synthesize verboseLoggingEnabled=_verboseLoggingEnabled - In the implementation block
@property (copy) NEIPv4Settings * IPv4Settings;                 //@synthesize IPv4Settings=_IPv4Settings - In the implementation block
@property (copy) NEIPv6Settings * IPv6Settings;                 //@synthesize IPv6Settings=_IPv6Settings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(long long)authenticationMethod;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(BOOL)setServiceProtocolsInService:(SCNetworkServiceRef)arg1 ;
-(BOOL)updateWithServiceProtocolsFromService:(SCNetworkServiceRef)arg1 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NEIPv4Settings *)IPv4Settings;
-(NEIPv6Settings *)IPv6Settings;
-(void)setIPv4Settings:(NEIPv4Settings *)arg1 ;
-(void)setIPv6Settings:(NEIPv6Settings *)arg1 ;
-(void)setVerboseLoggingEnabled:(BOOL)arg1 ;
-(BOOL)verboseLoggingEnabled;
-(void)setAuthenticationMethod:(long long)arg1 ;
@end

