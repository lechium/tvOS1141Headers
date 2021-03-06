//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardCollectionViewController.h"

@class NSArray;

@interface GKDashboardMultiCollectionViewController : GKDashboardCollectionViewController
{
    NSArray *_dataSources;	// 8 = 0x8
}

@property(retain, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000219ec
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010002198c
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000010002192c
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000001000218cc
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100021728
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100021708
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001000216f0
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;	// IMP=0x000000010002164c
- (_Bool)sectionHasData:(long long)arg1;	// IMP=0x000000010002161c
- (_Bool)hasData;	// IMP=0x00000001000214fc
- (void)loadData;	// IMP=0x0000000100021024
- (void)clearSelection;	// IMP=0x0000000100020ee8
- (void)viewDidLoad;	// IMP=0x0000000100020d38
- (id)cellIdentifierForSection:(long long)arg1;	// IMP=0x0000000100020d00
- (id)dataSourceForSection:(long long)arg1;	// IMP=0x0000000100020be0
- (void)dealloc;	// IMP=0x0000000100020b88

@end

