/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAnimationPath.h>

@class NSMutableSet;

@interface MPAnimationPathKeyframed : MPAnimationPath {

	NSMutableSet* _keyframes;

}
+(id)animationPath;
-(void)dump;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parent;
-(void)cleanup;
-(double)relativeTimeForKeyframe:(id)arg1 ;
-(id)fullDebugLog;
-(void)setAnimationPath:(id)arg1 ;
-(void)copyKeyframes:(id)arg1 ;
-(id)keyframes;
-(void)addKeyframes:(id)arg1 ;
-(void)removeKeyframe:(id)arg1 ;
-(void)addKeyframe:(id)arg1 ;
-(double)parentPhaseInDuration;
-(double)parentPhaseOutDuration;
-(double)parentMainDuration;
-(id)orderedKeyframes;
-(void)removeKeyframes:(id)arg1 ;
-(void)removeAllKeyframes;
-(id)createKeyframeWithScalar:(double)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithScalar:(double)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 forDuration:(double)arg3 ;
-(id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 forDuration:(double)arg4 ;
@end

