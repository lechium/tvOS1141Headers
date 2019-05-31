/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariUnableToSilentlyMigrateToCKBookmarksEvent : PBCodable <NSCopying> {

	SCD_Struct_AW13* _reasons;
	unsigned long long _timestamp;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long reasonsCount; 
@property (nonatomic,readonly) int* reasons; 
-(int)reasonAtIndex:(unsigned long long)arg1 ;
-(void)addReason:(int)arg1 ;
-(void)setReasons:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)reasonsAsString:(int)arg1 ;
-(int)StringAsReasons:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)reasonsCount;
-(void)clearReasons;
-(int*)reasons;
@end
