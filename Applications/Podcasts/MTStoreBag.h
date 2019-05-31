//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTReachabilityObserver.h"

@class ISLoadURLBagOperation, ISURLBag, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString;

@interface MTStoreBag : NSObject <MTReachabilityObserver>
{
    NSMutableDictionary *_keyValues;	// 8 = 0x8
    NSDictionary *_defaultValues;	// 16 = 0x10
    NSOperationQueue *_queue;	// 24 = 0x18
    ISLoadURLBagOperation *_activeLoadOperation;	// 32 = 0x20
    long long _downloadLimitPodcast;	// 40 = 0x28
    long long _downloadLimitVideoPodcast;	// 48 = 0x30
    ISURLBag *_bag;	// 56 = 0x38
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010009f5f0
+ (id)sharedInstance;	// IMP=0x000000010009f514
@property(retain, nonatomic) ISURLBag *bag; // @synthesize bag=_bag;
@property(nonatomic) long long downloadLimitVideoPodcast; // @synthesize downloadLimitVideoPodcast=_downloadLimitVideoPodcast;
@property(nonatomic) long long downloadLimitPodcast; // @synthesize downloadLimitPodcast=_downloadLimitPodcast;
- (void).cxx_destruct;	// IMP=0x00000001000a0638
- (void)reachabilityChangedFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x00000001000a05d0
- (void)loadBagIfNeeded;	// IMP=0x000000010009fa08
- (id)bagValueForKey:(id)arg1;	// IMP=0x000000010009f944
- (id)keys;	// IMP=0x000000010009f844
- (_Bool)bagHasLoaded;	// IMP=0x000000010009f82c
- (id)init;	// IMP=0x000000010009f638
- (id)copy;	// IMP=0x000000010009f610

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
