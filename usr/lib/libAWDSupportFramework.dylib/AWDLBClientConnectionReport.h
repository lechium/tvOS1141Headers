/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLBClientConnectionReport : PBCodable <NSCopying> {

	long long _bytesReceived;
	long long _bytesSent;
	long long _connectionDuration;
	unsigned long long _connectionServiceId;
	long long _timeToConnectionFailure;
	long long _timeToFirstResponse;
	unsigned long long _timestamp;
	int _connectionJoiningFailure;
	int _connectionJoiningLbConnectionMigration;
	int _connectionJoiningLbConnectionState;
	int _dataPathResult;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionJoiningFailure; 
@property (assign,nonatomic) int connectionJoiningFailure;                                //@synthesize connectionJoiningFailure=_connectionJoiningFailure - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionJoiningLbConnectionState; 
@property (assign,nonatomic) int connectionJoiningLbConnectionState;                      //@synthesize connectionJoiningLbConnectionState=_connectionJoiningLbConnectionState - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionJoiningLbConnectionMigration; 
@property (assign,nonatomic) int connectionJoiningLbConnectionMigration;                  //@synthesize connectionJoiningLbConnectionMigration=_connectionJoiningLbConnectionMigration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionServiceId; 
@property (assign,nonatomic) unsigned long long connectionServiceId;                      //@synthesize connectionServiceId=_connectionServiceId - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionDuration; 
@property (assign,nonatomic) long long connectionDuration;                                //@synthesize connectionDuration=_connectionDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDataPathResult; 
@property (assign,nonatomic) int dataPathResult;                                          //@synthesize dataPathResult=_dataPathResult - In the implementation block
@property (assign,nonatomic) BOOL hasBytesSent; 
@property (assign,nonatomic) long long bytesSent;                                         //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL hasBytesReceived; 
@property (assign,nonatomic) long long bytesReceived;                                     //@synthesize bytesReceived=_bytesReceived - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToFirstResponse; 
@property (assign,nonatomic) long long timeToFirstResponse;                               //@synthesize timeToFirstResponse=_timeToFirstResponse - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToConnectionFailure; 
@property (assign,nonatomic) long long timeToConnectionFailure;                           //@synthesize timeToConnectionFailure=_timeToConnectionFailure - In the implementation block
-(void)setBytesSent:(long long)arg1 ;
-(void)setHasBytesSent:(BOOL)arg1 ;
-(BOOL)hasBytesSent;
-(void)setBytesReceived:(long long)arg1 ;
-(void)setHasBytesReceived:(BOOL)arg1 ;
-(BOOL)hasBytesReceived;
-(long long)bytesSent;
-(long long)bytesReceived;
-(void)setConnectionJoiningFailure:(int)arg1 ;
-(void)setHasConnectionJoiningFailure:(BOOL)arg1 ;
-(BOOL)hasConnectionJoiningFailure;
-(void)setConnectionJoiningLbConnectionState:(int)arg1 ;
-(void)setHasConnectionJoiningLbConnectionState:(BOOL)arg1 ;
-(BOOL)hasConnectionJoiningLbConnectionState;
-(void)setConnectionJoiningLbConnectionMigration:(int)arg1 ;
-(void)setHasConnectionJoiningLbConnectionMigration:(BOOL)arg1 ;
-(BOOL)hasConnectionJoiningLbConnectionMigration;
-(void)setConnectionServiceId:(unsigned long long)arg1 ;
-(void)setHasConnectionServiceId:(BOOL)arg1 ;
-(BOOL)hasConnectionServiceId;
-(void)setConnectionDuration:(long long)arg1 ;
-(void)setHasConnectionDuration:(BOOL)arg1 ;
-(BOOL)hasConnectionDuration;
-(void)setDataPathResult:(int)arg1 ;
-(void)setHasDataPathResult:(BOOL)arg1 ;
-(BOOL)hasDataPathResult;
-(void)setTimeToFirstResponse:(long long)arg1 ;
-(void)setHasTimeToFirstResponse:(BOOL)arg1 ;
-(BOOL)hasTimeToFirstResponse;
-(void)setTimeToConnectionFailure:(long long)arg1 ;
-(void)setHasTimeToConnectionFailure:(BOOL)arg1 ;
-(BOOL)hasTimeToConnectionFailure;
-(int)connectionJoiningFailure;
-(int)connectionJoiningLbConnectionState;
-(int)connectionJoiningLbConnectionMigration;
-(unsigned long long)connectionServiceId;
-(long long)connectionDuration;
-(int)dataPathResult;
-(long long)timeToFirstResponse;
-(long long)timeToConnectionFailure;
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

