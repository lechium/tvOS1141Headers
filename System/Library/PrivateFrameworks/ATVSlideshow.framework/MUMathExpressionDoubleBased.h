/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MUMathExpressionBase.h>

@interface MUMathExpressionDoubleBased : MUMathExpressionBase {

	FunctionInterpreter<double>* mInterpreter;

}
+(double)invalidResult;
+(double)evaluateString:(id)arg1 error:(id*)arg2 ;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(double)valueForVariable:(id)arg1 ;
-(id)stringValue;
-(void)cleanup;
-(BOOL)isConstant;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(void)setVariableValues:(id)arg1 ;
-(double)evaluate;
-(void)setValue:(double)arg1 forVariable:(id)arg2 ;
-(void)resetAllVariables;
-(void)_resetVariableIndicies;
-(void)replaceVariable:(id)arg1 withValue:(double)arg2 ;
-(BOOL)isValueIllegal:(double)arg1 ;
@end
