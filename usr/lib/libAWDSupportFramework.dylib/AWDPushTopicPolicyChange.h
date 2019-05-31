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

@interface AWDPushTopicPolicyChange : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _change;
	unsigned _didCauseFilterChange;
	NSString* _guid;
	NSString* _topic;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                            //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                           //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) BOOL hasChange; 
@property (assign,nonatomic) unsigned change;                            //@synthesize change=_change - In the implementation block
@property (assign,nonatomic) BOOL hasDidCauseFilterChange; 
@property (assign,nonatomic) unsigned didCauseFilterChange;              //@synthesize didCauseFilterChange=_didCauseFilterChange - In the implementation block
-(void)setTopic:(NSString *)arg1 ;
-(BOOL)hasTopic;
-(void)setChange:(unsigned)arg1 ;
-(void)setHasChange:(BOOL)arg1 ;
-(BOOL)hasChange;
-(void)setDidCauseFilterChange:(unsigned)arg1 ;
-(void)setHasDidCauseFilterChange:(BOOL)arg1 ;
-(BOOL)hasDidCauseFilterChange;
-(unsigned)didCauseFilterChange;
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
-(unsigned)change;
@end

