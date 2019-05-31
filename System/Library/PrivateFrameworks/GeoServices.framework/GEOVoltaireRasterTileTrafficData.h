/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSArray;

@interface GEOVoltaireRasterTileTrafficData : NSObject {

	SCD_Struct_GE94* _vertices;
	NSMutableArray* _trafficSegments;
	NSArray* _trafficIncidents;
	double _expirationTime;

}

@property (assign,nonatomic) SCD_Struct_GE94* vertices;                     //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficSegments;              //@synthesize trafficSegments=_trafficSegments - In the implementation block
@property (nonatomic,readonly) NSArray * trafficIncidents;                  //@synthesize trafficIncidents=_trafficIncidents - In the implementation block
@property (assign,nonatomic) double expirationTime;                         //@synthesize expirationTime=_expirationTime - In the implementation block
+(double)expirationTimeInterval;
+(id)createWithData:(id)arg1 tileKey:(const GEOTileKey*)arg2 ;
-(NSArray *)trafficIncidents;
-(SCD_Struct_GE94*)vertices;
-(void)setVertices:(SCD_Struct_GE94*)arg1 ;
-(NSMutableArray *)trafficSegments;
-(void)setTrafficSegments:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 tileKey:(const GEOTileKey*)arg2 ;
-(double)expirationTime;
-(void)setExpirationTime:(double)arg1 ;
-(void)dealloc;
@end

