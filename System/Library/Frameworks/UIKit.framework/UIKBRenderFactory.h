/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIKBRenderingContext, NSMutableArray, NSArray, UIKBRenderConfig;

@interface UIKBRenderFactory : NSObject {

	UIKBRenderingContext* _renderingContext;
	NSMutableArray* _segmentTraits;
	BOOL _suppressSegmentTraits;
	double _rivenSizeFactor;
	BOOL _lightweightFactory;
	double _scale;
	CGSize _stretchFactor;
	BOOL _boldTextEnabled;
	BOOL _allowsPaddles;
	BOOL _preferStringKeycapOverImage;
	BOOL _drawsOneHandedAffordance;

}

@property (nonatomic,readonly) NSArray * segmentTraits;                                //@synthesize segmentTraits=_segmentTraits - In the implementation block
@property (assign,nonatomic) double rivenSizeFactor;                                   //@synthesize rivenSizeFactor=_rivenSizeFactor - In the implementation block
@property (assign,nonatomic) BOOL lightweightFactory;                                  //@synthesize lightweightFactory=_lightweightFactory - In the implementation block
@property (assign,nonatomic) double scale;                                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize stretchFactor;                                     //@synthesize stretchFactor=_stretchFactor - In the implementation block
@property (nonatomic,retain) UIKBRenderingContext * renderingContext;                  //@synthesize renderingContext=_renderingContext - In the implementation block
@property (getter=renderConfig,readonly) UIKBRenderConfig * renderConfig; 
@property (assign,nonatomic) BOOL allowsPaddles;                                       //@synthesize allowsPaddles=_allowsPaddles - In the implementation block
@property (assign,nonatomic) BOOL preferStringKeycapOverImage;                         //@synthesize preferStringKeycapOverImage=_preferStringKeycapOverImage - In the implementation block
@property (nonatomic,readonly) BOOL boldTextEnabled;                                   //@synthesize boldTextEnabled=_boldTextEnabled - In the implementation block
@property (assign,nonatomic) BOOL drawsOneHandedAffordance;                            //@synthesize drawsOneHandedAffordance=_drawsOneHandedAffordance - In the implementation block
+(BOOL)_enabled;
+(long long)_graphicsQuality;
+(id)lightweightFactoryForVisualStyle:(SCD_Struct_UI39)arg1 renderingContext:(id)arg2 ;
+(id)factoryForVisualStyle:(SCD_Struct_UI39)arg1 renderingContext:(id)arg2 skipLayoutSegments:(BOOL)arg3 ;
+(id)factoryForVisualStyle:(SCD_Struct_UI39)arg1 renderingContext:(id)arg2 ;
+(id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderingContext:(id)arg3 ;
+(id)segmentedControlColor:(BOOL)arg1 ;
+(BOOL)couldUseGlyphSelectorForDisplayString:(id)arg1 ;
+(Class)factoryClassForVisualStyle:(SCD_Struct_UI39)arg1 ;
+(id)_characterSetForGlyphSelectors;
-(id)traitsForKey:(id)arg1 onKeyplane:(id)arg2 ;
-(double)scale;
-(UIKBRenderConfig *)renderConfig;
-(void)dealloc;
-(void)setScale:(double)arg1 ;
-(CGSize)stretchFactor;
-(id)backgroundTraitsForKeyplane:(id)arg1 ;
-(id)defaultKeyBackgroundColorName;
-(id)controlKeyBackgroundColorName;
-(id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(BOOL)arg4 blurBlending:(BOOL)arg5 ;
-(id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2 ;
-(UIKBRenderingContext *)renderingContext;
-(id)lightKeycapsFontName;
-(void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4 ;
-(double)translucentGapWidth;
-(id)lightTextFontName;
-(BOOL)lightweightFactory;
-(BOOL)allowsPaddles;
-(void)setAllowsPaddles:(BOOL)arg1 ;
-(BOOL)shouldClearBaseDisplayStringForVariants:(id)arg1 ;
-(id)lightPadKeycapsFontName;
-(void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2 ;
-(id)thinKeycapsFontName;
-(double)keyCornerRadius;
-(id)messagesWriteboardKeyImageName;
-(double)RivenFactor:(double)arg1 ;
-(void)setStretchFactor:(CGSize)arg1 ;
-(void)setPreferStringKeycapOverImage:(BOOL)arg1 ;
-(BOOL)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2 ;
-(void)setRenderingContext:(UIKBRenderingContext *)arg1 ;
-(id)displayContentsForKey:(id)arg1 ;
-(BOOL)boldTextEnabled;
-(void)lowQualityTraits:(id)arg1 ;
-(BOOL)preferStringKeycapOverImage;
-(id)_controlKeyBackgroundColorName;
-(long long)enabledBlendForm;
-(void)suppressLayoutSegments;
-(BOOL)useBlueThemingForKey:(id)arg1 ;
-(void)addLayoutSegment:(id)arg1 ;
-(long long)lightHighQualityEnabledBlendForm;
-(id)controlKeyForegroundColorName;
-(id)defaultKeyShadowColorName;
-(id)controlKeyShadowColorName;
-(id)multitapCompleteKeyImageName;
-(id)muttitapReverseKeyImageName;
-(void)setupLayoutSegments;
-(void)scaleTraits:(id)arg1 ;
-(id)shiftKeyImageName;
-(id)shiftOnKeyImageName;
-(id)shiftLockImageName;
-(id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(BOOL)arg2 ;
-(CGPoint)dualStringKeyBottomTextOffset:(id)arg1 keyplane:(id)arg2 ;
-(CGPoint)dualStringKeyTopTextOffset:(id)arg1 keyplane:(id)arg2 ;
-(id)globalKeyImageName;
-(id)deleteKeyImageName;
-(id)deleteOnKeyImageName;
-(void)setLightweightFactory:(BOOL)arg1 ;
-(double)emojiPopupDividerKeyOffset;
-(id)lowQualityLayeredBackgroundColorName;
-(NSArray *)segmentTraits;
-(id)hashStringElement;
-(BOOL)keyIsRightToLeftSensitive:(id)arg1 ;
-(double)skinnyKeyThreshold;
-(id)keyImageNameWithSkinnyVariation:(id)arg1 ;
-(id)handwritingMoreKeyImageName;
-(id)globalEmojiKeyImageName;
-(id)dismissKeyImageName;
-(id)dictationKeyImageName;
-(id)leftArrowKeyImageName;
-(id)rightArrowKeyImageName;
-(id)cutKeyImageName;
-(id)copyKeyImageName;
-(id)pasteKeyImageName;
-(id)undoKeyImageName;
-(id)boldKeyImageName;
-(id)biuKeyImageName;
-(id)ZWNJKeyImageName;
-(void)applyBoldTextForContent:(id)arg1 withKey:(id)arg2 ;
-(void)modifyTraitsForDividerVariant:(id)arg1 withKey:(id)arg2 ;
-(id)spaceKeyGrabberHandlesImageName;
-(id)thinTextFontName;
-(long long)glyphSelectorForDisplayString:(id)arg1 ;
-(double)rivenSizeFactor;
-(void)setRivenSizeFactor:(double)arg1 ;
-(BOOL)drawsOneHandedAffordance;
-(void)setDrawsOneHandedAffordance:(BOOL)arg1 ;
-(double)passcodeEdgeWeight;
-(id)passcodeKeyEdgeColorName;
-(id)passcodeActiveControlKeyTraits;
-(void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3 ;
-(id)passcodeBackgroundTraitsForKeyplane:(id)arg1 ;
-(id)passcodeControlKeyTraits;
-(id)passcodeShiftedControlKeyTraits;
-(id)extraPasscodePaddleTraits;
@end

