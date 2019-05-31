/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordZoneIdentifier;

@interface CKDPZoneRetrieveRequest : PBRequest <NSCopying> {

	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _onlyFetchPCSInfo;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasOnlyFetchPCSInfo; 
@property (assign,nonatomic) BOOL onlyFetchPCSInfo;                                  //@synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo - In the implementation block
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
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(void)setOnlyFetchPCSInfo:(BOOL)arg1 ;
-(void)setHasOnlyFetchPCSInfo:(BOOL)arg1 ;
-(BOOL)hasOnlyFetchPCSInfo;
-(BOOL)onlyFetchPCSInfo;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
@end

