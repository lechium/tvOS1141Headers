/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSPredicate;

@interface HFConditionCollection : NSObject {

	NSArray* _conditions;

}

@property (nonatomic,retain) NSArray * conditions;                        //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * predicate; 
+(id)_singleConditionForPredicate:(id)arg1 knownConditionsOnly:(BOOL)arg2 ;
+(id)_flattenedSubpredicatesForAndPredicate:(id)arg1 ;
+(id)_findBestMatchingConditionsForPredicates:(id)arg1 ;
+(id)_findBestConditionMatchForPredicates:(id)arg1 ;
+(id)conditionCollectionForPredicate:(id)arg1 ;
-(id)init;
-(NSPredicate *)predicate;
-(id)initWithConditions:(id)arg1 ;
-(void)addCondition:(id)arg1 ;
-(void)removeCondition:(id)arg1 ;
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
@end

