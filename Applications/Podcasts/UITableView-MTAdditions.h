//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@interface UITableView (MTAdditions)
- (_Bool)_hasRowAtIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x0000000100135e1c
- (id)_indexPathForRowBeforeIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x0000000100135dcc
- (id)_indexPathForRowAfterIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x0000000100135d7c
- (id)_indexPathForClosestRowToIndexPath:(id)arg1 focusable:(_Bool)arg2;	// IMP=0x0000000100135ae4
- (unsigned long long)numberOfRowsFromIndexPath:(id)arg1 toFromIndexPath:(id)arg2;	// IMP=0x00000001001358b4
- (id)distanceFromIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x00000001001357dc
- (id)indexPathForClosestFocusableRowToIndexPath:(id)arg1;	// IMP=0x00000001001357cc
- (id)indexPathForClosestRowToIndexPath:(id)arg1;	// IMP=0x00000001001357bc
- (id)indexPathForFocusableRowAfterIndexPath:(id)arg1;	// IMP=0x000000010013563c
- (id)indexPathForRowAfterIndexPath:(id)arg1;	// IMP=0x00000001001354e0
- (id)indexPathForFocusableRowBeforeIndexPath:(id)arg1;	// IMP=0x00000001001353a4
- (id)indexPathForRowBeforeIndexPath:(id)arg1;	// IMP=0x0000000100135254
- (id)indexPathForFirstFocusableRow;	// IMP=0x000000010013513c
- (id)indexPathForLastRowInSection:(long long)arg1;	// IMP=0x00000001001350cc
- (id)indexPathForFirstRowInSection:(long long)arg1;	// IMP=0x000000010013505c
- (id)indexPathForLastRow;	// IMP=0x0000000100134fc8
- (id)indexPathForFirstRow;	// IMP=0x0000000100134f30
- (_Bool)canFocusRowAtIndexPath:(id)arg1;	// IMP=0x0000000100134e48
- (_Bool)hasRowsInSectionAtIndex:(long long)arg1;	// IMP=0x0000000100134df0
- (_Bool)hasRowAtIndexPath:(id)arg1;	// IMP=0x0000000100134d0c
@end

