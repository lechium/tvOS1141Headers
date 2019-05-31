/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineSettingsClusterLocationView : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _countInCluster;
	int _deletionCount;
	NSString* _sessionId;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasCountInCluster; 
@property (assign,nonatomic) int countInCluster;                        //@synthesize countInCluster=_countInCluster - In the implementation block
@property (assign,nonatomic) BOOL hasDeletionCount; 
@property (assign,nonatomic) int deletionCount;                         //@synthesize deletionCount=_deletionCount - In the implementation block
-(void)setCountInCluster:(int)arg1 ;
-(void)setHasCountInCluster:(BOOL)arg1 ;
-(BOOL)hasCountInCluster;
-(void)setHasDeletionCount:(BOOL)arg1 ;
-(BOOL)hasDeletionCount;
-(int)countInCluster;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)hasSessionId;
-(NSString *)sessionId;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)deletionCount;
-(void)setDeletionCount:(int)arg1 ;
-(id)dictionaryRepresentation;
@end

