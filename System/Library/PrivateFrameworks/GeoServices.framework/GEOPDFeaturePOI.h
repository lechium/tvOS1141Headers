/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDVenueBuilding, GEOPDVenueDirectoryGroup, NSMutableArray, GEOPDVenueContainer;

@interface GEOPDFeaturePOI : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDVenueBuilding* _building;
	GEOPDVenueDirectoryGroup* _directoryGroup;
	NSMutableArray* _levels;
	GEOPDVenueContainer* _venueContainer;

}

@property (nonatomic,readonly) BOOL hasVenueContainer; 
@property (nonatomic,retain) GEOPDVenueContainer * venueContainer;                   //@synthesize venueContainer=_venueContainer - In the implementation block
@property (nonatomic,readonly) BOOL hasBuilding; 
@property (nonatomic,retain) GEOPDVenueBuilding * building;                          //@synthesize building=_building - In the implementation block
@property (nonatomic,retain) NSMutableArray * levels;                                //@synthesize levels=_levels - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectoryGroup; 
@property (nonatomic,retain) GEOPDVenueDirectoryGroup * directoryGroup;              //@synthesize directoryGroup=_directoryGroup - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)levelType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasVenueContainer;
-(BOOL)hasBuilding;
-(void)clearLevels;
-(void)addLevel:(id)arg1 ;
-(unsigned long long)levelsCount;
-(id)levelAtIndex:(unsigned long long)arg1 ;
-(GEOPDVenueContainer *)venueContainer;
-(void)setVenueContainer:(GEOPDVenueContainer *)arg1 ;
-(GEOPDVenueBuilding *)building;
-(void)setBuilding:(GEOPDVenueBuilding *)arg1 ;
-(NSMutableArray *)levels;
-(void)setLevels:(NSMutableArray *)arg1 ;
-(BOOL)hasDirectoryGroup;
-(GEOPDVenueDirectoryGroup *)directoryGroup;
-(void)setDirectoryGroup:(GEOPDVenueDirectoryGroup *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
