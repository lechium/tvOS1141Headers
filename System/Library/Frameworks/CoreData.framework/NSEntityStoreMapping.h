/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSEntityDescription, NSDictionary, NSArray, NSString;

@interface NSEntityStoreMapping : NSStoreMapping {

	NSEntityDescription* _entity;
	NSDictionary* _propertyMappings;
	NSArray* _primaryKeys;
	BOOL _isSingleTableEntity;
	NSString* _subentityColumn;
	unsigned _subentityID;

}
-(id)attributeMappings;
-(id)relationshipMappings;
-(void)setPropertyMappings:(id)arg1 ;
-(void)setPrimaryKeys:(id)arg1 ;
-(void)setSingleTableEntity:(BOOL)arg1 ;
-(void)setSubentityColumn:(id)arg1 ;
-(void)setSubentityID:(unsigned)arg1 ;
-(id)propertyMappings;
-(id)primaryKeys;
-(BOOL)isSingleTableEntity;
-(id)subentityColumn;
-(unsigned)subentityID;
-(id)primaryKeyColumnDefinitions;
-(id)attributeColumnDefinitions;
-(id)foreignKeyColumnDefinitions;
-(id)foreignKeyConstraintDefinitions;
-(id)createTableStatement;
-(id)entity;
-(void)setEntity:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithEntity:(id)arg1 ;
@end
