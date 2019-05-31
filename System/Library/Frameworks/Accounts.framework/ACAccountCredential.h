/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSMutableSet, ACAccount, NSSet, NSDate;

@interface ACAccountCredential : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _credentialItems;
	NSString* _credentialType;
	NSMutableSet* _dirtyProperties;
	ACAccount* _owningAccount;
	BOOL _requiresTouchID;
	BOOL _dirty;
	BOOL _empty;

}

@property (assign,nonatomic) BOOL requiresTouchID;                    //@synthesize requiresTouchID=_requiresTouchID - In the implementation block
@property (nonatomic,copy) NSString * token; 
@property (nonatomic,copy) NSString * oauthTokenSecret; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * credentialType; 
@property (nonatomic,readonly) NSSet * dirtyProperties;               //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (assign,getter=isDirty,nonatomic) BOOL dirty;               //@synthesize dirty=_dirty - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;               //@synthesize empty=_empty - In the implementation block
@property (nonatomic,copy) NSString * oauthTokenNoSync; 
@property (nonatomic,copy) NSString * oauthRefreshToken; 
@property (nonatomic,retain) NSDate * expiryDate; 
@property (nonatomic,copy) NSString * findMyiPhoneToken; 
@property (nonatomic,copy) NSString * mapsToken; 
@property (nonatomic,copy) NSString * mdmServerToken; 
@property (nonatomic,copy) NSString * hsaToken; 
@property (nonatomic,copy) NSDate * tokenExpiryDate; 
@property (nonatomic,copy) NSString * oauthToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2 ;
+(id)additionalServiceSegmentForAccountTypeIdentifier:(id)arg1 ;
+(id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2 ;
+(id)credentialPolicyForAccountTypeIdentifier:(id)arg1 key:(id)arg2 clientID:(id)arg3 ;
+(id)allSupportedKeys;
+(id)credentialWithPassword:(id)arg1 ;
-(void)_setOwningAccount:(id)arg1 ;
-(id)_initWithProtobuf:(id)arg1 ;
-(id)_encodeProtobuf;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(id)credentialItems;
-(id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2 ;
-(void)setRequiresTouchID:(BOOL)arg1 ;
-(id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3 ;
-(NSString *)oauthRefreshToken;
-(NSDate *)tokenExpiryDate;
-(void)setTokenExpiryDate:(NSDate *)arg1 ;
-(NSString *)mapsToken;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)setDirty:(BOOL)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)password;
-(id)credentialItemForKey:(id)arg1 ;
-(id)initWithPassword:(id)arg1 ;
-(void)setCredentialItem:(id)arg1 forKey:(id)arg2 ;
-(id)keysForCredentialItems;
-(NSString *)oauthTokenNoSync;
-(BOOL)requiresTouchID;
-(void)setOauthTokenNoSync:(NSString *)arg1 ;
-(NSString *)oauthTokenSecret;
-(void)setOauthTokenSecret:(NSString *)arg1 ;
-(void)_clearDirtyProperties;
-(void)_markPropertyDirty:(id)arg1 ;
-(NSString *)hsaToken;
-(NSString *)mdmServerToken;
-(NSString *)findMyiPhoneToken;
-(void)setMapsToken:(NSString *)arg1 ;
-(void)setMdmServerToken:(NSString *)arg1 ;
-(void)setHsaToken:(NSString *)arg1 ;
-(void)setFindMyiPhoneToken:(NSString *)arg1 ;
-(NSSet *)dirtyProperties;
-(BOOL)isDirty;
-(NSString *)oauthToken;
-(void)setOauthToken:(NSString *)arg1 ;
-(void)setOauthRefreshToken:(NSString *)arg1 ;
-(NSString *)credentialType;
-(void)setCredentialType:(NSString *)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
@end

