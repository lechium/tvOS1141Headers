//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseProcessor.h"

@interface MTFeedUpdateProcessor : MTBaseProcessor
{
}

- (void)_lpmDidChange;	// IMP=0x000000010011ec88
- (void)_reCheck;	// IMP=0x000000010011eb54
- (_Bool)_isLPMEnabled;	// IMP=0x000000010011eb00
- (void)checkAutoDownloadsForUuids:(id)arg1;	// IMP=0x000000010011e9a0
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x000000010011e990
- (id)entityName;	// IMP=0x000000010011e980
- (id)predicate;	// IMP=0x000000010011e8f0
- (double)updatePredicateDuration;	// IMP=0x000000010011e8e4
- (void)dealloc;	// IMP=0x000000010011e86c
- (void)start;	// IMP=0x000000010011e7dc

@end

