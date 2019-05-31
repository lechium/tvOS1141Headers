/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString;

@interface RTMediaRemoteNotificationNowPlayingInfoChanged : RTNotification {

	NSString* _bundleIdentifier;
	double _duration;
	long long _playbackState;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) long long playbackState;                       //@synthesize playbackState=_playbackState - In the implementation block
-(double)duration;
-(NSString *)bundleIdentifier;
-(long long)playbackState;
-(id)initWithBundleIdentifier:(id)arg1 duration:(double)arg2 playbackState:(long long)arg3 ;
@end
