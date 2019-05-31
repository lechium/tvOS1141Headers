/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRGameControllerAccelerationProtobuf;

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying> {

	_MRGameControllerAccelerationProtobuf* _attitude;
	_MRGameControllerAccelerationProtobuf* _gravity;
	_MRGameControllerAccelerationProtobuf* _rotation;
	_MRGameControllerAccelerationProtobuf* _userAcceleration;

}

@property (nonatomic,readonly) BOOL hasGravity; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * gravity;                       //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,readonly) BOOL hasUserAcceleration; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * userAcceleration;              //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,readonly) BOOL hasAttitude; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * attitude;                      //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) BOOL hasRotation; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * rotation;                      //@synthesize rotation=_rotation - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRotation:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(_MRGameControllerAccelerationProtobuf *)rotation;
-(id)dictionaryRepresentation;
-(_MRGameControllerAccelerationProtobuf *)attitude;
-(_MRGameControllerAccelerationProtobuf *)gravity;
-(void)setGravity:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(_MRGameControllerAccelerationProtobuf *)userAcceleration;
-(void)setUserAcceleration:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(void)setAttitude:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(BOOL)hasGravity;
-(BOOL)hasUserAcceleration;
-(BOOL)hasAttitude;
-(BOOL)hasRotation;
@end
