//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPPhotoLibraryOneUpViewController.h"

#import "TVPSharedPSCommentsViewDataSource.h"
#import "TVPSharedPSCommentsViewDelegate.h"
#import "TVPSharedPSOneupViewDataSource.h"
#import "TVPSharedPSOneupViewDelegate.h"

@class NSArray, NSString, TVPOneupView, TVPSharedAlbumsActivityFeedCache;

@interface TVPSharedPSOneUpViewController : TVPPhotoLibraryOneUpViewController <TVPSharedPSOneupViewDataSource, TVPSharedPSOneupViewDelegate, TVPSharedPSCommentsViewDataSource, TVPSharedPSCommentsViewDelegate>
{
    NSArray *_allowedModes;	// 8 = 0x8
    NSString *_dataItemPropertyID;	// 16 = 0x10
    TVPOneupView *_oneUpView;	// 24 = 0x18
    TVPSharedAlbumsActivityFeedCache *_feedCache;	// 32 = 0x20
}

+ (long long)_adjustedFocusIndexForDataItemID:(id)arg1 dataItems:(id)arg2;	// IMP=0x000000010007d398
@property(retain, nonatomic) TVPSharedAlbumsActivityFeedCache *feedCache; // @synthesize feedCache=_feedCache;
@property(retain, nonatomic) TVPOneupView *oneUpView; // @synthesize oneUpView=_oneUpView;
@property(copy, nonatomic) NSString *dataItemPropertyID; // @synthesize dataItemPropertyID=_dataItemPropertyID;
@property(copy, nonatomic) NSArray *allowedModes; // @synthesize allowedModes=_allowedModes;
- (void).cxx_destruct;	// IMP=0x000000010007db78
- (void)_createActivityFeedsAndUpdateCache;	// IMP=0x000000010007da50
- (void)_reloadCommentsView;	// IMP=0x000000010007d8b4
- (id)_getLikedUserNames;	// IMP=0x000000010007d648
- (id)_getCurrentCommentMetadataForIndexPath:(id)arg1;	// IMP=0x000000010007d524
- (unsigned long long)_allowedModesFromModes:(id)arg1;	// IMP=0x000000010007d4a0
- (id)_assetOwnerNameForAsset:(id)arg1;	// IMP=0x000000010007d2dc
- (id)_commenterNameForComment:(id)arg1;	// IMP=0x000000010007d1fc
- (void)_updateVideoOverlayForItemView:(id)arg1;	// IMP=0x000000010007d118
- (struct CGSize)commentsView:(id)arg1 sizeForHeaderView:(id)arg2;	// IMP=0x000000010007cdc4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010007cc00
- (id)subHeaderViewInCommentsView:(id)arg1;	// IMP=0x000000010007c9ac
- (id)headerViewForLikesInCommentsView:(id)arg1;	// IMP=0x000000010007c878
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010007c668
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010007c5b0
- (void)oneupView:(id)arg1 didTransitionToItemInCaptionModeWithIndex:(unsigned long long)arg2;	// IMP=0x000000010007c49c
- (void)oneupView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000010007c3d0
- (void)oneupView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000010007c18c
- (id)oneupView:(id)arg1 getSecondaryViewForMode:(unsigned long long)arg2;	// IMP=0x000000010007c054
- (id)oneupView:(id)arg1 supplementaryViewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000010007bee8
- (id)oneupView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000010007bed8
- (long long)numberOfItemsInOneupView:(id)arg1;	// IMP=0x000000010007be34
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x000000010007bd14
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010007bb68
- (void)loadView;	// IMP=0x000000010007b858
- (id)init;	// IMP=0x000000010007b7dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

