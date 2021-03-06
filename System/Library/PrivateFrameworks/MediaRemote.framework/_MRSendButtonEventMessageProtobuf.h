/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRSendButtonEventMessageProtobuf : PBCodable <NSCopying> {

	unsigned _usage;
	unsigned _usagePage;
	BOOL _buttonDown;
	SCD_Struct_MR6 _has;

}

@property (assign,nonatomic) BOOL hasUsagePage; 
@property (assign,nonatomic) unsigned usagePage;              //@synthesize usagePage=_usagePage - In the implementation block
@property (assign,nonatomic) BOOL hasUsage; 
@property (assign,nonatomic) unsigned usage;                  //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) BOOL hasButtonDown; 
@property (assign,nonatomic) BOOL buttonDown;                 //@synthesize buttonDown=_buttonDown - In the implementation block
-(void)setUsage:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUsagePage:(unsigned)arg1 ;
-(void)setButtonDown:(BOOL)arg1 ;
-(unsigned)usagePage;
-(BOOL)buttonDown;
-(void)setHasUsagePage:(BOOL)arg1 ;
-(BOOL)hasUsagePage;
-(void)setHasUsage:(BOOL)arg1 ;
-(BOOL)hasUsage;
-(void)setHasButtonDown:(BOOL)arg1 ;
-(BOOL)hasButtonDown;
-(unsigned)usage;
@end

