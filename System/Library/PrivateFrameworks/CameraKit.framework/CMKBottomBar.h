/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CMKExpandableMenuButtonDelegate.h>

@protocol CMKBottomBarDelegate;
@class UIView, CMKModeDial, CMKImageWell, CMKShutterButton, CMKFilterButton, CMKFlipButton, CMKFlashButton, CMKElapsedTimeView, CMKHDRButton, CMKTimerButton, CMKSlalomIndicatorView, UIButton, CMKExpandableMenuButton;

@interface CMKBottomBar : UIView <CMKExpandableMenuButtonDelegate> {

	id<CMKBottomBarDelegate> _delegate;
	long long _orientation;
	long long _backgroundStyle;
	UIView* _backgroundView;
	CMKModeDial* _modeDial;
	CMKImageWell* _imageWell;
	CMKShutterButton* _stillDuringVideoButton;
	CMKShutterButton* _shutterButton;
	CMKFilterButton* _filterButton;
	CMKFlipButton* _flipButton;
	CMKFlashButton* _flashButton;
	CMKElapsedTimeView* _elapsedTimeView;
	CMKHDRButton* _HDRButton;
	CMKTimerButton* _timerButton;
	CMKSlalomIndicatorView* _slalomIndicatorView;
	UIButton* _cancelButton;
	CMKExpandableMenuButton* __expandedMenuButton;
	UIView* __shutterButtomBottomLayoutSpacer;
	UIView* __imageWellBottomLayoutSpacer;
	UIView* __filterButtonBottomLayoutSpacer;
	UIView* __slalomIndicatorBottomLayoutSpacer;
	UIView* __stillDuringVideoButtonBottomLayoutSpacer;
	UIView* __elapsedTimeViewCenteringLayoutSpacer;
	UIView* __hdrButtonCenteringLayoutSpacer;

}

