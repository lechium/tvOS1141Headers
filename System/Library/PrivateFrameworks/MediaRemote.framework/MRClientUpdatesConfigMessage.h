/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRClientUpdatesConfigMessage : MRProtocolMessage

@property (nonatomic,readonly) BOOL nowPlayingUpdates; 
@property (nonatomic,readonly) BOOL artworkUpdates; 
@property (nonatomic,readonly) BOOL volumeUpdates; 
@property (nonatomic,readonly) BOOL keyboardUpdates; 
-(unsigned long long)type;
-(BOOL)nowPlayingUpdates;
-(BOOL)artworkUpdates;
-(BOOL)volumeUpdates;
-(BOOL)keyboardUpdates;
-(id)initWithNowPlayingUpdates:(BOOL)arg1 artworkUpdates:(BOOL)arg2 volumeUpdates:(BOOL)arg3 keyboardUpdates:(BOOL)arg4 ;
@end

