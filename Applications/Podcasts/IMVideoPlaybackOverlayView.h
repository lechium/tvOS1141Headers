//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IMVideoOverlay.h"
#import "MPAVRoutingControllerDelegate.h"
#import "MPDetailSliderDelegate.h"
#import "MPVolumeControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class IMAVPlayer, IMKnockoutButton, IMPlayerItem, MPAVItem, MPAVRoutingController, MPAudioAndSubtitlesController, MPDetailSlider, MPVolumeController, MPVolumeSlider, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UINavigationBar, UIStatusBar, UIViewController, _UIBackdropView;

@interface IMVideoPlaybackOverlayView : UIView <UIPopoverPresentationControllerDelegate, MPAVRoutingControllerDelegate, MPVolumeControllerDelegate, IMVideoOverlay, MPDetailSliderDelegate>
{
    MPDetailSlider *_scrubber;	// 8 = 0x8
    _UIBackdropView *_topBarBackdropView;	// 16 = 0x10
    _UIBackdropView *_bottomBarBackdropView;	// 24 = 0x18
    IMKnockoutButton *_playPauseButton;	// 32 = 0x20
    IMKnockoutButton *_fullscreenButton;	// 40 = 0x28
    IMKnockoutButton *_pictureInPictureButton;	// 48 = 0x30
    IMKnockoutButton *_airplayButton;	// 56 = 0x38
    UIStatusBar *_statusBar;	// 64 = 0x40
    UIButton *_doneButton;	// 72 = 0x48
    UIActivityIndicatorView *_loadingIndicator;	// 80 = 0x50
    UILabel *_loadingLabel;	// 88 = 0x58
    UIButton *_scaleButton;	// 96 = 0x60
    UILabel *_scrubInstructions1;	// 104 = 0x68
    UILabel *_scrubInstructions2;	// 112 = 0x70
    MPVolumeSlider *_volumeSlider;	// 120 = 0x78
    IMKnockoutButton *_leftButton;	// 128 = 0x80
    IMKnockoutButton *_rightButton;	// 136 = 0x88
    UIButton *_audioAndSubtitlesButton;	// 144 = 0x90
    MPAVRoutingController *_airplayController;	// 152 = 0x98
    MPVolumeController *_volumeController;	// 160 = 0xa0
    UIView *_topBarLayoutGuide;	// 168 = 0xa8
    UIView *_topBarItemsGuide;	// 176 = 0xb0
    UIView *_bottomBarTopLayoutGuide;	// 184 = 0xb8
    UIView *_bottomBarBottomLayoutGuide;	// 192 = 0xc0
    UIView *_bottomBarItemsGuide;	// 200 = 0xc8
    MPAudioAndSubtitlesController *_audioAndSubtitlesController;	// 208 = 0xd0
    _Bool _ticking;	// 216 = 0xd8
    _Bool _ignoreTouchUp;	// 217 = 0xd9
    _Bool _shouldResumePlayback;	// 218 = 0xda
    _Bool _seekForward;	// 219 = 0xdb
    long long _overrideType;	// 224 = 0xe0
    NSLayoutConstraint *_topBarBottomConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_topBarHeightConstraint;	// 240 = 0xf0
    NSLayoutConstraint *_topBarLayoutGuideHeightConstraint;	// 248 = 0xf8
    NSLayoutConstraint *_topItemsTopConstraint;	// 256 = 0x100
    NSLayoutConstraint *_topItemsTrailingConstraint;	// 264 = 0x108
    NSLayoutConstraint *_bottomBarHeightConstraint;	// 272 = 0x110
    NSLayoutConstraint *_bottomItemsBottomConstraint;	// 280 = 0x118
    NSLayoutConstraint *_bottomItemsLeftConstraint;	// 288 = 0x120
    NSLayoutConstraint *_bottomItemsRightConstraint;	// 296 = 0x128
    NSLayoutConstraint *_volumeSliderRightConstraint;	// 304 = 0x130
    NSLayoutConstraint *_volumeSliderWidthConstraint;	// 312 = 0x138
    NSArray *_topItemsConstraints;	// 320 = 0x140
    NSArray *_bottomItemsConstraints;	// 328 = 0x148
    double _previousTopBarMargin;	// 336 = 0x150
    NSArray *_topBarTraitCollectionConstraints;	// 344 = 0x158
    NSArray *_topItems;	// 352 = 0x160
    NSArray *_bottomItems;	// 360 = 0x168
    MPAVItem *_avItem;	// 368 = 0x170
    _Bool _allowsWirelessPlayback;	// 376 = 0x178
    _Bool navigationBarHidden;	// 377 = 0x179
    _Bool _automaticallyHandleTransportControls;	// 378 = 0x17a
    _Bool _allowsExitFromFullscreen;	// 379 = 0x17b
    _Bool _allowsPictureInPicture;	// 380 = 0x17c
    _Bool _allowsAudioAndSubtitles;	// 381 = 0x17d
    id <IMVideoOverlayDelegate> _delegate;	// 384 = 0x180
    IMAVPlayer *_player;	// 392 = 0x188
    IMPlayerItem *_item;	// 400 = 0x190
    unsigned long long disabledParts;	// 408 = 0x198
    unsigned long long desiredParts;	// 416 = 0x1a0
    unsigned long long visibleParts;	// 424 = 0x1a8
    long long _style;	// 432 = 0x1b0
    UIViewController *_viewControllerForModalPresentationOrientation;	// 440 = 0x1b8
}

