/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class CAAnimationGroup, UIColor, CALayer;

@interface AVSpinnerView : UIView {

	CGSize _size;
	id _didBecomeActiveNotificationObserver;
	id _willResignActiveNotificationObserver;
	BOOL _animating;
	CAAnimationGroup* _animations;
	UIColor* _color;
	CALayer* _mainLayer;
	CALayer* _overlayLayer;

}

@property (nonatomic,retain) CAAnimationGroup * animations;                  //@synthesize animations=_animations - In the implementation block
@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) CALayer * mainLayer;                            //@synthesize mainLayer=_mainLayer - In the implementation block
@property (nonatomic,retain) CALayer * overlayLayer;                         //@synthesize overlayLayer=_overlayLayer - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;              //@synthesize animating=_animating - In the implementation block
+(id)spinnerAnimationGroup;
+(CGImageRef)spinnerImageWithSize:(CGSize)arg1 color:(id)arg2 ;
+(id)repeatingRotationAnimation;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(id)initWithSize:(CGSize)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setAnimations:(CAAnimationGroup *)arg1 ;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(CAAnimationGroup *)animations;
-(id)_animationToOpacity:(double)arg1 ;
-(CALayer *)mainLayer;
-(void)setMainLayer:(CALayer *)arg1 ;
-(CALayer *)overlayLayer;
-(void)setOverlayLayer:(CALayer *)arg1 ;
-(void)_removeAnimations;
-(void)_addAnimations;
@end

