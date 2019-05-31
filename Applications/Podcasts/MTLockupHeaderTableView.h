//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableView.h"

#import "MTTableViewRowDataDelegate.h"

@class NSString, UIView, UIView<MTLockupHeaderViewProtocol>;

@interface MTLockupHeaderTableView : MTTableView <MTTableViewRowDataDelegate>
{
    _Bool _needsToUpdateLayout;	// 8 = 0x8
    _Bool _forcePinned;	// 9 = 0x9
    _Bool _forceTucked;	// 10 = 0xa
    struct CGPoint _forcedContentOffset;	// 16 = 0x10
    _Bool _alwaysPinnedToTop;	// 32 = 0x20
    _Bool _lockupViewShouldPin;	// 33 = 0x21
    _Bool _headerPinned;	// 34 = 0x22
    double _heightForLockupViewPinning;	// 40 = 0x28
    UIView<MTLockupHeaderViewProtocol> *_lockupHeaderView;	// 48 = 0x30
    UIView *_tuckingHeaderView;	// 56 = 0x38
    double _navBarMaxY;	// 64 = 0x40
}

@property(readonly, nonatomic) double navBarMaxY; // @synthesize navBarMaxY=_navBarMaxY;
@property(readonly, nonatomic, getter=isHeaderPinned) _Bool headerPinned; // @synthesize headerPinned=_headerPinned;
@property(nonatomic) _Bool lockupViewShouldPin; // @synthesize lockupViewShouldPin=_lockupViewShouldPin;
@property(nonatomic) _Bool alwaysPinnedToTop; // @synthesize alwaysPinnedToTop=_alwaysPinnedToTop;
@property(retain, nonatomic) UIView *tuckingHeaderView; // @synthesize tuckingHeaderView=_tuckingHeaderView;
@property(retain, nonatomic) UIView<MTLockupHeaderViewProtocol> *lockupHeaderView; // @synthesize lockupHeaderView=_lockupHeaderView;
- (void).cxx_destruct;	// IMP=0x00000001000f7cb8
- (double)tabBarHeight;	// IMP=0x00000001000f7ba4
- (double)navBarHeight;	// IMP=0x00000001000f7af0
- (_Bool)_needsToReorderHeader;	// IMP=0x00000001000f79b0
- (void)_reorderHeaders;	// IMP=0x00000001000f77dc
- (void)reorderHeadersIfNeeded;	// IMP=0x00000001000f7798
- (void)setNavBarMaxY:(double)arg1;	// IMP=0x00000001000f76bc
- (void)updateNavBarMaxY;	// IMP=0x00000001000f75bc
- (void)updateLayoutForCurrentContentOffset;	// IMP=0x00000001000f7140
- (void)updateLayout;	// IMP=0x00000001000f6cf8
- (struct CGRect)adjustedVisibleRect:(struct CGRect)arg1 forFloatingSectionHeaderInTableView:(id)arg2 heightCanBeGuessed:(_Bool)arg3;	// IMP=0x00000001000f6c1c
- (void)_updateVisibleHeadersAndFootersNow:(_Bool)arg1;	// IMP=0x00000001000f6bc4
- (void)_notifyDidScroll;	// IMP=0x00000001000f6b68
- (void)setPinnableHeaderView:(id)arg1;	// IMP=0x00000001000f6b64
- (void)setPinsHeaderToTop:(_Bool)arg1;	// IMP=0x00000001000f6b60
- (void)setPinsHeaderToTop:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000f6b5c
- (void)layoutSubviews;	// IMP=0x00000001000f6ae8
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000001000f6a44
- (void)setHeaderPinned:(_Bool)arg1;	// IMP=0x00000001000f6884
@property(nonatomic, getter=isTuckingEnabled) _Bool tuckingEnabled;
@property(nonatomic) double heightForLockupViewPinning; // @synthesize heightForLockupViewPinning=_heightForLockupViewPinning;
- (struct CGPoint)contentOffsetForPinningHeaderPinned;	// IMP=0x00000001000f65e0
- (struct CGPoint)contentOffsetForTuckingHeaderVisible;	// IMP=0x00000001000f64ec
- (struct CGPoint)contentOffsetForTuckingHeaderTucked;	// IMP=0x00000001000f63b4
- (void)_clearForcedFlags;	// IMP=0x00000001000f6380
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000f62fc
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000f6270
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000001000f6220
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x00000001000f6078
- (void)setContentOffsetForced:(struct CGPoint)arg1;	// IMP=0x00000001000f601c
- (void)setNeedsToUpdateLayout;	// IMP=0x00000001000f6000
- (void)scrollHeaderPinnedAnimated:(_Bool)arg1;	// IMP=0x00000001000f5f14
- (void)scrollHeaderVisibleAnimated:(_Bool)arg1;	// IMP=0x00000001000f5ed8
- (void)scrollHeaderTuckedAnimated:(_Bool)arg1;	// IMP=0x00000001000f5e54
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000001000f5dd8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000f5d08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MTLockupHeaderTableViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

