/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingPlayerPathProtobuf;

@interface MRUpdatePlayerMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
-(unsigned long long)type;
-(id)initWithPlayerPath:(id)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
@end

