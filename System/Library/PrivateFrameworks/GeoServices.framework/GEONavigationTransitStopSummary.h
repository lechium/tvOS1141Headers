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

@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying> {

	unsigned long long _stopID;
	GEOLatLng* _coordinate;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasStopID; 
@property (assign,nonatomic) unsigned long long stopID;              //@synthesize stopID=_stopID - In the implementation block
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate;                 //@synthesize coordinate=_coordinate - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOLatLng *)coordinate;
-(BOOL)hasCoordinate;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(void)setStopID:(unsigned long long)arg1 ;
-(void)setHasStopID:(BOOL)arg1 ;
-(BOOL)hasStopID;
-(unsigned long long)stopID;
-(id)initWithTransitStop:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

