//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@class AVAssetCache;

@interface MTAVAssetCache : MTSingleton
{
    AVAssetCache *_assetCache;	// 8 = 0x8
}

+ (void)_asyncPrewarm;	// IMP=0x000000010015e0f4
@property(readonly, nonatomic) AVAssetCache *assetCache; // @synthesize assetCache=_assetCache;
- (void).cxx_destruct;	// IMP=0x000000010015e16c
- (id)init;	// IMP=0x000000010015df4c

@end
