/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureLine.h>

@class GEOMapFeatureJunction, NSString;

@interface GEOMapFeatureRoad : GEOMapFeatureLine {

	SCD_Struct_GE68* _feature;
	unsigned long long _roadID;
	GEOMapFeatureJunction* _junctionA;
	GEOMapFeatureJunction* _junctionB;
	BOOL _checkedJunctionA;
	BOOL _checkedJunctionB;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) SCD_Struct_GE68* feature; 
@property (nonatomic,readonly) BOOL isFlipped; 
@property (nonatomic,readonly) unsigned long long roadID; 
@property (nonatomic,readonly) GEOMapFeatureJunction * startJunction; 
@property (nonatomic,readonly) GEOMapFeatureJunction * endJunction; 
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) int formOfWay; 
@property (nonatomic,readonly) int travelDirection; 
@property (nonatomic,readonly) double roadWidth; 
@property (nonatomic,readonly) unsigned long long speedLimit; 
@property (nonatomic,readonly) BOOL speedLimitIsMPH; 
@property (nonatomic,readonly) BOOL isDrivable; 
@property (nonatomic,readonly) BOOL isWalkable; 
@property (nonatomic,readonly) BOOL isTunnel; 
@property (nonatomic,readonly) BOOL isBridge; 
@property (nonatomic,readonly) BOOL isRail; 
@property (nonatomic,readonly) int rampType; 
@property (nonatomic,readonly) NSString * internalRoadName; 
+(double)estimatedWidthForRoad:(SCD_Struct_GE68*)arg1 ;
-(GEOTileKey)tileKey;
-(id)_junctionA;
-(id)_junctionB;
-(unsigned long long)roadID;
-(GEOMapFeatureJunction *)startJunction;
-(GEOMapFeatureJunction *)endJunction;
-(int)roadClass;
-(int)formOfWay;
-(int)travelDirection;
-(double)roadWidth;
-(unsigned long long)speedLimit;
-(BOOL)speedLimitIsMPH;
-(BOOL)isDrivable;
-(BOOL)isWalkable;
-(BOOL)isTunnel;
-(BOOL)isBridge;
-(BOOL)isRail;
-(int)rampType;
-(NSString *)internalRoadName;
-(void)flip;
-(id)localizedRoadName:(out id*)arg1 ;
-(id)_containingTile;
-(SCD_Struct_GE41*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(SCD_Struct_GE68*)feature;
-(BOOL)isFlipped;
-(id)initWithFeature:(SCD_Struct_GE68*)arg1 ;
-(void)dealloc;
@end

