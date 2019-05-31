/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, AVPlayer, AVPlayerViewController;

@interface BFFOnBoardingVideoView : UIView {

	BOOL _displayingVideo;
	BOOL _playVideo;
	UIImageView* _imageView;
	AVPlayer* _videoPlayer;
	AVPlayerViewController* _videoViewController;

}

@property (retain) UIImageView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (retain) AVPlayer * videoPlayer;                                    //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (retain) AVPlayerViewController * videoViewController;              //@synthesize videoViewController=_videoViewController - In the implementation block
@property (assign) BOOL displayingVideo;                                      //@synthesize displayingVideo=_displayingVideo - In the implementation block
@property (assign) BOOL playVideo;                                            //@synthesize playVideo=_playVideo - In the implementation block
+(id)backgroundColor;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)startPlaying;
-(AVPlayerViewController *)videoViewController;
-(void)setVideoViewController:(AVPlayerViewController *)arg1 ;
-(AVPlayer *)videoPlayer;
-(id)initWithPlaceholderImage:(id)arg1 ;
-(void)showVideo:(id)arg1 ;
-(void)videoReachedEnd:(id)arg1 ;
-(void)setPlayVideo:(BOOL)arg1 ;
-(void)setDisplayingVideo:(BOOL)arg1 ;
-(BOOL)playVideo;
-(BOOL)displayingVideo;
-(void)transitionToVideo;
-(void)stopPlaying;
-(void)setVideoPlayer:(AVPlayer *)arg1 ;
@end

