//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIActivityIndicatorView, UIButton, UIColor, UIImageView, UILabel;

@interface IMGridViewCell : UIView
{
    UIView *_contentView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_textLabel;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    UIView *_highlightView;	// 40 = 0x28
    UIActivityIndicatorView *_workingView;	// 48 = 0x30
    UIButton *_closeBox;	// 56 = 0x38
    UIImageView *_badgeView;	// 64 = 0x40
    UILabel *_badgeLabel;	// 72 = 0x48
    UIView *_selectedWhitewashView;	// 80 = 0x50
    UIImageView *_selectedBadgeView;	// 88 = 0x58
    _Bool _useMaskForHighlightView;	// 96 = 0x60
    _Bool _highlighted;	// 97 = 0x61
    _Bool _working;	// 98 = 0x62
    _Bool _showSelectionView;	// 99 = 0x63
    UIColor *_borderColor;	// 104 = 0x68
    struct CGPoint _unjitterPoint;	// 112 = 0x70
    int _imageGravity;	// 128 = 0x80
    unsigned int _isGrabbed:1;	// 132 = 0x84
    unsigned int _isEditing:1;	// 132 = 0x84
    unsigned int _canDelete:1;	// 132 = 0x84
    unsigned int _jiggleWhenEditing:1;	// 132 = 0x84
    unsigned int _isSelected:1;	// 132 = 0x84
    unsigned int _hidesWhitewash:1;	// 132 = 0x84
    unsigned int _openSelected:1;	// 132 = 0x84
}

+ (id)_jitterTransformAnimation;	// IMP=0x000000010020b0f0
+ (id)_jitterPositionAnimation;	// IMP=0x000000010020aca8
@property(retain, nonatomic) UIImageView *selectedBadgeView; // @synthesize selectedBadgeView=_selectedBadgeView;
@property(retain, nonatomic) UIView *selectedWhitewashView; // @synthesize selectedWhitewashView=_selectedWhitewashView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) _Bool showSelectionView; // @synthesize showSelectionView=_showSelectionView;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) int imageGravity; // @synthesize imageGravity=_imageGravity;
- (_Bool)isAccessibilityElement;	// IMP=0x000000010020b960
@property(readonly, nonatomic) struct UIEdgeInsets snapshotEdgeInsets;
- (void)setShowCloseBox:(_Bool)arg1;	// IMP=0x000000010020b600
- (void)_removeCloseBox;	// IMP=0x000000010020b5b8
- (void)_removeWorkingView;	// IMP=0x000000010020b56c
- (void)_removeHighlightView;	// IMP=0x000000010020b524
- (void)_removeSelectedBadgeView;	// IMP=0x000000010020b4a8
- (id)closeBox;	// IMP=0x000000010020b3b0
- (void)deleteConfirmationControlWasClicked:(id)arg1;	// IMP=0x000000010020b37c
- (void)setJiggling:(_Bool)arg1;	// IMP=0x000000010020aaf8
@property(nonatomic) _Bool jiggleWhenEditing;
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000010020a858
- (_Bool)isSelected;	// IMP=0x000000010020a844
- (void)setHidesWhitewash:(_Bool)arg1;	// IMP=0x000000010020a828
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000010020a6f0
@property(nonatomic) _Bool canDelete;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010020a5bc
@property(nonatomic, getter=isEditing) _Bool editing; // @dynamic editing;
- (void)setEnlargedSelectedState:(_Bool)arg1;	// IMP=0x000000010020a3c0
- (void)setGrabbed:(_Bool)arg1;	// IMP=0x000000010020a2c8
- (id)_gridView;	// IMP=0x000000010020a270
@property(readonly, nonatomic) struct CGRect selectionFrame;
- (void)cleanupAfterSnapshot;	// IMP=0x000000010020a238
- (void)prepareForSnapshot;	// IMP=0x000000010020a234
- (void)layoutSelectedBadgeViewWithContentFrame:(struct CGRect)arg1;	// IMP=0x000000010020a18c
- (void)layoutSelectedWhitewashView;	// IMP=0x000000010020a118
- (void)layoutSubviews;	// IMP=0x0000000100209c24
- (void)layoutBadgeLabelForBadgeViewBounds:(struct CGRect)arg1;	// IMP=0x0000000100209b94
- (void)layoutBadgeViewForImageFrame:(struct CGRect)arg1;	// IMP=0x0000000100209acc
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000100209ac0
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000100209a18
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000100209898
- (struct CGSize)scaledImageSizeForBounds:(struct CGRect)arg1;	// IMP=0x00000001002097e4
- (void)prepareForReuse;	// IMP=0x0000000100209694
- (id)workingView;	// IMP=0x00000001002094d4
- (id)highlightView;	// IMP=0x00000001002092d8
- (void)loadImageView;	// IMP=0x00000001002091c8
@property(nonatomic, getter=isWorking) _Bool working;
@property(nonatomic) _Bool highlighted;
@property(nonatomic) _Bool useMaskForHighlightView;
@property(readonly, retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100208e28
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100208d80
- (void)setBadgeText:(id)arg1;	// IMP=0x0000000100208ccc
- (void)setBadgeLabelNumber:(id)arg1;	// IMP=0x0000000100208bfc
- (void)setNewBadge:(_Bool)arg1;	// IMP=0x0000000100208b90
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001002088d8
- (id)description;	// IMP=0x0000000100208858
- (void)dealloc;	// IMP=0x00000001002086f4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010020869c

@end

