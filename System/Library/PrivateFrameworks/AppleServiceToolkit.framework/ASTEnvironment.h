/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSNumber;

@interface ASTEnvironment : NSObject {

	unsigned long long _environmentType;
	unsigned long long _server;
	NSURL* _serverURL;
	NSString* _SOCKSProxyServer;
	NSNumber* _SOCKSProxyPort;

}

@property (assign,nonatomic) unsigned long long environmentType;                              //@synthesize environmentType=_environmentType - In the implementation block
@property (assign,nonatomic) unsigned long long server;                                       //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSURL * serverURL;                                               //@synthesize serverURL=_serverURL - In the implementation block
@property (setter=OCKSProxyServer,nonatomic,retain) NSString * SOCKSProxyServer;              //@synthesize SOCKSProxyServer=_SOCKSProxyServer - In the implementation block
@property (setter=OCKSProxyPort,nonatomic,retain) NSNumber * SOCKSProxyPort;                  //@synthesize SOCKSProxyPort=_SOCKSProxyPort - In the implementation block
+(BOOL)isInternalBuild;
+(id)environmentWithEnvironmentType:(unsigned long long)arg1 ;
+(id)currentEnvironment;
-(id)init;
-(unsigned long long)server;
-(NSURL *)serverURL;
-(unsigned long long)environmentType;
-(void)setEnvironmentType:(unsigned long long)arg1 ;
-(void)setServer:(unsigned long long)arg1 ;
-(NSString *)SOCKSProxyServer;
-(NSNumber *)SOCKSProxyPort;
-(id)initWithEnvironmentType:(unsigned long long)arg1 ;
-(unsigned long long)_defaultServerSelection;
-(id)_generateServerURL;
-(id)_defaultServerURL;
-(id)_environmentServerString;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setSOCKSProxyServer:(NSString *)arg1 ;
-(void)setSOCKSProxyPort:(NSNumber *)arg1 ;
@end

