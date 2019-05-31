//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHPhotoLibraryChangeObserver.h"
#import "TVPCollectionViewCachingManagerDataSource.h"
#import "TVPCollectionViewDelegate.h"
#import "TVPPhotoLibraryTabbedViewController.h"
#import "TVPSharedPSActivityBannerFocusDelegate.h"
#import "UICollectionViewDataSource.h"

@class NSArray, NSString, NSTimer, TVPCollectionViewCachingManager, TVPFetchManager, TVPSharedPSActivityBannerView, UIView, UIVisualEffectView;

@interface TVPSharedPSMainViewController : UIViewController <UICollectionViewDataSource, TVPCollectionViewDelegate, TVPSharedPSActivityBannerFocusDelegate, PHPhotoLibraryChangeObserver, TVPCollectionViewCachingManagerDataSource, TVPPhotoLibraryTabbedViewController>
{
    _Bool _photoLibraryDidUpdateWithChanges;	// 8 = 0x8
    NSArray *_sharedAlbums;	// 16 = 0x10
    NSArray *_subscribedAlbums;	// 24 = 0x18
    UIVisualEffectView *_sharedAlbumHeaderView;	// 32 = 0x20
    UIVisualEffectView *_subscribedAlbumHeaderView;	// 40 = 0x28
    TVPSharedPSActivityBannerView *_bannerView;	// 48 = 0x30
    UIView *_loadingView;	// 56 = 0x38
    TVPFetchManager *_sharedAlbumsFetchManager;	// 64 = 0x40
    TVPFetchManager *_myPhotoStreamFetchManager;	// 72 = 0x48
    TVPCollectionViewCachingManager *_sharedAlbumsCachingManager;	// 80 = 0x50
    TVPCollectionViewCachingManager *_subscribedAlbumsCachingManager;	// 88 = 0x58
    NSTimer *_fetchAssetsAndReloadTimer;	// 96 = 0x60
}

@property(nonatomic) _Bool photoLibraryDidUpdateWithChanges; // @synthesize photoLibraryDidUpdateWithChanges=_photoLibraryDidUpdateWithChanges;
@property(retain, nonatomic) NSTimer *fetchAssetsAndReloadTimer; // @synthesize fetchAssetsAndReloadTimer=_fetchAssetsAndReloadTimer;
@property(retain, nonatomic) TVPCollectionViewCachingManager *subscribedAlbumsCachingManager; // @synthesize subscribedAlbumsCachingManager=_subscribedAlbumsCachingManager;
@property(retain, nonatomic) TVPCollectionViewCachingManager *sharedAlbumsCachingManager; // @synthesize sharedAlbumsCachingManager=_sharedAlbumsCachingManager;
@property(retain, nonatomic) TVPFetchManager *myPhotoStreamFetchManager; // @synthesize myPhotoStreamFetchManager=_myPhotoStreamFetchManager;
@property(retain, nonatomic) TVPFetchManager *sharedAlbumsFetchManager; // @synthesize sharedAlbumsFetchManager=_sharedAlbumsFetchManager;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TVPSharedPSActivityBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIVisualEffectView *subscribedAlbumHeaderView; // @synthesize subscribedAlbumHeaderView=_subscribedAlbumHeaderView;
@property(retain, nonatomic) UIVisualEffectView *sharedAlbumHeaderView; // @synthesize sharedAlbumHeaderView=_sharedAlbumHeaderView;
@property(copy, nonatomic) NSArray *subscribedAlbums; // @synthesize subscribedAlbums=_subscribedAlbums;
@property(copy, nonatomic) NSArray *sharedAlbums; // @synthesize sharedAlbums=_sharedAlbums;
- (void).cxx_destruct;	// IMP=0x0000000100071ee4
@property(readonly, nonatomic) long long tabMode;
- (void)_cancelExistingTimer;	// IMP=0x0000000100071cf4
- (long long)_totalSharedAssetsCount;	// IMP=0x0000000100071b08
- (struct NSObject *)_getFilteredAlbumListFromLibrary;	// IMP=0x0000000100071a78
- (_Bool)_isAssetCollectionWithPendingInvitation;	// IMP=0x00000001000718d4
- (void)_displayInvitationDialogForSubscribingToCollection:(id)arg1 assetCollection:(id)arg2;	// IMP=0x0000000100070fe0
- (void)_loadUpActivityAssetsAndPopulateBanner;	// IMP=0x0000000100070ac8
- (id)_collectionAtIndexPath:(id)arg1 isOwnedSharedAlbum:(_Bool)arg2;	// IMP=0x00000001000709a8
- (id)_assetAtIndexPath:(id)arg1 fetchManager:(id)arg2 isOwnedSharedAlbum:(_Bool)arg3;	// IMP=0x0000000100070830
- (_Bool)_isSharedAlbumContentAvailable;	// IMP=0x00000001000707d0
- (void)_loadSharedStreamContentFromFetchResult:(id)arg1 photoStreamFetchResult:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007020c
- (void)_dismissLoadingView;	// IMP=0x0000000100070178
- (void)_displayLoadingView;	// IMP=0x000000010007007c
- (void)_layoutSharedAlbumsView;	// IMP=0x000000010006f504
- (id)_activityBannerView;	// IMP=0x000000010006f3a4
- (void)_fetchCloudSharedAlbumsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006ef6c
- (void)_didFinishTimedInterval:(id)arg1;	// IMP=0x000000010006ed70
- (id)collectionViewCachingManager:(id)arg1 assetsForIndexPaths:(id)arg2;	// IMP=0x000000010006eb30
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x000000010006e484
- (void)_selectButtonAction:(id)arg1;	// IMP=0x000000010006e408
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000010006e2a4
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010006e074
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010006e06c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010006dd5c
- (void)didUnfocusBannerView:(id)arg1;	// IMP=0x000000010006dd58
- (void)didFocusBannerView:(id)arg1;	// IMP=0x000000010006dcc4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010006d560
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010006d4f4
- (id)preferredFocusEnvironments;	// IMP=0x000000010006d450
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010006d358
- (void)viewDidLoad;	// IMP=0x000000010006ce10
- (void)loadView;	// IMP=0x000000010006cd34
- (void)dealloc;	// IMP=0x000000010006cc84
- (id)init;	// IMP=0x000000010006cae0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
