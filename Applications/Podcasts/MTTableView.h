//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSString, UIColor, UIImage, UIRefreshControl, UIView;

@interface MTTableView : UITableView <UIGestureRecognizerDelegate>
{
    NSIndexPath *_presentationPath;	// 8 = 0x8
    UIView *_bottomFillView;	// 16 = 0x10
    UIImage *_emptyCircleImage;	// 24 = 0x18
    UIRefreshControl *_refreshControl;	// 32 = 0x20
    _Bool _pinsHeaderToTop;	// 40 = 0x28
    _Bool _sectionFooterFloatingDisabled;	// 41 = 0x29
    _Bool _adjustContentOffsetForRefreshControlAsNeeded;	// 42 = 0x2a
    _Bool _disableRefreshControlWhileEditing;	// 43 = 0x2b
    UIColor *_bottomFillColor;	// 48 = 0x30
    UIView *_pinnableHeaderView;	// 56 = 0x38
    UIView *_hiddenHeaderView;	// 64 = 0x40
    UIView *_hiddenFooterView;	// 72 = 0x48
    UIView *_overlayView;	// 80 = 0x50
}

@property(nonatomic) _Bool disableRefreshControlWhileEditing; // @synthesize disableRefreshControlWhileEditing=_disableRefreshControlWhileEditing;
@property(nonatomic) _Bool adjustContentOffsetForRefreshControlAsNeeded; // @synthesize adjustContentOffsetForRefreshControlAsNeeded=_adjustContentOffsetForRefreshControlAsNeeded;
@property(nonatomic) _Bool sectionFooterFloatingDisabled; // @synthesize sectionFooterFloatingDisabled=_sectionFooterFloatingDisabled;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIView *hiddenFooterView; // @synthesize hiddenFooterView=_hiddenFooterView;
@property(retain, nonatomic) UIView *hiddenHeaderView; // @synthesize hiddenHeaderView=_hiddenHeaderView;
@property(retain, nonatomic) UIView *pinnableHeaderView; // @synthesize pinnableHeaderView=_pinnableHeaderView;
@property(retain, nonatomic) UIColor *bottomFillColor; // @synthesize bottomFillColor=_bottomFillColor;
@property(nonatomic) _Bool pinsHeaderToTop; // @synthesize pinsHeaderToTop=_pinsHeaderToTop;
- (void).cxx_destruct;	// IMP=0x000000010004b728
- (_Bool)allowsFooterViewsToFloat;	// IMP=0x000000010004b630
- (id)preferredFocusedView;	// IMP=0x000000010004b594
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x000000010004b560
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x000000010004b52c
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x000000010004b4f8
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000010004b4c4
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x000000010004b490
- (struct UIEdgeInsets)insetsFromRefreshControl;	// IMP=0x000000010004b3b4
- (void)setRefreshControl:(id)arg1;	// IMP=0x000000010004b334
- (void)enablePullToRefresh;	// IMP=0x000000010004b294
- (void)disablePullToRefresh;	// IMP=0x000000010004b25c
- (void)updateRefreshControlEnabledState;	// IMP=0x000000010004b1c8
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010004b150
- (void)setPinsHeaderToTop:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010004afe8
- (void)setTableFooterView:(id)arg1;	// IMP=0x000000010004ac10
- (void)layoutSubviews;	// IMP=0x000000010004a70c

// Remaining properties
@property(nonatomic) __weak id <MTTableViewDataSource> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

