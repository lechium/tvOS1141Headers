//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTResultsChangeGenerator : NSObject
{
    id <MTResultsChangeGeneratorDelegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <MTResultsChangeGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010018f814
- (id)unbox:(id)arg1;	// IMP=0x000000010018f7d0
- (id)box:(id)arg1;	// IMP=0x000000010018f768
- (id)closestIndexPathToRow:(unsigned long long)arg1 forIndexPaths:(struct NSMutableSet *)arg2;	// IMP=0x000000010018f608
- (void)removeIndexPath:(id)arg1 forObject:(id)arg2 fromMap:(struct NSMutableDictionary *)arg3;	// IMP=0x000000010018f528
- (id)bestIndexPathForObject:(id)arg1 atIndex:(unsigned long long)arg2 fromMap:(struct NSMutableDictionary *)arg3 autoremove:(_Bool)arg4;	// IMP=0x000000010018f3bc
- (id)bestIndexPathForObject:(id)arg1 atIndex:(unsigned long long)arg2 fromMap:(struct NSMutableDictionary *)arg3;	// IMP=0x000000010018f34c
- (struct NSMutableDictionary *)objectsToIndexPathDictionary:(id)arg1 inSection:(unsigned long long)arg2;	// IMP=0x000000010018f154
- (void)generateChangesForExistingObjects:(id)arg1 newObjects:(id)arg2 inSection:(unsigned long long)arg3;	// IMP=0x000000010018eb70
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010018eafc

@end
