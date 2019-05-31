//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@interface MTIndexPathShifter : NSObject
{
    _Bool _isComplete;	// 8 = 0x8
    NSIndexPath *_initialIndexPath;	// 16 = 0x10
    NSIndexPath *_shiftedIndexPath;	// 24 = 0x18
}

@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(retain, nonatomic) NSIndexPath *shiftedIndexPath; // @synthesize shiftedIndexPath=_shiftedIndexPath;
@property(retain, nonatomic) NSIndexPath *initialIndexPath; // @synthesize initialIndexPath=_initialIndexPath;
- (void).cxx_destruct;	// IMP=0x0000000100144b10
- (void)_setIndexPath:(unsigned long long)arg1;	// IMP=0x00000001001449c8
- (void)_shiftIndexPath:(unsigned long long)arg1;	// IMP=0x0000000100144964
- (void)processChangeAtIndexPath:(id)arg1 forChangeType:(unsigned long long)arg2 newIndexPath:(id)arg3;	// IMP=0x00000001001446f8

@end

