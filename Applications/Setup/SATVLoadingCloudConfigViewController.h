//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVActionStep.h"

@class MCProfileConnection, NSString, SATVCloudConfigUtility, SATVCloudLoginViewController, SATVHeaderView, UIActivityIndicatorView, UIView;

@interface SATVLoadingCloudConfigViewController : SATVStepViewController <SATVActionStep>
{
    _Bool _loading;	// 8 = 0x8
    _Bool _waiting;	// 9 = 0x9
    _Bool _needCredentials;	// 10 = 0xa
    CDUnknownBlockType completionHandler;	// 16 = 0x10
    SATVHeaderView *_headerView;	// 24 = 0x18
    UIActivityIndicatorView *_activityIndicatorView;	// 32 = 0x20
    UIView *_activityIndicatorContainerView;	// 40 = 0x28
    SATVCloudLoginViewController *_loginViewController;	// 48 = 0x30
    MCProfileConnection *_profileConnection;	// 56 = 0x38
    SATVCloudConfigUtility *_cloudUtility;	// 64 = 0x40
}

+ (_Bool)isSupported;	// IMP=0x000000010003dc04
+ (id)stableKey;	// IMP=0x000000010003cee8
@property(nonatomic) _Bool needCredentials; // @synthesize needCredentials=_needCredentials;
@property(nonatomic, getter=isWaiting) _Bool waiting; // @synthesize waiting=_waiting;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) SATVCloudConfigUtility *cloudUtility; // @synthesize cloudUtility=_cloudUtility;
@property(retain, nonatomic) MCProfileConnection *profileConnection; // @synthesize profileConnection=_profileConnection;
@property(retain, nonatomic) SATVCloudLoginViewController *loginViewController; // @synthesize loginViewController=_loginViewController;
@property(retain, nonatomic) UIView *activityIndicatorContainerView; // @synthesize activityIndicatorContainerView=_activityIndicatorContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) SATVHeaderView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
- (void).cxx_destruct;	// IMP=0x000000010003f4d4
- (void)_hideActivityIndicator;	// IMP=0x000000010003f274
- (void)_showActivityIndicator;	// IMP=0x000000010003f1b0
- (void)_updateCloudConfig;	// IMP=0x000000010003f0ec
- (void)_enrollmentComplete;	// IMP=0x000000010003ee70
- (void)_enrollWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x000000010003e284
- (void)_setupLabels;	// IMP=0x000000010003e000
- (void)_setSubtitleTitle:(id)arg1;	// IMP=0x000000010003df2c
- (void)_setTitle:(id)arg1;	// IMP=0x000000010003de58
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010003db4c
- (void)viewDidLayoutSubviews;	// IMP=0x000000010003d85c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010003d614
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010003d5e0
- (void)loadView;	// IMP=0x000000010003d084
- (void)dealloc;	// IMP=0x000000010003d018
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010003cf14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isConfigured;
@property(readonly) Class superclass;

@end

