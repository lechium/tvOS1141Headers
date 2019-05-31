/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIKeyboardMenuView, _UIBackdropView;

@interface UIInputSwitcherShadowView : UIView {

	int m_mode;
	double m_pointerOffset;
	NSArray* m_gradientColors;
	UIKeyboardMenuView* _menu;
	_UIBackdropView* _blurView;
	CGRect _keyRect;

}

@property (assign,nonatomic) int mode; 
@property (assign,nonatomic) UIKeyboardMenuView * menu;               //@synthesize menu=_menu - In the implementation block
@property (nonatomic,retain) _UIBackdropView * blurView;              //@synthesize blurView=_blurView - In the implementation block
@property (assign,nonatomic) CGRect keyRect;                          //@synthesize keyRect=_keyRect - In the implementation block
@property (assign,nonatomic) double pointerOffset; 
@property (nonatomic,retain) NSArray * gradientColors; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setGradientColors:(NSArray *)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(_UIBackdropView *)blurView;
-(void)setBlurView:(_UIBackdropView *)arg1 ;
-(UIKeyboardMenuView *)menu;
-(void)setMenu:(UIKeyboardMenuView *)arg1 ;
-(CGRect)keyRect;
-(NSArray *)gradientColors;
-(double)pointerOffset;
-(void)setPointerOffset:(double)arg1 ;
-(void)setKeyRect:(CGRect)arg1 ;
@end

