/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@interface _NSCoreManagedObjectID : NSManagedObjectID
+(BOOL)accessInstanceVariablesDirectly;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)_storeInfo1;
+(void)_setStoreInfo1:(id)arg1 ;
+(char*)generatedNameSuffix;
+(id)_retain_1;
+(void)_release_1;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
+(void)_storeDeallocated;
+(void)release;
+(id)alloc;
+(id)retain;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(long long)version;
-(void)finalize;
-(id)_storeInfo1;
-(id)_storeIdentifier;
-(id)persistentStore;
-(BOOL)_isPersistentStoreAlive;
-(id)entity;
-(oneway void)release;
-(id)retain;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(BOOL)isTemporaryID;
-(id)URIRepresentation;
-(id)entityName;
@end

