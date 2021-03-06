//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMViewController.h"

#import "UIScrollViewDelegate.h"

@class IMViewControllerTransition, NSArray, NSString, UITableView, UIView, UIViewController;

@interface IMSegmentedViewController : IMViewController <UIScrollViewDelegate>
{
    long long _selectedIndex;	// 40 = 0x28
    NSArray *_viewControllers;	// 48 = 0x30
    IMViewControllerTransition *_defaultTransition;	// 56 = 0x38
    id <IMSegmentedViewControllerDelegate> _delegate;	// 64 = 0x40
    UITableView *_contentTableView;	// 72 = 0x48
    double _headerInset;	// 80 = 0x50
    UIView *_contentView;	// 88 = 0x58
    UIView *_headerView;	// 96 = 0x60
    double _headerHeight;	// 104 = 0x68
}

@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) id <IMSegmentedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMViewControllerTransition *defaultTransition; // @synthesize defaultTransition=_defaultTransition;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void)didSelectViewController:(id)arg1;	// IMP=0x00000001001f86dc
- (_Bool)shouldSelectViewController:(id)arg1 force:(_Bool)arg2;	// IMP=0x00000001001f864c
- (void)showViewController:(id)arg1 sendAppearaneMessages:(_Bool)arg2;	// IMP=0x00000001001f8564
- (void)reconcileChildViewControllersWithOldViewControllers:(id)arg1 newViewControllers:(id)arg2;	// IMP=0x00000001001f831c
- (id)viewControllerAtIndex:(long long)arg1;	// IMP=0x00000001001f82a4
- (void)selectDefaultIndex;	// IMP=0x00000001001f8248
- (void)setSelectedIndex:(long long)arg1 withTransition:(id)arg2 force:(_Bool)arg3;	// IMP=0x00000001001f804c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001001f7f98
- (void)setSelectedIndex:(long long)arg1 withTransition:(id)arg2;	// IMP=0x00000001001f7f88
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000001001f7f38
@property(readonly, nonatomic) UIViewController *selectedViewController;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000001001f7d18
- (void)loadView;	// IMP=0x00000001001f7be4
- (void)_addHeaderView;	// IMP=0x00000001001f7a4c
- (void)dealloc;	// IMP=0x00000001001f79c4
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001001f7988
- (void)releaseViews;	// IMP=0x00000001001f7918
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001001f78d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

