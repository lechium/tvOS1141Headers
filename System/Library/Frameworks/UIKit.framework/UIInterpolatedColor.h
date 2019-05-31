/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIVectorOperatable.h>

@class NSString;

@interface UIInterpolatedColor : NSObject <UIVectorOperatable> {

	UIEdgeInsets _color;
	double _epsilon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)valueWithUIColor:(id)arg1 ;
+(id)valueWithCGColor:(CGColorRef)arg1 ;
+(id)epsilon;
+(id)zero;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)getValue;
-(id)initWithDecomposedColor:(UIEdgeInsets)arg1 ;
-(id)initWithDecomposedColor:(UIEdgeInsets)arg1 epsilon:(double)arg2 ;
-(CGColorRef)getCGColor;
-(id)getUIColor;
-(id)interpolateTo:(id)arg1 progress:(double)arg2 ;
-(void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(SCD_Struct_UI34)arg5 state:(SCD_Struct_UI31)arg6 delta:(double)arg7 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2 ;
-(BOOL)isUndefined;
-(void)reinitWithVector:(id)arg1 ;
-(id)getNSValue;
-(id)multiplyByScalar:(double)arg1 ;
-(id)multiplyByVector:(id)arg1 ;
-(id)addVector:(id)arg1 ;
@end

