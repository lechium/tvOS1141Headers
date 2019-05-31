/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSStoreMapping.h>

@class NSSQLModel, NSEntityDescription, NSString, NSMutableDictionary, NSArray, NSMutableArray, NSSQLPrimaryKey, NSSQLEntityKey, NSSQLOptLockKey, NSSQLStoreMappingGenerator, NSKnownKeysMappingStrategy, NSDictionary;

@interface NSSQLEntity : NSStoreMapping {

	NSSQLModel* _model;
	NSEntityDescription* _entityDescription;
	NSString* _tableName;
	NSMutableDictionary* _properties;
	NSArray* _propertyAllCache;
	NSArray* _propertiesAllToManysCache;
	NSArray* _propertyManyToManyCache;
	NSMutableArray* _columnsToFetch;
	NSMutableArray* _ekColumns;
	NSMutableArray* _fkColumns;
	NSMutableArray* _fokColumns;
	NSMutableArray* _attrColumns;
	NSMutableArray* _virtualFKs;
	NSSQLPrimaryKey* _primaryKey;
	NSSQLEntityKey* _entityKey;
	NSSQLOptLockKey* _optLockKey;
	NSMutableArray* _subentities;
	NSSQLEntity* _superentity;
	NSSQLEntity* _rootEntity;
	NSSQLStoreMappingGenerator* _mappingGenerator;
	unsigned _entityID;
	unsigned _subentityMaxID;
	NSRange _toOneRange;
	NSMutableArray* _uniqueAttributes;
	NSMutableArray* _multicolumnUniquenessConstraints;
	void* _fetch_entity_plan;
	NSMutableDictionary* _rtreeIndices;
	NSKnownKeysMappingStrategy* _propertyMapping;
	void* _odiousHashHackStorage;
	struct {
		unsigned _hasAttributesWithExternalDataReferences : 1;
		unsigned _hasAttributesMonitoredByTriggers : 1;
		unsigned _hasAttributesBackedByTriggers : 1;
		unsigned _reserved : 29;
	}  _sqlentityFlags;

}

@property (readonly) NSDictionary * rtreeIndexes; 
-(void)finalize;
-(id)propertyMapping;
-(id)relationshipNamed:(id)arg1 ;
-(id)entityDescription;
-(unsigned)fetchIndexForKey:(id)arg1 ;
-(id)foreignKeyColumns;
-(id)tableName;
-(id)foreignEntityKeyColumns;
-(id)foreignOrderKeyColumns;
-(id)attributeColumns;
-(id)primaryKey;
-(id)subentityKey;
-(id)optLockKey;
-(id)externalName;
-(id)_propertySearchMapping;
-(void)_addSubentity:(id)arg1 ;
-(void)setSubentities:(id)arg1 ;
-(id)toManyRelationships;
-(id)manyToManyRelationships;
-(id)propertyNamed:(id)arg1 ;
-(void*)_odiousHashHack;
-(id)attributeNamed:(id)arg1 ;
-(void)_setHasAttributesMonitoredByTriggers:(BOOL)arg1 ;
-(void)_setHasAttributesBackedByTriggers:(BOOL)arg1 ;
-(void)addUniqueAttribute:(id)arg1 ;
-(id)rtreeIndexForIndexNamed:(id)arg1 ;
-(id)mappingGenerator;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(BOOL)isRootEntity;
-(id)rootEntity;
-(BOOL)hasAttributesWithExternalDataReferences;
-(NSDictionary *)rtreeIndexes;
-(void)_generateIndexes;
-(void)_doPostModelGenerationCleanup;
-(id)columnsToFetch;
-(BOOL)hasSubentities;
-(unsigned)subentityMaxID;
-(void)_addRootColumnToFetch:(id)arg1 ;
-(void)_addColumnToFetch:(id)arg1 ;
-(void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2 ;
-(id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2 ;
-(void)_generateProperties;
-(void)setSuperentity:(id)arg1 ;
-(unsigned)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned)arg2 ;
-(id)multicolumnUniquenessConstraints;
-(id)uniqueAttributes;
-(BOOL)_collectFKSlots:(id)arg1 error:(id*)arg2 ;
-(id)binaryIndexForIndexDescription:(id)arg1 ;
-(id)rtreeIndexForIndexDescription:(id)arg1 ;
-(id)initWithModel:(id)arg1 entityDescription:(id)arg2 ;
-(id)columnsToCreate;
-(id)virtualForeignKeyColumns;
-(BOOL)hasInheritance;
-(BOOL)isKindOfSQLEntity:(id)arg1 ;
-(id)_sqlPropertyWithRenamingIdentifier:(id)arg1 ;
-(void)_generateInverseRelationshipsAndMore;
-(void)_organizeConstraints;
-(void)_generateMulticolumnUniquenessConstraints;
-(BOOL)_entityIsBroken:(id*)arg1 ;
-(NSRange)_toOneRange;
-(BOOL)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3 ;
-(BOOL)_hasAttributesMonitoredByTriggers;
-(BOOL)_hasAttributesBackedByTriggers;
-(id)indexForIndexDescription:(id)arg1 ;
-(void)setEntityID:(unsigned)arg1 ;
-(unsigned)entityID;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)model;
-(id)attributes;
-(id)properties;
-(id)propertiesByName;
-(id)superentity;
-(id)subentities;
@end

