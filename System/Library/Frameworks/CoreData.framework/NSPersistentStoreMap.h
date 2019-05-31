/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMappedObjectStore, NSString, NSDictionary;

@interface NSPersistentStoreMap : NSObject {

	NSMappedObjectStore* _store;
	NSString* _databaseUUID;
	NSDictionary* _storeMetadata;
	unsigned long long _nextPK64;
	NSDictionary* _mappings;

}
+(void)initialize;
-(id)initWithStore:(id)arg1 ;
-(id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(void)_setMetadata:(id)arg1 ;
-(void)removeObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)addObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)updateObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2 ;
-(id)handleFetchRequest:(id)arg1 ;
-(unsigned long long)nextPK64;
-(id)databaseUUID;
-(void)setDatabaseUUID:(id)arg1 ;
-(id)externalMapping;
-(unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;
-(id)_storeMetadataForSaving;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(void)dealloc;
-(id)dataForKey:(id)arg1 ;
-(id)store;
-(id)configurationName;
@end
