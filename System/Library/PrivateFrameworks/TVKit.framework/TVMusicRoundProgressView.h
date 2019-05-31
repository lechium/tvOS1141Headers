/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class CADisplayLink, UIImageView, UIImage;

@interface TVMusicRoundProgressView : UIView {

	double whiteColorComponents[4];
	float _animatedStartValue;
	float _animatedValue;
	BOOL _animating;
	BOOL _progressInitialized;
	double _animationEndTime;
	double _animationStartTime;
	CADisplayLink* _displayLink;
	float _progress;
	unsigned long long _style;
	UIImageView* _spinnerLayer;
	UIImageView* _spinnerFillLayer;
	UIImage* _bgImage;
	UIImage* _fillImage;
	UIImage* _spinnerImage;
	UIImage* _spinnerOverlayImage;

}

@property (assign,nonatomic) unsigned long long style;                    //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIImageView * spinnerLayer;                  //@synthesize spinnerLayer=_spinnerLayer - In the implementation block
@property (nonatomic,retain) UIImageView * spinnerFillLayer;              //@synthesize spinnerFillLayer=_spinnerFillLayer - In the implementation block
@property (nonatomic,retain) UIImage * bgImage;                           //@synthesize bgImage=_bgImage - In the implementation block
@property (nonatomic,retain) UIImage * fillImage;                         //@synthesize fillImage=_fillImage - In the implementation block
@property (nonatomic,retain) UIImage * spinnerImage;                      //@synthesize spinnerImage=_spinnerImage - In the implementation block
@property (nonatomic,retain) UIImage * spinnerOverlayImage;               //@synthesize spinnerOverlayImage=_spinnerOverlayImage - In the implementation block
@property (assign,nonatomic) float progress;                              //@synthesize progress=_progress - In the implementation block
-(id)init;
-(void)removeFromSuperview;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(float)progress;
-(void)_animateValueOnDisplayLink:(id)arg1 ;
-(void)setFillImage:(UIImage *)arg1 ;
-(UIImage *)fillImage;
-(void)setBgImage:(UIImage *)arg1 ;
-(UIImage *)bgImage;
-(void)_startSpinner;
-(void)_setSpinnerAnimating:(BOOL)arg1 ;
-(UIImageView *)spinnerLayer;
-(UIImageView *)spinnerFillLayer;
-(void)setSpinnerLayer:(UIImageView *)arg1 ;
-(void)setSpinnerFillLayer:(UIImageView *)arg1 ;
-(UIImage *)spinnerImage;
-(void)setSpinnerImage:(UIImage *)arg1 ;
-(UIImage *)spinnerOverlayImage;
-(void)setSpinnerOverlayImage:(UIImage *)arg1 ;
@end

