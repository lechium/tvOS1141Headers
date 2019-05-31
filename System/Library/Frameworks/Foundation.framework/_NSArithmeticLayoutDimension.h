/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLayoutDimension.h>
#import <libobjc.A.dylib/NSCompositeLayoutAnchor.h>

@class NSArray, NSLayoutDimension;

@interface _NSArithmeticLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {

	NSLayoutDimension* _rootLayoutDimension;
	double _multiplier;
	double _constant;

}

@property (readonly) NSArray * _childAnchors; 
-(id)_nearestAncestorLayoutItem;
-(id)_expressionInContext:(SCD_Struct_NS49)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(NSArray *)_childAnchors;
-(id)equationDescription;
-(double)_valueInEngine:(id)arg1 ;
-(id)initWithMultiplier:(double)arg1 dimension:(id)arg2 constant:(double)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

