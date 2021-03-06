/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOHours : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE2* _days;
	NSMutableArray* _timeRanges;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,retain) NSMutableArray * timeRanges;                    //@synthesize timeRanges=_timeRanges - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)timeRangeType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int*)days;
-(unsigned long long)daysCount;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)timeRanges;
-(unsigned long long)timeRangesCount;
-(void)addTimeRange:(id)arg1 ;
-(id)initWithPlaceDataHours:(id)arg1 ;
-(void)clearDays;
-(void)addDay:(int)arg1 ;
-(int)dayAtIndex:(unsigned long long)arg1 ;
-(id)daysAsString:(int)arg1 ;
-(int)StringAsDays:(id)arg1 ;
-(void)clearTimeRanges;
-(id)timeRangeAtIndex:(unsigned long long)arg1 ;
-(void)setTimeRanges:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

