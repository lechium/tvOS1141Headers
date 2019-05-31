/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent {

	int _blendMode;
	double _opacity;
	CUIColor* _color;
	unsigned long long _blurSize;
	unsigned long long _spread;

}

@property (assign) int blendMode;                            //@synthesize blendMode=_blendMode - In the implementation block
@property (assign) double opacity;                           //@synthesize opacity=_opacity - In the implementation block
@property (retain) CUIColor * color;                         //@synthesize color=_color - In the implementation block
@property (assign) unsigned long long blurSize;              //@synthesize blurSize=_blurSize - In the implementation block
@property (assign) unsigned long long spread;                //@synthesize spread=_spread - In the implementation block
-(void)setBlurSize:(unsigned long long)arg1 ;
-(void)setSpread:(unsigned long long)arg1 ;
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned long long)blurSize;
-(unsigned long long)spread;
-(id)init;
-(void)dealloc;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(CUIColor *)color;
-(void)setColor:(CUIColor *)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(unsigned)effectType;
@end

