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

@interface AWDRATConnectedPower : PBCodable <NSCopying> {

	unsigned _powerConnSetupMicroWatt;
	unsigned _powerConnectedMicroWatt;
	int _rAT;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasRAT; 
@property (assign,nonatomic) int rAT;                                       //@synthesize rAT=_rAT - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConnectedMicroWatt; 
@property (assign,nonatomic) unsigned powerConnectedMicroWatt;              //@synthesize powerConnectedMicroWatt=_powerConnectedMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConnSetupMicroWatt; 
@property (assign,nonatomic) unsigned powerConnSetupMicroWatt;              //@synthesize powerConnSetupMicroWatt=_powerConnSetupMicroWatt - In the implementation block
-(int)rAT;
-(void)setRAT:(int)arg1 ;
-(void)setHasRAT:(BOOL)arg1 ;
-(BOOL)hasRAT;
-(id)rATAsString:(int)arg1 ;
-(int)StringAsRAT:(id)arg1 ;
-(void)setPowerConnectedMicroWatt:(unsigned)arg1 ;
-(void)setHasPowerConnectedMicroWatt:(BOOL)arg1 ;
-(BOOL)hasPowerConnectedMicroWatt;
-(void)setPowerConnSetupMicroWatt:(unsigned)arg1 ;
-(void)setHasPowerConnSetupMicroWatt:(BOOL)arg1 ;
-(BOOL)hasPowerConnSetupMicroWatt;
-(unsigned)powerConnectedMicroWatt;
-(unsigned)powerConnSetupMicroWatt;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

