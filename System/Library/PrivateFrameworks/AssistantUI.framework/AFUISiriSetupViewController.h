/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol AFUISiriSetupViewControllerDelegate;
@class UIView, _UIBackdropView, UIStatusBar;

@interface AFUISiriSetupViewController : UIViewController {

	UIView* _contentView;
	_UIBackdropView* _backdropView;
	BOOL _backdropViewVisible;
	BOOL _visible;
	BOOL _lastTimeShown;
	id<AFUISiriSetupViewControllerDelegate> _delegate;
	UIStatusBar* _statusBar;

}

@property (setter=_setStatusBar:,getter=_statusBar,nonatomic,retain) UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriSetupViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL lastTimeShown;                                                           //@synthesize lastTimeShown=_lastTimeShown - In the implementation block
-(id)init;
-(id<AFUISiriSetupViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AFUISiriSetupViewControllerDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)setVisible:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)isVisible;
-(void)_addStatusBar;
-(void)_removeStatusBar;
-(id)dimBackdropSettings;
-(CGRect)_statusBarFrame;
-(void)_setStatusBar:(id)arg1 ;
-(id)_statusBar;
-(void)setLastTimeShown:(BOOL)arg1 ;
-(void)_setBackdropVisible:(BOOL)arg1 ;
-(void)_continueTapped:(id)arg1 ;
-(void)_laterTapped:(id)arg1 ;
-(BOOL)lastTimeShown;
@end
