/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsWorld;

@interface SCNPhysicsCharacter : SCNPhysicsBehavior {

	SCD_Struct_SC30 _definition;
	btCharacterControllerInterface* _characterController;
	btPairCachingGhostObject* _ghostObject;
	btOverlapFilterCallback* _filterCallback;
	btCapsuleShape* _capsuleShape;
	SCNPhysicsWorld* _world;

}

@property (assign,nonatomic) double velocity; 
@property (assign,nonatomic) double jumpSpeed; 
-(void)setWalkingDirection:(SCNVector3)arg1 ;
-(void)dealloc;
-(void)setVelocity:(double)arg1 ;
-(double)velocity;
-(void)_update;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(void)_handleCreateIfNeeded:(BOOL)arg1 ;
-(id)initWithCharacter:(id)arg1 ;
-(BOOL)canJump;
-(void)jump;
-(void)setJumpSpeed:(double)arg1 ;
-(double)jumpSpeed;
@end

