/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>
#import <libobjc.A.dylib/NSPredicatedStoreRequest.h>

@class NSEntityDescription, NSPredicate, NSString;

@interface PFCloudKitMetadataRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest> {

	NSEntityDescription* _entity;
	NSPredicate* _predicate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)propertiesToFetch;
-(id)propertiesToGroupBy;
-(BOOL)includesPropertyValues;
-(BOOL)returnsDistinctResults;
-(BOOL)includesSubentities;
-(unsigned long long)requestType;
-(unsigned long long)resultType;
-(id)entity;
-(id)init;
-(void)dealloc;
-(id)sortDescriptors;
-(void)setPredicate:(id)arg1 ;
-(id)predicate;
-(unsigned long long)fetchBatchSize;
-(unsigned long long)fetchLimit;
-(unsigned long long)fetchOffset;
-(id)initWithEntity:(id)arg1 ;
@end

