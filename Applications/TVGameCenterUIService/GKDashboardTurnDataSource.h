//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class NSArray;

@interface GKDashboardTurnDataSource : GKCollectionDataSource
{
    _Bool _shouldShowPlay;	// 8 = 0x8
    _Bool _shouldShowQuit;	// 9 = 0x9
    NSArray *_matches;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *matches; // @synthesize matches=_matches;
@property(nonatomic) _Bool shouldShowQuit; // @synthesize shouldShowQuit=_shouldShowQuit;
@property(nonatomic) _Bool shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100014e88
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100014e74
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100014d08
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100014d00
- (id)sectionHeaderText;	// IMP=0x0000000100014c08
- (id)itemForIndexPath:(id)arg1;	// IMP=0x0000000100014b68
- (double)preferredCollectionHeight;	// IMP=0x0000000100014b54
- (long long)itemCount;	// IMP=0x0000000100014b3c
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001496c
- (void)setupCollectionView:(id)arg1;	// IMP=0x00000001000148fc
- (void)dealloc;	// IMP=0x00000001000148a4
- (id)init;	// IMP=0x0000000100014848

@end

