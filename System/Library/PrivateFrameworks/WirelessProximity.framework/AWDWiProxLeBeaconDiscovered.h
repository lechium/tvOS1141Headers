/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiProxLeBeaconDiscovered : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _major;
	unsigned _minor;
	int _rssi;
	NSString* _sessionId;
	NSString* _uuid;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                  //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasMajor; 
@property (assign,nonatomic) unsigned major;                            //@synthesize major=_major - In the implementation block
@property (assign,nonatomic) BOOL hasMinor; 
@property (assign,nonatomic) unsigned minor;                            //@synthesize minor=_minor - In the implementation block
-(BOOL)hasUuid;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)hasSessionId;
-(NSString *)sessionId;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(int)rssi;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setHasMajor:(BOOL)arg1 ;
-(BOOL)hasMajor;
-(void)setHasMinor:(BOOL)arg1 ;
-(BOOL)hasMinor;
-(void)setMajor:(unsigned)arg1 ;
-(void)setMinor:(unsigned)arg1 ;
-(unsigned)major;
-(unsigned)minor;
@end

