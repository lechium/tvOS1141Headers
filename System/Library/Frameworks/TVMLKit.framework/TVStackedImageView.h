/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@class UIImage, _UIStackedImageContainerLayer, _UIStackedImageConfiguration, _TVStackedImageNamedLayerStack, TVImageProxy, NSShadow, UIView, NSString;

@interface TVStackedImageView : UIView <TVAuxiliaryViewSelecting> {

	UIImage* _staticImage;
	_UIStackedImageContainerLayer* _imageStackLayer;
	_UIStackedImageConfiguration* _imageStackConfig;
	_TVStackedImageNamedLayerStack* _uiLayerStack;
	double _layerSelectionDuration;
	double _layerUnselectionDuration;
	double _shadowSelectionDuration;
	double _shadowUnselectionDuration;
	double _repositionUnselectionDuration;
	BOOL _imageLoaded;
	TVImageProxy* _imageProxy;
	NSShadow* _shadow;
	UIView* _overlayView;
	UIView* _unmaskedOverlayView;
	CGSize _stackSize;

}

@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                 //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                             //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) CGSize stackSize;                                      //@synthesize stackSize=_stackSize - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double focusSizeIncrease; 
@property (nonatomic,copy) NSShadow * shadow;                                       //@synthesize shadow=_shadow - In the implementation block
@property (assign,nonatomic) BOOL allowsNonOpaqueShadow; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,retain) UIView * overlayView;                                  //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * unmaskedOverlayView;                          //@synthesize unmaskedOverlayView=_unmaskedOverlayView - In the implementation block
@property (assign,nonatomic) unsigned long long controlState; 
@property (nonatomic,readonly) unsigned long long primaryControlState; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,nonatomic) CGPoint focusDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)_scaledSizeForSize:(CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3 ;
+(CGSize)_scaledSizeForSize:(CGSize)arg1 selectionStyle:(long long)arg2 ;
-(void)setStackSize:(CGSize)arg1 ;
-(CGSize)stackSize;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(long long)selectionStyle;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setAllowsNonOpaqueShadow:(BOOL)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(BOOL)allowsNonOpaqueShadow;
-(unsigned long long)controlState;
-(BOOL)isPressed;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)_setFocusDirection:(CGPoint)arg1 duration:(double)arg2 ;
-(double)_idleModeFocusSizeOffset;
-(void)setControlState:(unsigned long long)arg1 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)_layerBelowTitles;
-(CGPoint)focusDirection;
-(NSShadow *)shadow;
-(void)setShadow:(NSShadow *)arg1 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)animateWithAuxiliarySelectionState:(BOOL)arg1 animations:(/*^block*/id)arg2 ;
-(id)initWithImage:(id)arg1 size:(CGSize)arg2 ;
-(void)_updateImageSamplingOverlays;
-(void)_updateLayerStack:(id)arg1 withImage:(CGImageRef)arg2 size:(CGSize)arg3 ;
-(void)_commitLayerStack:(id)arg1 ;
-(void)setImage:(id)arg1 withSize:(CGSize)arg2 ;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)initWithImageProxy:(id)arg1 ;
-(BOOL)isImageLoaded;
-(void)_loadImage;
-(void)setImageLoaded:(BOOL)arg1 ;
-(void)_updateStackedImageConfiguration;
-(id)_newImageConfiguration;
-(void)setPressed:(BOOL)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUnmaskedOverlayView:(UIView *)arg1 ;
-(unsigned long long)primaryControlState;
-(double)focusSizeIncrease;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(id)_imageConfiguration;
-(void)_setShadowOpacity:(double)arg1 ;
-(void)_setShadowRadius:(double)arg1 ;
-(void)_setShadowVerticalOffset:(double)arg1 ;
-(void)_resetShadowSettings;
-(id)_layeredImageContainerLayer;
-(UIView *)unmaskedOverlayView;
@end

