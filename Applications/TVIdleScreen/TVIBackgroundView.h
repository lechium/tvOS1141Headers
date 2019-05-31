//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<OS_dispatch_group>, TVPPlayer, TVPURLMediaItem, TVPVideoView, TVSStateMachine, UIViewPropertyAnimator;

@interface TVIBackgroundView : UIView
{
    _Bool _waitingForReadyForDisplay;	// 8 = 0x8
    id <TVIBackgroundViewDelegate> _delegate;	// 16 = 0x10
    TVPPlayer *_player;	// 24 = 0x18
    TVPVideoView *_videoView;	// 32 = 0x20
    UIView *_shroudView;	// 40 = 0x28
    id _playbackEndTimeObserverToken;	// 48 = 0x30
    id _playbackStateObserver;	// 56 = 0x38
    UIViewPropertyAnimator *_fadeInAnimator;	// 64 = 0x40
    UIViewPropertyAnimator *_fadeOutAnimator;	// 72 = 0x48
    NSObject<OS_dispatch_group> *_videoFadeDispatchGroup;	// 80 = 0x50
    TVSStateMachine *_transitionStateMachine;	// 88 = 0x58
}

+ (void)initialize;	// IMP=0x0000000100012ab0
@property(retain, nonatomic) TVSStateMachine *transitionStateMachine; // @synthesize transitionStateMachine=_transitionStateMachine;
@property(nonatomic) _Bool waitingForReadyForDisplay; // @synthesize waitingForReadyForDisplay=_waitingForReadyForDisplay;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *videoFadeDispatchGroup; // @synthesize videoFadeDispatchGroup=_videoFadeDispatchGroup;
@property(retain, nonatomic) UIViewPropertyAnimator *fadeOutAnimator; // @synthesize fadeOutAnimator=_fadeOutAnimator;
@property(retain, nonatomic) UIViewPropertyAnimator *fadeInAnimator; // @synthesize fadeInAnimator=_fadeInAnimator;
@property(nonatomic) __weak id playbackStateObserver; // @synthesize playbackStateObserver=_playbackStateObserver;
@property(retain, nonatomic) id playbackEndTimeObserverToken; // @synthesize playbackEndTimeObserverToken=_playbackEndTimeObserverToken;
@property(readonly, nonatomic) UIView *shroudView; // @synthesize shroudView=_shroudView;
@property(readonly, nonatomic) TVPVideoView *videoView; // @synthesize videoView=_videoView;
@property(readonly, nonatomic) TVPPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <TVIBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100016638
- (void)_handlePlaybackError:(id)arg1;	// IMP=0x0000000100016358
- (void)_handleMediaItemDidChange:(id)arg1;	// IMP=0x000000010001627c
- (void)_handleMediaItemWillChange:(id)arg1;	// IMP=0x00000001000161d8
- (void)_removeBoundaryTimeObservers;	// IMP=0x0000000100016164
- (void)_addBoundaryTimeObservers;	// IMP=0x0000000100015e28
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100015c78
- (void)_initializeTransitionStateMachine;	// IMP=0x0000000100014264
@property(readonly, nonatomic) TVPURLMediaItem *nextMediaItem;
@property(readonly, nonatomic) TVPURLMediaItem *currentMediaItem;
- (id)previousMediaItem;	// IMP=0x0000000100014118
- (id)mediaItems;	// IMP=0x000000010001409c
- (void)removeMediaItem:(id)arg1;	// IMP=0x0000000100013e68
- (void)addMediaItem:(id)arg1;	// IMP=0x0000000100013c0c
- (void)next;	// IMP=0x0000000100013acc
- (void)togglePlayPause;	// IMP=0x0000000100013994
- (void)pause;	// IMP=0x000000010001385c
- (void)play;	// IMP=0x0000000100013724
- (void)didMoveToWindow;	// IMP=0x00000001000135e0
- (void)dealloc;	// IMP=0x0000000100013384
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100012b18

@end
