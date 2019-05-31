/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPUserAvailableQuotaResponse : PBCodable <NSCopying> {

	unsigned long long _storageAvailableBytes;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasStorageAvailableBytes; 
@property (assign,nonatomic) unsigned long long storageAvailableBytes;              //@synthesize storageAvailableBytes=_storageAvailableBytes - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStorageAvailableBytes:(unsigned long long)arg1 ;
-(void)setHasStorageAvailableBytes:(BOOL)arg1 ;
-(BOOL)hasStorageAvailableBytes;
-(unsigned long long)storageAvailableBytes;
@end

