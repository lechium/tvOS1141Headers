/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOFormattedString;

@interface GEODrivingWalkingInstruction : PBCodable <NSCopying> {

	NSMutableArray* _continueCommands;
	GEOFormattedString* _distance;
	NSMutableArray* _mergeCommands;
	NSMutableArray* _normalCommands;

}

@property (nonatomic,readonly) BOOL hasDistance; 
@property (nonatomic,retain) GEOFormattedString * distance;                  //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSMutableArray * normalCommands;                //@synthesize normalCommands=_normalCommands - In the implementation block
@property (nonatomic,retain) NSMutableArray * continueCommands;              //@synthesize continueCommands=_continueCommands - In the implementation block
@property (nonatomic,retain) NSMutableArray * mergeCommands;                 //@synthesize mergeCommands=_mergeCommands - In the implementation block
+(Class)normalCommandType;
+(Class)continueCommandType;
+(Class)mergeCommandType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDistance:(GEOFormattedString *)arg1 ;
-(BOOL)hasDistance;
-(GEOFormattedString *)distance;
-(NSMutableArray *)normalCommands;
-(NSMutableArray *)mergeCommands;
-(NSMutableArray *)continueCommands;
-(void)clearNormalCommands;
-(void)addNormalCommand:(id)arg1 ;
-(unsigned long long)normalCommandsCount;
-(id)normalCommandAtIndex:(unsigned long long)arg1 ;
-(void)clearContinueCommands;
-(void)addContinueCommand:(id)arg1 ;
-(unsigned long long)continueCommandsCount;
-(id)continueCommandAtIndex:(unsigned long long)arg1 ;
-(void)clearMergeCommands;
-(void)addMergeCommand:(id)arg1 ;
-(unsigned long long)mergeCommandsCount;
-(id)mergeCommandAtIndex:(unsigned long long)arg1 ;
-(void)setNormalCommands:(NSMutableArray *)arg1 ;
-(void)setContinueCommands:(NSMutableArray *)arg1 ;
-(void)setMergeCommands:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

