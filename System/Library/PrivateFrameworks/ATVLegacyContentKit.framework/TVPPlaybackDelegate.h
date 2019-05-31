/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPPlaybackDelegate <NSObject>
@optional
-(id)player:(id)arg1 filteredSubtitleOptionsFromOptions:(id)arg2;

@required
-(BOOL)player:(id)arg1 shouldSeekToTime:(double*)arg2 playbackDate:(id*)arg3;
-(BOOL)player:(id)arg1 shouldChangeMediaInDirection:(long long)arg2;
-(BOOL)player:(id)arg1 shouldChangeToMediaAtIndex:(unsigned long long)arg2;
-(BOOL)player:(id)arg1 shouldScanAtRate:(double)arg2;
-(BOOL)playerShouldPause:(id)arg1;
-(BOOL)playerShouldPlay:(id)arg1 timeFromWhichToPlay:(double*)arg2;

@end

