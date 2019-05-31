/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIAccessibilityContentSizeCategoryImageAdjusting.h>

@class UITraitCollection, NSString, _UIStackedImageContainerView, UIImage, NSArray, UIColor, UILayoutGuide, UIView;

@interface UIImageView : UIView <UIAccessibilityContentSizeCategoryImageAdjusting> {

	id _storage;
	UIEdgeInsets _cachedEdgeInsetsForEffects;
	UITraitCollection* _lastResolvedTraitCollection;
	long long _lastResolvedLayoutDirectionTrait;
	struct {
		unsigned adjustsImageWhenAncestorFocused : 1;
		unsigned masksFocusEffectToContents : 1;
	}  _focusEffectFlags;
	BOOL _templateSettingsAreInvalid;
	BOOL _edgeInsetsForEffectsAreValid;
	BOOL __animatesContents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory; 
@property (assign,setter=_setDefaultRenderingMode:,nonatomic) long long _defaultRenderingMode; 
@property (nonatomic,readonly) UIEdgeInsets _edgeInsetsForEffects; 
@property (assign,setter=_setEdgeInsetsForEffectsAreValid:,nonatomic) BOOL _edgeInsetsForEffectsAreValid;                              //@synthesize edgeInsetsForEffectsAreValid=_edgeInsetsForEffectsAreValid - In the implementation block
@property (assign,setter=_setMasksTemplateImages:,nonatomic) BOOL _masksTemplateImages; 
@property (nonatomic,readonly) BOOL _templateSettingsAreInvalid;                                                                       //@synthesize templateSettingsAreInvalid=_templateSettingsAreInvalid - In the implementation block
@property (assign,nonatomic) int drawMode; 
@property (assign,setter=_setTemplateImageRenderingEffects:,nonatomic) unsigned long long _templateImageRenderingEffects; 
@property (assign,setter=_setAnimatesContents:,nonatomic) BOOL _animatesContents;                                                      //@synthesize _animatesContents=__animatesContents - In the implementation block
@property (assign,setter=_setLayeredImageCornerRadius:,nonatomic) double _layeredImageCornerRadius; 
@property (nonatomic,readonly) _UIStackedImageContainerView * _layeredImageContainer; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * highlightedImage; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,copy) NSArray * animationImages; 
@property (nonatomic,copy) NSArray * highlightedAnimationImages; 
@property (assign,nonatomic) double animationDuration; 
@property (assign,nonatomic) long long animationRepeatCount; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
@property (assign,nonatomic) BOOL adjustsImageWhenAncestorFocused; 
@property (readonly) UILayoutGuide * focusedFrameGuide; 
@property (nonatomic,readonly) UIView * overlayContentView; 
@property (assign,nonatomic) BOOL masksFocusEffectToContents; 
+(id)_surfacePropertiesForRenderingCIImageWithSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 bytesPerElement:(unsigned long long)arg3 ;
+(BOOL)_canReuseIOSurface:(IOSurfaceRef)arg1 forRenderingCIImageWithIOSurfaceProperties:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_setDefaultRenderingMode:(long long)arg1 ;
-(unsigned long long)_templateImageRenderingEffects;
-(void)_setTemplateImageRenderingEffects:(unsigned long long)arg1 ;
-(UIImage *)image;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(CGImageRef)imageRef;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)useBlockyMagnificationInClassic;
-(BOOL)_canDrawContent;
-(id)_generateBackdropMaskImage;
-(void)tintColorDidChange;
-(void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setAnimationRepeatCount:(long long)arg1 ;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(void)_cleanUpForStopAnimating;
-(long long)_defaultRenderingMode;
-(BOOL)_masksTemplateImages;
-(id)_currentImage;
-(id)_currentHighlightedImage;
-(BOOL)_shouldDrawImage:(id)arg1 ;
-(id)_cachedPretiledImageForImage:(id)arg1 ;
-(void)_updateLayerContentsForCIImageBackedImage:(id)arg1 ;
-(BOOL)_needsImageEffectsForImage:(id)arg1 ;
-(id)_effectiveTintColorWithImage:(id)arg1 ;
-(id)_contentsMultiplyColorForEffectiveTintColor:(id)arg1 ;
-(BOOL)_needsImageEffectsForImage:(id)arg1 suppressColorizing:(BOOL)arg2 ;
-(void)_drawImageEffectsForImage:(id)arg1 inRect:(CGRect)arg2 suppressColor:(BOOL)arg3 ;
-(BOOL)isAnimating;
-(NSArray *)highlightedAnimationImages;
-(NSArray *)animationImages;
-(BOOL)_setImageViewContents:(id)arg1 ;
-(BOOL)_displayImageAsLayered:(id)arg1 ;
-(void)_configureForLayeredImage:(id)arg1 ;
-(_UIStackedImageContainerView *)_layeredImageContainer;
-(void)_teardownLayeredImage;
-(void)_setDecompressingImage:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)setAdjustsImageWhenAncestorFocused:(BOOL)arg1 ;
-(void)setMasksFocusEffectToContents:(BOOL)arg1 ;
-(void)_setOverlayContentView:(id)arg1 ;
-(UIImage *)highlightedImage;
-(BOOL)adjustsImageWhenAncestorFocused;
-(BOOL)masksFocusEffectToContents;
-(id)_existingOverlayView;
-(void)stopAnimating;
-(void)_clearPretiledImageCacheForImage:(id)arg1 ;
-(void)_updateImageViewForOldImage:(id)arg1 newImage:(id)arg2 ;
-(void)_updatePretiledImageCacheForImage:(id)arg1 ;
-(void)_updateState;
-(void)_updateTemplateProperties;
-(id)_focusedFrameGuideCreateIfNecessary:(BOOL)arg1 ;
-(void)_updateFocusedFrameGuideConstraintsIfApplicable;
-(BOOL)_animatesContents;
-(void)_setAnimatesContents:(BOOL)arg1 ;
-(BOOL)_recomputePretilingState;
-(void)_setViewGeometry:(CGRect)arg1 forMetric:(int)arg2 ;
-(BOOL)adjustsImageSizeForAccessibilityContentSizeCategory;
-(UIEdgeInsets)_edgeInsetsForEffects;
-(id)_activeImage;
-(id)_decompressingImageForType:(unsigned long long)arg1 ;
-(void)_resolveImageForTrait:(id)arg1 ;
-(BOOL)_shouldTreatImageAsTemplate:(id)arg1 ;
-(void)_updateMasking;
-(void)_templateSettingsDidChange;
-(void)_invalidateTemplateSettings;
-(BOOL)_getDrawModeCompositeOperation:(int*)arg1 whiteComponent:(double*)arg2 drawingAlpha:(double*)arg3 ;
-(void)startAnimating;
-(id)_adaptiveImageForImage:(id)arg1 assignedImage:(id)arg2 currentImage:(id)arg3 hasAdapted:(BOOL*)arg4 ;
-(void)_setLayeredImageContainer:(id)arg1 ;
-(void)_updateLayeredImageIsFocusedWithFocusedView:(id)arg1 focusAnimationCoordinator:(id)arg2 ;
-(id)_applyImageEffectsToCIImage:(id)arg1 effectiveTintColor:(id)arg2 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(UILayoutGuide *)focusedFrameGuide;
-(void)setAnimationImages:(NSArray *)arg1 ;
-(void)setHighlightedAnimationImages:(NSArray *)arg1 ;
-(id)_currentAnimationKeyframeImage;
-(double)animationDuration;
-(long long)animationRepeatCount;
-(void)_setMasksTemplateImages:(BOOL)arg1 ;
-(int)drawMode;
-(void)setDrawMode:(int)arg1 ;
-(void)setCGImageRef:(CGImageRef)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(id)_checkImageForAdaptation:(id)arg1 hasAdapted:(BOOL*)arg2 ;
-(id)_checkHighlightedImageForAdaptation:(id)arg1 hadAdapted:(BOOL*)arg2 ;
-(double)_layeredImageCornerRadius;
-(UIView *)overlayContentView;
-(void)_setLayeredImageCornerRadius:(double)arg1 ;
-(BOOL)_templateSettingsAreInvalid;
-(BOOL)_edgeInsetsForEffectsAreValid;
-(void)_setEdgeInsetsForEffectsAreValid:(BOOL)arg1 ;
-(void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(BOOL)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_applySettingsForLegibilityStyle:(long long)arg1 ;
@end

