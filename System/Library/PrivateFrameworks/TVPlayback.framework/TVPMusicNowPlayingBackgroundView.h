/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIView, UIImageView, UIViewPropertyAnimator;

@interface TVPMusicNowPlayingBackgroundView : UIView {

	UIImage* _artworkImage;
	UIImage* _appliedBlurredImage;
	UIView* _animatedViewContainer;
	UIImageView* _animatedView1;
	UIImageView* _animatedView2;
	UIViewPropertyAnimator* _animator;
	double _transitionDuration;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize artworkImage=_artworkImage - In the implementation block
@property (assign,nonatomic) double transitionDuration;              //@synthesize transitionDuration=_transitionDuration - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)image;
-(void)_setupAnimations;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
-(void)_setupAnimatedViews;
-(void)_reloadImage;
-(void)_setupRotationAnimations;
-(void)_setupAlphaAnimations;
-(double)_imageFullSize;
-(id)_blurredImageWithImage:(id)arg1 targetSize:(CGSize)arg2 ;
-(void)_applyImageWithAnimation:(id)arg1 ;
-(double)_imageHalfSize;
-(id)_resizeImage:(CGImageRef)arg1 targetSize:(CGSize)arg2 shouldDither:(BOOL)arg3 ;
@end
