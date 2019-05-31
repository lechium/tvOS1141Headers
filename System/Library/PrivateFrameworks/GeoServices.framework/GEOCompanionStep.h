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

@class GEOCompanionDriveStep, GEOCompanionFerryStep, NSMutableArray, NSString, GEOCompanionWalkStep;

@interface GEOCompanionStep : PBCodable <NSCopying> {

	unsigned _distance;
	GEOCompanionDriveStep* _driveStep;
	unsigned _endCoordinateIndex;
	GEOCompanionFerryStep* _ferryStep;
	NSMutableArray* _instructionWithAlternatives;
	NSString* _listInstruction;
	unsigned _maneuverStartCoordinateIndex;
	NSString* _roadName;
	unsigned _startCoordinateIndex;
	unsigned _stepID;
	unsigned _time;
	GEOCompanionWalkStep* _walkStep;
	SCD_Struct_GE39 _has;

}

@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                           //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                         //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) unsigned time;                                             //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) BOOL hasRoadName; 
@property (nonatomic,retain) NSString * roadName;                                       //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) BOOL hasDriveStep; 
@property (nonatomic,retain) GEOCompanionDriveStep * driveStep;                         //@synthesize driveStep=_driveStep - In the implementation block
@property (nonatomic,readonly) BOOL hasWalkStep; 
@property (nonatomic,retain) GEOCompanionWalkStep * walkStep;                           //@synthesize walkStep=_walkStep - In the implementation block
@property (nonatomic,readonly) BOOL hasFerryStep; 
@property (nonatomic,retain) GEOCompanionFerryStep * ferryStep;                         //@synthesize ferryStep=_ferryStep - In the implementation block
@property (assign,nonatomic) BOOL hasStartCoordinateIndex; 
@property (assign,nonatomic) unsigned startCoordinateIndex;                             //@synthesize startCoordinateIndex=_startCoordinateIndex - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverStartCoordinateIndex; 
@property (assign,nonatomic) unsigned maneuverStartCoordinateIndex;                     //@synthesize maneuverStartCoordinateIndex=_maneuverStartCoordinateIndex - In the implementation block
@property (assign,nonatomic) BOOL hasEndCoordinateIndex; 
@property (assign,nonatomic) unsigned endCoordinateIndex;                               //@synthesize endCoordinateIndex=_endCoordinateIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * instructionWithAlternatives;              //@synthesize instructionWithAlternatives=_instructionWithAlternatives - In the implementation block
@property (nonatomic,readonly) BOOL hasListInstruction; 
@property (nonatomic,retain) NSString * listInstruction;                                //@synthesize listInstruction=_listInstruction - In the implementation block
+(Class)instructionWithAlternativesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)time;
-(void)setTime:(unsigned)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(unsigned)distance;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(unsigned)stepID;
-(BOOL)hasTime;
-(id)geoStep;
-(void)setStartCoordinateIndex:(unsigned)arg1 ;
-(void)setManeuverStartCoordinateIndex:(unsigned)arg1 ;
-(void)setEndCoordinateIndex:(unsigned)arg1 ;
-(void)setDriveStep:(GEOCompanionDriveStep *)arg1 ;
-(void)setWalkStep:(GEOCompanionWalkStep *)arg1 ;
-(void)setFerryStep:(GEOCompanionFerryStep *)arg1 ;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
-(void)setListInstruction:(NSString *)arg1 ;
-(void)setInstructionWithAlternatives:(NSMutableArray *)arg1 ;
-(BOOL)hasDriveStep;
-(GEOCompanionDriveStep *)driveStep;
-(BOOL)hasWalkStep;
-(GEOCompanionWalkStep *)walkStep;
-(BOOL)hasFerryStep;
-(GEOCompanionFerryStep *)ferryStep;
-(unsigned)endCoordinateIndex;
-(id)maneuverStep;
-(id)initWithStep:(id)arg1 route:(id)arg2 stringFormatter:(id)arg3 ;
-(void)setHasTime:(BOOL)arg1 ;
-(BOOL)hasRoadName;
-(void)setHasStartCoordinateIndex:(BOOL)arg1 ;
-(BOOL)hasStartCoordinateIndex;
-(void)setHasManeuverStartCoordinateIndex:(BOOL)arg1 ;
-(BOOL)hasManeuverStartCoordinateIndex;
-(void)setHasEndCoordinateIndex:(BOOL)arg1 ;
-(BOOL)hasEndCoordinateIndex;
-(void)clearInstructionWithAlternatives;
-(void)addInstructionWithAlternatives:(id)arg1 ;
-(unsigned long long)instructionWithAlternativesCount;
-(id)instructionWithAlternativesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasListInstruction;
-(unsigned)startCoordinateIndex;
-(unsigned)maneuverStartCoordinateIndex;
-(NSMutableArray *)instructionWithAlternatives;
-(NSString *)listInstruction;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

