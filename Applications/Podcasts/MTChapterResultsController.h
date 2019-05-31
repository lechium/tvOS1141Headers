//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTResultsController.h"

@class MTPlayerItem, NSArray;

@interface MTChapterResultsController : MTResultsController
{
    MTPlayerItem *_currentItem;	// 8 = 0x8
    NSArray *_chapters;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *chapters; // @synthesize chapters=_chapters;
@property(retain, nonatomic) MTPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
- (void).cxx_destruct;	// IMP=0x00000001001272c0
- (void)didLoadChapters;	// IMP=0x0000000100126edc
- (id)allObjects;	// IMP=0x0000000100126ed0
- (unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1;	// IMP=0x0000000100126e84
- (id)indexPathForObject:(id)arg1;	// IMP=0x0000000100126df4
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0000000100126d58
- (void)reloadData;	// IMP=0x0000000100126b48
- (void)dealloc;	// IMP=0x0000000100126ad0
- (id)init;	// IMP=0x0000000100126958

@end

