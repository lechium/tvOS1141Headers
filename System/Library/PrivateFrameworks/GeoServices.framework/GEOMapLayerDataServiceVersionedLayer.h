/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceVersion;

@interface GEOMapLayerDataServiceVersionedLayer : PBCodable <NSCopying> {

	GEOMapLayerDataServiceLayer* _layer;
	GEOMapLayerDataServiceVersion* _version;

}

@property (nonatomic,readonly) BOOL hasLayer; 
@property (nonatomic,retain) GEOMapLayerDataServiceLayer * layer;                  //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) GEOMapLayerDataServiceVersion * version;              //@synthesize version=_version - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(BOOL)hasLayer;
-(GEOMapLayerDataServiceLayer *)layer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLayer:(GEOMapLayerDataServiceLayer *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(GEOMapLayerDataServiceVersion *)arg1 ;
-(GEOMapLayerDataServiceVersion *)version;
@end

