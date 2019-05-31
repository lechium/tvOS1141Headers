/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOTransitDepartureSequenceUsage;

@interface GEOTransitPlaceCard : PBCodable <NSCopying> {

	NSString* _incidentType;
	int _transitCategory;
	GEOTransitDepartureSequenceUsage* _transitDepartureSequenceUsage;
	NSString* _transitSystemName;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasTransitCategory; 
@property (assign,nonatomic) int transitCategory;                                                           //@synthesize transitCategory=_transitCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitSystemName; 
@property (nonatomic,retain) NSString * transitSystemName;                                                  //@synthesize transitSystemName=_transitSystemName - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitDepartureSequenceUsage; 
@property (nonatomic,retain) GEOTransitDepartureSequenceUsage * transitDepartureSequenceUsage;              //@synthesize transitDepartureSequenceUsage=_transitDepartureSequenceUsage - In the implementation block
@property (nonatomic,readonly) BOOL hasIncidentType; 
@property (nonatomic,retain) NSString * incidentType;                                                       //@synthesize incidentType=_incidentType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)transitCategory;
-(void)setTransitCategory:(int)arg1 ;
-(void)setHasTransitCategory:(BOOL)arg1 ;
-(BOOL)hasTransitCategory;
-(id)transitCategoryAsString:(int)arg1 ;
-(int)StringAsTransitCategory:(id)arg1 ;
-(BOOL)hasTransitSystemName;
-(BOOL)hasTransitDepartureSequenceUsage;
-(BOOL)hasIncidentType;
-(NSString *)transitSystemName;
-(void)setTransitSystemName:(NSString *)arg1 ;
-(GEOTransitDepartureSequenceUsage *)transitDepartureSequenceUsage;
-(void)setTransitDepartureSequenceUsage:(GEOTransitDepartureSequenceUsage *)arg1 ;
-(NSString *)incidentType;
-(void)setIncidentType:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
