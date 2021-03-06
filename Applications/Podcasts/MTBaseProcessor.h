//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@class MTBaseQueryObserver, MTDefaultsChangeNotifier, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface MTBaseProcessor : MTSingleton
{
    MTBaseQueryObserver *_queryObserver;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    MTDefaultsChangeNotifier *_defaultsNotifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) MTDefaultsChangeNotifier *defaultsNotifier; // @synthesize defaultsNotifier=_defaultsNotifier;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MTBaseQueryObserver *queryObserver; // @synthesize queryObserver=_queryObserver;
- (void).cxx_destruct;	// IMP=0x00000001000b5dec
- (void)enqueueWorkBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b5c94
- (id)defaultPropertiesThatAffectPredicate;	// IMP=0x00000001000b5c8c
- (void)results:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b5c20
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x00000001000b5be8
- (id)predicate;	// IMP=0x00000001000b5bc4
- (id)entityName;	// IMP=0x00000001000b5ba0
- (double)updatePredicateDuration;	// IMP=0x00000001000b5b98
- (void)updatePredicate;	// IMP=0x00000001000b5b28
- (id)createQueryObserver;	// IMP=0x00000001000b5814
- (_Bool)isRunning;	// IMP=0x00000001000b57fc
- (void)start;	// IMP=0x00000001000b5154

@end

