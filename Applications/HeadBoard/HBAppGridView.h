//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HBAppGridLayoutDelegatePrivate.h"
#import "HBRootCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDataSourcePrefetching.h"
#import "UICollectionViewDelegate_Private.h"
#import "UIScrollViewDelegate.h"
#import "_HBTouchablePanGestureRecognizerDelegate.h"

@class HBAppGridLayout, HBRootCell, HBSingleCellHostView, NSIndexPath, NSString, TVSStateMachine, UICollectionView, UIFocusGuide, UIScrollView, UITapGestureRecognizer, _HBTouchablePanGestureRecognizer;

@interface HBAppGridView : UIView <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegate_Private, UIScrollViewDelegate, HBRootCellDelegate, _HBTouchablePanGestureRecognizerDelegate, HBAppGridLayoutDelegatePrivate>
{
    struct {
        unsigned int delegatePreferredFocusIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateShowPressCompleteForItemIndexPath:1;
        unsigned int delegateDidLongPressItemAtIndexPath:1;
        unsigned int delegateDidFocusItemAtIndexPath:1;
        unsigned int delegateDidEndDecelerating:1;
        unsigned int delegateDidScrollCloseEnoughToTop:1;
        unsigned int delegateDidStableTouchBeginWhileEditing:1;
        unsigned int delegateDidStableTouchEndWhileEditing:1;
        unsigned int delegateDidDidBeginStableEditing:1;
        unsigned int delegateDidDidEndStableEditing:1;
        unsigned int dataSourceNumberOfApplicationsInGridView:1;
        unsigned int dataSourceCanMoveItemAtIndexPath:1;
        unsigned int dataSourceMoveItemAtIndexPathToIndexPath:1;
        unsigned int dataSourceDroppedItemAtIndexPathOnItemAtIndexPath:1;
        unsigned int dataSourceDroppedItemAtIndexPathOutOfBounds:1;
    } _flags;	// 8 = 0x8
    _Bool _dockMode;	// 12 = 0xc
    _Bool _editing;	// 13 = 0xd
    _Bool _decelerating;	// 14 = 0xe
    _Bool _shouldIgnoreHeaderViewForFocus;	// 15 = 0xf
    _Bool _shouldFocusTopShelf;	// 16 = 0x10
    _Bool _scrollingToTop;	// 17 = 0x11
    _Bool _executingPerformUpdateBlock;	// 18 = 0x12
    _Bool _didScrollForTimer;	// 19 = 0x13
    id <HBAppGridViewDelegate> _delegate;	// 24 = 0x18
    id <HBAppGridViewDataSource> _dataSource;	// 32 = 0x20
    UIView *_headerView;	// 40 = 0x28
    NSIndexPath *_editingIndexPath;	// 48 = 0x30
    UICollectionView *_gridView;	// 56 = 0x38
    HBAppGridLayout *_layout;	// 64 = 0x40
    UIFocusGuide *_headerViewExitGuide;	// 72 = 0x48
    CDUnknownBlockType _scrollCompletionBlock;	// 80 = 0x50
    TVSStateMachine *_editStateMachine;	// 88 = 0x58
    NSIndexPath *_dropTargetIndexPath;	// 96 = 0x60
    UIScrollView *_editingScrollView;	// 104 = 0x68
    UIView *_editingCellProxyContainer;	// 112 = 0x70
    HBSingleCellHostView *_editingCellProxy;	// 120 = 0x78
    _HBTouchablePanGestureRecognizer *_editPanGesture;	// 128 = 0x80
    UITapGestureRecognizer *_editUpGesture;	// 136 = 0x88
    UITapGestureRecognizer *_editDownGesture;	// 144 = 0x90
    UITapGestureRecognizer *_editLeftGesture;	// 152 = 0x98
    UITapGestureRecognizer *_editRightGesture;	// 160 = 0xa0
    HBRootCell *_dockSelectedCell;	// 168 = 0xa8
    struct CGPoint _lastVelocity;	// 176 = 0xb0
    struct UIEdgeInsets _editingClampInsets;	// 192 = 0xc0
}

