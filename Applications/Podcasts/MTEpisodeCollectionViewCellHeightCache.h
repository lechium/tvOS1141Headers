//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@class NSCache;

@interface MTEpisodeCollectionViewCellHeightCache : MTSingleton
{
    NSCache *_cachedHeights;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010009d254
- (id)_keyForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010009d218
- (void)addCachedHeight:(double)arg1 forWidth:(double)arg2 style:(unsigned long long)arg3;	// IMP=0x000000010009d178
- (double)cachedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010009d0f0
- (void)sizeCategoryChanged:(id)arg1;	// IMP=0x000000010009d0d8
- (void)dealloc;	// IMP=0x000000010009d050
- (id)init;	// IMP=0x000000010009cf8c

@end

