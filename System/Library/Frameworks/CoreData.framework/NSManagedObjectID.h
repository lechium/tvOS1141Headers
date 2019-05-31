/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSEntityDescription, NSPersistentStore;

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSEntityDescription * entity; 
@property (__weak,readonly) NSPersistentStore * persistentStore; 
@property (getter=isTemporaryID,readonly) BOOL temporaryID; 
+(BOOL)accessInstanceVariablesDirectly;
+(id)_newArchiveForScalarObjectIDs:(id)arg1 ;
+(id)unarchivedScalarObjectIDsFromData:(id)arg1 withCoordinator:(id)arg2 ;
+(void)initialize;
+(long long)version;
-(id)_storeInfo1;
-(id)_storeIdentifier;
-(NSPersistentStore *)persistentStore;
-(long long)_referenceData64;
-(id)_retainedURIString;
-(id)_referenceData;
-(BOOL)_isPersistentStoreAlive;
-(NSEntityDescription *)entity;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isTemporaryID;
-(id)URIRepresentation;
-(id)entityName;
@end
