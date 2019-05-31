/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEProfilePayloadBase.h>

@class NSString;

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase {

	BOOL _userNameRequired;
	BOOL _passwordRequired;
	BOOL _proxyUserNameRequired;
	BOOL _proxyPasswordRequired;
	BOOL _sharedSecretRequired;
	BOOL _pinRequired;
	NSString* _userName;
	NSString* _password;
	NSString* _proxyUserName;
	NSString* _proxyPassword;
	NSString* _sharedSecret;
	NSString* _pin;

}

@property (assign,nonatomic) BOOL userNameRequired;                   //@synthesize userNameRequired=_userNameRequired - In the implementation block
@property (assign,nonatomic) BOOL passwordRequired;                   //@synthesize passwordRequired=_passwordRequired - In the implementation block
@property (assign,nonatomic) BOOL proxyUserNameRequired;              //@synthesize proxyUserNameRequired=_proxyUserNameRequired - In the implementation block
@property (assign,nonatomic) BOOL proxyPasswordRequired;              //@synthesize proxyPasswordRequired=_proxyPasswordRequired - In the implementation block
@property (assign,nonatomic) BOOL sharedSecretRequired;               //@synthesize sharedSecretRequired=_sharedSecretRequired - In the implementation block
@property (assign,nonatomic) BOOL pinRequired;                        //@synthesize pinRequired=_pinRequired - In the implementation block
@property (nonatomic,copy) NSString * userName;                       //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy) NSString * password;                       //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * proxyUserName;                  //@synthesize proxyUserName=_proxyUserName - In the implementation block
@property (nonatomic,copy) NSString * proxyPassword;                  //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (nonatomic,copy) NSString * sharedSecret;                   //@synthesize sharedSecret=_sharedSecret - In the implementation block
@property (nonatomic,copy) NSString * pin;                            //@synthesize pin=_pin - In the implementation block
-(NSString *)userName;
-(id)validatePayload;
-(BOOL)passwordRequired;
-(void)setPasswordRequired:(BOOL)arg1 ;
-(void)setProxyPassword:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(NSString *)password;
-(id)getPreprocessedPayloadContents;
-(BOOL)setPostprocessedPayloadContents:(id)arg1 ;
-(NSString *)proxyUserName;
-(NSString *)sharedSecret;
-(void)extractPayloadContentsHTTPProxy:(id)arg1 ;
-(void)extractPayloadContentsUserNamePassword:(id)arg1 ;
-(void)extractPayloadContentsSharedSecret:(id)arg1 ;
-(void)extractPayloadContentsPIN:(id)arg1 ;
-(void)extractPayloadContents:(id)arg1 ;
-(BOOL)userNameRequired;
-(void)setUserNameRequired:(BOOL)arg1 ;
-(BOOL)proxyUserNameRequired;
-(void)setProxyUserNameRequired:(BOOL)arg1 ;
-(BOOL)proxyPasswordRequired;
-(void)setProxyPasswordRequired:(BOOL)arg1 ;
-(BOOL)sharedSecretRequired;
-(void)setSharedSecretRequired:(BOOL)arg1 ;
-(void)setPinRequired:(BOOL)arg1 ;
-(void)setProxyUserName:(NSString *)arg1 ;
-(void)setSharedSecret:(NSString *)arg1 ;
-(void)setPin:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)pin;
-(BOOL)pinRequired;
-(NSString *)proxyPassword;
-(void)setPassword:(NSString *)arg1 ;
@end

