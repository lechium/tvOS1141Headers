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

@interface _MRAudioStreamPacketDescriptionProtobuf : PBCodable <NSCopying> {

	long long _startOffset;
	unsigned _dataByteSize;
	unsigned _variableFramesInPacket;
	SCD_Struct_MR6 _has;

}

@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) long long startOffset;                        //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) BOOL hasVariableFramesInPacket; 
@property (assign,nonatomic) unsigned variableFramesInPacket;              //@synthesize variableFramesInPacket=_variableFramesInPacket - In the implementation block
@property (assign,nonatomic) BOOL hasDataByteSize; 
@property (assign,nonatomic) unsigned dataByteSize;                        //@synthesize dataByteSize=_dataByteSize - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startOffset;
-(id)dictionaryRepresentation;
-(void)setStartOffset:(long long)arg1 ;
-(void)setVariableFramesInPacket:(unsigned)arg1 ;
-(void)setDataByteSize:(unsigned)arg1 ;
-(unsigned)dataByteSize;
-(unsigned)variableFramesInPacket;
-(void)setHasVariableFramesInPacket:(BOOL)arg1 ;
-(BOOL)hasVariableFramesInPacket;
-(void)setHasDataByteSize:(BOOL)arg1 ;
-(BOOL)hasDataByteSize;
@end
