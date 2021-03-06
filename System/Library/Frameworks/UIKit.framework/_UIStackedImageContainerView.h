/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIImageViewOverlayViewDelegate.h>

@protocol UINamedLayerStack;
@class UIMotionEffectGroup, UIImage, NSObject, _UIStackedImageConfiguration, UIView, NSString;

@interface _UIStackedImageContainerView : UIView <_UIImageViewOverlayViewDelegate> {

	UIMotionEffectGroup* _stackMotionEffects;
	BOOL _installsMotionEffectsWhenFocused;
	UIImage* _stackImage;
	NSObject*<UINamedLayerStack> _constructedStackImage;
	_UIStackedImageConfiguration* _config;
	UIView* _overlayView;

}

@property (nonatomic,retain) UIView * overlayView;                                            //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIImage * stackImage;                                            //@synthesize stackImage=_stackImage - In the implementation block
@property (nonatomic,retain) NSObject*<UINamedLayerStack> constructedStackImage;              //@synthesize constructedStackImage=_constructedStackImage - In the implementation block
@property (nonatomic,copy) _UIStackedImageConfiguration * config;                             //@synthesize config=_config - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,getter=isStackFocused,nonatomic) BOOL stackFocused; 
@property (assign,nonatomic) BOOL installsMotionEffectsWhenFocused;                           //@synthesize installsMotionEffectsWhenFocused=_installsMotionEffectsWhenFocused - In the implementation block
@property (assign,nonatomic) CGPoint focusDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)overlayView:(id)arg1 didChangeClipsToBounds:(BOOL)arg2 ;
-(_UIStackedImageConfiguration *)config;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setStackImage:(UIImage *)arg1 ;
-(void)setStackFocused:(BOOL)arg1 withFocusAnimationCoordinator:(id)arg2 ;
-(BOOL)isPressed;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(CGPoint)focusDirection;
-(void)setConfig:(_UIStackedImageConfiguration *)arg1 ;
-(id)_imageContainerLayer;
-(void)_updateContainerLayerImages;
-(void)_setStackFocused:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)_installMotionEffects;
-(void)_uninstallMotionEffects;
-(BOOL)installsMotionEffectsWhenFocused;
-(BOOL)isStackFocused;
-(void)_updateOverlayLayer;
-(void)setConstructedStackImage:(NSObject*<UINamedLayerStack>)arg1 ;
-(void)setStackFocused:(BOOL)arg1 ;
-(void)setInstallsMotionEffectsWhenFocused:(BOOL)arg1 ;
-(UIImage *)stackImage;
-(NSObject*<UINamedLayerStack>)constructedStackImage;
@end

