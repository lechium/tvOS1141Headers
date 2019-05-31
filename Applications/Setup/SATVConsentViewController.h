//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SATVChoiceViewDataSource.h"
#import "SATVChoiceViewDelegate.h"

@class NSString, SATVChoiceView;

@interface SATVConsentViewController : UIViewController <SATVChoiceViewDelegate, SATVChoiceViewDataSource>
{
    _Bool _centeredHorizontally;	// 8 = 0x8
    SATVChoiceView *_choiceView;	// 16 = 0x10
    id <SATVConsentViewControllerDelegate> _delegate;	// 24 = 0x18
    id <SATVConsentViewControllerDataSource> _dataSource;	// 32 = 0x20
    double _maximumChoiceViewWidth;	// 40 = 0x28
    double _choiceViewHorizontalCenter;	// 48 = 0x30
}

@property(nonatomic, getter=isCenteredHorizontally) _Bool centeredHorizontally; // @synthesize centeredHorizontally=_centeredHorizontally;
@property(nonatomic) double choiceViewHorizontalCenter; // @synthesize choiceViewHorizontalCenter=_choiceViewHorizontalCenter;
@property(nonatomic) double maximumChoiceViewWidth; // @synthesize maximumChoiceViewWidth=_maximumChoiceViewWidth;
@property(nonatomic) __weak id <SATVConsentViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SATVConsentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SATVChoiceView *choiceView; // @synthesize choiceView=_choiceView;
- (void).cxx_destruct;	// IMP=0x000000010001c948
- (void)didSelectAuxiliaryButton;	// IMP=0x000000010001c7c0
- (void)didSelectFooterButton;	// IMP=0x000000010001c714
- (void)didSelectChoice:(unsigned long long)arg1;	// IMP=0x000000010001c684
- (id)auxiliaryButtonViewForChoiceView:(id)arg1;	// IMP=0x000000010001c5d0
- (id)footerButtonViewForChoiceView:(id)arg1;	// IMP=0x000000010001c51c
- (id)auxiliaryButtonTextForChoiceView:(id)arg1;	// IMP=0x000000010001c468
- (id)footerButtonTextForChoiceView:(id)arg1;	// IMP=0x000000010001c3b4
- (id)footnoteTextForChoiceView:(id)arg1;	// IMP=0x000000010001c300
- (id)choiceHeaderButtonTextForChoiceView:(id)arg1;	// IMP=0x000000010001c278
- (id)subtitleTextForChoiceView:(id)arg1;	// IMP=0x000000010001c21c
- (id)titleTextForChoiceView:(id)arg1;	// IMP=0x000000010001c1c0
- (id)choiceView:(id)arg1 textForChoice:(unsigned long long)arg2;	// IMP=0x000000010001c0f8
- (id)preferredFocusEnvironments;	// IMP=0x000000010001c03c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001be68
- (void)viewDidLayoutSubviews;	// IMP=0x000000010001bc84
- (void)loadView;	// IMP=0x000000010001bb98
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010001bafc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
