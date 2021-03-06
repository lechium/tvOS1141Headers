//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSObject<OS_dispatch_source>, NSString, UIActivityIndicatorView, UILabel, UIVisualEffectView;

@interface TVSettingsActivityIndicatorViewController : UIViewController
{
    UILabel *_activityTextLabel;	// 8 = 0x8
    _Bool _showingSpinner;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_spinnerTimer;	// 24 = 0x18
    UIActivityIndicatorView *_spinnerView;	// 32 = 0x20
    UIVisualEffectView *_visualEffectView;	// 40 = 0x28
    _Bool _activityIndicatorHidden;	// 48 = 0x30
    NSString *_activityText;	// 56 = 0x38
    double _activityIndicatorDelay;	// 64 = 0x40
}

@property(nonatomic) double activityIndicatorDelay; // @synthesize activityIndicatorDelay=_activityIndicatorDelay;
@property(nonatomic, getter=isActivityIndicatorHidden) _Bool activityIndicatorHidden; // @synthesize activityIndicatorHidden=_activityIndicatorHidden;
@property(copy, nonatomic) NSString *activityText; // @synthesize activityText=_activityText;
- (void).cxx_destruct;	// IMP=0x000000010009b4d4
- (void)viewDidLayoutSubviews;	// IMP=0x000000010009b064
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010009ae70
- (void)loadView;	// IMP=0x000000010009abf8
- (void)dealloc;	// IMP=0x000000010009ab98
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010009ab14

@end

