/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@interface NSCompoundPredicateOperator : NSPredicateOperator
+(id)notPredicateOperator;
+(id)andPredicateOperator;
+(id)orPredicateOperator;
-(BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2 substitutionVariables:(id)arg3 ;
-(BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)symbol;
-(id)predicateFormat;
@end
