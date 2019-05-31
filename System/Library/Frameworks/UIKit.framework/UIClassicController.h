/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow, UIStatusBarViewController, UIZoomViewController;

@interface UIClassicController : NSObject {

	UIWindow* _window;
	UIStatusBarViewController* _statusBarViewController;
	UIZoomViewController* _zoomViewController;
	BOOL _hidesStatusBarFiller;

}
+(id)sharedClassicController;
-(id)_window;
-(void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2 ;
-(void)_setupWindow;
-(BOOL)isClassicControlWindow:(id)arg1 ;
-(void)setZoomed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_supportsZoom;
-(BOOL)_shouldHideStatusBar;
-(BOOL)isZoomed;
-(void)setZoomed:(BOOL)arg1 ;
-(void)_initializeStatusBarOrientation;
-(void)_classicChangeStatusBarOrientation:(id)arg1 ;
-(void)_classicChangeStatusBarOrientationFinished:(id)arg1 finished:(BOOL)arg2 context:(id)arg3 ;
-(BOOL)drawsStatusBarFiller;
-(void)setDrawsStatusBarFiller:(BOOL)arg1 ;
@end
