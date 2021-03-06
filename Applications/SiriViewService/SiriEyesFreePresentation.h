//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SVSSuggestionsViewControllerDelegate.h"
#import "SiriUIPresentation.h"

@class NSString, SVSSuggestionsViewController;

@interface SiriEyesFreePresentation : UIViewController <SVSSuggestionsViewControllerDelegate, SiriUIPresentation>
{
    _Bool _hasReportedPresentation;	// 8 = 0x8
    id <SiriUIPresentationDataSource> _dataSource;	// 16 = 0x10
    id <SiriUIPresentationDelegate> _delegate;	// 24 = 0x18
    SVSSuggestionsViewController *_siriUnavailableViewController;	// 32 = 0x20
}

@property(readonly, nonatomic, getter=_siriUnavailableViewController) SVSSuggestionsViewController *siriUnavailableViewController; // @synthesize siriUnavailableViewController=_siriUnavailableViewController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100038b98
- (double)contentWidthForSuggestionsViewController:(id)arg1;	// IMP=0x0000000100038ac4
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x0000000100038a68
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x00000001000389ec
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x00000001000389e8
- (void)viewDidLoad;	// IMP=0x00000001000387a4
- (_Bool)supportsTextInput;	// IMP=0x000000010003879c
- (_Bool)shouldDismissForIdling;	// IMP=0x0000000100038794
- (double)idleTimerInterval;	// IMP=0x000000010003878c
- (void)_didPresentItemsAtIndexPaths:(id)arg1;	// IMP=0x00000001000384d4
- (void)reloadItemsAtIndexPaths:(id)arg1;	// IMP=0x00000001000384c8
- (void)insertItemsAtIndexPaths:(id)arg1;	// IMP=0x00000001000384bc
- (id)viewController;	// IMP=0x00000001000384b8
- (long long)options;	// IMP=0x00000001000384b0
- (void)siriDidDeactivate;	// IMP=0x0000000100038468
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x00000001000381b8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000100038084
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000100038020
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100037fbc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100037fa0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

