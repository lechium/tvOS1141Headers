/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <TVPlayback/TVPVideoPlayerViewControllerDelegate.h>
#import <TVPlayback/TVPPlaybackViewControllerDelegate.h>

@protocol TVPPlayback, TVPPlaybackViewControllerDelegate;
@class NSObject, MPAVRoute, NSTimer, TVPHardwareButtonEventManager, NSString;

@interface TVPPlaybackViewController : UIViewController <TVPVideoPlayerViewControllerDelegate, TVPPlaybackViewControllerDelegate> {

	BOOL _showsTitleWhileLoading;
	BOOL _isRadioPlayback;
	BOOL _isIdleScreen;
	BOOL _allowDefaultMenuButtonBehavior;
	BOOL _popWhenPlayerStops;
	BOOL _isMusicPlaylist;
	BOOL _invalidatePlayerWhenDone;
	BOOL _startedPlaying;
	BOOL _hasBeenRemovedFromParentViewController;
	NSObject*<TVPPlayback> _player;
	long long _resumeMenuOption;
	double _startTime;
	id<TVPPlaybackViewControllerDelegate> _playbackDelegate;
	MPAVRoute* _endpointRoute;
	long long _initialPlaybackType;
	NSTimer* _playbackLimitTimer;
	TVPHardwareButtonEventManager* _buttonEventManager;

}

