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

@class NSString;

@interface AWDPushProxyManagerReceive : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _guid;
	unsigned _isNearby;
	unsigned _messageCommand;
	NSString* _topic;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasMessageCommand; 
@property (assign,nonatomic) unsigned messageCommand;                   //@synthesize messageCommand=_messageCommand - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                          //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) BOOL hasIsNearby; 
@property (assign,nonatomic) unsigned isNearby;                         //@synthesize isNearby=_isNearby - In the implementation block
-(void)setTopic:(NSString *)arg1 ;
-(BOOL)hasTopic;
-(void)setMessageCommand:(unsigned)arg1 ;
-(void)setHasMessageCommand:(BOOL)arg1 ;
-(BOOL)hasMessageCommand;
-(void)setIsNearby:(unsigned)arg1 ;
-(void)setHasIsNearby:(BOOL)arg1 ;
-(BOOL)hasIsNearby;
-(unsigned)messageCommand;
-(unsigned)isNearby;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)hasGuid;
-(NSString *)guid;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)topic;
@end

