//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCollectionViewCell.h"

#import "MTEpisodeLockupDelegate.h"

@class MTColorTheme, MTEpisode, MTEpisodeActionController, MTEpisodeLockup, NSString, UIView;

@interface MTEpisodeCollectionViewCell : MTCollectionViewCell <MTEpisodeLockupDelegate>
{
    UIView *_lockupContainer;	// 8 = 0x8
    MTEpisodeLockup *_episodeLockup;	// 16 = 0x10
}

+ (double)maximumContentWidthForStyle:(unsigned long long)arg1;	// IMP=0x000000010009d3b0
+ (struct CGSize)artworkSizeForStyle:(unsigned long long)arg1;	// IMP=0x000000010009d39c
+ (double)estimatedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010009d2c4
+ (double)estimatedHeightForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x000000010009d27c
+ (unsigned long long)styleForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x000000010009d268
@property(retain, nonatomic) MTEpisodeLockup *episodeLockup; // @synthesize episodeLockup=_episodeLockup;
@property(retain, nonatomic) UIView *lockupContainer; // @synthesize lockupContainer=_lockupContainer;
- (void).cxx_destruct;	// IMP=0x000000010009eb08
- (void)clearLayer:(id)arg1;	// IMP=0x000000010009ea6c
- (void)lockupDidChangeSize:(id)arg1;	// IMP=0x000000010009e974
- (void)lockup:(id)arg1 moreButtonTapped:(id)arg2;	// IMP=0x000000010009e904
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010009e86c
- (void)moreButtonTapped:(id)arg1;	// IMP=0x000000010009e868
- (void)updateOverlayForSelectedOrIsNew;	// IMP=0x000000010009e310
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010009e230
- (void)layoutSubviews;	// IMP=0x000000010009e118
- (void)prepareForReuse;	// IMP=0x000000010009e070
- (void)fixEmptyTextContainers;	// IMP=0x000000010009e030
- (void)invalidateLayoutMargins;	// IMP=0x000000010009dff0
- (void)invalidateSizeMetrics;	// IMP=0x000000010009dfb0
- (void)updateActionSheetsAndPopovers;	// IMP=0x000000010009df70
- (void)dismissActionSheetsAndPopovers;	// IMP=0x000000010009df30
@property(readonly, nonatomic) MTEpisodeActionController *actionController;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem;
@property(nonatomic, getter=isExpanded) _Bool expanded;
@property(retain, nonatomic) MTColorTheme *colorTheme;
@property(retain, nonatomic) MTEpisode *episode;
- (void)updateCurrentRowHeight;	// IMP=0x000000010009db8c
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000010009da80
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000010009da30
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010009d900
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010009d8f4
@property(nonatomic) _Bool showsPlayState;
@property(nonatomic) _Bool showsPubDate;
@property(nonatomic) unsigned long long style;
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000010009d64c
- (void)dealloc;	// IMP=0x000000010009d5d8
- (void)setupCell;	// IMP=0x000000010009d41c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010009d3c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MTEpisodeCollectionViewCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
