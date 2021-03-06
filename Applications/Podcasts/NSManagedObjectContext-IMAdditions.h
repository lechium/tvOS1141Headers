//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObjectContext.h"

@interface NSManagedObjectContext (IMAdditions)
+ (id)mergePredicate:(id)arg1 andPredicate:(id)arg2;	// IMP=0x000000010023f0cc
- (id)entity:(id)arg1 withPredicate:(id)arg2;	// IMP=0x000000010023fbdc
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(_Bool)arg4 fetchLimit:(int)arg5;	// IMP=0x000000010023fbcc
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortBy:(id)arg3 ascending:(_Bool)arg4 fetchLimit:(int)arg5 prefetchRelationships:(id)arg6;	// IMP=0x000000010023fabc
- (id)entity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(int)arg4 prefetchRelationships:(id)arg5;	// IMP=0x000000010023f8dc
- (id)unbatchedObjectsWithPredicate:(id)arg1 forEntity:(id)arg2;	// IMP=0x000000010023f788
- (id)objectIDsWithPredicate:(id)arg1 forEntity:(id)arg2;	// IMP=0x000000010023f620
- (id)newByClass:(Class)arg1;	// IMP=0x000000010023f5d4
- (id)copyEntityProperty:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3;	// IMP=0x000000010023f53c
- (id)copyEntityPropertyArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5;	// IMP=0x000000010023f4cc
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5;	// IMP=0x000000010023f4bc
- (id)copyEntityPropertiesArray:(id)arg1 fromEntityName:(id)arg2 withPredicate:(id)arg3 sortBy:(id)arg4 ascending:(_Bool)arg5 distinct:(_Bool)arg6;	// IMP=0x000000010023f248
- (unsigned long long)countEntity:(id)arg1 withPredicate:(id)arg2;	// IMP=0x000000010023f164
@end

