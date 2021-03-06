/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIColor, _UILegibilitySettings;

@interface _UIVibrantSettings : NSObject {

	long long _style;
	UIColor* _referenceColor;
	_UILegibilitySettings* _legibilitySettings;
	double _referenceContrast;
	UIColor* _tintColor;
	UIColor* _highlightLimitingColor;
	UIColor* _shimmerColor;
	UIColor* _chevronShimmerColor;
	UIColor* _highlightColor;

}

@property (nonatomic,retain) UIColor * tintColor;                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightLimitingColor;                          //@synthesize highlightLimitingColor=_highlightLimitingColor - In the implementation block
@property (nonatomic,retain) UIColor * shimmerColor;                                    //@synthesize shimmerColor=_shimmerColor - In the implementation block
@property (nonatomic,retain) UIColor * chevronShimmerColor;                             //@synthesize chevronShimmerColor=_chevronShimmerColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                  //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,readonly) UIColor * referenceColor;                                //@synthesize referenceColor=_referenceColor - In the implementation block
@property (nonatomic,readonly) double referenceContrast;                                //@synthesize referenceContrast=_referenceContrast - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) long long style;                                         //@synthesize style=_style - In the implementation block
+(id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(long long)style;
-(long long)_style;
-(UIColor *)highlightColor;
-(UIColor *)referenceColor;
-(_UILegibilitySettings *)legibilitySettings;
-(id)initWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3 ;
-(id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(double)arg2 ;
-(UIColor *)highlightLimitingColor;
-(UIColor *)shimmerColor;
-(UIColor *)chevronShimmerColor;
-(id)tintViewWithFrame:(CGRect)arg1 ;
-(id)highlightLimitingViewWithFrame:(CGRect)arg1 ;
-(double)referenceContrast;
-(void)setHighlightLimitingColor:(UIColor *)arg1 ;
-(void)setShimmerColor:(UIColor *)arg1 ;
-(void)setChevronShimmerColor:(UIColor *)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
@end

