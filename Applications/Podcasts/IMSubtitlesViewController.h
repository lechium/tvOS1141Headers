//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AVMediaSelectionGroup, AVMediaSelectionOption, NSString, UITableView;

@interface IMSubtitlesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <IMSubtitlesViewControllerDelegate> _delegate;	// 8 = 0x8
    AVMediaSelectionGroup *_selectionGroup;	// 16 = 0x10
    AVMediaSelectionOption *_originalSelectionOption;	// 24 = 0x18
    AVMediaSelectionOption *_selectedSelectionOption;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AVMediaSelectionOption *selectedSelectionOption; // @synthesize selectedSelectionOption=_selectedSelectionOption;
@property(retain, nonatomic) AVMediaSelectionOption *originalSelectionOption; // @synthesize originalSelectionOption=_originalSelectionOption;
@property(retain, nonatomic) AVMediaSelectionGroup *selectionGroup; // @synthesize selectionGroup=_selectionGroup;
@property(nonatomic) __weak id <IMSubtitlesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010025c1ac
- (void)_cancelButtonTapped:(id)arg1;	// IMP=0x000000010025c0a4
- (void)_doneButtonTapped:(id)arg1;	// IMP=0x000000010025bf84
- (id)selectionOptionAtIndexPath:(id)arg1;	// IMP=0x000000010025bebc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010025bc0c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010025b8a0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010025b82c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010025b678
- (void)viewDidLoad;	// IMP=0x000000010025b42c
- (id)initWithSelectionGroup:(id)arg1 selectionOption:(id)arg2;	// IMP=0x000000010025b368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

