/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSUUID;

@interface MNGuidanceEventFeedback : PBCodable <NSCopying> {

	double _endDistance;
	double _endTime;
	double _maneuverTime;
	double _startDistance;
	double _startTime;
	double _vehicleSpeed;
	unsigned _enrouteNoticeIndex;
	NSString* _eventDescription;
	unsigned _eventIndex;
	NSData* _routeID;
	unsigned _selectedPrimaryStringIndex;
	unsigned _selectedSecondaryStringIndex;
	unsigned _stepID;
	unsigned _trafficColor;
	int _type;
	NSString* _uniqueIDstring;
	BOOL _shortPrompt;
	SCD_Struct_MN10 _has;

}

@property (nonatomic,readonly) NSUUID * uniqueID; 
@property (nonatomic,readonly) BOOL hasUniqueIDstring; 
@property (nonatomic,retain) NSString * uniqueIDstring;                          //@synthesize uniqueIDstring=_uniqueIDstring - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                   //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                    //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasEnrouteNoticeIndex; 
@property (assign,nonatomic) unsigned enrouteNoticeIndex;                        //@synthesize enrouteNoticeIndex=_enrouteNoticeIndex - In the implementation block
@property (assign,nonatomic) BOOL hasEventIndex; 
@property (assign,nonatomic) unsigned eventIndex;                                //@synthesize eventIndex=_eventIndex - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasStartDistance; 
@property (assign,nonatomic) double startDistance;                               //@synthesize startDistance=_startDistance - In the implementation block
@property (assign,nonatomic) BOOL hasVehicleSpeed; 
@property (assign,nonatomic) double vehicleSpeed;                                //@synthesize vehicleSpeed=_vehicleSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficColor; 
@property (assign,nonatomic) unsigned trafficColor;                              //@synthesize trafficColor=_trafficColor - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedPrimaryStringIndex; 
@property (assign,nonatomic) unsigned selectedPrimaryStringIndex;                //@synthesize selectedPrimaryStringIndex=_selectedPrimaryStringIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedSecondaryStringIndex; 
@property (assign,nonatomic) unsigned selectedSecondaryStringIndex;              //@synthesize selectedSecondaryStringIndex=_selectedSecondaryStringIndex - In the implementation block
@property (assign,nonatomic) BOOL hasShortPrompt; 
@property (assign,nonatomic) BOOL shortPrompt;                                   //@synthesize shortPrompt=_shortPrompt - In the implementation block
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) double endTime;                                     //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL hasEndDistance; 
@property (assign,nonatomic) double endDistance;                                 //@synthesize endDistance=_endDistance - In the implementation block
@property (assign,nonatomic) BOOL hasManeuverTime; 
@property (assign,nonatomic) double maneuverTime;                                //@synthesize maneuverTime=_maneuverTime - In the implementation block
@property (nonatomic,readonly) BOOL hasEventDescription; 
@property (nonatomic,retain) NSString * eventDescription;                        //@synthesize eventDescription=_eventDescription - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRouteID;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(unsigned)stepID;
-(NSUUID *)uniqueID;
-(unsigned)enrouteNoticeIndex;
-(void)setShortPrompt:(BOOL)arg1 ;
-(void)setHasShortPrompt:(BOOL)arg1 ;
-(BOOL)hasShortPrompt;
-(BOOL)shortPrompt;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setHasEndTime:(BOOL)arg1 ;
-(BOOL)hasEndTime;
-(void)setEnrouteNoticeIndex:(unsigned)arg1 ;
-(void)setHasEnrouteNoticeIndex:(BOOL)arg1 ;
-(BOOL)hasEnrouteNoticeIndex;
-(void)setEventIndex:(unsigned)arg1 ;
-(void)setHasEventIndex:(BOOL)arg1 ;
-(BOOL)hasEventIndex;
-(void)setVehicleSpeed:(double)arg1 ;
-(void)setHasVehicleSpeed:(BOOL)arg1 ;
-(BOOL)hasVehicleSpeed;
-(unsigned)eventIndex;
-(double)vehicleSpeed;
-(double)startDistance;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setStartTime:(double)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(id)dictionaryRepresentation;
-(BOOL)hasUniqueIDstring;
-(void)setHasStartDistance:(BOOL)arg1 ;
-(BOOL)hasStartDistance;
-(void)setTrafficColor:(unsigned)arg1 ;
-(void)setHasTrafficColor:(BOOL)arg1 ;
-(BOOL)hasTrafficColor;
-(void)setSelectedPrimaryStringIndex:(unsigned)arg1 ;
-(void)setHasSelectedPrimaryStringIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedPrimaryStringIndex;
-(void)setSelectedSecondaryStringIndex:(unsigned)arg1 ;
-(void)setHasSelectedSecondaryStringIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedSecondaryStringIndex;
-(void)setEndDistance:(double)arg1 ;
-(void)setHasEndDistance:(BOOL)arg1 ;
-(BOOL)hasEndDistance;
-(void)setManeuverTime:(double)arg1 ;
-(void)setHasManeuverTime:(BOOL)arg1 ;
-(BOOL)hasManeuverTime;
-(BOOL)hasEventDescription;
-(NSString *)uniqueIDstring;
-(void)setUniqueIDstring:(NSString *)arg1 ;
-(unsigned)trafficColor;
-(unsigned)selectedPrimaryStringIndex;
-(unsigned)selectedSecondaryStringIndex;
-(double)endDistance;
-(double)maneuverTime;
-(NSString *)eventDescription;
-(void)setEventDescription:(NSString *)arg1 ;
-(void)setStartDistance:(double)arg1 ;
-(id)initWithEvent:(id)arg1 ;
@end

