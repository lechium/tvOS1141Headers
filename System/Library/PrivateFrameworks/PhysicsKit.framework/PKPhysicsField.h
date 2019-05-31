/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class PKRegion;

@interface PKPhysicsField : NSObject {

	shared_ptr<PKCField>* _field;
	PKRegion* _region;
	 _position;
	float _rotation;
	 _scale;
	BOOL _override;

}

@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloff; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isOverride,nonatomic) BOOL override;                    //@synthesize override=_override - In the implementation block
@property (nonatomic,retain) id region; 
@property (assign,nonatomic)  direction; 
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic)  position; 
@property (assign,nonatomic) float rotation; 
@property (assign,nonatomic)  scale; 
@property (assign,nonatomic) float minimumRadius; 
@property (assign,nonatomic,__weak) id<NSObject> representedObject; 
-(id)init;
-()scale;
-(void)dealloc;
-(BOOL)isActive;
-(void)setScale:;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setPosition:;
-(void)setActive:(BOOL)arg1 ;
-()position;
-(void)setDirection:;
-()direction;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(id)region;
-(void)setRegion:(id)arg1 ;
-(float)strength;
-(void)setStrength:(float)arg1 ;
-(unsigned)categoryBitMask;
-(void)setFalloff:(float)arg1 ;
-(float)falloff;
-(void)setMinimumRadius:(float)arg1 ;
-(float)minimumRadius;
-(shared_ptr<PKCField>*)_field;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(id<NSObject>)representedObject;
-(void)setRepresentedObject:(id<NSObject>)arg1 ;
-(void)set_field:(shared_ptr<PKCField>*)arg1 ;
-(BOOL)override;
-(void)setIsOverride:(BOOL)arg1 ;
-(BOOL)isOverride;
-(void)setOverride:(BOOL)arg1 ;
@end

