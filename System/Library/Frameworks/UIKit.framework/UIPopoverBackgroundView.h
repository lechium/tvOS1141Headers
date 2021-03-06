/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPopoverBackgroundViewMethods.h>

@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods> {

	BOOL __chromeHidden;

}

@property (assign,setter=_setChromeHidden:,nonatomic) BOOL _chromeHidden;              //@synthesize _chromeHidden=__chromeHidden - In the implementation block
@property (assign,nonatomic) double arrowOffset; 
@property (assign,nonatomic) unsigned long long arrowDirection; 
+(double)cornerRadius;
+(BOOL)wantsDefaultContentAppearance;
+(double)arrowHeight;
+(double)arrowBase;
+(UIEdgeInsets)contentViewInsets;
+(double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(long long)backgroundStyle;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(double)_shadowRadius;
-(double)_shadowOpacity;
-(void)_setChromeHidden:(BOOL)arg1 ;
-(BOOL)_chromeHidden;
-(CGRect)_contentViewFrame;
-(CGSize)_shadowOffset;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(UIEdgeInsets)_shadowInsets;
-(id)_shadowPath;
-(BOOL)_needsSeperateBlending;
-(void)_updateChrome;
-(UIEdgeInsets)_contentViewInsets;
-(id)_shadowPathForRect:(CGRect)arg1 arrowDirection:(unsigned long long)arg2 ;
-(CGRect)_backgroundContentViewFrame;
-(void)_updateShadow;
-(UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned long long)arg1 ;
-(BOOL)_wantsDefaultContentAppearance;
@end

