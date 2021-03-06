/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class IKViewElement, UIView;

@interface _TVDeckViewController : UIViewController {

	IKViewElement* _deckElement;
	UIView* _pendingView;
	UIView* _currentView;

}

@property (nonatomic,retain) IKViewElement * deckElement;              //@synthesize deckElement=_deckElement - In the implementation block
@property (nonatomic,retain) UIView * pendingView;                     //@synthesize pendingView=_pendingView - In the implementation block
@property (nonatomic,retain) UIView * currentView;                     //@synthesize currentView=_currentView - In the implementation block
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setCurrentView:(UIView *)arg1 ;
-(UIView *)currentView;
-(void)updateWithDeckElement:(id)arg1 ;
-(void)_scrollingGridViewReady:(id)arg1 ;
-(UIView *)pendingView;
-(void)_dissolveToPendingView;
-(void)setPendingView:(UIView *)arg1 ;
-(void)_deckImageViewReady:(id)arg1 ;
-(void)_resumePreview;
-(void)_pausePreview;
-(IKViewElement *)deckElement;
-(void)setDeckElement:(IKViewElement *)arg1 ;
@end

