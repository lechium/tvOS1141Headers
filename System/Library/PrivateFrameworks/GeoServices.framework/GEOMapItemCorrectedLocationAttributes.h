/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOAddress, NSString, GEOLatLng;

@interface GEOMapItemCorrectedLocationAttributes : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _lastUpdateDate;
	GEOAddress* _correctedAddress;
	NSString* _correctedAddressSecondaryStreetLine;
	GEOLatLng* _correctedCoordinate;
	NSString* _customLabel;
	BOOL _hasSubmittedRAP;
	SCD_Struct_GE21 _has;

}

@property (nonatomic,readonly) BOOL hasCorrectedCoordinate; 
@property (nonatomic,retain) GEOLatLng * correctedCoordinate;                             //@synthesize correctedCoordinate=_correctedCoordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedAddress; 
@property (nonatomic,retain) GEOAddress * correctedAddress;                               //@synthesize correctedAddress=_correctedAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedAddressSecondaryStreetLine; 
@property (nonatomic,retain) NSString * correctedAddressSecondaryStreetLine;              //@synthesize correctedAddressSecondaryStreetLine=_correctedAddressSecondaryStreetLine - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomLabel; 
@property (nonatomic,retain) NSString * customLabel;                                      //@synthesize customLabel=_customLabel - In the implementation block
@property (assign,nonatomic) BOOL hasLastUpdateDate; 
@property (assign,nonatomic) double lastUpdateDate;                                       //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (assign,nonatomic) BOOL hasHasSubmittedRAP; 
@property (assign,nonatomic) BOOL hasSubmittedRAP;                                        //@synthesize hasSubmittedRAP=_hasSubmittedRAP - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasCorrectedCoordinate;
-(GEOLatLng *)correctedCoordinate;
-(void)setCorrectedCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasCorrectedAddress;
-(GEOAddress *)correctedAddress;
-(BOOL)hasCorrectedAddressSecondaryStreetLine;
-(BOOL)hasCustomLabel;
-(void)setHasLastUpdateDate:(BOOL)arg1 ;
-(BOOL)hasLastUpdateDate;
-(void)setHasSubmittedRAP:(BOOL)arg1 ;
-(void)setHasHasSubmittedRAP:(BOOL)arg1 ;
-(BOOL)hasHasSubmittedRAP;
-(void)setCorrectedAddress:(GEOAddress *)arg1 ;
-(NSString *)correctedAddressSecondaryStreetLine;
-(void)setCorrectedAddressSecondaryStreetLine:(NSString *)arg1 ;
-(NSString *)customLabel;
-(void)setCustomLabel:(NSString *)arg1 ;
-(BOOL)hasSubmittedRAP;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLastUpdateDate:(double)arg1 ;
-(double)lastUpdateDate;
@end

