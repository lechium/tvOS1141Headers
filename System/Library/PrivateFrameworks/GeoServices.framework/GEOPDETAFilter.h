/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions;

@interface GEOPDETAFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE2* _transportTypes;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	BOOL _includeHistoricTravelTime;
	BOOL _includeRouteTrafficDetail;
	SCD_Struct_GE21 _has;

}

@property (nonatomic,readonly) unsigned long long transportTypesCount; 
@property (nonatomic,readonly) int* transportTypes; 
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime;                        //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;              //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                    //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions;                    //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeRouteTrafficDetail; 
@property (assign,nonatomic) BOOL includeRouteTrafficDetail;                        //@synthesize includeRouteTrafficDetail=_includeRouteTrafficDetail - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)transportTypesCount;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(BOOL)hasAutomobileOptions;
-(BOOL)hasTransitOptions;
-(BOOL)hasWalkingOptions;
-(BOOL)includeRouteTrafficDetail;
-(void)setIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(void)setHasIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(BOOL)hasIncludeRouteTrafficDetail;
-(BOOL)includeHistoricTravelTime;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(GEOWalkingOptions *)walkingOptions;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(int*)transportTypes;
-(void)clearTransportTypes;
-(void)addTransportType:(int)arg1 ;
-(int)transportTypeAtIndex:(unsigned long long)arg1 ;
-(void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)transportTypesAsString:(int)arg1 ;
-(int)StringAsTransportTypes:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
