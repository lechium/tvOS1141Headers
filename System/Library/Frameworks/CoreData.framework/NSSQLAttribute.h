/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSSet;

@interface NSSQLAttribute : NSSQLColumn

@property (nonatomic,readonly) NSSet * triggerKeys; 
@property (assign,getter=isConstrained,nonatomic) BOOL constrained; 
-(id)attributeDescription;
-(BOOL)isConstrained;
-(void)_setIsBackedByTrigger:(BOOL)arg1 ;
-(void)addKeyForTriggerOnRelationship:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(unsigned char)_sqlTypeForAttributeType:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(NSSet *)triggerKeys;
-(id)initForReadOnlyFetchWithExpression:(id)arg1 ;
-(BOOL)shouldIndex;
-(BOOL)isUnique;
-(void)setConstrained:(BOOL)arg1 ;
-(BOOL)isBackedByTrigger;
-(void)dealloc;
@end

