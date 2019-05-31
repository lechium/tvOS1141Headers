/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol SKStoreProductActivityViewControllerDelegate, SKUIServiceProductActivityViewController;
@class SKInvocationQueueProxy, _UIAsyncInvocation, SKRemoteProductActivityViewController, NSDictionary, _SKStoreProductActivityAnimationController, NSString;

@interface SKStoreProductActivityViewController : UIViewController <UIViewControllerTransitioningDelegate> {

	id<SKStoreProductActivityViewControllerDelegate> _delegate;
	SKInvocationQueueProxy*<SKUIServiceProductActivityViewController> _serviceProxy;
	_UIAsyncInvocation* _cancelRequest;
	SKRemoteProductActivityViewController* _remoteViewController;
	NSDictionary* _parameters;
	_SKStoreProductActivityAnimationController* _animationController;

}

@property (assign,nonatomic) id<SKStoreProductActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SKStoreProductActivityViewControllerDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SKStoreProductActivityViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_viewTapped:(id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
@end

