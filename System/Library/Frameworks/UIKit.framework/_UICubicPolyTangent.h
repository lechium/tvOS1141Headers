/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettingsKeyObserver.h>

@class NSString;

@interface _UICubicPolyTangent : NSObject <_UISettingsKeyObserver> {

	double _initialLinearGain;
	double _parabolicGain;
	double _cubicGain;
	double _quarticGain;
	double _tangentLineSpeed;
	double _tangentSqrtSpeed;
	double _tangentCbrtSpeed;
	double _tangentHyperCbrtSpeed;

}

@property (assign,nonatomic) double initialLinearGain;                  //@synthesize initialLinearGain=_initialLinearGain - In the implementation block
@property (assign,nonatomic) double parabolicGain;                      //@synthesize parabolicGain=_parabolicGain - In the implementation block
@property (assign,nonatomic) double cubicGain;                          //@synthesize cubicGain=_cubicGain - In the implementation block
@property (assign,nonatomic) double quarticGain;                        //@synthesize quarticGain=_quarticGain - In the implementation block
@property (assign,nonatomic) double tangentLineSpeed;                   //@synthesize tangentLineSpeed=_tangentLineSpeed - In the implementation block
@property (assign,nonatomic) double tangentSqrtSpeed;                   //@synthesize tangentSqrtSpeed=_tangentSqrtSpeed - In the implementation block
@property (assign,nonatomic) double tangentCbrtSpeed;                   //@synthesize tangentCbrtSpeed=_tangentCbrtSpeed - In the implementation block
@property (assign,nonatomic) double tangentHyperCbrtSpeed;              //@synthesize tangentHyperCbrtSpeed=_tangentHyperCbrtSpeed - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyboardTrackpadCurve;
-(id)init;
-(BOOL)isEmpty;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(double)piecewiseCubicAcceleratedSpeed:(double)arg1 ;
-(int)RootPowerOfEarliestTangent:(int)arg1 ;
-(double)tangentSpeedForPower:(int)arg1 ;
-(double)clipForIOFixedMath:(double)arg1 polynomialPower:(int)arg2 tangencyStartingAt:(double)arg3 ;
-(void)clipGainsForIOFixedMathWithTangency;
-(double)quarticDerivative:(double)arg1 ;
-(double)quarticFunction:(double)arg1 ;
-(double)quarticTangentFunction:(double)arg1 powerOfEarliestTangent:(int)arg2 ;
-(void)setTangentLineSpeed:(double)arg1 ;
-(void)setTangentSqrtSpeed:(double)arg1 ;
-(void)setParabolicGain:(double)arg1 ;
-(void)setInitialLinearGain:(double)arg1 ;
-(void)setCubicGain:(double)arg1 ;
-(void)setQuarticGain:(double)arg1 ;
-(void)setTangentCbrtSpeed:(double)arg1 ;
-(void)setTangentHyperCbrtSpeed:(double)arg1 ;
-(double)gainForPower:(int)arg1 ;
-(double)initialLinearGain;
-(double)parabolicGain;
-(double)cubicGain;
-(double)quarticGain;
-(double)tangentLineSpeed;
-(double)tangentSqrtSpeed;
-(double)tangentCbrtSpeed;
-(double)tangentHyperCbrtSpeed;
@end

