/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitSoftwareUpdateAutomaticUpdateToggled : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	BOOL _isEnabled;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsEnabled; 
@property (assign,nonatomic) BOOL isEnabled;                            //@synthesize isEnabled=_isEnabled - In the implementation block
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
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setHasIsEnabled:(BOOL)arg1 ;
-(BOOL)hasIsEnabled;
@end

