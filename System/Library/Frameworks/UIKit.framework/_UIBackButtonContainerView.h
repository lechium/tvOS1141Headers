/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CALayer, UIImage;

@interface _UIBackButtonContainerView : UIView {

	CALayer* _edgeMask;
	CALayer* _fillMask;
	BOOL _isRTL;
	UIImage* _edgeMaskImage;
	double _backButtonLeadingMargin;

}

@property (nonatomic,retain) UIImage * edgeMaskImage;                     //@synthesize edgeMaskImage=_edgeMaskImage - In the implementation block
@property (assign,nonatomic) BOOL maskEnabled; 
@property (assign,nonatomic) double backButtonLeadingMargin;              //@synthesize backButtonLeadingMargin=_backButtonLeadingMargin - In the implementation block
@property (assign,nonatomic) BOOL isRTL;                                  //@synthesize isRTL=_isRTL - In the implementation block
-(BOOL)isRTL;
-(void)setIsRTL:(BOOL)arg1 ;
-(void)setMaskEnabled:(BOOL)arg1 ;
-(BOOL)maskEnabled;
-(UIImage *)edgeMaskImage;
-(void)setEdgeMaskImage:(UIImage *)arg1 ;
-(double)backButtonLeadingMargin;
-(void)setBackButtonLeadingMargin:(double)arg1 ;
@end

