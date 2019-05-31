/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol TVPMainVideoViewControllerDelegate, TVPAVFPlayback;
@class NSObject, AVPlayerViewController, _UIFloatingContentView, TVPVideoView, UIView, TVVideoBorderView;

@interface TVPMainVideoViewController : UIViewController {

	BOOL _acceptsFocus;
	BOOL _videoViewHidden;
	id<TVPMainVideoViewControllerDelegate> _delegate;
	NSObject*<TVPAVFPlayback> _player;
	AVPlayerViewController* _avPlayerViewController;
	double _videoViewAlpha;
	_UIFloatingContentView* _floatingContentView;
	TVPVideoView* _videoView;
	UIView* _playbackView;
	TVVideoBorderView* _borderView;

}

@property (nonatomic,retain) _UIFloatingContentView * floatingContentView;                        //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,retain) TVPVideoView * videoView;                                            //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) UIView * playbackView;                                               //@synthesize playbackView=_playbackView - In the implementation block
@property (nonatomic,retain) TVVideoBorderView * borderView;                                      //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) NSObject*<TVPAVFPlayback> player;                                    //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<TVPMainVideoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL acceptsFocus;                                                   //@synthesize acceptsFocus=_acceptsFocus - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * avPlayerViewController;                     //@synthesize avPlayerViewController=_avPlayerViewController - In the implementation block
@property (assign,getter=isVideoViewHidden,nonatomic) BOOL videoViewHidden;                       //@synthesize videoViewHidden=_videoViewHidden - In the implementation block
@property (assign,nonatomic) double videoViewAlpha;                                               //@synthesize videoViewAlpha=_videoViewAlpha - In the implementation block
-(id<TVPMainVideoViewControllerDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TVPMainVideoViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(_UIFloatingContentView *)floatingContentView;
-(id)initWithPlayer:(id)arg1 ;
-(TVPVideoView *)videoView;
-(void)setVideoView:(TVPVideoView *)arg1 ;
-(void)setPlayer:(NSObject*<TVPAVFPlayback>)arg1 ;
-(NSObject*<TVPAVFPlayback>)player;
-(BOOL)acceptsFocus;
-(void)setAcceptsFocus:(BOOL)arg1 ;
-(void)_addPlaybackView:(id)arg1 ;
-(void)_didSelect;
-(AVPlayerViewController *)avPlayerViewController;
-(void)setPlaybackView:(UIView *)arg1 ;
-(void)setFloatingContentView:(_UIFloatingContentView *)arg1 ;
-(void)setBorderView:(TVVideoBorderView *)arg1 ;
-(void)_handleSelectButton:(id)arg1 ;
-(void)preserveVideoViewForReuse;
-(void)setAvPlayerViewController:(AVPlayerViewController *)arg1 ;
-(BOOL)isVideoViewHidden;
-(void)setVideoViewHidden:(BOOL)arg1 ;
-(double)videoViewAlpha;
-(void)setVideoViewAlpha:(double)arg1 ;
-(UIView *)playbackView;
-(TVVideoBorderView *)borderView;
@end
