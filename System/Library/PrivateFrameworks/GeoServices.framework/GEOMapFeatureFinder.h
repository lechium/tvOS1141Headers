/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapFeatureFinder : GEOMapRequest {

	SCD_Struct_GE29 _coordinate;
	GEOMapTileFinder* _tileFinder;
	/*^block*/id _roadHandler;
	/*^block*/id _pointHandler;
	/*^block*/id _polygonHandler;
	BOOL _ignoreUnnamedFeatures;

}

@property (nonatomic,copy) id roadHandler;                            //@synthesize roadHandler=_roadHandler - In the implementation block
@property (nonatomic,copy) id pointHandler;                           //@synthesize pointHandler=_pointHandler - In the implementation block
@property (nonatomic,copy) id polygonHandler;                         //@synthesize polygonHandler=_polygonHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
@property (assign,nonatomic) BOOL ignoreUnnamedFeatures;              //@synthesize ignoreUnnamedFeatures=_ignoreUnnamedFeatures - In the implementation block
-(GEOMapAccess *)map;
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE29)arg2 ;
-(void)_pickRoadInTile:(id)arg1 tileRect:(const SCD_Struct_GE43*)arg2 localPoint:(const Matrix<float, 2, 1>*)arg3 ;
-(void)findFeatures:(/*^block*/id)arg1 pointHandler:(/*^block*/id)arg2 polygonHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)roadHandler;
-(void)setRoadHandler:(id)arg1 ;
-(id)pointHandler;
-(void)setPointHandler:(id)arg1 ;
-(id)polygonHandler;
-(void)setPolygonHandler:(id)arg1 ;
-(BOOL)ignoreUnnamedFeatures;
-(void)setIgnoreUnnamedFeatures:(BOOL)arg1 ;
-(void)cancel;
@end

