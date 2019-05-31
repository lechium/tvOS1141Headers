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

@interface GEOListResultItem : PBCodable <NSCopying> {

	unsigned long long _businessId;
	long long _latency;
	int _resultType;
	int _tappedCount;
	BOOL _eventuallyVisible;
	BOOL _initiallyVisible;
	SCD_Struct_GE39 _has;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                             //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) BOOL hasInitiallyVisible; 
@property (assign,nonatomic) BOOL initiallyVisible;                      //@synthesize initiallyVisible=_initiallyVisible - In the implementation block
@property (assign,nonatomic) BOOL hasEventuallyVisible; 
@property (assign,nonatomic) BOOL eventuallyVisible;                     //@synthesize eventuallyVisible=_eventuallyVisible - In the implementation block
@property (assign,nonatomic) BOOL hasLatency; 
@property (assign,nonatomic) long long latency;                          //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) BOOL hasTappedCount; 
@property (assign,nonatomic) int tappedCount;                            //@synthesize tappedCount=_tappedCount - In the implementation block
@property (assign,nonatomic) BOOL hasBusinessId; 
@property (assign,nonatomic) unsigned long long businessId;              //@synthesize businessId=_businessId - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(void)setResultType:(int)arg1 ;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(id)resultTypeAsString:(int)arg1 ;
-(int)StringAsResultType:(id)arg1 ;
-(void)setInitiallyVisible:(BOOL)arg1 ;
-(void)setHasInitiallyVisible:(BOOL)arg1 ;
-(BOOL)hasInitiallyVisible;
-(void)setEventuallyVisible:(BOOL)arg1 ;
-(void)setHasEventuallyVisible:(BOOL)arg1 ;
-(BOOL)hasEventuallyVisible;
-(long long)latency;
-(void)setLatency:(long long)arg1 ;
-(void)setHasLatency:(BOOL)arg1 ;
-(BOOL)hasLatency;
-(int)tappedCount;
-(void)setTappedCount:(int)arg1 ;
-(void)setHasTappedCount:(BOOL)arg1 ;
-(BOOL)hasTappedCount;
-(void)setBusinessId:(unsigned long long)arg1 ;
-(void)setHasBusinessId:(BOOL)arg1 ;
-(BOOL)hasBusinessId;
-(BOOL)initiallyVisible;
-(BOOL)eventuallyVisible;
-(unsigned long long)businessId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

