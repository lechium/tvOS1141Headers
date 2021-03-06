//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionDataSource.h"

@class GKGameRecord, GKLeaderboard, NSArray, UIFont;

@interface GKDashboardLeaderboardScoreDataSource : GKCollectionDataSource
{
    _Bool _showingMoreScores;	// 8 = 0x8
    _Bool _forceInitialShowMore;	// 9 = 0x9
    GKLeaderboard *_leaderboard;	// 16 = 0x10
    id _timeScopeTarget;	// 24 = 0x18
    SEL _timeScopeAction;	// 32 = 0x20
    GKGameRecord *_gameRecord;	// 40 = 0x28
    NSArray *_scores;	// 48 = 0x30
    long long _visibleItemCount;	// 56 = 0x38
}

@property(nonatomic) _Bool forceInitialShowMore; // @synthesize forceInitialShowMore=_forceInitialShowMore;
@property(nonatomic, getter=isShowingMoreScores) _Bool showingMoreScores; // @synthesize showingMoreScores=_showingMoreScores;
@property(nonatomic) long long visibleItemCount; // @synthesize visibleItemCount=_visibleItemCount;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) SEL timeScopeAction; // @synthesize timeScopeAction=_timeScopeAction;
@property(nonatomic) id timeScopeTarget; // @synthesize timeScopeTarget=_timeScopeTarget;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100027428
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000273f4
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100027200
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000001000270d0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010002708c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100026e50
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100026e48
- (void)sectionHeaderButtonPressed:(id)arg1;	// IMP=0x0000000100026e0c
@property(readonly, nonatomic) UIFont *sectionHeaderFont;
- (id)sectionHeaderText;	// IMP=0x0000000100026c80
- (id)itemForIndexPath:(id)arg1;	// IMP=0x0000000100026bb4
- (double)preferredCollectionHeight;	// IMP=0x0000000100026ab8
- (long long)itemCount;	// IMP=0x0000000100026aa8
@property(readonly, nonatomic) _Bool needsShowcaseCell; // @dynamic needsShowcaseCell;
- (_Bool)isShowcaseIndexPath:(id)arg1;	// IMP=0x00000001000269c4
- (_Bool)isShowMoreIndexPath:(id)arg1;	// IMP=0x000000010002696c
@property(readonly, nonatomic) _Bool needsShowMoreCell; // @dynamic needsShowMoreCell;
- (void)revealMoreItemsInCollectionView:(id)arg1 section:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100026490
- (void)showMoreInCollectionView:(id)arg1 section:(long long)arg2;	// IMP=0x0000000100025d38
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100025ac4
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000010002599c
@property(nonatomic) long long timeScope; // @dynamic timeScope;
@property(nonatomic) long long playerScope; // @dynamic playerScope;
- (void)dealloc;	// IMP=0x00000001000258b8
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;	// IMP=0x00000001000257e4

@end

