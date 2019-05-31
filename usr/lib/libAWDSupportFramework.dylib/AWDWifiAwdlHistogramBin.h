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

@interface AWDWifiAwdlHistogramBin : PBCodable <NSCopying> {

	double _binEnd;
	double _binStart;
	double _value;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasBinStart; 
@property (assign,nonatomic) double binStart;               //@synthesize binStart=_binStart - In the implementation block
@property (assign,nonatomic) BOOL hasBinEnd; 
@property (assign,nonatomic) double binEnd;                 //@synthesize binEnd=_binEnd - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                  //@synthesize value=_value - In the implementation block
-(void)setBinStart:(double)arg1 ;
-(void)setHasBinStart:(BOOL)arg1 ;
-(BOOL)hasBinStart;
-(void)setBinEnd:(double)arg1 ;
-(void)setHasBinEnd:(BOOL)arg1 ;
-(BOOL)hasBinEnd;
-(double)binStart;
-(double)binEnd;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasValue;
-(void)setHasValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(double)arg1 ;
-(double)value;
-(id)dictionaryRepresentation;
@end

