/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDHoursThreshold : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _closingSoonMessageThresholdSecond;
	unsigned _openingSoonMessageThresholdSecond;
	SCD_Struct_GE21 _has;

}

@property (assign,nonatomic) BOOL hasOpeningSoonMessageThresholdSecond; 
@property (assign,nonatomic) unsigned openingSoonMessageThresholdSecond;              //@synthesize openingSoonMessageThresholdSecond=_openingSoonMessageThresholdSecond - In the implementation block
@property (assign,nonatomic) BOOL hasClosingSoonMessageThresholdSecond; 
@property (assign,nonatomic) unsigned closingSoonMessageThresholdSecond;              //@synthesize closingSoonMessageThresholdSecond=_closingSoonMessageThresholdSecond - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setOpeningSoonMessageThresholdSecond:(unsigned)arg1 ;
-(void)setHasOpeningSoonMessageThresholdSecond:(BOOL)arg1 ;
-(BOOL)hasOpeningSoonMessageThresholdSecond;
-(void)setClosingSoonMessageThresholdSecond:(unsigned)arg1 ;
-(void)setHasClosingSoonMessageThresholdSecond:(BOOL)arg1 ;
-(BOOL)hasClosingSoonMessageThresholdSecond;
-(unsigned)openingSoonMessageThresholdSecond;
-(unsigned)closingSoonMessageThresholdSecond;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

