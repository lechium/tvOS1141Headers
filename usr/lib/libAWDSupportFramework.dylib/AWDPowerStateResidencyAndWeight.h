/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerStateResidencyAndWeight : PBCodable <NSCopying> {

	unsigned _residency;
	unsigned _weight;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasResidency; 
@property (assign,nonatomic) unsigned residency;              //@synthesize residency=_residency - In the implementation block
@property (assign,nonatomic) BOOL hasWeight; 
@property (assign,nonatomic) unsigned weight;                 //@synthesize weight=_weight - In the implementation block
-(void)setResidency:(unsigned)arg1 ;
-(void)setHasResidency:(BOOL)arg1 ;
-(BOOL)hasResidency;
-(void)setHasWeight:(BOOL)arg1 ;
-(BOOL)hasWeight;
-(unsigned)residency;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)weight;
-(void)setWeight:(unsigned)arg1 ;
@end

