//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKTurnBasedMatch;

@interface GKDashboardTurnDetailDataSource : GKCollectionDataSource
{
    GKTurnBasedMatch *_match;	// 8 = 0x8
}

@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100004f34
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100004d68
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100004d60
- (id)sectionHeaderText;	// IMP=0x0000000100004ce8
- (id)itemForIndexPath:(id)arg1;	// IMP=0x0000000100004c38
- (double)preferredCollectionHeight;	// IMP=0x0000000100004c24
- (long long)itemCount;	// IMP=0x0000000100004bf4
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004bd8
- (void)setupCollectionView:(id)arg1;	// IMP=0x0000000100004b60
- (void)dealloc;	// IMP=0x0000000100004b08
- (id)initWithMatch:(id)arg1;	// IMP=0x0000000100004a70

@end

