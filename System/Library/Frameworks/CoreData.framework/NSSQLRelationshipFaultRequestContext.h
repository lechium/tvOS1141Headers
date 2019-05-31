/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSRelationshipDescription, NSManagedObjectID, NSSQLModel;

@interface NSSQLRelationshipFaultRequestContext : NSSQLStoreRequestContext {

	NSRelationshipDescription* _relationship;
	NSManagedObjectID* _objectID;

}

@property (nonatomic,readonly) NSRelationshipDescription * relationship;              //@synthesize relationship=_relationship - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                          //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSSQLModel * sqlModel; 
-(void)executeRequestCore:(id*)arg1 ;
-(id)initWithObjectID:(id)arg1 relationship:(id)arg2 context:(id)arg3 sqlCore:(id)arg4 ;
-(NSSQLModel *)sqlModel;
-(void)dealloc;
-(NSRelationshipDescription *)relationship;
-(NSManagedObjectID *)objectID;
@end

