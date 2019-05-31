/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPCommentContent : PBCodable <NSCopying> {

	NSData* _comment;
	BOOL _encrypted;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasEncrypted; 
@property (assign,nonatomic) BOOL encrypted;                 //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) BOOL hasComment; 
@property (nonatomic,retain) NSData * comment;               //@synthesize comment=_comment - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasComment;
-(NSData *)comment;
-(void)setComment:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)encrypted;
-(void)setEncrypted:(BOOL)arg1 ;
-(void)setHasEncrypted:(BOOL)arg1 ;
-(BOOL)hasEncrypted;
@end
