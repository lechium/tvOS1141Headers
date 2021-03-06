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

@class PBUnknownFields, NSString;

@interface GEOMatchedToken : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE59* _geoIds;
	int _geoType;
	NSString* _matchedToken;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSString * matchedToken;                        //@synthesize matchedToken=_matchedToken - In the implementation block
@property (assign,nonatomic) BOOL hasGeoType; 
@property (assign,nonatomic) int geoType;                                    //@synthesize geoType=_geoType - In the implementation block
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) unsigned long long* geoIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)geoIdsCount;
-(unsigned long long*)geoIds;
-(void)clearGeoIds;
-(void)setGeoIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)addGeoId:(unsigned long long)arg1 ;
-(unsigned long long)geoIdAtIndex:(unsigned long long)arg1 ;
-(void)setGeoType:(int)arg1 ;
-(void)setHasGeoType:(BOOL)arg1 ;
-(BOOL)hasGeoType;
-(NSString *)matchedToken;
-(void)setMatchedToken:(NSString *)arg1 ;
-(int)geoType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

