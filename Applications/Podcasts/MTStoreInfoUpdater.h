//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISOperationQueue, NSOperationQueue;

@interface MTStoreInfoUpdater : NSObject
{
    NSOperationQueue *_updateOperationQueue;	// 8 = 0x8
    ISOperationQueue *_storeOperationQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001001abcd8
@property(retain, nonatomic) ISOperationQueue *storeOperationQueue; // @synthesize storeOperationQueue=_storeOperationQueue;
@property(retain, nonatomic) NSOperationQueue *updateOperationQueue; // @synthesize updateOperationQueue=_updateOperationQueue;
- (void).cxx_destruct;	// IMP=0x00000001001ae738
- (void)getStoreInfoForEpisodesWithAdamIds:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ae098
- (void)getStoreInfoForPodcastWithAdamId:(long long)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ad880
- (id)episodesWithMissingAdamIdsForPodcast:(id)arg1 withContext:(id)arg2;	// IMP=0x00000001001ad6a4
- (_Bool)updateAdamId:(id)arg1 forEpisode:(id)arg2;	// IMP=0x00000001001ad570
- (void)updateStoreInfoForEpisodesInPodcast:(id)arg1 withEpisodeIds:(id)arg2 andEpisodesWithGuid:(id)arg3;	// IMP=0x00000001001acb30
- (void)updateStoreInfoForEpisodesAndPodcast:(id)arg1 skipPodcastLastCheckDate:(_Bool)arg2;	// IMP=0x00000001001ac3a0
- (void)updateStoreInfoForPodcast:(id)arg1;	// IMP=0x00000001001abe9c
- (id)init;	// IMP=0x00000001001abd90

@end