+ (void)_removeJiggleFromView:(id)arg1;	// IMP=0x0000000100080a04
+ (void)_applyJiggleToView:(id)arg1;	// IMP=0x00000001000808e0
+ (id)_jiggleTransformAnimation;	// IMP=0x000000010007b90c
+ (id)_jigglePositionAnimation;	// IMP=0x000000010007b3bc
+ (void)_shouldSetSelected:(_Bool)arg1 onCell:(id)arg2 withFocusAnimationCoordinator:(id)arg3;	// IMP=0x0000000100079a44
+ (void)initialize;	// IMP=0x0000000100078acc
@property(retain, nonatomic) HBRootCell *dockSelectedCell; // @synthesize dockSelectedCell=_dockSelectedCell;
@property(retain, nonatomic) UITapGestureRecognizer *editRightGesture; // @synthesize editRightGesture=_editRightGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editLeftGesture; // @synthesize editLeftGesture=_editLeftGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editDownGesture; // @synthesize editDownGesture=_editDownGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editUpGesture; // @synthesize editUpGesture=_editUpGesture;
@property(retain, nonatomic) _HBTouchablePanGestureRecognizer *editPanGesture; // @synthesize editPanGesture=_editPanGesture;
@property(nonatomic) _Bool didScrollForTimer; // @synthesize didScrollForTimer=_didScrollForTimer;
@property(retain, nonatomic) HBSingleCellHostView *editingCellProxy; // @synthesize editingCellProxy=_editingCellProxy;
@property(retain, nonatomic) UIView *editingCellProxyContainer; // @synthesize editingCellProxyContainer=_editingCellProxyContainer;
@property(retain, nonatomic) UIScrollView *editingScrollView; // @synthesize editingScrollView=_editingScrollView;
@property(nonatomic) struct CGPoint lastVelocity; // @synthesize lastVelocity=_lastVelocity;
@property(retain, nonatomic) NSIndexPath *dropTargetIndexPath; // @synthesize dropTargetIndexPath=_dropTargetIndexPath;
@property(retain, nonatomic) TVSStateMachine *editStateMachine; // @synthesize editStateMachine=_editStateMachine;
@property(nonatomic, getter=isExecutingPerformUpdateBlock) _Bool executingPerformUpdateBlock; // @synthesize executingPerformUpdateBlock=_executingPerformUpdateBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollCompletionBlock; // @synthesize scrollCompletionBlock=_scrollCompletionBlock;
@property(nonatomic, getter=isScrollingToTop) _Bool scrollingToTop; // @synthesize scrollingToTop=_scrollingToTop;
@property(retain, nonatomic) UIFocusGuide *headerViewExitGuide; // @synthesize headerViewExitGuide=_headerViewExitGuide;
@property(retain, nonatomic) HBAppGridLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) _Bool shouldFocusTopShelf; // @synthesize shouldFocusTopShelf=_shouldFocusTopShelf;
@property(nonatomic) _Bool shouldIgnoreHeaderViewForFocus; // @synthesize shouldIgnoreHeaderViewForFocus=_shouldIgnoreHeaderViewForFocus;
@property(nonatomic, getter=isDecelerating) _Bool decelerating; // @synthesize decelerating=_decelerating;
@property(nonatomic) struct UIEdgeInsets editingClampInsets; // @synthesize editingClampInsets=_editingClampInsets;
@property(retain, nonatomic) NSIndexPath *editingIndexPath; // @synthesize editingIndexPath=_editingIndexPath;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <HBAppGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <HBAppGridViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010008492c
- (void)_configureEditStateMachine;	// IMP=0x0000000100082858
- (struct CGRect)_editingAreaRect;	// IMP=0x0000000100082630
- (struct CGRect)_hoverRect;	// IMP=0x0000000100082608
- (struct CGRect)_visibleContentRect;	// IMP=0x0000000100082554
- (id)_scrollRegionIndexPathForCurrentEditingPosition;	// IMP=0x0000000100082430
- (double)_ratioIntoScrollRegion;	// IMP=0x0000000100082210
- (long long)_regionForCurrentEditingPosition;	// IMP=0x0000000100082130
- (void)_editingMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x0000000100081ebc
- (_Bool)_changeExceedsMovementThreshold:(struct CGPoint)arg1;	// IMP=0x0000000100081e88
- (_Bool)_canDropEditingCellOnProposedIndexPath:(id)arg1;	// IMP=0x0000000100081c6c
- (_Bool)_isEditingCellDroppable;	// IMP=0x0000000100081be8
- (void)_restartScrollTimer;	// IMP=0x0000000100081a6c
- (void)_cancelScrollTimer;	// IMP=0x0000000100081a20
- (void)_restartHoverTimer;	// IMP=0x00000001000819d8
- (void)_cancelHoverTimer;	// IMP=0x00000001000819b0
- (void)_handleEditRightGesture:(id)arg1;	// IMP=0x000000010008193c
- (void)_handleEditLeftGesture:(id)arg1;	// IMP=0x00000001000818c8
- (void)_handleEditDownGesture:(id)arg1;	// IMP=0x0000000100081854
- (void)_handleEditUpGesture:(id)arg1;	// IMP=0x00000001000817e0
- (void)_handleTouchEndWhileStable;	// IMP=0x0000000100081774
- (void)_handleTouchBeginWhileStable;	// IMP=0x000000010008170c
- (_Bool)_handlePanChangeForConfirmFolderEvent;	// IMP=0x0000000100081680
- (void)_scrollTimerExpired;	// IMP=0x0000000100081624
- (void)_hoverTimerExpired;	// IMP=0x00000001000815dc
- (void)_handlePanChangedEvent;	// IMP=0x000000010008143c
- (void)_handlePanBeginEvent;	// IMP=0x00000001000813d8
- (struct CGPoint)_genericHandlePanChange;	// IMP=0x0000000100080f5c
- (void)_handlePanAnimationEndEvent;	// IMP=0x0000000100080f58
- (void)_editPanGesture:(id)arg1;	// IMP=0x0000000100080e7c
- (void)gestureRecognizer:(id)arg1 touchesCanceled:(id)arg2 withEvent:(id)arg3;	// IMP=0x0000000100080e34
- (void)gestureRecognizer:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;	// IMP=0x0000000100080dec
- (void)gestureRecognizer:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;	// IMP=0x0000000100080da4
- (void)_notifyDelegateDidDidEndStableEditing;	// IMP=0x0000000100080d38
- (void)_notifyDelegateDidDidBeginStableEditing;	// IMP=0x0000000100080ccc
- (_Bool)_isPositionOutOfFolder:(struct CGPoint)arg1;	// IMP=0x0000000100080c0c
- (void)enableScrolling:(_Bool)arg1;	// IMP=0x00000001000808c8
- (void)stopJiggle;	// IMP=0x000000010008080c
- (void)startJiggle;	// IMP=0x0000000100080750
- (void)_scrollToIndexPath:(id)arg1;	// IMP=0x0000000100080220
- (void)_moveEditItemToIndexPath:(id)arg1;	// IMP=0x000000010008013c
- (_Bool)_handleTouchDuringAnimationEvent;	// IMP=0x000000010007ff44
- (_Bool)_handleTapDuringAnimationInDirection:(long long)arg1;	// IMP=0x000000010007fe40
- (void)_handleTapInDirection:(long long)arg1;	// IMP=0x000000010007fce8
- (void)_clearConfirmTransforms;	// IMP=0x000000010007fa94
- (void)_applyConfirmTransforms;	// IMP=0x000000010007f854
- (void)_cancelFolderCreateTimer;	// IMP=0x000000010007f7e8
- (void)_handleCreateFolderEvent;	// IMP=0x000000010007f5b0
- (void)_confirmFolderCreateTimerExpired;	// IMP=0x000000010007f568
- (void)_handleAlmostCreateFolderEvent;	// IMP=0x000000010007f55c
- (void)_confirmFolderCreateTimerAlmostExpired;	// IMP=0x000000010007f514
- (void)_beginConfirmFolderCreateTimer;	// IMP=0x000000010007f4d0
- (_Bool)_handleHoverEvent;	// IMP=0x000000010007f0c0
- (void)_handleScrollEvent;	// IMP=0x000000010007eeac
- (void)_handleEndMovementEvent;	// IMP=0x000000010007e354
- (void)_handleSnapshotSafeEvent;	// IMP=0x000000010007e20c
- (void)_endGlobalEditingMode;	// IMP=0x000000010007df70
- (_Bool)_attemptToEndEditingModeWithReason:(long long)arg1;	// IMP=0x000000010007de9c
- (id)_handleEditEndWithReasonEvent:(long long)arg1;	// IMP=0x000000010007de2c
- (_Bool)_beginGlobalEditingMode;	// IMP=0x000000010007d978
- (id)indexPathNearPosition:(struct CGPoint)arg1;	// IMP=0x000000010007d90c
- (void)endEditingWithReason:(long long)arg1;	// IMP=0x000000010007d7b8
- (void)startEditingWithSnapshotView:(id)arg1;	// IMP=0x000000010007d668
- (void)startEditing;	// IMP=0x000000010007d5cc
- (void)_startEditing;	// IMP=0x000000010007d530
- (void)_showPressCompleteNotification:(id)arg1;	// IMP=0x000000010007d414
- (void)_cellPressDidClearNotification:(id)arg1;	// IMP=0x000000010007d310
- (void)_setEditedCellCenter:(struct CGPoint)arg1;	// IMP=0x000000010007d274
- (void)_clearEditedPositionAnimations;	// IMP=0x000000010007d1a0
- (id)_editingCell;	// IMP=0x000000010007d114
- (void)_configureStyleForCell:(id)arg1;	// IMP=0x000000010007cf28
- (void)didLongPressCell:(id)arg1;	// IMP=0x000000010007ce50
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010007cd50
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010007cca4
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010007cc34
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010007cbc4
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010007cb50
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010007cb48
- (struct CGRect)_collectionViewHoverOverlayRect:(id)arg1 layout:(id)arg2;	// IMP=0x000000010007cb3c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000010007ca9c
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x000000010007ca7c
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010007ca5c
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010007c980
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010007c8f0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010007c854
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010007c7dc
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x000000010007c7cc
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000010007c6cc
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000010007c508
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000010007c430
- (id)preferredFocusEnvironments;	// IMP=0x000000010007c248
- (void)moveToTop;	// IMP=0x000000010007c1fc
- (void)scrollToBottom:(CDUnknownBlockType)arg1;	// IMP=0x000000010007be88
- (void)scrollToBottom;	// IMP=0x000000010007be78
- (void)scrollToTop:(CDUnknownBlockType)arg1;	// IMP=0x000000010007bcfc
- (void)scrollToTop;	// IMP=0x000000010007bcec
- (id)snapshotOfCellAtIndexPath:(id)arg1;	// IMP=0x000000010007bb10
- (void)_updateEditingSnapshotWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010007b0d8
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x000000010007af58
- (void)reloadItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010007ae24
- (void)deleteItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010007acf0
- (void)insertItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010007abbc
- (void)performUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007a8b4
- (void)updateWithChanges:(id)arg1;	// IMP=0x000000010007a844
- (void)reloadData;	// IMP=0x000000010007a804
- (id)viewAtIndexPath:(id)arg1;	// IMP=0x000000010007a758
- (id)visibleCells;	// IMP=0x000000010007a704
- (id)visibleViews;	// IMP=0x000000010007a3dc
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x000000010007a330
- (id)dequeueFolderCellForIndexPath:(id)arg1;	// IMP=0x000000010007a24c
- (id)dequeueAppCellForIndexPath:(id)arg1;	// IMP=0x000000010007a168
- (id)indexPathForCell:(id)arg1;	// IMP=0x000000010007a0bc
- (_Bool)isIndexPathInDock:(id)arg1;	// IMP=0x000000010007a020
@property(readonly, nonatomic) unsigned long long maxNumberOfItemsInDock;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100079594
- (void)dealloc;	// IMP=0x000000010007951c
- (id)initWithFrame:(struct CGRect)arg1 dockMode:(_Bool)arg2;	// IMP=0x0000000100078b48
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100078b38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

