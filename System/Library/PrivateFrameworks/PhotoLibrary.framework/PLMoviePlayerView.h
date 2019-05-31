/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class PLAVPlayerView, UIView, AVPlayer;

@interface PLMoviePlayerView : UIView {

	PLAVPlayerView* _avPlayerView;
	BOOL _destinationPlaceholderHidden;
	long long _destinationPlaceholderStyle;

}

@property (nonatomic,retain,readonly) UIView * videoView; 
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,readonly) long long destinationPlaceholderStyle;                                              //@synthesize destinationPlaceholderStyle=_destinationPlaceholderStyle - In the implementation block
@property (assign,getter=isDestinationPlaceholderHidden,nonatomic) BOOL destinationPlaceholderHidden; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIView *)videoView;
-(void)setScaleMode:(long long)arg1 ;
-(long long)destinationPlaceholderStyle;
-(void)setScaleMode:(long long)arg1 duration:(double)arg2 ;
-(void)setDestinationPlaceholderHidden:(BOOL)arg1 ;
-(void)reattachVideoView;
-(BOOL)isDestinationPlaceholderHidden;
-(void)_installBackgroundView:(id)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)player;
@end
