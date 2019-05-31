/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDResolvedItem : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _extractedTerm;
	int _resolvedItemType;
	unsigned _resultIndex;
	SCD_Struct_GE21 _has;

}

@property (nonatomic,readonly) BOOL hasExtractedTerm; 
@property (nonatomic,retain) NSString * extractedTerm;                       //@synthesize extractedTerm=_extractedTerm - In the implementation block
@property (assign,nonatomic) BOOL hasResolvedItemType; 
@property (assign,nonatomic) int resolvedItemType;                           //@synthesize resolvedItemType=_resolvedItemType - In the implementation block
@property (assign,nonatomic) BOOL hasResultIndex; 
@property (assign,nonatomic) unsigned resultIndex;                           //@synthesize resultIndex=_resultIndex - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)extractedTerm;
-(unsigned)resultIndex;
-(BOOL)hasResultIndex;
-(int)resolvedItemType;
-(BOOL)hasResolvedItemType;
-(BOOL)hasExtractedTerm;
-(void)setResolvedItemType:(int)arg1 ;
-(void)setHasResolvedItemType:(BOOL)arg1 ;
-(id)resolvedItemTypeAsString:(int)arg1 ;
-(int)StringAsResolvedItemType:(id)arg1 ;
-(void)setResultIndex:(unsigned)arg1 ;
-(void)setHasResultIndex:(BOOL)arg1 ;
-(void)setExtractedTerm:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
