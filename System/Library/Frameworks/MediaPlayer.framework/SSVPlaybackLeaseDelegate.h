/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSVPlaybackLeaseDelegate <NSObject>
@optional
-(void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3;
-(void)playbackLeaseDidEnd:(id)arg1;
-(void)playbackLease:(id)arg1 didEndWithReasonType:(unsigned long long)arg2;
-(void)playbackLease:(id)arg1 automaticRefreshDidFailWithError:(id)arg2;
-(void)playbackLeaseAutomaticRefreshDidFinish:(id)arg1;

@end