@property (assign,nonatomic) BOOL invalidatePlayerWhenDone;                                              //@synthesize invalidatePlayerWhenDone=_invalidatePlayerWhenDone - In the implementation block
@property (assign,nonatomic) long long initialPlaybackType;                                              //@synthesize initialPlaybackType=_initialPlaybackType - In the implementation block
@property (nonatomic,retain) NSObject*<TVPPlayback> player;                                              //@synthesize player=_player - In the implementation block
@property (assign,getter=hasStartedPlaying,nonatomic) BOOL startedPlaying;                               //@synthesize startedPlaying=_startedPlaying - In the implementation block
@property (nonatomic,retain) NSTimer * playbackLimitTimer;                                               //@synthesize playbackLimitTimer=_playbackLimitTimer - In the implementation block
@property (assign,nonatomic) BOOL hasBeenRemovedFromParentViewController;                                //@synthesize hasBeenRemovedFromParentViewController=_hasBeenRemovedFromParentViewController - In the implementation block
@property (nonatomic,retain) TVPHardwareButtonEventManager * buttonEventManager;                         //@synthesize buttonEventManager=_buttonEventManager - In the implementation block
@property (assign,nonatomic) long long resumeMenuOption;                                                 //@synthesize resumeMenuOption=_resumeMenuOption - In the implementation block
@property (assign,nonatomic) double startTime;                                                           //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL showsTitleWhileLoading;                                                //@synthesize showsTitleWhileLoading=_showsTitleWhileLoading - In the implementation block
@property (assign,nonatomic) BOOL isRadioPlayback;                                                       //@synthesize isRadioPlayback=_isRadioPlayback - In the implementation block
@property (assign,nonatomic,__weak) id<TVPPlaybackViewControllerDelegate> playbackDelegate;              //@synthesize playbackDelegate=_playbackDelegate - In the implementation block
@property (assign,nonatomic) BOOL isIdleScreen;                                                          //@synthesize isIdleScreen=_isIdleScreen - In the implementation block
@property (assign,nonatomic) BOOL allowDefaultMenuButtonBehavior;                                        //@synthesize allowDefaultMenuButtonBehavior=_allowDefaultMenuButtonBehavior - In the implementation block
@property (assign,nonatomic) BOOL popWhenPlayerStops;                                                    //@synthesize popWhenPlayerStops=_popWhenPlayerStops - In the implementation block
@property (assign,nonatomic) BOOL isMusicPlaylist;                                                       //@synthesize isMusicPlaylist=_isMusicPlaylist - In the implementation block
@property (assign,nonatomic) BOOL allowsVideoPlaybackWithoutVisuals; 
@property (assign,nonatomic) BOOL presentsNowPlayingVideoWithoutAnimations; 
@property (nonatomic,retain) MPAVRoute * endpointRoute;                                                  //@synthesize endpointRoute=_endpointRoute - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(double)startTime;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MPAVRoute *)endpointRoute;
-(void)setEndpointRoute:(MPAVRoute *)arg1 ;
-(void)setPlayer:(NSObject*<TVPPlayback>)arg1 ;
-(NSObject*<TVPPlayback>)player;
-(void)_currentMediaItemDidChange:(id)arg1 ;
-(long long)initialPlaybackType;
-(BOOL)isRadioPlayback;
-(id<TVPPlaybackViewControllerDelegate>)playbackDelegate;
-(void)contextMenuForMediaItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)currentEndpointDeviceTypeForPlaybackViewController:(id)arg1 ;
-(void)playbackViewControllerUserWillInitiatePlayback:(id)arg1 ;
-(BOOL)popWhenPlayerStops;
-(void)playbackViewController:(id)arg1 controlsForMediaItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)playbackViewControllerProvidesCustomControls:(id)arg1 ;
-(BOOL)playbackViewController:(id)arg1 didSelectHistoryMediaItem:(id)arg2 player:(id)arg3 ;
-(void)setIsRadioPlayback:(BOOL)arg1 ;
-(void)setPopWhenPlayerStops:(BOOL)arg1 ;
-(void)setPlaybackDelegate:(id<TVPPlaybackViewControllerDelegate>)arg1 ;
-(TVPHardwareButtonEventManager *)buttonEventManager;
-(void)setButtonEventManager:(TVPHardwareButtonEventManager *)arg1 ;
-(id)initWithPlayer:(id)arg1 invalidateWhenDone:(BOOL)arg2 ;
-(BOOL)allowsVideoPlaybackWithoutVisuals;
-(BOOL)showsTitleWhileLoading;
-(BOOL)allowDefaultMenuButtonBehavior;
-(void)videoPlayerViewController:(id)arg1 loadRelatedContentForMediaItem:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(long long)resumeMenuOption;
-(BOOL)presentsNowPlayingVideoWithoutAnimations;
-(void)insertOverlaySubview:(id)arg1 ;
-(void)insertOverlayViewController:(id)arg1 ;
-(void)loadCurrentMediaItem;
-(void)_useNowPlayingVideoViewController:(id)arg1 ;
-(id)tvp_customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2 ;
-(void)dismissWithErrorText:(id)arg1 ;
-(void)setResumeMenuOption:(long long)arg1 ;
-(void)setShowsTitleWhileLoading:(BOOL)arg1 ;
-(void)setAllowDefaultMenuButtonBehavior:(BOOL)arg1 ;
-(void)setAllowsVideoPlaybackWithoutVisuals:(BOOL)arg1 ;
-(void)setPresentsNowPlayingVideoWithoutAnimations:(BOOL)arg1 ;
-(BOOL)invalidatePlayerWhenDone;
-(void)setInvalidatePlayerWhenDone:(BOOL)arg1 ;
-(id)initWithPlayer:(id)arg1 invalidateWhenDone:(BOOL)arg2 initialPlaybackType:(long long)arg3 ;
-(void)_playerStateChanged:(id)arg1 ;
-(id)currentChildViewController;
-(void)_currentChildViewControllerWillChangeTo:(id)arg1 ;
-(void)_currentChildViewControllerDidChangeFrom:(id)arg1 ;
-(void)setHasBeenRemovedFromParentViewController:(BOOL)arg1 ;
-(void)_updateChildViewControllerForCurrentMediaItem;
-(void)setIsMusicPlaylist:(BOOL)arg1 ;
-(BOOL)hasBeenRemovedFromParentViewController;
-(BOOL)hasStartedPlaying;
-(void)setStartedPlaying:(BOOL)arg1 ;
-(void)_startPlaybackLimitTimerWithLimit:(double)arg1 ;
-(void)_clearPlaybackLimitTimer;
-(NSTimer *)playbackLimitTimer;
-(void)setPlaybackLimitTimer:(NSTimer *)arg1 ;
-(void)_playbackLimitTimerFired:(id)arg1 ;
-(BOOL)isIdleScreen;
-(void)setIsIdleScreen:(BOOL)arg1 ;
-(BOOL)isMusicPlaylist;
-(void)setInitialPlaybackType:(long long)arg1 ;
@end

