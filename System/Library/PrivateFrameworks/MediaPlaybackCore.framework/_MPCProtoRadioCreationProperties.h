/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MPCProtoDelegateInfo, _MPCProtoRadioContentReference, NSString;

@interface _MPCProtoRadioCreationProperties : PBCodable <NSCopying> {

	_MPCProtoDelegateInfo* _accountInfo;
	_MPCProtoRadioContentReference* _nowPlayingContentReference;
	NSString* _playActivityFeatureName;
	NSString* _radioStationID;
	NSString* _radioStationURLString;
	_MPCProtoRadioContentReference* _seedContentReference;

}

@property (nonatomic,readonly) BOOL hasRadioStationID; 
@property (nonatomic,retain) NSString * radioStationID;                                                //@synthesize radioStationID=_radioStationID - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationURLString; 
@property (nonatomic,retain) NSString * radioStationURLString;                                         //@synthesize radioStationURLString=_radioStationURLString - In the implementation block
@property (nonatomic,readonly) BOOL hasSeedContentReference; 
@property (nonatomic,retain) _MPCProtoRadioContentReference * seedContentReference;                    //@synthesize seedContentReference=_seedContentReference - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingContentReference; 
@property (nonatomic,retain) _MPCProtoRadioContentReference * nowPlayingContentReference;              //@synthesize nowPlayingContentReference=_nowPlayingContentReference - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountInfo; 
@property (nonatomic,retain) _MPCProtoDelegateInfo * accountInfo;                                      //@synthesize accountInfo=_accountInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayActivityFeatureName; 
@property (nonatomic,retain) NSString * playActivityFeatureName;                                       //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasRadioStationID;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(NSString *)radioStationID;
-(void)setRadioStationID:(NSString *)arg1 ;
-(void)setSeedContentReference:(_MPCProtoRadioContentReference *)arg1 ;
-(_MPCProtoRadioContentReference *)seedContentReference;
-(_MPCProtoRadioContentReference *)nowPlayingContentReference;
-(void)setNowPlayingContentReference:(_MPCProtoRadioContentReference *)arg1 ;
-(void)setAccountInfo:(_MPCProtoDelegateInfo *)arg1 ;
-(void)setRadioStationURLString:(NSString *)arg1 ;
-(BOOL)hasPlayActivityFeatureName;
-(BOOL)hasRadioStationURLString;
-(BOOL)hasSeedContentReference;
-(BOOL)hasNowPlayingContentReference;
-(BOOL)hasAccountInfo;
-(NSString *)radioStationURLString;
-(_MPCProtoDelegateInfo *)accountInfo;
@end

