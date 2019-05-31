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

@class GEOMapLayerDataServiceLayerIndex, GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceVersion;

@interface GEOMapLayerDataServicePatch : PBCodable <NSCopying> {

	GEOMapLayerDataServiceLayerIndex* _index;
	GEOMapLayerDataServiceLayer* _layer;
	GEOMapLayerDataServiceVersion* _sourceVersion;
	GEOMapLayerDataServiceVersion* _targetVersion;

}

@property (nonatomic,readonly) BOOL hasLayer; 
@property (nonatomic,retain) GEOMapLayerDataServiceLayer * layer;                        //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceVersion; 
@property (nonatomic,retain) GEOMapLayerDataServiceVersion * sourceVersion;              //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetVersion; 
@property (nonatomic,retain) GEOMapLayerDataServiceVersion * targetVersion;              //@synthesize targetVersion=_targetVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasIndex; 
@property (nonatomic,retain) GEOMapLayerDataServiceLayerIndex * index;                   //@synthesize index=_index - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLayer;
-(BOOL)hasIndex;
-(BOOL)hasSourceVersion;
-(BOOL)hasTargetVersion;
-(GEOMapLayerDataServiceVersion *)sourceVersion;
-(void)setSourceVersion:(GEOMapLayerDataServiceVersion *)arg1 ;
-(GEOMapLayerDataServiceVersion *)targetVersion;
-(void)setTargetVersion:(GEOMapLayerDataServiceVersion *)arg1 ;
-(GEOMapLayerDataServiceLayer *)layer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLayer:(GEOMapLayerDataServiceLayer *)arg1 ;
-(void)setIndex:(GEOMapLayerDataServiceLayerIndex *)arg1 ;
-(GEOMapLayerDataServiceLayerIndex *)index;
-(id)dictionaryRepresentation;
@end

