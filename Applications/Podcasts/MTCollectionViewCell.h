//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIScrollViewDelegate.h"

@class MTActionButtonContainerView, MTCollectionView, NSString, UIButton, UIImageView, UIScrollView, UITapGestureRecognizer, UIView;

@interface MTCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate>
{
    UIView *_contentView;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    UIImageView *_editingControl;	// 24 = 0x18
    _Bool _editing;	// 32 = 0x20
    _Bool _userSwiping;	// 33 = 0x21
    _Bool _showsMoreButton;	// 34 = 0x22
    id <MTCollectionViewCellDelegate> _delegate;	// 40 = 0x28
    unsigned long long _swipeState;	// 48 = 0x30
    UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
    MTActionButtonContainerView *_actionButtonsContainer;	// 64 = 0x40
    UIButton *_deleteButton;	// 72 = 0x48
    UIButton *_moreButton;	// 80 = 0x50
}

+ (id)_multiSelectNotSelectedImage;	// IMP=0x0000000100191134
+ (id)_multiSelectCheckmarkImage;	// IMP=0x000000010019108c
+ (Class)_contentViewClass;	// IMP=0x0000000100191078
+ (double)maximumContentWidth;	// IMP=0x000000010019106c
+ (double)estimatedHeight;	// IMP=0x0000000100191060
@property(nonatomic) _Bool showsMoreButton; // @synthesize showsMoreButton=_showsMoreButton;
@property(nonatomic) _Bool userSwiping; // @synthesize userSwiping=_userSwiping;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MTActionButtonContainerView *actionButtonsContainer; // @synthesize actionButtonsContainer=_actionButtonsContainer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) unsigned long long swipeState; // @synthesize swipeState=_swipeState;
@property(nonatomic) __weak id <MTCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
- (void).cxx_destruct;	// IMP=0x0000000100193454
- (double)defaultActionButtonsXOriginForScrollFrame:(struct CGRect)arg1 andActionContainerSize:(struct CGSize)arg2;	// IMP=0x0000000100193308
- (void)scrollViewExposedDelete;	// IMP=0x00000001001932c0
- (void)scrollViewHidDelete;	// IMP=0x0000000100193278
- (double)targetXOffsetForExposedActions;	// IMP=0x0000000100193134
- (void)hideActionsAnimated:(_Bool)arg1;	// IMP=0x0000000100193008
- (void)exposeActionsAnimated:(_Bool)arg1;	// IMP=0x0000000100192f84
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000100192ea0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100192b1c
- (void)removeDismissRecognizer;	// IMP=0x0000000100192b18
- (void)addDismissRecognizer;	// IMP=0x0000000100192b14
- (void)dismissDelete:(id)arg1;	// IMP=0x0000000100192ad8
- (void)setOpen:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100192a78
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000100192940
- (void)moreButtonTapCancelled:(id)arg1;	// IMP=0x00000001001928c0
- (void)moreButtonTapped:(id)arg1;	// IMP=0x0000000100192814
- (void)deleteButtonTapped:(id)arg1;	// IMP=0x0000000100192798
- (id)mt_collectionView;	// IMP=0x00000001001922ac
@property(readonly, nonatomic) MTCollectionView *collectionView;
- (id)contentView;	// IMP=0x0000000100192170
- (id)scrollView;	// IMP=0x0000000100192104
- (void)layoutSubviews;	// IMP=0x0000000100191d80
- (struct CGRect)editingControlRectInBounds:(struct CGRect)arg1;	// IMP=0x0000000100191bec
- (struct CGRect)contentRectForEditControlWidth:(double)arg1;	// IMP=0x0000000100191b40
@property(readonly, nonatomic) _Bool exposedActions;
@property(nonatomic, getter=isSwipeEnabled) _Bool swipeEnabled;
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000001001917d4
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001001916b4
- (void)prepareForReuse;	// IMP=0x0000000100191618
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001001914e0
- (void)configureSubviews;	// IMP=0x00000001001912a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100191234

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
