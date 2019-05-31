/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSearchIndexerDataSource <NSObject>
@required
-(id)persistentStoreCoordinator;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(id)newManagedObjectContext;
-(id)allIndexableObjectIDs;
-(void)searchIndexerWillBeginReindexing;
-(void)searchIndexerDidFinishReindexingWithError:(id)arg1;
-(void)stopObservingChanges;
-(id)dataSourceIdentifier;
-(BOOL)needsReindexing;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2;
-(id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2;
-(id)indexableObjectIDsWithIdentifiers:(id)arg1;
-(id)objectIDsNeedingIndexing;
-(id)searchableItemIdentifiersToBeDeleted;
-(id)searchableItemsForObjectIDs:(id)arg1;
-(void)searchIndexerWillIndexObjectIDs:(id)arg1;
-(void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2;
-(void)searchIndexerWillDeleteSearchableItemsWithIdentifiers:(id)arg1;
-(void)searchIndexerDidFinishDeletingSearchableItemsWithIdentifiers:(id)arg1 error:(id)arg2;

@end

