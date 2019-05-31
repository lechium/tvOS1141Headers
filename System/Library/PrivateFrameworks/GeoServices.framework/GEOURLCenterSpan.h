/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOURLCenterSpan : PBCodable <NSCopying> {

	double _latitude;
	double _latitudeDelta;
	double _longitude;
	double _longitudeDelta;
	SCD_Struct_GE69 _has;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                     //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                    //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasLatitudeDelta; 
@property (assign,nonatomic) double latitudeDelta;                //@synthesize latitudeDelta=_latitudeDelta - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeDelta; 
@property (assign,nonatomic) double longitudeDelta;               //@synthesize longitudeDelta=_longitudeDelta - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitudeDelta:(double)arg1 ;
-(void)setLongitudeDelta:(double)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(double)latitude;
-(double)longitude;
-(BOOL)hasLatitudeDelta;
-(BOOL)hasLongitudeDelta;
-(double)latitudeDelta;
-(double)longitudeDelta;
-(void)setHasLatitude:(BOOL)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setHasLatitudeDelta:(BOOL)arg1 ;
-(void)setHasLongitudeDelta:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

