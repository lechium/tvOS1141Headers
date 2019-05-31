/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricHotspotTransportType : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _bt;
	unsigned _usb;
	unsigned _wifi;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasWifi; 
@property (assign,nonatomic) unsigned wifi;                             //@synthesize wifi=_wifi - In the implementation block
@property (assign,nonatomic) BOOL hasBt; 
@property (assign,nonatomic) unsigned bt;                               //@synthesize bt=_bt - In the implementation block
@property (assign,nonatomic) BOOL hasUsb; 
@property (assign,nonatomic) unsigned usb;                              //@synthesize usb=_usb - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(void)setWifi:(unsigned)arg1 ;
-(void)setHasWifi:(BOOL)arg1 ;
-(BOOL)hasWifi;
-(void)setBt:(unsigned)arg1 ;
-(void)setHasBt:(BOOL)arg1 ;
-(BOOL)hasBt;
-(void)setUsb:(unsigned)arg1 ;
-(void)setHasUsb:(BOOL)arg1 ;
-(BOOL)hasUsb;
-(unsigned)wifi;
-(unsigned)bt;
-(unsigned)usb;
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
