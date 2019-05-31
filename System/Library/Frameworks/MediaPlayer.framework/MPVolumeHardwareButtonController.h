/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPVolumeControllerDataSource;
@interface MPVolumeHardwareButtonController : NSObject {

	double _pendingVolumeChange;
	BOOL _debounceVolumeRepeat;
	BOOL _didRegisterForButtonNotifications;
	id<MPVolumeControllerDataSource> _activeDataSource;

}

@property (nonatomic,retain) id<MPVolumeControllerDataSource> activeDataSource;              //@synthesize activeDataSource=_activeDataSource - In the implementation block
+(id)sharedController;
-(id)_init;
-(void)_commitVolumeChange;
-(void)_applicationDidBecomeActiveNotification;
-(void)_applicationWillResignActiveNotification;
-(void)_registerForButtonNotificationsIfNeeded;
-(void)_unregisterForButtonNotificationsIfNeeded;
-(void)cancelVolumeEvent;
-(void)increaseVolume;
-(void)_changeVolumeBy:(double)arg1 ;
-(double)_calculateButtonRepeatDelay;
-(void)decreaseVolume;
-(void)handleVolumeButtonWithType:(long long)arg1 down:(BOOL)arg2 ;
-(void)_volumeUpButtonTouchDown:(id)arg1 ;
-(void)_volumeUpButtonTouchUp:(id)arg1 ;
-(void)_volumeDownButtonTouchDown:(id)arg1 ;
-(void)_volumeDownButtonTouchUp:(id)arg1 ;
-(void)setActiveDataSource:(id<MPVolumeControllerDataSource>)arg1 ;
-(id<MPVolumeControllerDataSource>)activeDataSource;
@end