@property(nonatomic) __weak UIViewController *viewControllerForModalPresentationOrientation; // @synthesize viewControllerForModalPresentationOrientation=_viewControllerForModalPresentationOrientation;
@property(nonatomic) _Bool allowsAudioAndSubtitles; // @synthesize allowsAudioAndSubtitles=_allowsAudioAndSubtitles;
@property(nonatomic) _Bool allowsPictureInPicture; // @synthesize allowsPictureInPicture=_allowsPictureInPicture;
@property(nonatomic) _Bool allowsExitFromFullscreen; // @synthesize allowsExitFromFullscreen=_allowsExitFromFullscreen;
@property(nonatomic) _Bool automaticallyHandleTransportControls; // @synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden;
@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts;
@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts;
@property(nonatomic) _Bool allowsWirelessPlayback; // @synthesize allowsWirelessPlayback=_allowsWirelessPlayback;
@property(retain, nonatomic) IMPlayerItem *item; // @synthesize item=_item;
@property(retain, nonatomic) IMAVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <IMVideoOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010026a9ac
- (void)hideAlternateTracks;	// IMP=0x000000010026a7fc
- (void)showAlternateTracks;	// IMP=0x000000010026a7f8
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;	// IMP=0x000000010026a7f4
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;	// IMP=0x000000010026a7f0
@property(readonly, retain, nonatomic) UINavigationBar *navigationBar;
- (_Bool)_shouldHideStatusBar;	// IMP=0x000000010026a6cc
- (void)_updateVolumeImage:(float)arg1;	// IMP=0x000000010026a600
- (void)_updateVolumeSlider;	// IMP=0x000000010026a5fc
- (void)_updateTopBarBoundsBasedConstraints;	// IMP=0x000000010026a1e8
- (_Bool)updateTimeBasedValues;	// IMP=0x0000000100269fe0
- (void)_updateLoadingIndicator;	// IMP=0x0000000100269978
- (void)_updateScaleButton;	// IMP=0x000000010026966c
- (void)_updateAirplayButton;	// IMP=0x0000000100269328
- (void)_unregisterForPlayerNotifications:(id)arg1;	// IMP=0x0000000100269254
- (void)_unregisterForItemNotifications:(id)arg1;	// IMP=0x0000000100269198
- (void)_startSeeking;	// IMP=0x0000000100269124
- (void)_setScrubberValue:(double)arg1;	// IMP=0x0000000100269108
- (void)_setOverrideType:(long long)arg1;	// IMP=0x00000001002690e0
- (void)_setScrubberDuration:(double)arg1;	// IMP=0x00000001002690c8
- (void)_notifyDelegateOfUserEventEnd:(unsigned long long)arg1;	// IMP=0x0000000100269024
- (void)_notifyDelegateOfUserEventCancel:(unsigned long long)arg1;	// IMP=0x0000000100268f80
- (void)_notifyDelegateOfUserEventBegin:(unsigned long long)arg1;	// IMP=0x0000000100268edc
- (void)_notifyDelegateOfUserEvent:(unsigned long long)arg1;	// IMP=0x0000000100268ea0
- (void)_registerForPlayerNotifications:(id)arg1;	// IMP=0x0000000100268db4
- (void)_registerForItemNotifications:(id)arg1;	// IMP=0x0000000100268ce8
- (id)_newFrostedGlassBackdropView;	// IMP=0x0000000100268b50
- (id)_imageNamed:(id)arg1 forControlState:(unsigned long long)arg2;	// IMP=0x0000000100268938
- (id)_imageNamed:(id)arg1;	// IMP=0x0000000100268884
- (_Bool)_prefersSkipOverSeek;	// IMP=0x000000010026887c
- (_Bool)_canSkipToSeekableEnd;	// IMP=0x0000000100268874
- (_Bool)_canPlayFastReverse;	// IMP=0x000000010026886c
- (void)_configureTransportControls;	// IMP=0x0000000100268324
- (void)_configureAuxiliaryButtons:(_Bool)arg1;	// IMP=0x0000000100267f84
- (void)_setButtons:(id)arg1 inBar:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001002678bc
- (void)_videoViewDidMoveToWindow:(id)arg1;	// IMP=0x00000001002678b0
- (void)_tick:(id)arg1;	// IMP=0x0000000100267800
- (void)_seekabilityChanged:(id)arg1;	// IMP=0x00000001002677f4
- (void)_playbackStateChanged:(id)arg1;	// IMP=0x00000001002675c8
- (void)_itemReadyToPlay:(id)arg1;	// IMP=0x0000000100267580
- (void)_itemChanged:(id)arg1;	// IMP=0x00000001002673c4
- (void)_effectiveScaleModeDidChange:(id)arg1;	// IMP=0x00000001002673b8
- (void)_durationAvailable:(id)arg1;	// IMP=0x0000000100267234
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x00000001002671d4
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x00000001002671b8
- (void)_alternateTracksAvailable:(id)arg1;	// IMP=0x0000000100267130
- (void)_activeAudioRouteDidChange:(id)arg1;	// IMP=0x0000000100267124
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x0000000100267118
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x00000001002670d0
- (void)_skipButtonTouchUpOutside:(id)arg1;	// IMP=0x000000010026702c
- (void)_skipButtonTouchUpInside:(id)arg1;	// IMP=0x0000000100266d28
- (void)_skipButtonTouchCancel:(id)arg1;	// IMP=0x0000000100266c78
- (void)_skipButtonTouchDown:(id)arg1;	// IMP=0x0000000100266b88
- (void)_scaleButtonTapped:(id)arg1;	// IMP=0x0000000100266a88
- (void)_playPauseButtonTapped:(id)arg1;	// IMP=0x0000000100266a34
- (void)_observeControl:(id)arg1;	// IMP=0x0000000100266978
- (void)_pictureInPictureButtonTapped:(id)arg1;	// IMP=0x00000001002668dc
- (void)_fullscreenButtonTapped:(id)arg1;	// IMP=0x0000000100266840
- (void)_airplayButtonTapped:(id)arg1;	// IMP=0x000000010026683c
- (void)_doneButtonTapped:(id)arg1;	// IMP=0x00000001002667a0
- (void)_buttonInteractionEnded:(id)arg1;	// IMP=0x0000000100266790
- (void)_buttonInteractionCanceled:(id)arg1;	// IMP=0x0000000100266780
- (void)_buttonInteractionBegan:(id)arg1;	// IMP=0x0000000100266770
- (void)_audioAndSubtitlesButtonTapped:(id)arg1;	// IMP=0x0000000100266354
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100266228
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;	// IMP=0x00000001002661b4
- (void)_handleDismissAudioAndSubtitlesController;	// IMP=0x0000000100266120
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x0000000100266118
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x000000010026610c
- (void)_showScrubInstructions;	// IMP=0x0000000100265e34
- (void)_hideScrubInstructions;	// IMP=0x0000000100265c7c
- (void)detailSliderTrackingDidCancel:(id)arg1;	// IMP=0x0000000100265b98
- (void)detailSliderTrackingDidEnd:(id)arg1;	// IMP=0x0000000100265ab4
- (void)detailSliderTrackingDidBegin:(id)arg1;	// IMP=0x00000001002659a4
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;	// IMP=0x00000001002658d8
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;	// IMP=0x0000000100265878
- (void)stopTicking;	// IMP=0x0000000100265860
- (void)startTicking;	// IMP=0x000000010026581c
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 animateAlongside:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100262b68
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100262b50
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100262b40
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000100262aac
@property(readonly, nonatomic) double bottomBarHeight;
@property(nonatomic) _Bool allowsDetailScrubbing;
@property(nonatomic) _Bool allowsScrubbing;
- (void)removeFromSuperview;	// IMP=0x0000000100262870
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000100262810
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000001002627b0
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001002626c4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001002625d4
- (void)layoutSubviews;	// IMP=0x0000000100262490
- (void)updateConstraints;	// IMP=0x0000000100261ecc
- (void)didMoveToWindow;	// IMP=0x0000000100261e10
- (void)dealloc;	// IMP=0x0000000100261b34
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x0000000100261860
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100261850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

