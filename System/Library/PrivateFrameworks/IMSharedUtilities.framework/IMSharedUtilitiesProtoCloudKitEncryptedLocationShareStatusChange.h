/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedLocationShareStatusChange : PBCodable <NSCopying> {

	long long _shareDirection;
	long long _shareStatus;
	NSString* _otherHandle;
	NSData* _padding;
	unsigned _version;
	SCD_Struct_IM2 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasShareStatus; 
@property (assign,nonatomic) long long shareStatus;                 //@synthesize shareStatus=_shareStatus - In the implementation block
@property (assign,nonatomic) BOOL hasShareDirection; 
@property (assign,nonatomic) long long shareDirection;              //@synthesize shareDirection=_shareDirection - In the implementation block
@property (nonatomic,readonly) BOOL hasOtherHandle; 
@property (nonatomic,retain) NSString * otherHandle;                //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,readonly) BOOL hasPadding; 
@property (nonatomic,retain) NSData * padding;                      //@synthesize padding=_padding - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPadding:(NSData *)arg1 ;
-(NSData *)padding;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(BOOL)hasPadding;
-(void)setHasShareStatus:(BOOL)arg1 ;
-(BOOL)hasShareStatus;
-(void)setHasShareDirection:(BOOL)arg1 ;
-(BOOL)hasShareDirection;
-(BOOL)hasOtherHandle;
-(NSString *)otherHandle;
-(void)setOtherHandle:(NSString *)arg1 ;
-(long long)shareDirection;
-(long long)shareStatus;
-(void)setShareStatus:(long long)arg1 ;
-(void)setShareDirection:(long long)arg1 ;
@end

