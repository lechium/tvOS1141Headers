/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class CMMotionManager, GCController;

@interface GCMotion : NSObject {

	SCD_Struct_GC13 _gravity;
	SCD_Struct_GC13 _prevGravity;
	SCD_Struct_GC13 _userAcceleration;
	GCQuaternion _attitude;
	GCQuaternion _prevAttitude;
	SCD_Struct_GC13 _eulerAngles;
	SCD_Struct_GC13 _prevEulerAngles;
	SCD_Struct_GC13 _rotationRate;
	float _tip;
	float _tilt;
	CMMotionManager* _motionMgr;
	BOOL _linkedOnOrAfterCompassFeature;
	BOOL _motionLite;
	BOOL _compassEnabled;
	/*^block*/id _valueChangedHandler;
	/*^block*/id _internalValueChangedHandler;
	BOOL _emulatedMotionEnabled;
	BOOL _motionUpdatedEnabled;
	BOOL _paused;
	GCController* _controller;

}

@property (nonatomic,__weak,readonly) GCController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,readonly) SCD_Struct_GC13 gravity;                       //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GC13 userAcceleration;              //@synthesize userAcceleration=_userAcceleration - In the implementation block
@property (nonatomic,readonly) BOOL hasAttitudeAndRotationRate; 
@property (nonatomic,readonly) GCQuaternion attitude;                         //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GC13 rotationRate;                  //@synthesize rotationRate=_rotationRate - In the implementation block
-(void)setValueChangedHandler:(id)arg1 ;
-(GCQuaternion)attitude;
-(GCController *)controller;
-(SCD_Struct_GC13)gravity;
-(SCD_Struct_GC13)userAcceleration;
-(void)_setCompassEnabled:(BOOL)arg1 ;
-(SCD_Struct_GC13)rotationRate;
-(id)initWithController:(id)arg1 ;
-(void)_pauseMotionUpdates:(BOOL)arg1 ;
-(id)valueChangedHandler;
-(void)_stopDeviceMotionUpdates;
-(void)_setGravity:(SCD_Struct_GC13)arg1 ;
-(void)_setUserAcceleration:(SCD_Struct_GC13)arg1 ;
-(void)_setAttitude:(GCQuaternion)arg1 ;
-(void)_setRotationRate:(SCD_Struct_GC13)arg1 ;
-(void)_startDeviceMotionUpdates;
-(BOOL)isEmulatedMicroGamepad;
-(void)_setMotionLite:(BOOL)arg1 ;
-(BOOL)hasAttitudeAndRotationRate;
-(float)_tip;
-(float)_tilt;
-(/*^block*/id)internalValueChangedHandler;
-(void)setInternalValueChangedHandler:(/*^block*/id)arg1 ;
-(BOOL)_isUpdatingDeviceMotion;
@end

