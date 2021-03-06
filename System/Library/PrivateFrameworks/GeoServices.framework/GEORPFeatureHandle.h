/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPFeatureHandle : PBCodable <NSCopying> {

	GEORPFeatureHandleStyleAttribute* _styleAttributes;
	unsigned long long _styleAttributesCount;
	unsigned long long _styleAttributesSpace;
	unsigned _featureIndex;
	unsigned _featureTileX;
	unsigned _featureTileY;
	unsigned _featureTileZ;
	unsigned _identifier;
	int _style;
	int _type;
	SCD_Struct_GE74 _has;

}

@property (assign,nonatomic) BOOL hasFeatureIndex; 
@property (assign,nonatomic) unsigned featureIndex;                                            //@synthesize featureIndex=_featureIndex - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureTileX; 
@property (assign,nonatomic) unsigned featureTileX;                                            //@synthesize featureTileX=_featureTileX - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureTileY; 
@property (assign,nonatomic) unsigned featureTileY;                                            //@synthesize featureTileY=_featureTileY - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureTileZ; 
@property (assign,nonatomic) unsigned featureTileZ;                                            //@synthesize featureTileZ=_featureTileZ - In the implementation block
@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style;                                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long styleAttributesCount; 
@property (nonatomic,readonly) GEORPFeatureHandleStyleAttribute* styleAttributes; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(GEORPFeatureHandleStyleAttribute*)styleAttributes;
-(BOOL)hasIdentifier;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasStyle;
-(void)clearStyleAttributes;
-(unsigned long long)styleAttributesCount;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(unsigned)featureIndex;
-(void)setFeatureIndex:(unsigned)arg1 ;
-(void)setHasFeatureIndex:(BOOL)arg1 ;
-(BOOL)hasFeatureIndex;
-(void)setFeatureTileX:(unsigned)arg1 ;
-(void)setHasFeatureTileX:(BOOL)arg1 ;
-(BOOL)hasFeatureTileX;
-(void)setFeatureTileY:(unsigned)arg1 ;
-(void)setHasFeatureTileY:(BOOL)arg1 ;
-(BOOL)hasFeatureTileY;
-(void)setFeatureTileZ:(unsigned)arg1 ;
-(void)setHasFeatureTileZ:(BOOL)arg1 ;
-(BOOL)hasFeatureTileZ;
-(void)addStyleAttribute:(GEORPFeatureHandleStyleAttribute)arg1 ;
-(GEORPFeatureHandleStyleAttribute)styleAttributeAtIndex:(unsigned long long)arg1 ;
-(void)setStyleAttributes:(GEORPFeatureHandleStyleAttribute*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)featureTileX;
-(unsigned)featureTileY;
-(unsigned)featureTileZ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
@end

