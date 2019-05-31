/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWRMLinkPrefInit : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _countCellular;
	unsigned _countWifi;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCountWifi; 
@property (assign,nonatomic) unsigned countWifi;                        //@synthesize countWifi=_countWifi - In the implementation block
@property (assign,nonatomic) BOOL hasCountCellular; 
@property (assign,nonatomic) unsigned countCellular;                    //@synthesize countCellular=_countCellular - In the implementation block
-(void)setCountWifi:(unsigned)arg1 ;
-(void)setHasCountWifi:(BOOL)arg1 ;
-(BOOL)hasCountWifi;
-(void)setCountCellular:(unsigned)arg1 ;
-(void)setHasCountCellular:(BOOL)arg1 ;
-(BOOL)hasCountCellular;
-(unsigned)countWifi;
-(unsigned)countCellular;
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
