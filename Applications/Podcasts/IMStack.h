//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IMStack : NSObject
{
    NSMutableArray *_array;	// 8 = 0x8
}

- (unsigned long long)depth;	// IMP=0x00000001001daabc
- (_Bool)isEmpty;	// IMP=0x00000001001daa8c
- (void)removeAll;	// IMP=0x00000001001daa74
- (id)peekDown:(unsigned long long)arg1;	// IMP=0x00000001001daa00
- (id)peek;	// IMP=0x00000001001da9e8
- (id)pop;	// IMP=0x00000001001da990
- (void)pushObjects:(id)arg1;	// IMP=0x00000001001da938
- (void)push:(id)arg1;	// IMP=0x00000001001da920
- (void)dealloc;	// IMP=0x00000001001da8c4
- (id)init;	// IMP=0x00000001001da850

@end
