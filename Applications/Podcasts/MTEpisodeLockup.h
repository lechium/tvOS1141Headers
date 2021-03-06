//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MTReachabilityObserver.h"

@class IMActionSheetAction, MTColorTheme, MTEpisode, MTEpisodeActionController, MTEpisodeArtworkView, MTEpisodeStateView, MTNowPlayingIndicatorView, MTTouchInsetsButton, NSMutableDictionary, NSOperation, NSString, UIButton, UIImage, UIImageView, UILabel, UITextView;

@interface MTEpisodeLockup : UIView <MTReachabilityObserver>
{
    _Bool _initialized;	// 8 = 0x8
    NSMutableDictionary *_sizeCache;	// 16 = 0x10
    struct CGSize _descriptionSize;	// 24 = 0x18
    _Bool _editing;	// 40 = 0x28
    _Bool _expanded;	// 41 = 0x29
    _Bool _currentPlayerItem;	// 42 = 0x2a
    _Bool _shouldShowNowPlaying;	// 43 = 0x2b
    _Bool _showsPubDate;	// 44 = 0x2c
    _Bool _showsPlayState;	// 45 = 0x2d
    _Bool _showsDescriptionButton;	// 46 = 0x2e
    _Bool _showsFooterTextView;	// 47 = 0x2f
    _Bool _showsExplicitIcon;	// 48 = 0x30
    _Bool _showsStreamingIcon;	// 49 = 0x31
    _Bool _showsDocumentIcon;	// 50 = 0x32
    _Bool _showsErrorIcon;	// 51 = 0x33
    _Bool _showsAirplaneModeIcon;	// 52 = 0x34
    _Bool _showsArtwork;	// 53 = 0x35
    _Bool _showsMoreButton;	// 54 = 0x36
    MTEpisode *_episode;	// 56 = 0x38
    id <MTEpisodeLockupDelegate> _delegate;	// 64 = 0x40
    MTEpisodeActionController *_actionController;	// 72 = 0x48
    MTColorTheme *_colorTheme;	// 80 = 0x50
    unsigned long long _style;	// 88 = 0x58
    MTTouchInsetsButton *_moreButton;	// 96 = 0x60
    MTTouchInsetsButton *_descriptionButton;	// 104 = 0x68
    UIImage *_titleImage;	// 112 = 0x70
    NSOperation *_imageLoadingOperation;	// 120 = 0x78
    IMActionSheetAction *_moreAction;	// 128 = 0x80
    MTNowPlayingIndicatorView *_barsView;	// 136 = 0x88
    UITextView *_titleTextView;	// 144 = 0x90
    UILabel *_metadataLabel;	// 152 = 0x98
    UITextView *_descriptionTextView;	// 160 = 0xa0
    UITextView *_footerTextView;	// 168 = 0xa8
    MTEpisodeArtworkView *_artworkView;	// 176 = 0xb0
    UIImageView *_playStatusView;	// 184 = 0xb8
    UIImageView *_explicitIconView;	// 192 = 0xc0
    MTEpisodeStateView *_iconView;	// 200 = 0xc8
    MTEpisodeStateView *_buttonView;	// 208 = 0xd0
    unsigned long long _disabledReason;	// 216 = 0xd8
    struct UIEdgeInsets __layoutMargins;	// 224 = 0xe0
}

