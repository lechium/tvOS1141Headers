/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTimeCheckpoints : PBCodable <NSCopying> {

	SCD_Struct_GE20* _distToNextCheckpoints;
	SCD_Struct_GE20* _timeToNextCheckpoints;

}

@property (nonatomic,readonly) unsigned long long distToNextCheckpointsCount; 
@property (nonatomic,readonly) unsigned* distToNextCheckpoints; 
@property (nonatomic,readonly) unsigned long long timeToNextCheckpointsCount; 
@property (nonatomic,readonly) unsigned* timeToNextCheckpoints; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)distToNextCheckpointsCount;
-(unsigned*)distToNextCheckpoints;
-(void)clearDistToNextCheckpoints;
-(void)addDistToNextCheckpoint:(unsigned)arg1 ;
-(unsigned)distToNextCheckpointAtIndex:(unsigned long long)arg1 ;
-(void)setDistToNextCheckpoints:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)timeToNextCheckpointsCount;
-(unsigned*)timeToNextCheckpoints;
-(void)clearTimeToNextCheckpoints;
-(void)addTimeToNextCheckpoint:(unsigned)arg1 ;
-(unsigned)timeToNextCheckpointAtIndex:(unsigned long long)arg1 ;
-(void)setTimeToNextCheckpoints:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

