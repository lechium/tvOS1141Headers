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

@class _MRAudioDataBlockProtobuf;

@interface _MRSendVoiceInputMessageProtobuf : PBCodable <NSCopying> {

	_MRAudioDataBlockProtobuf* _dataBlock;

}

@property (nonatomic,readonly) BOOL hasDataBlock; 
@property (nonatomic,retain) _MRAudioDataBlockProtobuf * dataBlock;              //@synthesize dataBlock=_dataBlock - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDataBlock:(_MRAudioDataBlockProtobuf *)arg1 ;
-(_MRAudioDataBlockProtobuf *)dataBlock;
-(BOOL)hasDataBlock;
@end

