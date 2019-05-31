//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObjectContext.h"

@class NSString;

@interface NSManagedObjectContext (MTAdditions)
+ (id)relaventCallStackSymbolInvokingSave;	// IMP=0x000000010014c4a4
- (CDUnknownBlockType)timedBlockForBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010014c48c
- (id)uuidCache;	// IMP=0x000000010014c378
- (id)titlesOfObjectsInEntity:(id)arg1 predicate:(id)arg2;	// IMP=0x000000010014c028
- (unsigned long long)countOfObjectsInEntity:(id)arg1 predicate:(id)arg2;	// IMP=0x000000010014bea8
- (id)valueForProperty:(id)arg1 objectUuid:(id)arg2 entityName:(id)arg3;	// IMP=0x000000010014bd4c
- (id)objectDictionaryForUuid:(id)arg1 propertiesToFetch:(id)arg2 entityName:(id)arg3;	// IMP=0x000000010014bc58
- (id)objectDictionaryForUuid:(id)arg1 entityName:(id)arg2;	// IMP=0x000000010014bbf0
- (id)objectDictionariesInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertiesToFetch:(id)arg4 includeObjectId:(_Bool)arg5 limit:(unsigned long long)arg6 distinct:(_Bool)arg7 groupBy:(id)arg8;	// IMP=0x000000010014b950
- (id)objectDictionariesInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertiesToFetch:(id)arg4 includeObjectId:(_Bool)arg5;	// IMP=0x000000010014b890
- (id)_predicateForUuid:(id)arg1;	// IMP=0x000000010014b858
- (id)_objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 resultType:(unsigned long long)arg4 returnsObjectsAsFaults:(_Bool)arg5 limit:(long long)arg6 propertiesToFetch:(id)arg7 batchSize:(unsigned long long)arg8;	// IMP=0x000000010014b424
- (id)_objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 resultType:(unsigned long long)arg4 returnsObjectsAsFaults:(_Bool)arg5 limit:(long long)arg6;	// IMP=0x000000010014b370
- (id)objectForUuid:(id)arg1 entityName:(id)arg2;	// IMP=0x000000010014b138
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 returnsObjectsAsFaults:(_Bool)arg4 limit:(long long)arg5;	// IMP=0x000000010014b09c
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 returnsObjectsAsFaults:(_Bool)arg4;	// IMP=0x000000010014b004
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 propertiesToFetch:(id)arg3 batchSize:(unsigned long long)arg4;	// IMP=0x000000010014af58
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x000000010014aecc
- (id)objectIdForUuid:(id)arg1 entityName:(id)arg2;	// IMP=0x000000010014acc8
- (id)objectIdsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x000000010014ac3c
- (void)performBlockAndWaitWithSave:(CDUnknownBlockType)arg1;	// IMP=0x000000010014ab00
- (_Bool)saveInCurrentBlock;	// IMP=0x000000010014aa6c

// Remaining properties
@property(retain, nonatomic) NSString *name;
@end

