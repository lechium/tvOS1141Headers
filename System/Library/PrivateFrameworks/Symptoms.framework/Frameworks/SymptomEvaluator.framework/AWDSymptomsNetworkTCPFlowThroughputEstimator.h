/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDSymptomsNetworkTCPFlowThroughputEstimator : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _clientIdentifier;
	NSMutableArray* _flowThroughputEvents;
	int _networkType;
	NSString* _sourceAppIdentifier;
	SCD_Struct_AW24 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                    //@synthesize networkType=_networkType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientIdentifier; 
@property (nonatomic,retain) NSString * clientIdentifier;                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceAppIdentifier; 
@property (nonatomic,retain) NSString * sourceAppIdentifier;                     //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * flowThroughputEvents;              //@synthesize flowThroughputEvents=_flowThroughputEvents - In the implementation block
+(Class)flowThroughputEventType;
-(void)setSourceAppIdentifier:(NSString *)arg1 ;
-(BOOL)hasClientIdentifier;
-(BOOL)hasSourceAppIdentifier;
-(NSString *)sourceAppIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(NSString *)clientIdentifier;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)addFlowThroughputEvent:(id)arg1 ;
-(unsigned long long)flowThroughputEventsCount;
-(void)clearFlowThroughputEvents;
-(id)flowThroughputEventAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)flowThroughputEvents;
-(void)setFlowThroughputEvents:(NSMutableArray *)arg1 ;
@end

