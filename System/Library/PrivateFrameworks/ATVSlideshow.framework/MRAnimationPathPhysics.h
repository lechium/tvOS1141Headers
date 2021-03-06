/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAnimationPathPhysics.h>

@interface MRAnimationPathPhysics : MCAnimationPathPhysics {

	float mBaseValue;
	float mDeltaValue;
	float mVelocity;
	double mTime;

}

@property (assign,nonatomic) float baseValue; 
@property (assign,nonatomic) float velocity; 
-(void)setVelocity:(float)arg1 ;
-(float)velocity;
-(id)initWithMCAnimationPath:(id)arg1 ;
-(void)setBaseValue:(float)arg1 ;
-(float)computeValueForTime:(double)arg1 withContext:(id)arg2 ;
-(float)baseValue;
@end

