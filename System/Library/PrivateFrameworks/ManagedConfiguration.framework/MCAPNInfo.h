/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MCAPNInfo : NSObject {

	NSString* _apnName;
	NSString* _username;
	NSString* _password;
	NSString* _proxy;
	NSNumber* _proxyPort;

}

@property (nonatomic,retain) NSString * apnName;                //@synthesize apnName=_apnName - In the implementation block
@property (nonatomic,retain) NSString * username;               //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;               //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * proxy;                  //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPort;              //@synthesize proxyPort=_proxyPort - In the implementation block
-(id)installationWarnings;
-(void)setProxyPort:(NSNumber *)arg1 ;
-(void)setApnName:(NSString *)arg1 ;
-(id)defaultsRepresentation;
-(id)strippedDefaultsRepresentation;
-(NSString *)apnName;
-(id)description;
-(NSString *)proxy;
-(NSString *)username;
-(NSString *)password;
-(NSNumber *)proxyPort;
-(void)setUsername:(NSString *)arg1 ;
-(void)setProxy:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
@end

