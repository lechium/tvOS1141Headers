/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocalTime;

@interface GEOLogMsgStateUserSession : PBCodable <NSCopying> {

	GEOSessionID _navSessionId;
	GEOSessionID _sessionId;
	double _navSessionRelativeTimestamp;
	double _relativeTimestamp;
	GEOLocalTime* _eventTime;
	unsigned _sequenceNumber;
	SCD_Struct_GE90 _has;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId;                           //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                          //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasRelativeTimestamp; 
@property (assign,nonatomic) double relativeTimestamp;                         //@synthesize relativeTimestamp=_relativeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNavSessionId; 
@property (assign,nonatomic) GEOSessionID navSessionId;                        //@synthesize navSessionId=_navSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasNavSessionRelativeTimestamp; 
@property (assign,nonatomic) double navSessionRelativeTimestamp;               //@synthesize navSessionRelativeTimestamp=_navSessionRelativeTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEventTime; 
@property (nonatomic,retain) GEOLocalTime * eventTime;                         //@synthesize eventTime=_eventTime - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setNavSessionId:(GEOSessionID)arg1 ;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(GEOSessionID)sessionId;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(unsigned)sequenceNumber;
-(void)setHasNavSessionId:(BOOL)arg1 ;
-(BOOL)hasNavSessionId;
-(GEOSessionID)navSessionId;
-(void)setEventTime:(GEOLocalTime *)arg1 ;
-(void)setNavSessionRelativeTimestamp:(double)arg1 ;
-(void)setRelativeTimestamp:(double)arg1 ;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasRelativeTimestamp;
-(double)relativeTimestamp;
-(void)setHasNavSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasNavSessionRelativeTimestamp;
-(BOOL)hasEventTime;
-(double)navSessionRelativeTimestamp;
-(GEOLocalTime *)eventTime;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

