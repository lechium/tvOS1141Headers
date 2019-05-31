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

@class NSMutableArray;

@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	double _durationInOldState;
	double _sessionRelativeTimestamp;
	NSMutableArray* _stateTransitions;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID;                         //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * stateTransitions;              //@synthesize stateTransitions=_stateTransitions - In the implementation block
@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState;                      //@synthesize durationInOldState=_durationInOldState - In the implementation block
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp;                //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
+(Class)stateTransitionType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(GEOSessionID)sessionID;
-(void)setDurationInOldState:(double)arg1 ;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(double)sessionRelativeTimestamp;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)hasDurationInOldState;
-(double)durationInOldState;
-(void)clearStateTransitions;
-(void)addStateTransition:(id)arg1 ;
-(unsigned long long)stateTransitionsCount;
-(id)stateTransitionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)stateTransitions;
-(void)setStateTransitions:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

