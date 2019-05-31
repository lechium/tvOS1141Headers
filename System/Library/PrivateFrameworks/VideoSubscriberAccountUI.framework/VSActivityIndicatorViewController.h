/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol OS_dispatch_source;
@class UILabel, NSObject, UIActivityIndicatorView, NSString, VSFontCenter;

@interface VSActivityIndicatorViewController : UIViewController {

	UILabel* _activityTextLabel;
	BOOL _showingSpinner;
	NSObject*<OS_dispatch_source> _spinnerTimer;
	UIActivityIndicatorView* _spinnerView;
	BOOL _activityIndicatorHidden;
	NSString* _activityText;
	double _activityIndicatorDelay;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,retain) VSFontCenter * fontCenter;                                                  //@synthesize fontCenter=_fontCenter - In the implementation block
@property (nonatomic,copy) NSString * activityText;                                                      //@synthesize activityText=_activityText - In the implementation block
@property (assign,getter=isActivityIndicatorHidden,nonatomic) BOOL activityIndicatorHidden;              //@synthesize activityIndicatorHidden=_activityIndicatorHidden - In the implementation block
@property (assign,nonatomic) double activityIndicatorDelay;                                              //@synthesize activityIndicatorDelay=_activityIndicatorDelay - In the implementation block
-(void)dealloc;
-(id)_textColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(VSFontCenter *)fontCenter;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(void)setActivityText:(NSString *)arg1 ;
-(NSString *)activityText;
-(BOOL)isActivityIndicatorHidden;
-(void)setActivityIndicatorHidden:(BOOL)arg1 ;
-(double)activityIndicatorDelay;
-(void)setActivityIndicatorDelay:(double)arg1 ;
@end
