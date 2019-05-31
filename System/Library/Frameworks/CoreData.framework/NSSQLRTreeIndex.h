/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIndex.h>

@class NSString;

@interface NSSQLRTreeIndex : NSSQLIndex {

	NSString* _tableName;

}

@property (retain,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(NSString *)tableName;
-(id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2 ;
-(void)generateSQLStrings;
-(id)createStatementsForStore:(id)arg1 ;
-(id)dropStatementsForStore:(id)arg1 ;
-(id)bulkUpdateStatementsForStore:(id)arg1 ;
-(void)dealloc;
@end
