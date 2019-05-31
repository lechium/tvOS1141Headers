/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRGameControllerDigitizerProtobuf : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	double _x;
	double _y;
	BOOL _touchDown;
	SCD_Struct_MR16 _has;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,x,nonatomic) double x;                                //@synthesize x=_x - In the implementation block
@property (assign,nonatomic) BOOL hasY; 
@property (assign,y,nonatomic) double y;                                //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) BOOL hasTouchDown; 
@property (assign,nonatomic) BOOL touchDown;                            //@synthesize touchDown=_touchDown - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasX;
-(void)setHasY:(BOOL)arg1 ;
-(BOOL)hasY;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)x;
-(void)setX:(double)arg1 ;
-(double)y;
-(void)setY:(double)arg1 ;
-(BOOL)touchDown;
-(void)setTouchDown:(BOOL)arg1 ;
-(void)setHasTouchDown:(BOOL)arg1 ;
-(BOOL)hasTouchDown;
@end

