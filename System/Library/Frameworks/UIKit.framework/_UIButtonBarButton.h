/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class _UIButtonBarButtonVisualProvider, NSLayoutConstraint;

@interface _UIButtonBarButton : UIControl {

	_UIButtonBarButtonVisualProvider* _visualProvider;
	NSLayoutConstraint* _widthMinimizingConstraint;
	NSLayoutConstraint* _heightMinimizingConstraint;
	CGRect _hitRect;
	BOOL _backButton;

}

@property (nonatomic,copy,readonly) _UIButtonBarButtonVisualProvider * visualProvider;                                   //@synthesize visualProvider=_visualProvider - In the implementation block
@property (getter=isBackButton,nonatomic,readonly) BOOL backButton;                                                      //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * widthMinimizingConstraint; 
@property (nonatomic,readonly) NSLayoutConstraint * heightMinimizingConstraint; 
@property (assign,setter=_setButtonBarHitRect:,getter=_buttonBarHitRect,nonatomic) CGRect buttonBarHitRect; 
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)reset;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(void)_setButtonBarHitRect:(CGRect)arg1 ;
-(CGRect)_buttonBarHitRect;
-(void)_accessibilitySettingsChanged:(id)arg1 ;
-(void)_configureFromBarItem:(id)arg1 appearanceDelegate:(id)arg2 isBackButton:(BOOL)arg3 ;
-(id)initWithVisualProvider:(id)arg1 ;
-(void)configureFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2 ;
-(void)configureBackButtonFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2 ;
-(NSLayoutConstraint *)widthMinimizingConstraint;
-(NSLayoutConstraint *)heightMinimizingConstraint;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(BOOL)isBackButton;
@end
