/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitSignificantTimeEvent : PBCodable <NSCopying> {

	NSString* _significantEvent;
	BOOL _offsetPresent;
	SCD_Struct_AW6 _has;

}

@property (nonatomic,readonly) BOOL hasSignificantEvent; 
@property (nonatomic,retain) NSString * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (assign,nonatomic) BOOL hasOffsetPresent; 
@property (assign,nonatomic) BOOL offsetPresent;                       //@synthesize offsetPresent=_offsetPresent - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)significantEvent;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(BOOL)hasSignificantEvent;
-(void)setOffsetPresent:(BOOL)arg1 ;
-(void)setHasOffsetPresent:(BOOL)arg1 ;
-(BOOL)hasOffsetPresent;
-(BOOL)offsetPresent;
@end

