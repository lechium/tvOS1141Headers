//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IMExpandingLabelDelegate.h"

@class IMExpandingLabel, MTAllPropertyChangesQueryObserver, NSString, UIBarButtonItem, UIButton, UIImage, UIImageView, UILabel, UIToolbar;

@interface MTPodcastHeaderView : UIView <IMExpandingLabelDelegate>
{
    MTAllPropertyChangesQueryObserver *_queryObserver;	// 8 = 0x8
    NSString *_podcastUuid;	// 16 = 0x10
    NSString *_derivedPropertyCallbackToken;	// 24 = 0x18
    _Bool _needsToUpdateImageSize;	// 32 = 0x20
    _Bool _forcePhoneStyle;	// 33 = 0x21
    _Bool _disabled;	// 34 = 0x22
    int _headerMode;	// 36 = 0x24
    double _rightMargin;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UILabel *_providerLabel;	// 64 = 0x40
    UILabel *_episodesLabel;	// 72 = 0x48
    UILabel *_updatedLabel;	// 80 = 0x50
    id <MTPodcastHeaderDelegate> _delegate;	// 88 = 0x58
    IMExpandingLabel *_descriptionLabel;	// 96 = 0x60
    UIView *_darkView;	// 104 = 0x68
    UIView *_headerSeperator;	// 112 = 0x70
    UIImageView *_chevronImage;	// 120 = 0x78
    UIButton *_disclosureButton;	// 128 = 0x80
    MTAllPropertyChangesQueryObserver *_episodeCountObserver;	// 136 = 0x88
    UIBarButtonItem *_shareButtonItem;	// 144 = 0x90
    UIToolbar *_shareToolbar;	// 152 = 0x98
    UIImage *_podcastImage;	// 160 = 0xa0
    struct CGSize _imageSize;	// 168 = 0xa8
}

@property(retain, nonatomic) UIImage *podcastImage; // @synthesize podcastImage=_podcastImage;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIToolbar *shareToolbar; // @synthesize shareToolbar=_shareToolbar;
@property(retain, nonatomic) UIBarButtonItem *shareButtonItem; // @synthesize shareButtonItem=_shareButtonItem;
@property(retain, nonatomic) MTAllPropertyChangesQueryObserver *episodeCountObserver; // @synthesize episodeCountObserver=_episodeCountObserver;
@property(retain, nonatomic) UIButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(retain, nonatomic) UIImageView *chevronImage; // @synthesize chevronImage=_chevronImage;
@property(retain, nonatomic) UIView *headerSeperator; // @synthesize headerSeperator=_headerSeperator;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) UIView *darkView; // @synthesize darkView=_darkView;
@property(readonly, nonatomic) IMExpandingLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) int headerMode; // @synthesize headerMode=_headerMode;
@property(nonatomic) __weak id <MTPodcastHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *updatedLabel; // @synthesize updatedLabel=_updatedLabel;
@property(retain, nonatomic) UILabel *episodesLabel; // @synthesize episodesLabel=_episodesLabel;
@property(retain, nonatomic) UILabel *providerLabel; // @synthesize providerLabel=_providerLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool forcePhoneStyle; // @synthesize forcePhoneStyle=_forcePhoneStyle;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
- (void).cxx_destruct;	// IMP=0x000000010003909c
- (void)expandingLabelShouldExpand:(id)arg1;	// IMP=0x0000000100038d54
- (id)stringForEpisodesLabel;	// IMP=0x0000000100038d4c
- (id)stringForUpdatedLabel:(id)arg1;	// IMP=0x0000000100038d44
- (void)_setupView;	// IMP=0x00000001000384cc
- (void)setMoreButtonFont:(id)arg1;	// IMP=0x00000001000383d4
- (void)_updateFonts;	// IMP=0x00000001000381d0
- (void)didMoveToSuperview;	// IMP=0x0000000100037748
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010003761c
- (void)layoutSubviews;	// IMP=0x0000000100036910
- (id)creatSeperatorView;	// IMP=0x00000001000365c4
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x0000000100036578
- (void)setAlpha:(double)arg1;	// IMP=0x0000000100036520
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000001000364d4
- (void)updateImageSize;	// IMP=0x00000001000361a8
- (void)updateImageSizeIfNeeded;	// IMP=0x0000000100036188
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100035ff4
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x0000000100035fe8
- (void)shareTapped:(id)arg1;	// IMP=0x0000000100035f30
- (void)dealloc;	// IMP=0x0000000100035e78
- (id)initWithImage:(id)arg1 podcastUuid:(id)arg2 frame:(struct CGRect)arg3 forcePhoneStyle:(_Bool)arg4;	// IMP=0x0000000100035d3c
- (id)initWithPodcastUUID:(id)arg1;	// IMP=0x0000000100035c90
- (_Bool)usePad;	// IMP=0x0000000100035c58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

