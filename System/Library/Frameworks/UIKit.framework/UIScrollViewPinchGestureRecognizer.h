/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPinchGestureRecognizer.h>

@class UIScrollView;

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {

	UIScrollView* _scrollView;
	SEL _scrollViewAction;
	unsigned _hasParentScrollView : 1;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)_hysteresis;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
@end

