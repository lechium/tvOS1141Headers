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

@interface AWDWiFiLTECoexTxBlanking : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned long long _type4BlankingCount;
	unsigned long long _type4BlankingTimeInMS;
	unsigned long long _type4ResumeCount;
	unsigned long long _type7BlankingCount;
	unsigned long long _type7BlankingTimeInMS;
	unsigned long long _type7ResumeCount;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasType4BlankingCount; 
@property (assign,nonatomic) unsigned long long type4BlankingCount;                 //@synthesize type4BlankingCount=_type4BlankingCount - In the implementation block
@property (assign,nonatomic) BOOL hasType4ResumeCount; 
@property (assign,nonatomic) unsigned long long type4ResumeCount;                   //@synthesize type4ResumeCount=_type4ResumeCount - In the implementation block
@property (assign,nonatomic) BOOL hasType4BlankingTimeInMS; 
@property (assign,nonatomic) unsigned long long type4BlankingTimeInMS;              //@synthesize type4BlankingTimeInMS=_type4BlankingTimeInMS - In the implementation block
@property (assign,nonatomic) BOOL hasType7BlankingCount; 
@property (assign,nonatomic) unsigned long long type7BlankingCount;                 //@synthesize type7BlankingCount=_type7BlankingCount - In the implementation block
@property (assign,nonatomic) BOOL hasType7ResumeCount; 
@property (assign,nonatomic) unsigned long long type7ResumeCount;                   //@synthesize type7ResumeCount=_type7ResumeCount - In the implementation block
@property (assign,nonatomic) BOOL hasType7BlankingTimeInMS; 
@property (assign,nonatomic) unsigned long long type7BlankingTimeInMS;              //@synthesize type7BlankingTimeInMS=_type7BlankingTimeInMS - In the implementation block
-(void)setType4BlankingCount:(unsigned long long)arg1 ;
-(void)setHasType4BlankingCount:(BOOL)arg1 ;
-(BOOL)hasType4BlankingCount;
-(void)setType4ResumeCount:(unsigned long long)arg1 ;
-(void)setHasType4ResumeCount:(BOOL)arg1 ;
-(BOOL)hasType4ResumeCount;
-(void)setType4BlankingTimeInMS:(unsigned long long)arg1 ;
-(void)setHasType4BlankingTimeInMS:(BOOL)arg1 ;
-(BOOL)hasType4BlankingTimeInMS;
-(void)setType7BlankingCount:(unsigned long long)arg1 ;
-(void)setHasType7BlankingCount:(BOOL)arg1 ;
-(BOOL)hasType7BlankingCount;
-(void)setType7ResumeCount:(unsigned long long)arg1 ;
-(void)setHasType7ResumeCount:(BOOL)arg1 ;
-(BOOL)hasType7ResumeCount;
-(void)setType7BlankingTimeInMS:(unsigned long long)arg1 ;
-(void)setHasType7BlankingTimeInMS:(BOOL)arg1 ;
-(BOOL)hasType7BlankingTimeInMS;
-(unsigned long long)type4BlankingCount;
-(unsigned long long)type4ResumeCount;
-(unsigned long long)type4BlankingTimeInMS;
-(unsigned long long)type7BlankingCount;
-(unsigned long long)type7ResumeCount;
-(unsigned long long)type7BlankingTimeInMS;
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

