//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableSet;

@interface MTEpisodeUpdaterCache : NSObject
{
    NSMutableSet *_unvisitedUuids;	// 8 = 0x8
    NSDictionary *_dictCache;	// 16 = 0x10
}

+ (id)episodeCacheWithPredicate:(id)arg1 inCtx:(id)arg2 extraProperties:(id)arg3;	// IMP=0x00000001001b519c
+ (id)episodeCacheWithPredicate:(id)arg1 inCtx:(id)arg2;	// IMP=0x00000001001b5134
@property(retain, nonatomic) NSDictionary *dictCache; // @synthesize dictCache=_dictCache;
- (void).cxx_destruct;	// IMP=0x00000001001b6560
- (id)itemUuidsToDelete;	// IMP=0x00000001001b6524
- (id)searchCacheForFeedItem:(id)arg1 enclosureUrl:(id)arg2;	// IMP=0x00000001001b6334
- (id)searchCacheForMediaItem:(id)arg1;	// IMP=0x00000001001b610c
- (id)episodeCacheItemForMediaLibraryId:(id)arg1;	// IMP=0x00000001001b6050
- (id)episodeCacheItemForAssetUrl:(id)arg1;	// IMP=0x00000001001b5f94
- (id)episodeCacheItemForEnclosure:(id)arg1;	// IMP=0x00000001001b5ed8
- (id)episodeCacheItemForGuid:(id)arg1;	// IMP=0x00000001001b5e1c
- (id)episodeCacheItemForTitle:(id)arg1 pubDate:(double)arg2;	// IMP=0x00000001001b5b2c
- (id)initWithPredicate:(id)arg1 inCtx:(id)arg2 extraProperties:(id)arg3;	// IMP=0x00000001001b5240

@end

