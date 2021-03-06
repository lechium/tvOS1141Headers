/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class PKPhysicsBody;

@interface PKPhysicsContact : NSObject {

	PKPhysicsBody* _bodyA;
	PKPhysicsBody* _bodyB;
	CGPoint _contactPoint;
	CGVector _contactNormal;
	double _impulse;
	BOOL _didBegin;
	BOOL _didEnd;

}

@property (assign) BOOL didBegin; 
@property (assign) BOOL didEnd; 
@property (nonatomic,retain,readonly) PKPhysicsBody * bodyA; 
@property (nonatomic,retain,readonly) PKPhysicsBody * bodyB; 
@property (nonatomic,readonly) CGPoint contactPoint; 
@property (nonatomic,readonly) CGVector contactNormal; 
@property (nonatomic,readonly) double collisionImpulse; 
-(BOOL)didBegin;
-(id)init;
-(BOOL)didEnd;
-(PKPhysicsBody *)bodyA;
-(PKPhysicsBody *)bodyB;
-(CGPoint)contactPoint;
-(void)setDidBegin:(BOOL)arg1 ;
-(void)setDidEnd:(BOOL)arg1 ;
-(void)setContactNormal:(CGVector)arg1 ;
-(void)setCollisionImpulse:(double)arg1 ;
-(void)setContactPoint:(CGPoint)arg1 ;
-(CGVector)contactNormal;
-(double)collisionImpulse;
-(void)setBodyA:(PKPhysicsBody *)arg1 ;
-(void)setBodyB:(PKPhysicsBody *)arg1 ;
@end

