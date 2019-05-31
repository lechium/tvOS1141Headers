/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, _UIFocusAnimationConfiguration;

@interface _UIStackedImageConfiguration : NSObject <NSCopying> {

	BOOL _overlayFixedFrame;
	BOOL _adjustMotionForSize;
	BOOL _flatImageContainsCornerRadius;
	BOOL _allowsNonOpaqueShadow;
	BOOL _boostBrightness;
	BOOL _hueShift;
	BOOL _focusCursorEnabled;
	BOOL _fullBleedCenteredGrowth;
	unsigned long long _maximumParallaxImages;
	double _maximumParallaxDepth;
	double _overlayDepth;
	double _zDepth;
	double _rotationAmount;
	double _scaleSizeIncrease;
	double _pressedScaleAdjustment;
	double _cornerRadius;
	double _specularHighlightHorizontalPositionSensitivity;
	double _specularHighlightVerticalPosition;
	double _specularHighlightVerticalPositionSensitivity;
	double _specularOpacity;
	double _defaultFocusedShadowOpacity;
	double _defaultHighlightedShadowOpacity;
	double _defaultUnfocusedShadowOpacity;
	double _fullBleedFocusedShadowOpacity;
	double _fullBleedUnfocusedShadowOpacity;
	double _focusCursorShadowOpacityAdjustment;
	double _defaultFocusedShadowRadius;
	double _defaultHighlightedShadowRadius;
	double _defaultUnfocusedShadowRadius;
	double _fullBleedFocusedShadowRadius;
	double _fullBleedUnfocusedShadowRadius;
	double _defaultFocusedShadowVerticalOffset;
	double _defaultHighlightedShadowVerticalOffset;
	double _defaultUnfocusedShadowVerticalOffset;
	double _defaultSelectedShadowVerticalOffset;
	UIImage* _placeholderImage;
	double _focusCursorBorderWidth;
	double _radiosityOffset;
	double _radiosityStrength;
	double _shadowSelectionDuration;
	double _shadowUnselectionDuration;
	double _repositionUnselectionDuration;
	double _layerSelectionDuration;
	double _layerUnselectionDuration;
	double _minimumFocusDuration;
	double _pressedDuration;
	double _unpressedDuration;
	double _fullBleedOffset;
	CGPoint _translationOffset;

}

