/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTransitVehicleTime : PBCodable <NSCopying> {

	unsigned _absTime;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasAbsTime; 
@property (assign,nonatomic) unsigned absTime;              //@synthesize absTime=_absTime - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAbsTime:(unsigned)arg1 ;
-(void)setHasAbsTime:(BOOL)arg1 ;
-(BOOL)hasAbsTime;
-(unsigned)absTime;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

