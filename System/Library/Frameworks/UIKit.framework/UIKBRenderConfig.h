/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIKBRenderConfig : NSObject <NSCopying> {

	BOOL _useEmojiStyles;
	BOOL _lightKeyboard;
	long long _forceQuality;
	double _blurRadius;
	double _blurSaturation;
	double _keycapOpacity;
	double _lightKeycapOpacity;

}

@property (assign,nonatomic) BOOL lightKeyboard;                       //@synthesize lightKeyboard=_lightKeyboard - In the implementation block
@property (assign,nonatomic) long long forceQuality;                   //@synthesize forceQuality=_forceQuality - In the implementation block
@property (assign,nonatomic) double blurRadius;                        //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double blurSaturation;                    //@synthesize blurSaturation=_blurSaturation - In the implementation block
@property (assign,nonatomic) double keycapOpacity;                     //@synthesize keycapOpacity=_keycapOpacity - In the implementation block
@property (assign,nonatomic) double lightKeycapOpacity;                //@synthesize lightKeycapOpacity=_lightKeycapOpacity - In the implementation block
@property (nonatomic,readonly) BOOL whiteText; 
@property (nonatomic,readonly) long long backdropStyle; 
@property (nonatomic,readonly) long long blurEffectStyle; 
+(long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2 ;
+(id)configForAppearance:(long long)arg1 inputMode:(id)arg2 ;
+(id)darkConfig;
+(id)defaultConfig;
+(id)defaultEmojiConfig;
+(id)lowQualityDarkConfig;
-(BOOL)whiteText;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setBlurRadius:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)blurRadius;
-(long long)backdropStyle;
-(BOOL)lightKeyboard;
-(long long)blurEffectStyle;
-(double)keycapOpacity;
-(void)setKeycapOpacity:(double)arg1 ;
-(void)setLightKeyboard:(BOOL)arg1 ;
-(double)lightKeycapOpacity;
-(long long)forceQuality;
-(double)blurSaturation;
-(void)setBlurSaturation:(double)arg1 ;
-(void)setLightKeycapOpacity:(double)arg1 ;
-(void)setForceQuality:(long long)arg1 ;
@end

