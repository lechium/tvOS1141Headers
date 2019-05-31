/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLRelationship.h>

@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {

	NSString* _correlationTableName;
	NSString* _columnName;
	NSString* _orderColumnName;

}
-(id)inverseManyToMany;
-(id)columnName;
-(BOOL)isReflexive;
-(id)correlationTableName;
-(id)inverseColumnName;
-(id)inverseOrderColumnName;
-(id)orderColumnName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setColumnName:(id)arg1 ;
-(void)_setInverseManyToMany:(id)arg1 ;
-(unsigned char)columnSQLType;
-(unsigned char)orderColumnSQLType;
-(void)_setCorrelationTableName:(id)arg1 ;
-(void)_setOrderColumnName:(id)arg1 ;
-(BOOL)isTableSchemaEqual:(id)arg1 ;
-(BOOL)isMaster;
-(void)dealloc;
@end
