/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBltDelayToSync : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _delayMs;
	BOOL _initial;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDelayMs; 
@property (assign,nonatomic) unsigned delayMs;                          //@synthesize delayMs=_delayMs - In the implementation block
@property (assign,nonatomic) BOOL hasInitial; 
@property (assign,nonatomic) BOOL initial;                              //@synthesize initial=_initial - In the implementation block
-(void)setDelayMs:(unsigned)arg1 ;
-(void)setHasDelayMs:(BOOL)arg1 ;
-(BOOL)hasDelayMs;
-(unsigned)delayMs;
-(void)setInitial:(BOOL)arg1 ;
-(void)setHasInitial:(BOOL)arg1 ;
-(BOOL)hasInitial;
-(BOOL)initial;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

