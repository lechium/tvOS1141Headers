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

@class CKDPRequestedFields;

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying> {

	long long _requestedTTL;
	CKDPRequestedFields* _assetFields;
	int _type;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasAssetFields; 
@property (nonatomic,retain) CKDPRequestedFields * assetFields;              //@synthesize assetFields=_assetFields - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedTTL; 
@property (assign,nonatomic) long long requestedTTL;                         //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAssetFields:(CKDPRequestedFields *)arg1 ;
-(CKDPRequestedFields *)assetFields;
-(long long)requestedTTL;
-(void)setRequestedTTL:(long long)arg1 ;
-(BOOL)hasAssetFields;
-(void)setHasRequestedTTL:(BOOL)arg1 ;
-(BOOL)hasRequestedTTL;
@end
