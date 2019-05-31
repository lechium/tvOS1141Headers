/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying> {

	double _expirationTimeInterval;
	unsigned long long _sessionID;
	NSString* _storefrontIdentifier;
	NSData* _token;
	SCD_Struct_IC2 _has;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSData * token;                               //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;                 //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasExpirationTimeInterval; 
@property (assign,nonatomic) double expirationTimeInterval;                //@synthesize expirationTimeInterval=_expirationTimeInterval - In the implementation block
@property (nonatomic,readonly) BOOL hasStorefrontIdentifier; 
@property (nonatomic,retain) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionID:(unsigned long long)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(unsigned long long)sessionID;
-(double)expirationTimeInterval;
-(BOOL)hasToken;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
-(void)setExpirationTimeInterval:(double)arg1 ;
-(void)setHasExpirationTimeInterval:(BOOL)arg1 ;
-(BOOL)hasExpirationTimeInterval;
-(BOOL)hasStorefrontIdentifier;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
@end

