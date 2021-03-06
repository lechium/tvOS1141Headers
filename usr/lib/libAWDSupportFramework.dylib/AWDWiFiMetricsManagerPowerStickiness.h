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

@interface AWDWiFiMetricsManagerPowerStickiness : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _enabled;
	unsigned _stickiness;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) unsigned enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL hasStickiness; 
@property (assign,nonatomic) unsigned stickiness;                       //@synthesize stickiness=_stickiness - In the implementation block
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasEnabled;
-(void)setStickiness:(unsigned)arg1 ;
-(void)setHasStickiness:(BOOL)arg1 ;
-(BOOL)hasStickiness;
-(unsigned)stickiness;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)enabled;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setEnabled:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

