/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPTokenRegistrationBody;

@interface CKDPTokenRegistrationRequest : PBRequest <NSCopying> {

	CKDPTokenRegistrationBody* _tokenRegistrationBody;

}

@property (nonatomic,readonly) BOOL hasTokenRegistrationBody; 
@property (nonatomic,retain) CKDPTokenRegistrationBody * tokenRegistrationBody;              //@synthesize tokenRegistrationBody=_tokenRegistrationBody - In the implementation block
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTokenRegistrationBody:(CKDPTokenRegistrationBody *)arg1 ;
-(BOOL)hasTokenRegistrationBody;
-(CKDPTokenRegistrationBody *)tokenRegistrationBody;
@end

