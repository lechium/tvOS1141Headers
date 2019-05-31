/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLeaveNowFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	double _currentTimestamp;
	double _eventTimestamp;
	double _travelDuration;
	int _actionType;
	int _alertType;
	int _travelState;
	SCD_Struct_GE74 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID;                //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                        //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) BOOL hasAlertType; 
@property (assign,nonatomic) int alertType;                         //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) BOOL hasTravelState; 
@property (assign,nonatomic) int travelState;                       //@synthesize travelState=_travelState - In the implementation block
@property (assign,nonatomic) BOOL hasEventTimestamp; 
@property (assign,nonatomic) double eventTimestamp;                 //@synthesize eventTimestamp=_eventTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentTimestamp; 
@property (assign,nonatomic) double currentTimestamp;               //@synthesize currentTimestamp=_currentTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTravelDuration; 
@property (assign,nonatomic) double travelDuration;                 //@synthesize travelDuration=_travelDuration - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(GEOSessionID)sessionID;
-(int)travelState;
-(int)actionType;
-(void)setActionType:(int)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(int)alertType;
-(void)setAlertType:(int)arg1 ;
-(void)setHasAlertType:(BOOL)arg1 ;
-(BOOL)hasAlertType;
-(id)alertTypeAsString:(int)arg1 ;
-(int)StringAsAlertType:(id)arg1 ;
-(void)setTravelState:(int)arg1 ;
-(void)setHasTravelState:(BOOL)arg1 ;
-(BOOL)hasTravelState;
-(id)travelStateAsString:(int)arg1 ;
-(int)StringAsTravelState:(id)arg1 ;
-(void)setEventTimestamp:(double)arg1 ;
-(void)setHasEventTimestamp:(BOOL)arg1 ;
-(BOOL)hasEventTimestamp;
-(void)setCurrentTimestamp:(double)arg1 ;
-(void)setHasCurrentTimestamp:(BOOL)arg1 ;
-(BOOL)hasCurrentTimestamp;
-(void)setTravelDuration:(double)arg1 ;
-(void)setHasTravelDuration:(BOOL)arg1 ;
-(BOOL)hasTravelDuration;
-(double)eventTimestamp;
-(double)travelDuration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)currentTimestamp;
@end

