//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

#import "GKDashboardChallengeDetailViewControllerDelegate.h"

@class GKGameRecord, NSArray;

@interface GKChallengeDataSource : GKCollectionDataSource <GKDashboardChallengeDetailViewControllerDelegate>
{
    _Bool _shouldShowPlay;	// 8 = 0x8
    GKGameRecord *_gameRecord;	// 16 = 0x10
    NSArray *_challenges;	// 24 = 0x18
}

@property(retain, nonatomic) NSArray *challenges; // @synthesize challenges=_challenges;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) _Bool shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
- (void)userDidSelectPlay:(id)arg1;	// IMP=0x000000010002b168
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010002af60
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010002af2c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010002af18
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010002ad04
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010002acfc
- (id)sectionHeaderText;	// IMP=0x000000010002ac04
- (id)itemForIndexPath:(id)arg1;	// IMP=0x000000010002ab64
- (double)preferredCollectionHeight;	// IMP=0x000000010002ab50
- (long long)itemCount;	// IMP=0x000000010002ab38
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a474
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000010002a3fc
- (void)dealloc;	// IMP=0x000000010002a38c
- (id)initWithGameRecord:(id)arg1;	// IMP=0x000000010002a318

@end

