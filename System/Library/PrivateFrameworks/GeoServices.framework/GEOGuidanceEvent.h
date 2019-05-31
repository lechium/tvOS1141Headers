/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOVisualLaneGuidance, GEOSignGuidance, GEOSpokenGuidance;

@interface GEOGuidanceEvent : PBCodable <NSCopying> {

	double _maxSpeed;
	double _minSpeed;
	int _distanceZilchIndex;
	int _endValidDistance;
	int _eventType;
	unsigned _identifier;
	GEOVisualLaneGuidance* _laneGuidance;
	int _offsetForDistanceString;
	GEOSignGuidance* _signGuidance;
	GEOSpokenGuidance* _spokenGuidance;
	int _startValidDistance;
	BOOL _sticky;
	SCD_Struct_LO19 _has;

}

@property (assign,nonatomic) BOOL hasStartValidDistance; 
@property (assign,nonatomic) int startValidDistance;                            //@synthesize startValidDistance=_startValidDistance - In the implementation block
@property (assign,nonatomic) BOOL hasEndValidDistance; 
@property (assign,nonatomic) int endValidDistance;                              //@synthesize endValidDistance=_endValidDistance - In the implementation block
@property (nonatomic,readonly) BOOL hasSignGuidance; 
@property (nonatomic,retain) GEOSignGuidance * signGuidance;                    //@synthesize signGuidance=_signGuidance - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenGuidance; 
@property (nonatomic,retain) GEOSpokenGuidance * spokenGuidance;                //@synthesize spokenGuidance=_spokenGuidance - In the implementation block
@property (nonatomic,readonly) BOOL hasLaneGuidance; 
@property (nonatomic,retain) GEOVisualLaneGuidance * laneGuidance;              //@synthesize laneGuidance=_laneGuidance - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceZilchIndex; 
@property (assign,nonatomic) int distanceZilchIndex;                            //@synthesize distanceZilchIndex=_distanceZilchIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMinSpeed; 
@property (assign,nonatomic) double minSpeed;                                   //@synthesize minSpeed=_minSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasMaxSpeed; 
@property (assign,nonatomic) double maxSpeed;                                   //@synthesize maxSpeed=_maxSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                     //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasOffsetForDistanceString; 
@property (assign,nonatomic) int offsetForDistanceString;                       //@synthesize offsetForDistanceString=_offsetForDistanceString - In the implementation block
@property (assign,nonatomic) BOOL hasSticky; 
@property (assign,nonatomic) BOOL sticky;                                       //@synthesize sticky=_sticky - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
-(BOOL)hasDistanceZilchIndex;
-(BOOL)hasIdentifier;
-(BOOL)hasSignGuidance;
-(BOOL)hasSpokenGuidance;
-(int)startValidDistance;
-(int)endValidDistance;
-(GEOSpokenGuidance *)spokenGuidance;
-(double)maxSpeed;
-(BOOL)hasMaxSpeed;
-(double)minSpeed;
-(BOOL)hasMinSpeed;
-(GEOVisualLaneGuidance *)laneGuidance;
-(BOOL)hasLaneGuidance;
-(BOOL)sticky;
-(GEOSignGuidance *)signGuidance;
-(BOOL)hasEndValidDistance;
-(BOOL)hasStartValidDistance;
-(int)offsetForDistanceString;
-(BOOL)hasOffsetForDistanceString;
-(int)distanceZilchIndex;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)eventTypeAsString:(int)arg1 ;
-(int)StringAsEventType:(id)arg1 ;
-(void)setDistanceZilchIndex:(int)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)setStartValidDistance:(int)arg1 ;
-(void)setHasStartValidDistance:(BOOL)arg1 ;
-(void)setEndValidDistance:(int)arg1 ;
-(void)setHasEndValidDistance:(BOOL)arg1 ;
-(void)setHasDistanceZilchIndex:(BOOL)arg1 ;
-(void)setMinSpeed:(double)arg1 ;
-(void)setHasMinSpeed:(BOOL)arg1 ;
-(void)setMaxSpeed:(double)arg1 ;
-(void)setHasMaxSpeed:(BOOL)arg1 ;
-(void)setOffsetForDistanceString:(int)arg1 ;
-(void)setHasOffsetForDistanceString:(BOOL)arg1 ;
-(void)setSticky:(BOOL)arg1 ;
-(void)setHasSticky:(BOOL)arg1 ;
-(BOOL)hasSticky;
-(void)setSignGuidance:(GEOSignGuidance *)arg1 ;
-(void)setSpokenGuidance:(GEOSpokenGuidance *)arg1 ;
-(void)setLaneGuidance:(GEOVisualLaneGuidance *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
@end

