/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSClientProcessReceivedMessage : PBCodable <NSCopying> {

	unsigned long long _deltaTime;
	unsigned long long _payloadSize;
	unsigned long long _priority;
	unsigned long long _qos;
	unsigned long long _threadPriority;
	unsigned long long _timestamp;
	NSString* _service;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                             //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned long long payloadSize;                 //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasQos; 
@property (assign,nonatomic) unsigned long long qos;                         //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) BOOL hasThreadPriority; 
@property (assign,nonatomic) unsigned long long threadPriority;              //@synthesize threadPriority=_threadPriority - In the implementation block
@property (assign,nonatomic) BOOL hasDeltaTime; 
@property (assign,nonatomic) unsigned long long deltaTime;                   //@synthesize deltaTime=_deltaTime - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;                    //@synthesize priority=_priority - In the implementation block
-(BOOL)hasService;
-(void)setQos:(unsigned long long)arg1 ;
-(void)setHasQos:(BOOL)arg1 ;
-(BOOL)hasQos;
-(void)setHasThreadPriority:(BOOL)arg1 ;
-(BOOL)hasThreadPriority;
-(void)setDeltaTime:(unsigned long long)arg1 ;
-(void)setHasDeltaTime:(BOOL)arg1 ;
-(BOOL)hasDeltaTime;
-(unsigned long long)qos;
-(unsigned long long)deltaTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(BOOL)hasPriority;
-(void)setHasPriority:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(id)dictionaryRepresentation;
-(unsigned long long)threadPriority;
-(void)setThreadPriority:(unsigned long long)arg1 ;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(unsigned long long)payloadSize;
@end

