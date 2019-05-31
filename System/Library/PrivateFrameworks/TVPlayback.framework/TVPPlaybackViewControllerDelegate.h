/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPPlaybackViewControllerDelegate <NSObject>
@optional
-(void)contextMenuForMediaItem:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(long long)currentEndpointDeviceTypeForPlaybackViewController:(id)arg1;
-(void)playMediaItemAtIndex:(long long)arg1;
-(void)playbackViewControllerUserWillInitiatePlayback:(id)arg1;
-(void)playbackViewController:(id)arg1 controlsForMediaItem:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)playbackViewControllerProvidesCustomControls:(id)arg1;
-(BOOL)playbackViewController:(id)arg1 didSelectHistoryMediaItem:(id)arg2 player:(id)arg3;
-(void)playbackViewController:(id)arg1 loadRelatedContentForMediaItem:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;

@end

