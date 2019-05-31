//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVCollectionViewDelegate.h"
#import "UICollectionViewDataSource_Private.h"
#import "UIGestureRecognizerDelegate.h"

@class MPModelLibraryRequest, MPModelResponse, MPSectionedCollection, NSArray, NSIndexPath, NSString, TVCollectionView, TVMusicLibraryHeaderView;

@interface TVMusicLibrarySongsViewController : UIViewController <TVCollectionViewDelegate, UICollectionViewDataSource_Private, UIGestureRecognizerDelegate>
{
    _Bool _visibleOnScreen;	// 8 = 0x8
    _Bool _shouldUpdateOnViewDidAppear;	// 9 = 0x9
    long long _songPlayCount;	// 16 = 0x10
    TVCollectionView *_collectionView;	// 24 = 0x18
    TVMusicLibraryHeaderView *_headerView;	// 32 = 0x20
    MPModelLibraryRequest *_libraryRequest;	// 40 = 0x28
    MPModelResponse *_lastReceivedResponse;	// 48 = 0x30
    NSIndexPath *_focusToIndexPath;	// 56 = 0x38
    MPSectionedCollection *_songs;	// 64 = 0x40
    id <MPLazySectionedCollectionDataSource> _sectionedCollectionDataSource;	// 72 = 0x48
    NSArray *_lastPlayedSortDescriptors;	// 80 = 0x50
}

@property(copy, nonatomic) NSArray *lastPlayedSortDescriptors; // @synthesize lastPlayedSortDescriptors=_lastPlayedSortDescriptors;
@property(retain, nonatomic) id <MPLazySectionedCollectionDataSource> sectionedCollectionDataSource; // @synthesize sectionedCollectionDataSource=_sectionedCollectionDataSource;
@property(retain, nonatomic) MPSectionedCollection *songs; // @synthesize songs=_songs;
@property(retain, nonatomic) NSIndexPath *focusToIndexPath; // @synthesize focusToIndexPath=_focusToIndexPath;
@property(retain, nonatomic) MPModelResponse *lastReceivedResponse; // @synthesize lastReceivedResponse=_lastReceivedResponse;
@property(retain, nonatomic) MPModelLibraryRequest *libraryRequest; // @synthesize libraryRequest=_libraryRequest;
@property(retain, nonatomic) TVMusicLibraryHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TVCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x00000001000895a8
- (void)_invalidateResultsWithResponse:(id)arg1;	// IMP=0x000000010008938c
- (void)_modelResponseDidInvalidate:(id)arg1;	// IMP=0x000000010008933c
- (void)_playSongAtIndexPath:(id)arg1;	// IMP=0x0000000100089134
- (id)_placeholderImage;	// IMP=0x00000001000890d0
- (void)_selectedSortButton;	// IMP=0x0000000100089010
- (void)_selectedShuffleButton;	// IMP=0x0000000100088fa4
- (void)_selectedPlayButton;	// IMP=0x0000000100088ef8
- (void)_processResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000100088c94
- (void)_performRequest;	// IMP=0x0000000100088ab8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100088740
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001000886ec
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001000886a0
- (id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000001000885ac
- (id)indexTitlesForCollectionView:(id)arg1;	// IMP=0x0000000100088558
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001000884ac
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000010008849c
- (void)collectionViewNeedsFocusUpdate:(id)arg1;	// IMP=0x0000000100088490
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100088398
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100088390
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100088264
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100088130
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100088094
- (id)preferredFocusEnvironments;	// IMP=0x0000000100087ff8
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000100087fec
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100087e50
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100087d58
- (void)_handlePlayPause:(id)arg1;	// IMP=0x0000000100087b80
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100087b0c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100087ac0
- (void)viewDidLoad;	// IMP=0x00000001000877cc
- (id)initWithLibraryRequest:(id)arg1;	// IMP=0x000000010008734c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

