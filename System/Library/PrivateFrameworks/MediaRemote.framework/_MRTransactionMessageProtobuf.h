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

@class _MRTransactionPacketsProtobuf, _MRNowPlayingPlayerPathProtobuf;

@interface _MRTransactionMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _name;
	_MRTransactionPacketsProtobuf* _packets;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) unsigned long long name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasPackets; 
@property (nonatomic,retain) _MRTransactionPacketsProtobuf * packets;                   //@synthesize packets=_packets - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(unsigned long long)arg1 ;
-(unsigned long long)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasPlayerPath;
-(BOOL)hasPackets;
-(_MRTransactionPacketsProtobuf *)packets;
-(void)setPackets:(_MRTransactionPacketsProtobuf *)arg1 ;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setHasName:(BOOL)arg1 ;
@end

