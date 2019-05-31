/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ML3MusicLibrary, ML3Predicate, NSArray, NSString, ML3AggregateQuery;

@interface ML3Query : NSObject <NSSecureCoding, NSCopying> {

	ML3MusicLibrary* _library;
	Class _entityClass;
	ML3Predicate* _predicate;
	NSArray* _orderingTerms;
	NSString* _propertyToCount;
	ML3AggregateQuery* _nonDirectAggregateQuery;
	BOOL _usingSections;
	long long _options;
	BOOL _filtersOnDynamicProperties;
	unsigned long long _limit;

}

@property (nonatomic,readonly) NSString * selectPersistentIDsSQL; 
@property (nonatomic,readonly) NSString * selectCountSQL; 
@property (nonatomic,readonly) NSString * persistentIDProperty; 
@property (nonatomic,readonly) ML3MusicLibrary * library;                                          //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) Class entityClass;                                                  //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,readonly) ML3Predicate * predicate;                                           //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) ML3Predicate * predicateIncludingSystemwidePredicates; 
@property (nonatomic,readonly) NSArray * orderingTerms;                                            //@synthesize orderingTerms=_orderingTerms - In the implementation block
@property (nonatomic,readonly) NSString * propertyToCount;                                         //@synthesize propertyToCount=_propertyToCount - In the implementation block
@property (nonatomic,readonly) BOOL hasEntities; 
@property (nonatomic,readonly) long long anyEntityPersistentID; 
@property (nonatomic,readonly) unsigned long long countOfEntities; 
@property (nonatomic,readonly) ML3AggregateQuery * nonDirectAggregateQuery;                        //@synthesize nonDirectAggregateQuery=_nonDirectAggregateQuery - In the implementation block
@property (nonatomic,readonly) NSString * sectionProperty; 
@property (nonatomic,readonly) BOOL usingSections;                                                 //@synthesize usingSections=_usingSections - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                                             //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL ignoreSystemFilterPredicates; 
@property (assign,nonatomic) BOOL ignoreRestrictionsPredicates; 
@property (nonatomic,readonly) long long options;                                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL filtersOnDynamicProperties;                                    //@synthesize filtersOnDynamicProperties=_filtersOnDynamicProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)options;
-(ML3Predicate *)predicate;
-(id)sections;
-(id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 usingSections:(BOOL)arg5 nonDirectAggregateQuery:(id)arg6 propertyToCount:(id)arg7 options:(long long)arg8 ;
-(NSArray *)orderingTerms;
-(ML3AggregateQuery *)nonDirectAggregateQuery;
-(NSString *)propertyToCount;
-(BOOL)usingSections;
-(void)loadNamesFromLibrary:(id)arg1 onConnection:(id)arg2 forPredicate:(id)arg3 loadAllNames:(BOOL)arg4 cancelHandler:(/*^block*/id)arg5 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)persistentIDParameters;
-(BOOL)hasRowForColumn:(id)arg1 ;
-(unsigned long long)countOfDistinctRowsForColumn:(id)arg1 ;
-(BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 ;
-(id)selectSectionsSQL;
-(NSString *)sectionProperty;
-(id)sectionsParameters;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 sectionProperty:(id)arg3 cancelBlock:(/*^block*/id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)nameOrderPropertyForProperty:(id)arg1 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5 distinct:(BOOL)arg6 limit:(unsigned long long)arg7 ;
-(ML3Predicate *)predicateIncludingSystemwidePredicates;
-(NSString *)persistentIDProperty;
-(BOOL)sectionsPersistentIDColumnIsDistinct;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 limit:(unsigned long long)arg4 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 distinct:(BOOL)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 distinct:(BOOL)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 distinct:(BOOL)arg3 ;
-(id)reverseQuery;
-(BOOL)deleteAllEntitiesFromLibrary;
-(BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 usingConnection:(id)arg2 ;
-(void)enumeratePersistentIDsAndSectionsWithProperty:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5 ;
-(id)lowerBoundParametersForOrderingTerms:(id)arg1 lowerBoundPersistentID:(long long)arg2 ;
-(id)selectUnorderedPersistentIDsSQL;
-(NSString *)selectPersistentIDsSQL;
-(NSString *)selectCountSQL;
-(id)countStatementParameters;
-(ML3MusicLibrary *)library;
-(Class)entityClass;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)filtersOnDynamicProperties;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(long long)anyEntityPersistentID;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setIgnoreRestrictionsPredicates:(BOOL)arg1 ;
-(BOOL)ignoreSystemFilterPredicates;
-(void)setIgnoreSystemFilterPredicates:(BOOL)arg1 ;
-(BOOL)ignoreRestrictionsPredicates;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasEntities;
-(unsigned long long)countOfEntities;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(/*^block*/id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
@end

