/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSMigrationManager.h>

@interface NSSQLiteInPlaceMigrationManager : NSMigrationManager
+(BOOL)_canMigrateWithMappingModel:(id)arg1 ;
-(BOOL)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8 ;
-(void)dealloc;
@end
