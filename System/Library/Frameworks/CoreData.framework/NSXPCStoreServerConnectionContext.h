/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectContext, NSXPCStoreConnectionInfo;

@interface NSXPCStoreServerConnectionContext : NSObject {

	NSManagedObjectContext* _context;
	NSXPCStoreConnectionInfo* _info;
	id _manager;

}
-(id)initWithConnectionInfo:(id)arg1 ;
-(void)setNotificationManager:(id)arg1 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)notificationManager;
-(void)dealloc;
-(id)description;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)cache;
-(id)managedObjectContext;
-(SCD_Struct_NS1)auditToken;
-(void)setManagedObjectContext:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(id)entitlements;
@end
