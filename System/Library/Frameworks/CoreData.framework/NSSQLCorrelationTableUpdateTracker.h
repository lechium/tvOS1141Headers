/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLManyToMany;

@interface NSSQLCorrelationTableUpdateTracker : NSObject {

	NSSQLManyToMany* _relationship;
	id _inserts;
	id _deletes;
	id _masterUpdates;
	id _otherUpdates;

}

@property (readonly) NSSQLManyToMany * relationship;              //@synthesize relationship=_relationship - In the implementation block
-(void)enumerateInsertsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDeletesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasMasterReorders;
-(void)enumerateMasterReordersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMasterReordersPart2UsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasReorders;
-(void)enumerateReordersUsingBlock:(/*^block*/id)arg1 ;
-(id)_organizeValues:(id)arg1 ;
-(id)initForRelationship:(id)arg1 ;
-(void)trackInserts:(id)arg1 deletes:(id)arg2 reorders:(id)arg3 forObjectWithID:(id)arg4 ;
-(void)trackReorders:(id)arg1 forObjectWithID:(id)arg2 ;
-(void)dealloc;
-(BOOL)hasInserts;
-(NSSQLManyToMany *)relationship;
-(BOOL)hasDeletes;
@end

