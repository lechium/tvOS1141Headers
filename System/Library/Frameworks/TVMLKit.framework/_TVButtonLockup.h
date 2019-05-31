/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class _UIFloatingContentView, _TVVisualEffectView, UIView, UILabel, CALayer, _TVVibrantLabel, _TVImageView, IKViewElement;

@interface _TVButtonLockup : UIView {

	_UIFloatingContentView* _floatingView;
	_TVVisualEffectView* _backdropView;
	UIView* _overlayView;
	UILabel* _textView;
	UILabel* _textMask;
	CALayer* _imageMask;
	_TVVibrantLabel* _vibrantLabel;
	BOOL _disabled;
	long long _backdropStyle;
	long long _vibrantLabelThemeOverride;
	_TVImageView* _imageView;
	UILabel* _titleView;
	IKViewElement* _viewElement;

}

@property (nonatomic,readonly) long long backdropStyle;                        //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) long long vibrantLabelThemeOverride;              //@synthesize vibrantLabelThemeOverride=_vibrantLabelThemeOverride - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleView;                              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                      //@synthesize viewElement=_viewElement - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)setTitleView:(UILabel *)arg1 ;
-(UILabel *)titleView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(long long)_focusedSound;
-(_TVImageView *)imageView;
-(long long)backdropStyle;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(BOOL)isDisabled;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_updateImageMask;
-(void)_updateForFocusStateChange;
-(void)_updateShadowForLabel:(id)arg1 inFocus:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 groupName:(id)arg3 ;
-(void)setText:(id)arg1 minimumScale:(double)arg2 maxNumberOfLines:(unsigned long long)arg3 ;
-(long long)vibrantLabelThemeOverride;
-(void)setVibrantLabelThemeOverride:(long long)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)_selectButtonAction:(id)arg1 ;
@end
