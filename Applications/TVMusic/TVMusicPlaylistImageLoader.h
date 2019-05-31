//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVImageLoader.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface TVMusicPlaylistImageLoader : NSObject <TVImageLoader>
{
    NSMutableArray *_pendingQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialProcessingQueue;	// 16 = 0x10
    unsigned long long _maxConcurrentCount;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010003d488
+ (id)_playlistImageWithImages:(id)arg1 size:(struct CGSize)arg2 upscaleAdjustment:(double)arg3 cornerRadius:(double)arg4;	// IMP=0x000000010003d104
- (void).cxx_destruct;	// IMP=0x000000010003e058
- (void)_executeRequest:(id)arg1;	// IMP=0x000000010003da88
- (void)_processFirstRequest:(id)arg1;	// IMP=0x000000010003da08
- (void)cancelLoad:(id)arg1;	// IMP=0x000000010003d7a8
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010003d5d0
- (id)imageKeyForObject:(id)arg1;	// IMP=0x000000010003d5c0
- (id)init;	// IMP=0x000000010003d508

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
