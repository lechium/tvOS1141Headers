/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression {

	NSExpression* _operand;
	SEL _selector;
	NSArray* _arguments;

}
+(BOOL)supportsSecureCoding;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)operand;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3 ;
-(id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2 ;
-(BOOL)_shouldUseParensWithDescription;
-(id)initWithExpressionType:(unsigned long long)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4 ;
-(id)binaryOperatorForSelector;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(void)allowEvaluation;
-(id)predicateFormat;
-(id)function;
-(id)arguments;
@end

