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

@interface _MRRegisterVoiceInputDeviceResponseMessageProtobuf : PBCodable <NSCopying> {

	unsigned _deviceID;
	unsigned _errorCode;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasDeviceID; 
@property (assign,nonatomic) unsigned deviceID;               //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned)errorCode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasDeviceID:(BOOL)arg1 ;
-(BOOL)hasDeviceID;
-(unsigned)deviceID;
-(void)setDeviceID:(unsigned)arg1 ;
@end

