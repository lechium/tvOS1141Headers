/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNAccelerationConstraint : SCNConstraint {

	float _maximumLinearVelocity;
	float _maximumLinearAcceleration;
	float _decelerationDistance;
	float _damping;

}

@property (assign,nonatomic) double maximumLinearAcceleration; 
@property (assign,nonatomic) double maximumLinearVelocity; 
@property (assign,nonatomic) double decelerationDistance; 
@property (assign,nonatomic) double damping; 
+(BOOL)supportsSecureCoding;
+(id)accelerationConstraint;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDamping:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)damping;
-(double)maximumLinearVelocity;
-(void)setMaximumLinearVelocity:(double)arg1 ;
-(double)maximumLinearAcceleration;
-(void)setMaximumLinearAcceleration:(double)arg1 ;
-(double)decelerationDistance;
-(void)setDecelerationDistance:(double)arg1 ;
@end
