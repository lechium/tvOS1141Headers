/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface PTXParallaxEngineSettings : _UISettings {

	BOOL _shiftEnabled;
	BOOL _showIdleIndicator;
	BOOL _jumpEnabled;
	BOOL _playJumpSound;
	BOOL _directionalLockEnabled;
	BOOL _showDirectionalLockIndicators;
	unsigned long long _frameInterval;
	double _inputSmoothing;
	double _sigmoidDegree;
	double _shiftSpeed;
	double _shiftDistanceDependence;
	double _idleLeeway;
	double _delayBeforeIdle;
	double _jumpThreshold;
	double _directionalLockThreshold;
	double _directionalLockStickiness;
	double _directionalLockSharpness;

}

@property (assign) unsigned long long frameInterval;                //@synthesize frameInterval=_frameInterval - In the implementation block
@property (assign) double inputSmoothing;                           //@synthesize inputSmoothing=_inputSmoothing - In the implementation block
@property (assign) double sigmoidDegree;                            //@synthesize sigmoidDegree=_sigmoidDegree - In the implementation block
@property (assign) BOOL shiftEnabled;                               //@synthesize shiftEnabled=_shiftEnabled - In the implementation block
@property (assign) double shiftSpeed;                               //@synthesize shiftSpeed=_shiftSpeed - In the implementation block
@property (assign) double shiftDistanceDependence;                  //@synthesize shiftDistanceDependence=_shiftDistanceDependence - In the implementation block
@property (assign) double idleLeeway;                               //@synthesize idleLeeway=_idleLeeway - In the implementation block
@property (assign) double delayBeforeIdle;                          //@synthesize delayBeforeIdle=_delayBeforeIdle - In the implementation block
@property (assign) BOOL showIdleIndicator;                          //@synthesize showIdleIndicator=_showIdleIndicator - In the implementation block
@property (assign) BOOL jumpEnabled;                                //@synthesize jumpEnabled=_jumpEnabled - In the implementation block
@property (assign) double jumpThreshold;                            //@synthesize jumpThreshold=_jumpThreshold - In the implementation block
@property (assign) BOOL playJumpSound;                              //@synthesize playJumpSound=_playJumpSound - In the implementation block
@property (assign) BOOL directionalLockEnabled;                     //@synthesize directionalLockEnabled=_directionalLockEnabled - In the implementation block
@property (assign) double directionalLockThreshold;                 //@synthesize directionalLockThreshold=_directionalLockThreshold - In the implementation block
@property (assign) double directionalLockStickiness;                //@synthesize directionalLockStickiness=_directionalLockStickiness - In the implementation block
@property (assign) double directionalLockSharpness;                 //@synthesize directionalLockSharpness=_directionalLockSharpness - In the implementation block
@property (assign) BOOL showDirectionalLockIndicators;              //@synthesize showDirectionalLockIndicators=_showDirectionalLockIndicators - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setFrameInterval:(unsigned long long)arg1 ;
-(void)setDirectionalLockEnabled:(BOOL)arg1 ;
-(BOOL)directionalLockEnabled;
-(double)directionalLockStickiness;
-(double)directionalLockThreshold;
-(double)directionalLockSharpness;
-(BOOL)jumpEnabled;
-(double)jumpThreshold;
-(BOOL)playJumpSound;
-(double)idleLeeway;
-(double)delayBeforeIdle;
-(BOOL)showIdleIndicator;
-(BOOL)showDirectionalLockIndicators;
-(void)setIdleLeeway:(double)arg1 ;
-(void)setDelayBeforeIdle:(double)arg1 ;
-(void)setShowIdleIndicator:(BOOL)arg1 ;
-(void)setJumpEnabled:(BOOL)arg1 ;
-(void)setJumpThreshold:(double)arg1 ;
-(void)setPlayJumpSound:(BOOL)arg1 ;
-(void)setDirectionalLockThreshold:(double)arg1 ;
-(void)setDirectionalLockStickiness:(double)arg1 ;
-(void)setDirectionalLockSharpness:(double)arg1 ;
-(void)setShowDirectionalLockIndicators:(BOOL)arg1 ;
-(void)setInputSmoothing:(double)arg1 ;
-(void)setSigmoidDegree:(double)arg1 ;
-(void)setShiftEnabled:(BOOL)arg1 ;
-(void)setShiftSpeed:(double)arg1 ;
-(void)setShiftDistanceDependence:(double)arg1 ;
-(double)inputSmoothing;
-(double)sigmoidDegree;
-(BOOL)shiftEnabled;
-(double)shiftSpeed;
-(double)shiftDistanceDependence;
-(unsigned long long)frameInterval;
-(long long)preferredFramesPerSecond;
@end

