/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsField.h>

@interface PKPhysicsFieldNoise : PKPhysicsField

@property (assign,nonatomic) float smoothness; 
@property (assign,nonatomic) float animationSpeed; 
+(id)field;
-(id)init;
-(void)setSmoothness:(float)arg1 ;
-(void)setAnimationSpeed:(float)arg1 ;
-(float)smoothness;
-(float)animationSpeed;
-(id)initWithField:(shared_ptr<PKCField>*)arg1 ;
@end