@property (assign,nonatomic) unsigned long long maximumParallaxImages;                                         //@synthesize maximumParallaxImages=_maximumParallaxImages - In the implementation block
@property (assign,nonatomic) double maximumParallaxDepth;                                                      //@synthesize maximumParallaxDepth=_maximumParallaxDepth - In the implementation block
@property (assign,nonatomic) double overlayDepth;                                                              //@synthesize overlayDepth=_overlayDepth - In the implementation block
@property (assign,nonatomic) BOOL overlayFixedFrame;                                                           //@synthesize overlayFixedFrame=_overlayFixedFrame - In the implementation block
@property (assign,nonatomic) double zDepth;                                                                    //@synthesize zDepth=_zDepth - In the implementation block
@property (assign,nonatomic) BOOL adjustMotionForSize;                                                         //@synthesize adjustMotionForSize=_adjustMotionForSize - In the implementation block
@property (assign,nonatomic) double rotationAmount;                                                            //@synthesize rotationAmount=_rotationAmount - In the implementation block
@property (assign,nonatomic) double scaleSizeIncrease;                                                         //@synthesize scaleSizeIncrease=_scaleSizeIncrease - In the implementation block
@property (assign,nonatomic) double pressedScaleAdjustment;                                                    //@synthesize pressedScaleAdjustment=_pressedScaleAdjustment - In the implementation block
@property (assign,nonatomic) CGPoint translationOffset;                                                        //@synthesize translationOffset=_translationOffset - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL flatImageContainsCornerRadius;                                               //@synthesize flatImageContainsCornerRadius=_flatImageContainsCornerRadius - In the implementation block
@property (assign,nonatomic) double specularHighlightHorizontalPositionSensitivity;                            //@synthesize specularHighlightHorizontalPositionSensitivity=_specularHighlightHorizontalPositionSensitivity - In the implementation block
@property (assign,nonatomic) double specularHighlightVerticalPosition;                                         //@synthesize specularHighlightVerticalPosition=_specularHighlightVerticalPosition - In the implementation block
@property (assign,nonatomic) double specularHighlightVerticalPositionSensitivity;                              //@synthesize specularHighlightVerticalPositionSensitivity=_specularHighlightVerticalPositionSensitivity - In the implementation block
@property (assign,nonatomic) double specularOpacity;                                                           //@synthesize specularOpacity=_specularOpacity - In the implementation block
@property (assign,nonatomic) double defaultFocusedShadowOpacity;                                               //@synthesize defaultFocusedShadowOpacity=_defaultFocusedShadowOpacity - In the implementation block
@property (assign,nonatomic) double defaultHighlightedShadowOpacity;                                           //@synthesize defaultHighlightedShadowOpacity=_defaultHighlightedShadowOpacity - In the implementation block
@property (assign,nonatomic) double defaultUnfocusedShadowOpacity;                                             //@synthesize defaultUnfocusedShadowOpacity=_defaultUnfocusedShadowOpacity - In the implementation block
@property (assign,nonatomic) double fullBleedFocusedShadowOpacity;                                             //@synthesize fullBleedFocusedShadowOpacity=_fullBleedFocusedShadowOpacity - In the implementation block
@property (assign,nonatomic) double fullBleedUnfocusedShadowOpacity;                                           //@synthesize fullBleedUnfocusedShadowOpacity=_fullBleedUnfocusedShadowOpacity - In the implementation block
@property (assign,nonatomic) double focusCursorShadowOpacityAdjustment;                                        //@synthesize focusCursorShadowOpacityAdjustment=_focusCursorShadowOpacityAdjustment - In the implementation block
@property (assign,nonatomic) double defaultFocusedShadowRadius;                                                //@synthesize defaultFocusedShadowRadius=_defaultFocusedShadowRadius - In the implementation block
@property (assign,nonatomic) double defaultHighlightedShadowRadius;                                            //@synthesize defaultHighlightedShadowRadius=_defaultHighlightedShadowRadius - In the implementation block
@property (assign,nonatomic) double defaultUnfocusedShadowRadius;                                              //@synthesize defaultUnfocusedShadowRadius=_defaultUnfocusedShadowRadius - In the implementation block
@property (assign,nonatomic) double fullBleedFocusedShadowRadius;                                              //@synthesize fullBleedFocusedShadowRadius=_fullBleedFocusedShadowRadius - In the implementation block
@property (assign,nonatomic) double fullBleedUnfocusedShadowRadius;                                            //@synthesize fullBleedUnfocusedShadowRadius=_fullBleedUnfocusedShadowRadius - In the implementation block
@property (assign,nonatomic) double defaultFocusedShadowVerticalOffset;                                        //@synthesize defaultFocusedShadowVerticalOffset=_defaultFocusedShadowVerticalOffset - In the implementation block
@property (assign,nonatomic) double defaultHighlightedShadowVerticalOffset;                                    //@synthesize defaultHighlightedShadowVerticalOffset=_defaultHighlightedShadowVerticalOffset - In the implementation block
@property (assign,nonatomic) double defaultUnfocusedShadowVerticalOffset;                                      //@synthesize defaultUnfocusedShadowVerticalOffset=_defaultUnfocusedShadowVerticalOffset - In the implementation block
@property (assign,nonatomic) double defaultSelectedShadowVerticalOffset;                                       //@synthesize defaultSelectedShadowVerticalOffset=_defaultSelectedShadowVerticalOffset - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                       //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) BOOL allowsNonOpaqueShadow;                                                       //@synthesize allowsNonOpaqueShadow=_allowsNonOpaqueShadow - In the implementation block
@property (assign,nonatomic) BOOL boostBrightness;                                                             //@synthesize boostBrightness=_boostBrightness - In the implementation block
@property (assign,nonatomic) BOOL hueShift;                                                                    //@synthesize hueShift=_hueShift - In the implementation block
@property (assign,nonatomic) BOOL focusCursorEnabled;                                                          //@synthesize focusCursorEnabled=_focusCursorEnabled - In the implementation block
@property (assign,nonatomic) double focusCursorBorderWidth;                                                    //@synthesize focusCursorBorderWidth=_focusCursorBorderWidth - In the implementation block
@property (assign,nonatomic) double radiosityOffset;                                                           //@synthesize radiosityOffset=_radiosityOffset - In the implementation block
@property (assign,nonatomic) double radiosityStrength;                                                         //@synthesize radiosityStrength=_radiosityStrength - In the implementation block
@property (nonatomic,copy,readonly) _UIFocusAnimationConfiguration * focusAnimationConfiguration; 
@property (assign,nonatomic) double shadowSelectionDuration;                                                   //@synthesize shadowSelectionDuration=_shadowSelectionDuration - In the implementation block
@property (assign,nonatomic) double shadowUnselectionDuration;                                                 //@synthesize shadowUnselectionDuration=_shadowUnselectionDuration - In the implementation block
@property (assign,nonatomic) double repositionUnselectionDuration;                                             //@synthesize repositionUnselectionDuration=_repositionUnselectionDuration - In the implementation block
@property (assign,nonatomic) double layerSelectionDuration;                                                    //@synthesize layerSelectionDuration=_layerSelectionDuration - In the implementation block
@property (assign,nonatomic) double layerUnselectionDuration;                                                  //@synthesize layerUnselectionDuration=_layerUnselectionDuration - In the implementation block
@property (assign,nonatomic) double minimumFocusDuration;                                                      //@synthesize minimumFocusDuration=_minimumFocusDuration - In the implementation block
@property (assign,nonatomic) double pressedDuration;                                                           //@synthesize pressedDuration=_pressedDuration - In the implementation block
@property (assign,nonatomic) double unpressedDuration;                                                         //@synthesize unpressedDuration=_unpressedDuration - In the implementation block
@property (assign,nonatomic) BOOL fullBleedCenteredGrowth;                                                     //@synthesize fullBleedCenteredGrowth=_fullBleedCenteredGrowth - In the implementation block
@property (assign,nonatomic) double fullBleedOffset;                                                           //@synthesize fullBleedOffset=_fullBleedOffset - In the implementation block
+(id)newStandardConfiguration;
+(id)newAppIconConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setAllowsNonOpaqueShadow:(BOOL)arg1 ;
-(double)scaleSizeIncrease;
-(_UIFocusAnimationConfiguration *)focusAnimationConfiguration;
-(void)setMaximumParallaxImages:(unsigned long long)arg1 ;
-(void)setMaximumParallaxDepth:(double)arg1 ;
-(void)setOverlayDepth:(double)arg1 ;
-(void)setOverlayFixedFrame:(BOOL)arg1 ;
-(void)setZDepth:(double)arg1 ;
-(void)setAdjustMotionForSize:(BOOL)arg1 ;
-(void)setRotationAmount:(double)arg1 ;
-(void)setScaleSizeIncrease:(double)arg1 ;
-(void)setPressedScaleAdjustment:(double)arg1 ;
-(void)setTranslationOffset:(CGPoint)arg1 ;
-(void)setFlatImageContainsCornerRadius:(BOOL)arg1 ;
-(void)setSpecularHighlightVerticalPosition:(double)arg1 ;
-(void)setSpecularHighlightHorizontalPositionSensitivity:(double)arg1 ;
-(void)setSpecularHighlightVerticalPositionSensitivity:(double)arg1 ;
-(void)setSpecularOpacity:(double)arg1 ;
-(void)setDefaultFocusedShadowOpacity:(double)arg1 ;
-(void)setDefaultHighlightedShadowOpacity:(double)arg1 ;
-(void)setDefaultUnfocusedShadowOpacity:(double)arg1 ;
-(void)setFullBleedFocusedShadowOpacity:(double)arg1 ;
-(void)setFullBleedUnfocusedShadowOpacity:(double)arg1 ;
-(void)setFocusCursorShadowOpacityAdjustment:(double)arg1 ;
-(void)setDefaultFocusedShadowRadius:(double)arg1 ;
-(void)setDefaultHighlightedShadowRadius:(double)arg1 ;
-(void)setDefaultUnfocusedShadowRadius:(double)arg1 ;
-(void)setFullBleedFocusedShadowRadius:(double)arg1 ;
-(void)setFullBleedUnfocusedShadowRadius:(double)arg1 ;
-(void)setDefaultFocusedShadowVerticalOffset:(double)arg1 ;
-(void)setDefaultHighlightedShadowVerticalOffset:(double)arg1 ;
-(void)setDefaultUnfocusedShadowVerticalOffset:(double)arg1 ;
-(void)setDefaultSelectedShadowVerticalOffset:(double)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)setBoostBrightness:(BOOL)arg1 ;
-(void)setHueShift:(BOOL)arg1 ;
-(void)setFocusCursorEnabled:(BOOL)arg1 ;
-(void)setFocusCursorBorderWidth:(double)arg1 ;
-(void)setRadiosityOffset:(double)arg1 ;
-(void)setRadiosityStrength:(double)arg1 ;
-(void)setShadowSelectionDuration:(double)arg1 ;
-(void)setLayerSelectionDuration:(double)arg1 ;
-(void)setShadowUnselectionDuration:(double)arg1 ;
-(void)setLayerUnselectionDuration:(double)arg1 ;
-(double)minimumFocusDuration;
-(void)setMinimumFocusDuration:(double)arg1 ;
-(void)setRepositionUnselectionDuration:(double)arg1 ;
-(double)layerSelectionDuration;
-(void)setPressedDuration:(double)arg1 ;
-(void)setUnpressedDuration:(double)arg1 ;
-(void)setFullBleedCenteredGrowth:(BOOL)arg1 ;
-(void)setFullBleedOffset:(double)arg1 ;
-(unsigned long long)maximumParallaxImages;
-(double)maximumParallaxDepth;
-(double)overlayDepth;
-(BOOL)overlayFixedFrame;
-(double)zDepth;
-(BOOL)adjustMotionForSize;
-(double)rotationAmount;
-(double)pressedScaleAdjustment;
-(CGPoint)translationOffset;
-(BOOL)flatImageContainsCornerRadius;
-(double)specularHighlightVerticalPosition;
-(double)specularHighlightHorizontalPositionSensitivity;
-(double)specularHighlightVerticalPositionSensitivity;
-(double)specularOpacity;
-(double)defaultFocusedShadowOpacity;
-(double)defaultHighlightedShadowOpacity;
-(double)defaultUnfocusedShadowOpacity;
-(double)fullBleedFocusedShadowOpacity;
-(double)fullBleedUnfocusedShadowOpacity;
-(double)focusCursorShadowOpacityAdjustment;
-(double)defaultFocusedShadowRadius;
-(double)defaultHighlightedShadowRadius;
-(double)defaultUnfocusedShadowRadius;
-(double)fullBleedFocusedShadowRadius;
-(double)fullBleedUnfocusedShadowRadius;
-(double)defaultFocusedShadowVerticalOffset;
-(double)defaultHighlightedShadowVerticalOffset;
-(double)defaultUnfocusedShadowVerticalOffset;
-(double)defaultSelectedShadowVerticalOffset;
-(UIImage *)placeholderImage;
-(BOOL)allowsNonOpaqueShadow;
-(BOOL)boostBrightness;
-(BOOL)hueShift;
-(BOOL)focusCursorEnabled;
-(double)focusCursorBorderWidth;
-(double)radiosityOffset;
-(double)radiosityStrength;
-(double)shadowSelectionDuration;
-(double)shadowUnselectionDuration;
-(double)repositionUnselectionDuration;
-(double)layerUnselectionDuration;
-(double)pressedDuration;
-(double)unpressedDuration;
-(BOOL)fullBleedCenteredGrowth;
-(double)fullBleedOffset;
@end

