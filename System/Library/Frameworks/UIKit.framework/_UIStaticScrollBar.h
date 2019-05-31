/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollAccessory.h>

@class UIButton, UIView, NSInvocation, NSArray, UIScrollView;

@interface _UIStaticScrollBar : UIView <UIScrollAccessory> {

	UIButton* _upButton;
	UIButton* _downButton;
	UIView* _dividerLine;
	NSInvocation* _invocation;
	NSArray* _constraints;
	BOOL _shouldInsetButtonsForIndex;
	UIScrollView* _scrollView;
	long long _edge;

}

@property (assign,nonatomic) BOOL shouldInsetButtonsForIndex;               //@synthesize shouldInsetButtonsForIndex=_shouldInsetButtonsForIndex - In the implementation block
@property (nonatomic,readonly) long long desiredAccessoryEdge; 
@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long edge;                                //@synthesize edge=_edge - In the implementation block
@property (nonatomic,readonly) BOOL overlay; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIScrollView *)scrollView;
-(void)updateConstraints;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(long long)desiredAccessoryEdge;
-(long long)edge;
-(BOOL)overlay;
-(CGRect)centeringBounds;
-(void)setShouldInsetButtonsForIndex:(BOOL)arg1 ;
-(int)_axis;
-(void)update;
-(void)setEdge:(long long)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(id)_constraintsForEdge:(long long)arg1 ;
-(BOOL)shouldInsetButtonsForIndex;
@end
