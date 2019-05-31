/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDDatasetABStatus : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _datasetId;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasDatasetId; 
@property (assign,nonatomic) unsigned datasetId;                             //@synthesize datasetId=_datasetId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setDatasetId:(unsigned)arg1 ;
-(unsigned)datasetId;
-(BOOL)hasDatasetId;
-(void)setHasDatasetId:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
