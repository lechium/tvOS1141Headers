/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapItemAddressBookAttributes, GEOMapItemCorrectedLocationAttributes, GEOMapItemRoutineAttributes;

@interface GEOMapItemClientAttributes : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapItemAddressBookAttributes* _addressBookAttributes;
	GEOMapItemCorrectedLocationAttributes* _correctedLocationAttributes;
	GEOMapItemRoutineAttributes* _routineAttributes;

}

@property (nonatomic,readonly) BOOL hasAddressBookAttributes; 
@property (nonatomic,retain) GEOMapItemAddressBookAttributes * addressBookAttributes;                          //@synthesize addressBookAttributes=_addressBookAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutineAttributes; 
@property (nonatomic,retain) GEOMapItemRoutineAttributes * routineAttributes;                                  //@synthesize routineAttributes=_routineAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedLocationAttributes; 
@property (nonatomic,retain) GEOMapItemCorrectedLocationAttributes * correctedLocationAttributes;              //@synthesize correctedLocationAttributes=_correctedLocationAttributes - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasAddressBookAttributes;
-(BOOL)hasRoutineAttributes;
-(BOOL)hasCorrectedLocationAttributes;
-(GEOMapItemAddressBookAttributes *)addressBookAttributes;
-(void)setAddressBookAttributes:(GEOMapItemAddressBookAttributes *)arg1 ;
-(GEOMapItemRoutineAttributes *)routineAttributes;
-(void)setRoutineAttributes:(GEOMapItemRoutineAttributes *)arg1 ;
-(GEOMapItemCorrectedLocationAttributes *)correctedLocationAttributes;
-(void)setCorrectedLocationAttributes:(GEOMapItemCorrectedLocationAttributes *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

