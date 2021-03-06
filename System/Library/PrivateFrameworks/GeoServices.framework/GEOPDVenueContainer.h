/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDVenueLabel;

@interface GEOPDVenueContainer : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE59* _buildingIds;
	unsigned long long _muid;
	unsigned long long _venueId;
	int _browseType;
	GEOPDVenueLabel* _label;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasVenueId; 
@property (assign,nonatomic) unsigned long long venueId;                         //@synthesize venueId=_venueId - In the implementation block
@property (nonatomic,readonly) unsigned long long buildingIdsCount; 
@property (nonatomic,readonly) unsigned long long* buildingIds; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEOPDVenueLabel * label;                            //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasBrowseType; 
@property (assign,nonatomic) int browseType;                                     //@synthesize browseType=_browseType - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                            //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(void)setVenueId:(unsigned long long)arg1 ;
-(void)setHasVenueId:(BOOL)arg1 ;
-(BOOL)hasVenueId;
-(unsigned long long)venueId;
-(BOOL)hasLabel;
-(unsigned long long)buildingIdsCount;
-(unsigned long long*)buildingIds;
-(void)clearBuildingIds;
-(void)addBuildingId:(unsigned long long)arg1 ;
-(unsigned long long)buildingIdAtIndex:(unsigned long long)arg1 ;
-(void)setBuildingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(int)browseType;
-(void)setBrowseType:(int)arg1 ;
-(void)setHasBrowseType:(BOOL)arg1 ;
-(BOOL)hasBrowseType;
-(id)browseTypeAsString:(int)arg1 ;
-(int)StringAsBrowseType:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDVenueLabel *)label;
-(void)setLabel:(GEOPDVenueLabel *)arg1 ;
-(id)dictionaryRepresentation;
@end

