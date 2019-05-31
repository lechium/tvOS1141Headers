/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLaneConnection : PBCodable <NSCopying> {

	unsigned _firstLaneIndex;
	unsigned _firstRoadIndex;
	unsigned _secondLaneIndex;
	unsigned _secondRoadIndex;

}

@property (assign,nonatomic) unsigned firstRoadIndex;               //@synthesize firstRoadIndex=_firstRoadIndex - In the implementation block
@property (assign,nonatomic) unsigned firstLaneIndex;               //@synthesize firstLaneIndex=_firstLaneIndex - In the implementation block
@property (assign,nonatomic) unsigned secondRoadIndex;              //@synthesize secondRoadIndex=_secondRoadIndex - In the implementation block
@property (assign,nonatomic) unsigned secondLaneIndex;              //@synthesize secondLaneIndex=_secondLaneIndex - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)firstRoadIndex;
-(void)setFirstRoadIndex:(unsigned)arg1 ;
-(unsigned)firstLaneIndex;
-(void)setFirstLaneIndex:(unsigned)arg1 ;
-(unsigned)secondRoadIndex;
-(void)setSecondRoadIndex:(unsigned)arg1 ;
-(unsigned)secondLaneIndex;
-(void)setSecondLaneIndex:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
