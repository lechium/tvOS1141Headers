/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, NSArray;

@interface PLPersonContactInfoMigrator : NSObject {

	CNContactStore* _contactStore;
	NSArray* _keysToFetch;
	int _updateNameCount;
	int _populateMatchingDictionaryCount;

}
+(void)migratePersonContactInfoInPhotoLibrary:(id)arg1 ;
+(id)migrationQueue;
-(id)init;
-(void)migratePersonContactInfoInPhotoLibrary:(id)arg1 ;
-(void)migratePersonContactInfoInContext:(id)arg1 ;
-(void)migratePerson:(id)arg1 ;
-(id)enumerateResultsWithIncrementalSaveUsingFetchRequest:(id)arg1 inContext:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)updateNameOfPerson:(id)arg1 withContact:(id)arg2 ;
-(void)populateMatchingDictionaryOfPerson:(id)arg1 withContact:(id)arg2 ;
@end
