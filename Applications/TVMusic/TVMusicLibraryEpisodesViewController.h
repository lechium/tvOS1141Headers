//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVMusicMPRequestViewController.h"

#import "TVCollectionViewDelegate.h"

@class MPModelTVSeason, NSArray, NSDateFormatter, NSString, TVImageView, UIControl, UIView;

@interface TVMusicLibraryEpisodesViewController : TVMusicMPRequestViewController <TVCollectionViewDelegate>
{
    UIView *_imageViewContainer;	// 8 = 0x8
    TVImageView *_artworkImageView;	// 16 = 0x10
    UIControl *_goToShowButton;	// 24 = 0x18
    UIControl *_moreButton;	// 32 = 0x20
    NSArray *_actionButtons;	// 40 = 0x28
    MPModelTVSeason *_tvSeason;	// 48 = 0x30
    NSDateFormatter *_episodeReleaseDateFormatter;	// 56 = 0x38
    _Bool _visibleOnScreen;	// 64 = 0x40
    _Bool _shouldReloadOnViewDidAppear;	// 65 = 0x41
}

+ (_Bool)_isTVEpisodeWatched:(id)arg1;	// IMP=0x0000000100014fb8
- (void).cxx_destruct;	// IMP=0x00000001000153f8
- (struct CGSize)artworkSize;	// IMP=0x00000001000153e4
- (void)_bookmarkWillUpdateNotification:(id)arg1;	// IMP=0x0000000100015380
- (id)_songCellPlaceholderImage;	// IMP=0x000000010001531c
- (id)_artworkPlaceholderImageForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000001000152b8
- (void)_selectedMoreButton;	// IMP=0x0000000100015168
- (void)_setPositionForView:(id)arg1 topLeft:(struct CGPoint)arg2;	// IMP=0x00000001000150f8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100014b28
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100014a34
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100014a2c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010001492c
- (double)cellsTopMargin;	// IMP=0x0000000100014920
- (id)cellIdentifier;	// IMP=0x00000001000148f4
- (void)_goToShow;	// IMP=0x00000001000147dc
- (void)_sizeImageViewToFit;	// IMP=0x00000001000146bc
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100014548
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100014268
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100013f9c
- (void)viewDidLoad;	// IMP=0x00000001000135a4
- (id)_seasonName;	// IMP=0x0000000100013498
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000133fc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000133b0
- (void)dealloc;	// IMP=0x0000000100013338
- (id)initWithSeason:(id)arg1 libraryRequest:(id)arg2;	// IMP=0x0000000100012ce0
- (id)initWithTitle:(id)arg1 libraryRequest:(id)arg2;	// IMP=0x0000000100012cc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
