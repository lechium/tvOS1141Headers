/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVPPlayer, TVPPlaybackState;

@interface TVBackgroundAudioController : NSObject {

	TVPPlayer* _audioPlayer;
	unsigned long long _deactivationReasons;
	BOOL _deactivated;
	BOOL _stoppedOnDeactivation;
	double _delayedPlaybackInterval;

}

@property (nonatomic,readonly) TVPPlaybackState * state; 
+(id)sharedBackgroundAudioController;
-(id)init;
-(void)dealloc;
-(TVPPlaybackState *)state;
-(void)stop;
-(void)_stop;
-(BOOL)play;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)setCurrentMediaItemFromAudioElement:(id)arg1 ;
-(void)_cancelDelayedPlay;
-(BOOL)playWithDelay:(double)arg1 ;
@end

