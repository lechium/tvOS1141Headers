/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CMKExpandableMenuButtonDelegate.h>

@protocol CMKTopBarDelegate;
@class CMKFlashButton, CMKElapsedTimeView, CMKHDRButton, CMKFlipButton, CMKTimerButton, UIView, NSMutableArray, CMKExpandableMenuButton;

@interface CMKTopBar : UIView <CMKExpandableMenuButtonDelegate> {

	BOOL __flashButtonExpanded;
	BOOL __HDRButtonExpanded;
	BOOL __timerButtonExpanded;
	long long _style;
	long long _backgroundStyle;
	id<CMKTopBarDelegate> _delegate;
	CMKFlashButton* _flashButton;
	CMKElapsedTimeView* _elapsedTimeView;
	CMKHDRButton* _HDRButton;
	CMKFlipButton* _flipButton;
	CMKTimerButton* _timerButton;
	long long _orientation;
	UIView* __backgroundView;
	NSMutableArray* __allowedControls;
	CMKExpandableMenuButton* __expandedMenuButton;
	UIView* __flipButtonTopLayoutSpacer;
	UIEdgeInsets __expandedMenuButtonTappableInsets;

}

@property (nonatomic,readonly) UIView * _backgroundView;                                                                               //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _allowedControls;                                                                      //@synthesize _allowedControls=__allowedControls - In the implementation block
@property (assign,setter=_setFlashButtonExpanded:,getter=_isFlashButtonExpanded,nonatomic) BOOL _flashButtonExpanded;                  //@synthesize _flashButtonExpanded=__flashButtonExpanded - In the implementation block
@property (assign,setter=_setHDRButtonExpanded:,getter=_isHDRButtonExpanded,nonatomic) BOOL _HDRButtonExpanded;                        //@synthesize _HDRButtonExpanded=__HDRButtonExpanded - In the implementation block
@property (assign,setter=_setTimerButtonExpanded:,getter=_isTimerButtonExpanded,nonatomic) BOOL _timerButtonExpanded;                  //@synthesize _timerButtonExpanded=__timerButtonExpanded - In the implementation block
@property (setter=_setExpandedMenuButton:,nonatomic,retain) CMKExpandableMenuButton * _expandedMenuButton;                             //@synthesize _expandedMenuButton=__expandedMenuButton - In the implementation block
@property (assign,setter=_setExpandedMenuButtonTappableInsets:,nonatomic) UIEdgeInsets _expandedMenuButtonTappableInsets;              //@synthesize _expandedMenuButtonTappableInsets=__expandedMenuButtonTappableInsets - In the implementation block
@property (nonatomic,readonly) UIView * _flipButtonTopLayoutSpacer;                                                                    //@synthesize _flipButtonTopLayoutSpacer=__flipButtonTopLayoutSpacer - In the implementation block
@property (assign,nonatomic) long long style;                                                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                                                //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) id<CMKTopBarDelegate> delegate;                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CMKFlashButton * flashButton;                                                                             //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) CMKElapsedTimeView * elapsedTimeView;                                                                     //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CMKHDRButton * HDRButton;                                                                                 //@synthesize HDRButton=_HDRButton - In the implementation block
@property (nonatomic,retain) CMKFlipButton * flipButton;                                                                               //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) CMKTimerButton * timerButton;                                                                             //@synthesize timerButton=_timerButton - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                    //@synthesize orientation=_orientation - In the implementation block
@property (getter=isFloating,nonatomic,readonly) BOOL floating; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CMKTopBarDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CMKTopBarDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)_backgroundView;
-(CGSize)intrinsicContentSize;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)orientation;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(BOOL)isFloating;
-(void)setOrientation:(long long)arg1 ;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackgroundStyleAnimated:(BOOL)arg1 ;
-(CMKFlipButton *)flipButton;
-(CMKElapsedTimeView *)elapsedTimeView;
-(CMKFlashButton *)flashButton;
-(CMKExpandableMenuButton *)_expandedMenuButton;
-(CGRect)expandedFrameForMenuButton:(id)arg1 ;
-(BOOL)_shouldHideElapsedTimeView;
-(BOOL)_shouldHideHDRButton;
-(BOOL)_shouldHideTimerButton;
-(BOOL)_shouldHideFlashButton;
-(CMKTimerButton *)timerButton;
-(CMKHDRButton *)HDRButton;
-(CGRect)collapsedFrameForMenuButton:(id)arg1 ;
-(void)_setExpandedMenuButton:(id)arg1 ;
-(void)_updateHiddenViewsForButtonExpansionAnimated:(BOOL)arg1 ;
-(void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)expandMenuButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFlipButton:(CMKFlipButton *)arg1 ;
-(void)setElapsedTimeView:(CMKElapsedTimeView *)arg1 ;
-(void)setHDRButton:(CMKHDRButton *)arg1 ;
-(void)setFlashButton:(CMKFlashButton *)arg1 ;
-(void)setTimerButton:(CMKTimerButton *)arg1 ;
-(void)configureForMode:(long long)arg1 ;
-(void)_commonCMKTopBarInitialization;
-(void)_updateStyleAnimated:(BOOL)arg1 ;
-(BOOL)_shouldHideFlipButton;
-(BOOL)_isFlashButtonExpanded;
-(BOOL)_buttonsExpandHorizontally;
-(BOOL)_isTimerButtonExpanded;
-(BOOL)_isHDRButtonExpanded;
-(UIView *)_flipButtonTopLayoutSpacer;
-(void)_setupDefaultBackgroundConstraints;
-(void)_setupDefaultFlipButtonConstraints;
-(void)_setupDefaultElapsedTimeViewConstraints;
-(void)_setupFloatingBackgroundConstraints;
-(void)_setupFloatingFlipButtonConstraints;
-(void)_setupFloatingRecordingBackgroundConstraints;
-(void)_setupFloatingRecordingElapsedTimeViewConstraints;
-(NSMutableArray *)_allowedControls;
-(void)_layoutControls:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(CGRect*)arg5 ;
-(id)_allowedControlsForStillImageMode;
-(id)_allowedControlsForVideoMode;
-(id)_allowedControlsForPanoramaMode;
-(id)_allowedControlsForTimelapseMode;
-(UIEdgeInsets)_expandedMenuButtonTappableInsets;
-(void)_setTimerButtonExpanded:(BOOL)arg1 ;
-(void)_setFlashButtonExpanded:(BOOL)arg1 ;
-(void)_setHDRButtonExpanded:(BOOL)arg1 ;
-(void)_setupConstraintsForDefaultStyle;
-(void)_setupConstraintsForFloatingStyle;
-(void)_setupConstraintsForFloatingRecordingStyle;
-(void)_setExpandedMenuButtonTappableInsets:(UIEdgeInsets)arg1 ;
@end

