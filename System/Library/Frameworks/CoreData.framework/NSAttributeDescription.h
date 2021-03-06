/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSString, NSData;

@interface NSAttributeDescription : NSPropertyDescription {

	unsigned short _type;
	Class _attributeValueClass;
	NSString* _valueTransformerName;
	NSString* _attributeValueClassName;
	id _defaultValue;

}

@property (assign) BOOL preserveValueOnDeletionInPersistentHistory; 
@property (assign) unsigned long long attributeType; 
@property (copy) NSString * attributeValueClassName; 
@property (retain) id defaultValue; 
@property (copy,readonly) NSData * versionHash; 
@property (copy) NSString * valueTransformerName; 
@property (assign) BOOL allowsExternalBinaryDataStorage; 
+(id)stringForAttributeType:(unsigned long long)arg1 ;
+(id)_classNameForType:(unsigned long long)arg1 ;
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(unsigned long long)_propertyType;
-(NSString *)valueTransformerName;
-(BOOL)allowsExternalBinaryDataStorage;
-(BOOL)preserveValueOnDeletionInPersistentHistory;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(BOOL)storesBinaryDataExternally;
-(NSString *)attributeValueClassName;
-(BOOL)isIndexed;
-(void)_sortOutDefaultNumericValuesBecauseDoublesAndFloatsDontCompareEqualAndThatBreaksTests;
-(void)setAttributeValueClassName:(NSString *)arg1 ;
-(id)validationPredicates;
-(id)validationWarnings;
-(void)_setPreserveValueOnDeletionInPersistentHistory:(BOOL)arg1 ;
-(void)setValueTransformerName:(NSString *)arg1 ;
-(void)setAllowsExternalBinaryDataStorage:(BOOL)arg1 ;
-(void)setPreserveValueOnDeletionInPersistentHistory:(BOOL)arg1 ;
-(Class)_attributeValueClass;
-(id)_initWithName:(id)arg1 type:(unsigned long long)arg2 withClassName:(id)arg3 ;
-(id)_rawValidationPredicates;
-(id)_rawValidationWarnings;
-(long long)_canConvertPredicate:(id)arg1 andWarning:(id)arg2 ;
-(BOOL)_comparePredicatesAndWarnings:(id)arg1 ;
-(BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1 ;
-(void)_createCachesAndOptimizeState;
-(BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(id)_initWithName:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3 ;
-(void)setStoresBinaryDataExternally:(BOOL)arg1 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(unsigned long long)attributeType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)defaultValue;
-(id)_initWithType:(unsigned long long)arg1 ;
-(NSData *)versionHash;
-(void)setDefaultValue:(id)arg1 ;
@end

