/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlaySupport/AirPlaySupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface APSAWDAirPlayDiscoveryPresenceModeStats : PBCodable <NSCopying> {

	unsigned long long _startTime;
	unsigned long long _timestamp;
	NSString* _discoverySessionUUID;
	int _firstDeviceFoundMs;
	int _status;
	SCD_Struct_AP9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasDiscoverySessionUUID; 
@property (nonatomic,retain) NSString * discoverySessionUUID;              //@synthesize discoverySessionUUID=_discoverySessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                   //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) unsigned long long startTime;                 //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasFirstDeviceFoundMs; 
@property (assign,nonatomic) int firstDeviceFoundMs;                       //@synthesize firstDeviceFoundMs=_firstDeviceFoundMs - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setStatus:(int)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setStartTime:(unsigned long long)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)startTime;
-(id)dictionaryRepresentation;
-(int)status;
-(BOOL)hasDiscoverySessionUUID;
-(void)setFirstDeviceFoundMs:(int)arg1 ;
-(void)setHasFirstDeviceFoundMs:(BOOL)arg1 ;
-(BOOL)hasFirstDeviceFoundMs;
-(NSString *)discoverySessionUUID;
-(void)setDiscoverySessionUUID:(NSString *)arg1 ;
-(int)firstDeviceFoundMs;
@end