@property (setter=_setExpandedMenuButton:,nonatomic,retain) CMKExpandableMenuButton * _expandedMenuButton;              //@synthesize _expandedMenuButton=__expandedMenuButton - In the implementation block
@property (nonatomic,readonly) UIView * _shutterButtomBottomLayoutSpacer;                                               //@synthesize _shutterButtomBottomLayoutSpacer=__shutterButtomBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _imageWellBottomLayoutSpacer;                                                   //@synthesize _imageWellBottomLayoutSpacer=__imageWellBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _filterButtonBottomLayoutSpacer;                                                //@synthesize _filterButtonBottomLayoutSpacer=__filterButtonBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _slalomIndicatorBottomLayoutSpacer;                                             //@synthesize _slalomIndicatorBottomLayoutSpacer=__slalomIndicatorBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _stillDuringVideoButtonBottomLayoutSpacer;                                      //@synthesize _stillDuringVideoButtonBottomLayoutSpacer=__stillDuringVideoButtonBottomLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _elapsedTimeViewCenteringLayoutSpacer;                                          //@synthesize _elapsedTimeViewCenteringLayoutSpacer=__elapsedTimeViewCenteringLayoutSpacer - In the implementation block
@property (nonatomic,readonly) UIView * _hdrButtonCenteringLayoutSpacer;                                                //@synthesize _hdrButtonCenteringLayoutSpacer=__hdrButtonCenteringLayoutSpacer - In the implementation block
@property (assign,nonatomic,__weak) id<CMKBottomBarDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                     //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                                 //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CMKModeDial * modeDial;                                                                    //@synthesize modeDial=_modeDial - In the implementation block
@property (nonatomic,retain) CMKImageWell * imageWell;                                                                  //@synthesize imageWell=_imageWell - In the implementation block
@property (nonatomic,retain) CMKShutterButton * stillDuringVideoButton;                                                 //@synthesize stillDuringVideoButton=_stillDuringVideoButton - In the implementation block
@property (nonatomic,retain) CMKShutterButton * shutterButton;                                                          //@synthesize shutterButton=_shutterButton - In the implementation block
@property (nonatomic,retain) CMKFilterButton * filterButton;                                                            //@synthesize filterButton=_filterButton - In the implementation block
@property (nonatomic,retain) CMKFlipButton * flipButton;                                                                //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) CMKFlashButton * flashButton;                                                              //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) CMKElapsedTimeView * elapsedTimeView;                                                      //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CMKHDRButton * HDRButton;                                                                  //@synthesize HDRButton=_HDRButton - In the implementation block
@property (nonatomic,retain) CMKTimerButton * timerButton;                                                              //@synthesize timerButton=_timerButton - In the implementation block
@property (nonatomic,retain) CMKSlalomIndicatorView * slalomIndicatorView;                                              //@synthesize slalomIndicatorView=_slalomIndicatorView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                                   //@synthesize cancelButton=_cancelButton - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CMKBottomBarDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CMKBottomBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)orientation;
-(void)updateConstraints;
-(UIView *)backgroundView;
-(void)setOrientation:(long long)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)cancelButton;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackgroundStyleAnimated:(BOOL)arg1 ;
-(void)_commonCMKBottomBarInitialization;
-(void)_removeAllConstraints;
-(void)_updateImageWellInsetsForOrientation;
-(CMKShutterButton *)shutterButton;
-(CMKModeDial *)modeDial;
-(UIView *)_shutterButtomBottomLayoutSpacer;
-(CMKImageWell *)imageWell;
-(UIView *)_imageWellBottomLayoutSpacer;
-(CMKFilterButton *)filterButton;
-(UIView *)_filterButtonBottomLayoutSpacer;
-(CMKSlalomIndicatorView *)slalomIndicatorView;
-(UIView *)_slalomIndicatorBottomLayoutSpacer;
-(CMKShutterButton *)stillDuringVideoButton;
-(UIView *)_stillDuringVideoButtonBottomLayoutSpacer;
-(void)_setupHorizontalBackgroundViewConstraints;
-(void)_setupHorizontalModeDialConstraints;
-(void)_setupHorizontalShutterButtonConstraints;
-(void)_setupHorizontalImageWellConstraints;
-(void)_setupHorizontalFilterButtonConstraints;
-(void)_setupHorizontalSlalomIndicatorConstraints;
-(void)_setupHorizontalStillDuringVideoButtonConstraints;
-(void)_setupHorizontalCancelButtonConstraints;
-(CMKFlipButton *)flipButton;
-(CMKElapsedTimeView *)elapsedTimeView;
-(UIView *)_elapsedTimeViewCenteringLayoutSpacer;
-(CMKFlashButton *)flashButton;
-(void)_setupVerticalBackgroundViewConstraints;
-(void)_setupVerticalFlipButtonConstraints;
-(void)_setupVerticalElapsedTimeViewConstraints;
-(void)_setupVerticalShutterButtonConstraints;
-(void)_setupVerticalModeDialConstraints;
-(void)_setupVerticalImageWellConstraints;
-(void)_setupVerticalSlalomIndicatorConstraints;
-(void)_setupVerticalCancelButtonConstraints;
-(void)_setupHorizontalConstraints;
-(void)_setupVerticalConstraints;
-(id)_currentMenuButtons;
-(CMKExpandableMenuButton *)_expandedMenuButton;
-(void)_layoutMenuButtons:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(CGRect*)arg5 ;
-(void)_layoutForHorizontalOrientation;
-(void)_layoutForVerticalOrientation;
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
-(id)initWithOrientation:(long long)arg1 ;
-(void)setModeDial:(CMKModeDial *)arg1 ;
-(void)setImageWell:(CMKImageWell *)arg1 ;
-(void)setStillDuringVideoButton:(CMKShutterButton *)arg1 ;
-(void)setShutterButton:(CMKShutterButton *)arg1 ;
-(void)setFilterButton:(CMKFilterButton *)arg1 ;
-(void)setFlipButton:(CMKFlipButton *)arg1 ;
-(void)setElapsedTimeView:(CMKElapsedTimeView *)arg1 ;
-(void)setSlalomIndicatorView:(CMKSlalomIndicatorView *)arg1 ;
-(void)setHDRButton:(CMKHDRButton *)arg1 ;
-(void)setFlashButton:(CMKFlashButton *)arg1 ;
-(void)setTimerButton:(CMKTimerButton *)arg1 ;
-(UIView *)_hdrButtonCenteringLayoutSpacer;
@end

