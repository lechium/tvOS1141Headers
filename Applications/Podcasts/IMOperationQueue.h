//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface IMOperationQueue : NSOperationQueue
{
    NSMutableSet *_scheduledOperations;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (unsigned long long)operationCount;	// IMP=0x00000001001da6e0
- (id)operations;	// IMP=0x00000001001da53c
- (void)cancelAllOperations;	// IMP=0x00000001001da44c
- (void)addOperation:(id)arg1 afterDelay:(double)arg2;	// IMP=0x00000001001da168
- (void)dealloc;	// IMP=0x00000001001da060
- (id)init;	// IMP=0x00000001001d9fa0

@end