+ (id)metadataFooterFont;	// IMP=0x000000010010e304
+ (id)descriptionFont;	// IMP=0x000000010010e2a0
+ (id)metadataHeaderFont;	// IMP=0x000000010010e238
+ (id)titleFont;	// IMP=0x000000010010e1d4
+ (id)footerTextStyle;	// IMP=0x000000010010e1c4
+ (id)descriptionTextStyle;	// IMP=0x000000010010e1b4
+ (id)titleTextStyle;	// IMP=0x000000010010e1a4
+ (double)descriptionMaxHeightForCurrentOrientation;	// IMP=0x000000010010e12c
+ (double)leadingMarginForViewWidth:(double)arg1;	// IMP=0x000000010010e0f4
+ (_Bool)useSelfSizingCells;	// IMP=0x000000010010e0ec
+ (_Bool)useLayoutForSkinnyPhones;	// IMP=0x000000010010e084
+ (id)dependentPropertyKeys;	// IMP=0x000000010010dec4
+ (id)mockEpisode;	// IMP=0x000000010010db20
+ (_Bool)showsArtworkForStyle:(unsigned long long)arg1;	// IMP=0x000000010010db10
+ (id)defaultArtworkWithSize:(struct CGSize)arg1;	// IMP=0x000000010010da78
+ (id)defaultArtworkForStyle:(unsigned long long)arg1;	// IMP=0x000000010010da44
+ (struct CGSize)artworkSizeForStyle:(unsigned long long)arg1;	// IMP=0x000000010010d7f4
+ (double)artworkHeightForStyle:(unsigned long long)arg1 sizeType:(unsigned long long)arg2;	// IMP=0x000000010010d548
+ (struct CGRect)frameForContentViewSize:(struct CGSize)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010010d4c8
+ (double)maximumContentWidthForStyle:(unsigned long long)arg1;	// IMP=0x000000010010d4b8
+ (double)maximumContentWidthForStyle:(unsigned long long)arg1 showsPlayState:(_Bool)arg2;	// IMP=0x000000010010d40c
+ (unsigned long long)descriptionNumberOfLinesForStyle:(unsigned long long)arg1 isTitleMultipleLines:(_Bool)arg2;	// IMP=0x000000010010d38c
+ (unsigned long long)titleNumberOfLinesForStyle:(unsigned long long)arg1;	// IMP=0x000000010010d328
+ (double)estimatedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010010d268
+ (double)estimatedHeightForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x000000010010d220
+ (unsigned long long)styleForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x000000010010d1ec
@property(nonatomic) _Bool showsMoreButton; // @synthesize showsMoreButton=_showsMoreButton;
@property(nonatomic) _Bool showsArtwork; // @synthesize showsArtwork=_showsArtwork;
@property(nonatomic) unsigned long long disabledReason; // @synthesize disabledReason=_disabledReason;
@property(retain, nonatomic) MTEpisodeStateView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) MTEpisodeStateView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *explicitIconView; // @synthesize explicitIconView=_explicitIconView;
@property(retain, nonatomic) UIImageView *playStatusView; // @synthesize playStatusView=_playStatusView;
@property(retain, nonatomic) MTEpisodeArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property(retain, nonatomic) UITextView *footerTextView; // @synthesize footerTextView=_footerTextView;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UITextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MTNowPlayingIndicatorView *barsView; // @synthesize barsView=_barsView;
@property(retain, nonatomic) IMActionSheetAction *moreAction; // @synthesize moreAction=_moreAction;
@property(nonatomic) _Bool showsAirplaneModeIcon; // @synthesize showsAirplaneModeIcon=_showsAirplaneModeIcon;
@property(nonatomic) _Bool showsErrorIcon; // @synthesize showsErrorIcon=_showsErrorIcon;
@property(nonatomic) _Bool showsDocumentIcon; // @synthesize showsDocumentIcon=_showsDocumentIcon;
@property(nonatomic) _Bool showsStreamingIcon; // @synthesize showsStreamingIcon=_showsStreamingIcon;
@property(nonatomic) _Bool showsExplicitIcon; // @synthesize showsExplicitIcon=_showsExplicitIcon;
@property(nonatomic) _Bool showsFooterTextView; // @synthesize showsFooterTextView=_showsFooterTextView;
@property(nonatomic) _Bool showsDescriptionButton; // @synthesize showsDescriptionButton=_showsDescriptionButton;
@property(retain, nonatomic) NSOperation *imageLoadingOperation; // @synthesize imageLoadingOperation=_imageLoadingOperation;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) MTTouchInsetsButton *descriptionButton; // @synthesize descriptionButton=_descriptionButton;
@property(retain, nonatomic) MTTouchInsetsButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) struct UIEdgeInsets _layoutMargins; // @synthesize _layoutMargins=__layoutMargins;
@property(nonatomic) _Bool showsPlayState; // @synthesize showsPlayState=_showsPlayState;
@property(nonatomic) _Bool showsPubDate; // @synthesize showsPubDate=_showsPubDate;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) MTColorTheme *colorTheme; // @synthesize colorTheme=_colorTheme;
@property(nonatomic) _Bool shouldShowNowPlaying; // @synthesize shouldShowNowPlaying=_shouldShowNowPlaying;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) MTEpisodeActionController *actionController; // @synthesize actionController=_actionController;
@property(nonatomic) __weak id <MTEpisodeLockupDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MTEpisode *episode; // @synthesize episode=_episode;
- (void).cxx_destruct;	// IMP=0x00000001001171d4
- (void)_setNumberOfLinesForDescription:(unsigned long long)arg1;	// IMP=0x0000000100116d10
- (id)_currentDescriptionColor;	// IMP=0x0000000100116c38
- (id)_currentTitleColor;	// IMP=0x0000000100116b60
- (id)_currentDescriptionFont;	// IMP=0x0000000100116ab8
- (id)_currentTitleFont;	// IMP=0x0000000100116a10
- (_Bool)_isRTL;	// IMP=0x00000001001169c8
- (void)updateIconView;	// IMP=0x00000001001167e8
- (void)updateAssetStatusIcons;	// IMP=0x00000001001166d4
- (void)updateStateForBarsView:(id)arg1;	// IMP=0x0000000100116630
- (void)updatePlayStatusIcons;	// IMP=0x00000001001164dc
- (_Bool)updateIsCurrentPlayerItemState;	// IMP=0x00000001001163f0
- (void)updateIcons;	// IMP=0x00000001001162f4
- (void)playbackStateDidChange;	// IMP=0x00000001001162b0
- (void)stopObservingPlaybackState;	// IMP=0x0000000100116250
- (void)startObservingPlaybackState;	// IMP=0x00000001001161e8
- (void)updateTitleIncludingIcons;	// IMP=0x0000000100115dc4
- (_Bool)updateTitleFontIfNeeded;	// IMP=0x0000000100115c50
- (void)updateFooterTextViewVisbility;	// IMP=0x0000000100115b98
- (void)updateMoreButtonVisibility;	// IMP=0x00000001001159ec
- (void)beginLoadingArtwork;	// IMP=0x0000000100115534
- (_Bool)updateDisabledReason;	// IMP=0x0000000100115218
- (void)updateDescriptionText;	// IMP=0x0000000100115004
- (void)updateFooterText;	// IMP=0x0000000100114de8
- (void)updateMetadataText;	// IMP=0x0000000100114cfc
- (void)update;	// IMP=0x0000000100114c18
- (struct CGRect)footerFrameForDescriptionButtonFrame:(struct CGRect)arg1 descriptionFrame:(struct CGRect)arg2;	// IMP=0x00000001001149ec
- (struct CGRect)descriptionButtonFrameForDescriptionFrame:(struct CGRect)arg1;	// IMP=0x0000000100114730
- (struct CGRect)buttonsFrameForActionButtonFrame:(struct CGRect)arg1 downloadButtonFrame:(struct CGRect)arg2;	// IMP=0x0000000100114684
- (struct CGRect)actionButtonFrameForViewWidth:(double)arg1 titleOriginY:(double)arg2;	// IMP=0x0000000100114564
- (struct CGRect)downloadButtonFrameForActionButtonFrame:(struct CGRect)arg1 titleOriginY:(double)arg2;	// IMP=0x0000000100114550
- (struct CGRect)playStatusViewFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 artworkFrame:(struct CGRect)arg3;	// IMP=0x0000000100114380
- (struct CGRect)iconsViewFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 metadataFrame:(struct CGRect *)arg3 style:(unsigned long long)arg4;	// IMP=0x0000000100114000
- (struct CGRect)moreButtonFrameForDescriptionFrame:(struct CGRect)arg1;	// IMP=0x0000000100113d98
- (struct CGRect)metadataFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 style:(unsigned long long)arg3;	// IMP=0x0000000100113a50
- (_Bool)isLabelMultipleLinesWithFrame:(struct CGRect)arg1 font:(id)arg2;	// IMP=0x0000000100113978
- (id)descriptionExclusionPathsForOrigin:(struct CGPoint)arg1 descriptionWidth:(double)arg2 buttonsFrame:(struct CGRect)arg3 titleFrame:(struct CGRect)arg4;	// IMP=0x0000000100113834
- (id)titleExclusionPathsForExplicitIconFrame:(struct CGRect)arg1 viewWidth:(double)arg2;	// IMP=0x0000000100113670
- (id)titleExclusionPathsForButtonViewFrame:(struct CGRect)arg1;	// IMP=0x0000000100113504
- (double)descriptionWidthForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 style:(unsigned long long)arg3;	// IMP=0x0000000100113418
- (struct CGSize)exactDescriptionSizeForOrigin:(struct CGPoint)arg1 viewWidth:(double)arg2 titleFrame:(struct CGRect)arg3 actionButtonFrame:(struct CGRect)arg4 downloadButtonFrame:(struct CGRect)arg5 style:(unsigned long long)arg6;	// IMP=0x0000000100113074
- (struct CGPoint)descriptionOriginForViewWidth:(double)arg1 artworkFrame:(struct CGRect)arg2 buttonViewFrame:(struct CGRect)arg3 titleFrame:(struct CGRect)arg4 metadataFrame:(struct CGRect)arg5 iconViewFrame:(struct CGRect)arg6 style:(unsigned long long)arg7;	// IMP=0x0000000100112bc0
- (double)titleOriginYForArtworkFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;	// IMP=0x0000000100112a88
- (struct CGSize)titleSizeForViewWidth:(double)arg1 titleOrigin:(struct CGPoint)arg2 artworkFrame:(struct CGRect)arg3 buttonViewFrame:(struct CGRect)arg4 style:(unsigned long long)arg5;	// IMP=0x00000001001127e0
- (double)titleOriginXForViewWidth:(double)arg1 artworkFrame:(struct CGRect)arg2 buttonFrame:(struct CGRect)arg3 style:(unsigned long long)arg4;	// IMP=0x00000001001126d4
- (struct CGRect)artworkFrameForStyle:(unsigned long long)arg1 forViewWidth:(double)arg2;	// IMP=0x0000000100112604
- (double)heightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x0000000100111f70
- (struct UIEdgeInsets)_layoutMarginsForViewWidth:(double)arg1;	// IMP=0x0000000100111e00
- (void)layoutMarginsDidChange;	// IMP=0x0000000100111d34
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000100111c88
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000100111bdc
- (void)fixEmptyTextContainers;	// IMP=0x00000001001119a4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001001117d8
- (struct CGRect)explicitIconFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2;	// IMP=0x00000001001114b4
- (void)layoutSubviews;	// IMP=0x0000000100110b74
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100110a14
- (void)dismissActionSheetsAndPopovers;	// IMP=0x0000000100110900
- (void)updateActionSheetsAndPopovers;	// IMP=0x00000001001107ec
- (void)invalidateLayoutMargins;	// IMP=0x00000001001107cc
- (void)invalidateSizeMetrics;	// IMP=0x0000000100110780
- (void)prepareForReuse;	// IMP=0x00000001001105c8
- (void)reachabilityChangedFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x000000010010fffc
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010010ff80
- (void)airplaneModeChanged:(id)arg1;	// IMP=0x000000010010ff18
- (void)descriptionButtonTapped:(id)arg1;	// IMP=0x000000010010fe68
- (void)moreButtonTapped:(id)arg1;	// IMP=0x000000010010fdf8
- (void)updateColorsForBarsView:(id)arg1;	// IMP=0x000000010010fd34
- (void)updateColors;	// IMP=0x000000010010f9a4
@property(readonly, nonatomic) UIButton *actionButton;
- (void)configureSubviews;	// IMP=0x000000010010e5f0
- (void)dealloc;	// IMP=0x000000010010e538
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010010e368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

