/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSString, NSMutableDictionary;

@interface ACDDatabaseMigrator : NSObject {

	NSManagedObjectContext* _migrationContext;
	NSPersistentStoreCoordinator* _privateCoordinator;
	NSPersistentStoreCoordinator* _realCoordinator;
	NSString* _databasePath;
	NSMutableDictionary* _realOptions;

}
-(BOOL)run;
-(id)initForDatabaseAtPath:(id)arg1 persistentStoreCoordinator:(id)arg2 options:(id)arg3 ;
-(id)_setUpContextForMigration;
-(long long)_versionForModel:(id)arg1 ;
-(void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1 ;
-(void)_migrateNameAttributeOfDataclassEntities;
-(void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1 ;
-(void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2 ;
-(id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1 ;
-(id)_fetchAllDataclassEntitles;
-(id)_compatibleModelForStoreAtURL:(id)arg1 ;
@end

