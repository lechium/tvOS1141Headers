//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVCollectionViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class MPModelAlbum, MPModelLibraryRequest, MPModelResponse, NSArray, NSMapTable, NSMutableIndexSet, NSNumber, NSString, TVCollectionView, TVImageView, TVLabel, UIControl, UIView;

@interface TVMusicLibraryAlbumDetailViewController : UIViewController <TVCollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    TVLabel *_albumTitleLabel;	// 8 = 0x8
    TVLabel *_artistNameLabel;	// 16 = 0x10
    TVLabel *_infoLabel;	// 24 = 0x18
    TVCollectionView *_collectionView;	// 32 = 0x20
    UIView *_artworkContainerView;	// 40 = 0x28
    TVImageView *_artworkImageView;	// 48 = 0x30
    UIControl *_shuffleButton;	// 56 = 0x38
    UIControl *_moreButton;	// 64 = 0x40
    NSArray *_actionButtons;	// 72 = 0x48
    _Bool _hasMultipleArtists;	// 80 = 0x50
    long long _trackCount;	// 88 = 0x58
    _Bool _visibleOnScreen;	// 96 = 0x60
    _Bool _shouldUpdateOnViewDidAppear;	// 97 = 0x61
    NSMapTable *_classicalWorkMap;	// 104 = 0x68
    long long _songPlayCount;	// 112 = 0x70
    _Bool _showArtistNames;	// 120 = 0x78
    MPModelAlbum *_album;	// 128 = 0x80
    NSArray *_tracks;	// 136 = 0x88
    NSMutableIndexSet *_indexesOfClassicalWorks;	// 144 = 0x90
    long long _trackDisplayMode;	// 152 = 0x98
    MPModelResponse *_mpResponse;	// 160 = 0xa0
    MPModelLibraryRequest *_mpRequest;	// 168 = 0xa8
    NSNumber *_popularityThreshold;	// 176 = 0xb0
}

@property(nonatomic) NSNumber *popularityThreshold; // @synthesize popularityThreshold=_popularityThreshold;
@property(retain, nonatomic) MPModelLibraryRequest *mpRequest; // @synthesize mpRequest=_mpRequest;
@property(retain, nonatomic) MPModelResponse *mpResponse; // @synthesize mpResponse=_mpResponse;
@property(nonatomic) long long trackDisplayMode; // @synthesize trackDisplayMode=_trackDisplayMode;
@property(retain, nonatomic) NSMutableIndexSet *indexesOfClassicalWorks; // @synthesize indexesOfClassicalWorks=_indexesOfClassicalWorks;
@property(nonatomic) _Bool showArtistNames; // @synthesize showArtistNames=_showArtistNames;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) MPModelAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;	// IMP=0x000000010004bb0c
- (void)_modelResponseDidInvalidate:(id)arg1;	// IMP=0x000000010004b91c
- (void)_processResponse:(id)arg1 error:(id)arg2;	// IMP=0x000000010004b670
- (void)_performRequest;	// IMP=0x000000010004b508
- (void)_updateAlbumInfo;	// IMP=0x000000010004b108
- (id)_placeholderImage;	// IMP=0x000000010004b0a4
- (void)_selectedMoreButton;	// IMP=0x000000010004a99c
- (void)_selectedShuffleButton;	// IMP=0x000000010004a920
- (void)_playFocusedSong;	// IMP=0x000000010004a878
- (void)_startMusicPlaybackAtIndexPath:(id)arg1 shuffle:(_Bool)arg2;	// IMP=0x000000010004a718
- (id)_songAtIndexPath:(id)arg1;	// IMP=0x000000010004a614
- (id)_addLabelWithFont:(id)arg1 text:(id)arg2;	// IMP=0x000000010004a4c0
- (_Bool)_isItemSingleMovementWork:(id)arg1;	// IMP=0x000000010004a468
- (void)_setItemIsSingleMovementWork:(id)arg1;	// IMP=0x000000010004a3d4
- (id)_tracksIncludingClassicalWorks;	// IMP=0x0000000100049ec0
- (void)_checkAlbumAttributesForTracks;	// IMP=0x0000000100049a54
- (id)_romanNumeralForNumber:(long long)arg1;	// IMP=0x0000000100049288
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000488ec
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001000488a0
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100048678
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100048670
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000485c0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000484bc
- (id)_songResults;	// IMP=0x0000000100048468
- (void)_updateTracks;	// IMP=0x00000001000480f8
- (id)_trackDisplayModeString;	// IMP=0x000000010004808c
- (id)_classicalWorkNameForSong:(id)arg1;	// IMP=0x0000000100047fe4
@property(readonly, nonatomic) _Bool groupByClassicalWorks;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100047ec0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100047ce0
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100047754
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100047720
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000476ac
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100047660
- (void)viewDidLoad;	// IMP=0x000000010004615c
- (id)initWithAlbum:(id)arg1;	// IMP=0x0000000100046040
- (id)init;	// IMP=0x0000000100045c10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
