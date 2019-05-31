/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiSDB : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _realTimeSessionStateResultingInSubmission;
	NSMutableArray* _sliceStats;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * sliceStats;                                     //@synthesize sliceStats=_sliceStats - In the implementation block
@property (assign,nonatomic) BOOL hasRealTimeSessionStateResultingInSubmission; 
@property (assign,nonatomic) unsigned realTimeSessionStateResultingInSubmission;              //@synthesize realTimeSessionStateResultingInSubmission=_realTimeSessionStateResultingInSubmission - In the implementation block
+(Class)sliceStatsType;
-(void)setSliceStats:(NSMutableArray *)arg1 ;
-(void)addSliceStats:(id)arg1 ;
-(unsigned long long)sliceStatsCount;
-(void)clearSliceStats;
-(id)sliceStatsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)sliceStats;
-(void)setRealTimeSessionStateResultingInSubmission:(unsigned)arg1 ;
-(void)setHasRealTimeSessionStateResultingInSubmission:(BOOL)arg1 ;
-(BOOL)hasRealTimeSessionStateResultingInSubmission;
-(unsigned)realTimeSessionStateResultingInSubmission;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

