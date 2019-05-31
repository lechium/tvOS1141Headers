/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOVLaneCharacteristic;

@interface GEOVPointCharacteristic : PBCodable <NSCopying> {

	GEOVLaneCharacteristic* _laneCharacteristic;
	int _roadLaneCount;
	int _roadOffset;
	int _sectionIndex;
	int _vertexIndex;
	int _zLevel;
	BOOL _brunnelEntry;
	BOOL _castShadow;
	BOOL _cropped;
	BOOL _shouldDrawLanes;
	SCD_Struct_LO19 _has;

}

@property (assign,nonatomic) BOOL hasSectionIndex; 
@property (assign,nonatomic) int sectionIndex;                                         //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) BOOL hasVertexIndex; 
@property (assign,nonatomic) int vertexIndex;                                          //@synthesize vertexIndex=_vertexIndex - In the implementation block
@property (assign,nonatomic) BOOL hasRoadLaneCount; 
@property (assign,nonatomic) int roadLaneCount;                                        //@synthesize roadLaneCount=_roadLaneCount - In the implementation block
@property (assign,nonatomic) BOOL hasRoadOffset; 
@property (assign,nonatomic) int roadOffset;                                           //@synthesize roadOffset=_roadOffset - In the implementation block
@property (assign,nonatomic) BOOL hasZLevel; 
@property (assign,nonatomic) int zLevel;                                               //@synthesize zLevel=_zLevel - In the implementation block
@property (assign,nonatomic) BOOL hasCropped; 
@property (assign,nonatomic) BOOL cropped;                                             //@synthesize cropped=_cropped - In the implementation block
@property (nonatomic,readonly) BOOL hasLaneCharacteristic; 
@property (nonatomic,retain) GEOVLaneCharacteristic * laneCharacteristic;              //@synthesize laneCharacteristic=_laneCharacteristic - In the implementation block
@property (assign,nonatomic) BOOL hasShouldDrawLanes; 
@property (assign,nonatomic) BOOL shouldDrawLanes;                                     //@synthesize shouldDrawLanes=_shouldDrawLanes - In the implementation block
@property (assign,nonatomic) BOOL hasCastShadow; 
@property (assign,nonatomic) BOOL castShadow;                                          //@synthesize castShadow=_castShadow - In the implementation block
@property (assign,nonatomic) BOOL hasBrunnelEntry; 
@property (assign,nonatomic) BOOL brunnelEntry;                                        //@synthesize brunnelEntry=_brunnelEntry - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRoadLaneCount:(int)arg1 ;
-(void)setHasRoadLaneCount:(BOOL)arg1 ;
-(BOOL)hasRoadLaneCount;
-(int)roadLaneCount;
-(void)setSectionIndex:(int)arg1 ;
-(void)setHasSectionIndex:(BOOL)arg1 ;
-(BOOL)hasSectionIndex;
-(void)setVertexIndex:(int)arg1 ;
-(void)setHasVertexIndex:(BOOL)arg1 ;
-(BOOL)hasVertexIndex;
-(void)setRoadOffset:(int)arg1 ;
-(void)setHasRoadOffset:(BOOL)arg1 ;
-(BOOL)hasRoadOffset;
-(void)setZLevel:(int)arg1 ;
-(void)setHasZLevel:(BOOL)arg1 ;
-(BOOL)hasZLevel;
-(void)setCropped:(BOOL)arg1 ;
-(void)setHasCropped:(BOOL)arg1 ;
-(BOOL)hasCropped;
-(BOOL)hasLaneCharacteristic;
-(void)setShouldDrawLanes:(BOOL)arg1 ;
-(void)setHasShouldDrawLanes:(BOOL)arg1 ;
-(BOOL)hasShouldDrawLanes;
-(void)setCastShadow:(BOOL)arg1 ;
-(void)setHasCastShadow:(BOOL)arg1 ;
-(BOOL)hasCastShadow;
-(void)setBrunnelEntry:(BOOL)arg1 ;
-(void)setHasBrunnelEntry:(BOOL)arg1 ;
-(BOOL)hasBrunnelEntry;
-(int)sectionIndex;
-(int)vertexIndex;
-(int)roadOffset;
-(int)zLevel;
-(BOOL)cropped;
-(GEOVLaneCharacteristic *)laneCharacteristic;
-(void)setLaneCharacteristic:(GEOVLaneCharacteristic *)arg1 ;
-(BOOL)shouldDrawLanes;
-(BOOL)castShadow;
-(BOOL)brunnelEntry;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

