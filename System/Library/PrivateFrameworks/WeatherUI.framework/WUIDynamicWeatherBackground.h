/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherUI/WeatherUI-Structs.h>
#import <UIKit/UIView.h>

@class WUIWeatherCondition, CALayer, WUIGradientLayer, NSCache, NSNumber;

@interface WUIDynamicWeatherBackground : UIView {

	WUIWeatherCondition* _condition;
	CALayer* _rootLayer;
	WUIGradientLayer* _gradientLayer;
	NSCache* _backgroundCache;
	CALayer* _currentBackground;
	CALayer* _transitionBackground;
	NSNumber* _sunHeightOverride;

}

@property (nonatomic,retain) CALayer * rootLayer;                                //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,retain) WUIGradientLayer * gradientLayer;                   //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) NSCache * backgroundCache;                          //@synthesize backgroundCache=_backgroundCache - In the implementation block
@property (assign,nonatomic,__weak) CALayer * currentBackground;                 //@synthesize currentBackground=_currentBackground - In the implementation block
@property (assign,nonatomic,__weak) CALayer * transitionBackground;              //@synthesize transitionBackground=_transitionBackground - In the implementation block
@property (nonatomic,copy) NSNumber * sunHeightOverride;                         //@synthesize sunHeightOverride=_sunHeightOverride - In the implementation block
@property (nonatomic,retain) WUIWeatherCondition * condition;                    //@synthesize condition=_condition - In the implementation block
+(void)initialize;
+(id)dequeueBackgroundForCity:(id)arg1 ;
+(void)enqueueBackground:(id)arg1 ;
+(void)handleMemoryWarning;
+(void)beginReuseRestrictionForCity:(id)arg1 ;
+(void)endReuseRestriction;
-(void)setCity:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSublayer:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(WUIGradientLayer *)gradientLayer;
-(void)setRootLayer:(CALayer *)arg1 ;
-(CALayer *)rootLayer;
-(WUIWeatherCondition *)condition;
-(void)setCondition:(WUIWeatherCondition *)arg1 ;
-(void)setGradientLayer:(WUIGradientLayer *)arg1 ;
-(void)setCity:(id)arg1 animationDuration:(double)arg2 ;
-(void)animateTransitionToSize:(CGSize)arg1 ;
-(void)setCity:(id)arg1 animate:(BOOL)arg2 ;
-(void)completeTransitionWithSuccess:(BOOL)arg1 ;
-(id)updateFromCity:(id)arg1 toCity:(id)arg2 ;
-(SCD_Struct_WU1)mixedColorsForIndex:(long long)arg1 solarHeight:(float)arg2 condition:(long long)arg3 latitude:(float)arg4 ;
-(SCD_Struct_WU2)mixedGradientForSunheight:(double)arg1 hourAngle:(double)arg2 condition:(long long)arg3 latitude:(float)arg4 ;
-(void)getTopColor:(id*)arg1 middleColor:(id*)arg2 bottomColor:(id*)arg3 gradientStopPoint:(double*)arg4 forCity:(id)arg5 date:(id)arg6 ;
-(id)imageLayerFromConditon:(long long)arg1 isDay:(BOOL)arg2 ;
-(id)springAnimationForKeyPath:(id)arg1 mass:(double)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
-(BOOL)hasSublayer:(id)arg1 ;
-(NSCache *)backgroundCache;
-(void)setBackgroundCache:(NSCache *)arg1 ;
-(CALayer *)currentBackground;
-(void)setCurrentBackground:(CALayer *)arg1 ;
-(CALayer *)transitionBackground;
-(void)setTransitionBackground:(CALayer *)arg1 ;
-(NSNumber *)sunHeightOverride;
-(void)setSunHeightOverride:(NSNumber *)arg1 ;
@end

