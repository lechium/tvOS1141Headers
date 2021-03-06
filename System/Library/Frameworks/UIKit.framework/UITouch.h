/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIResponderForwardable.h>

@protocol _UITouchPhaseChangeDelegate;
@class UIResponder, UIWindow, UIView, NSMutableArray, NSArray, NSNumber, NSString;

@interface UITouch : NSObject <_UIResponderForwardable> {

	double _movementMagnitudeSquared;
	long long _phase;
	unsigned long long _tapCount;
	long long _edgeType;
	unsigned long long _edgeAim;
	unsigned _touchIdentifier;
	UIWindow* _window;
	UIView* _view;
	UIView* _warpedIntoView;
	NSMutableArray* _gestureRecognizers;
	NSMutableArray* _forwardingRecord;
	CGPoint _locationInWindow;
	CGPoint _previousLocationInWindow;
	CGPoint _preciseLocationInWindow;
	CGPoint _precisePreviousLocationInWindow;
	double _previousPressure;
	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	double _pathMajorRadius;
	double _majorRadiusTolerance;
	double _pressure;
	double _maxObservedPressure;
	float _zGradient;
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
		unsigned _deliversUpdatesInTouchesMovedIsValid : 1;
		unsigned _deliversUpdatesInTouchesMoved : 1;
		unsigned _isPredictedTouch : 1;
		unsigned _didDispatchAsEnded : 1;
	}  _touchFlags;
	BOOL _eaten;
	BOOL _needsForceUpdate;
	BOOL _hasForceUpdate;
	double _timestamp;
	long long _forceCorrelationToken;
	double _maximumPossiblePressure;
	unsigned long long _senderID;
	IOHIDEventRef _hidEvent;
	double _altitudeAngle;
	long long _type;
	id<_UITouchPhaseChangeDelegate> __phaseChangeDelegate;
	UIWindow* __windowServerHitTestWindow;
	double _azimuthAngleInCADisplay;
	double _azimuthAngleInWindow;
	double _initialTouchTimestamp;
	CGSize _displacement;

}

@property (assign,setter=_setPathIndex:,nonatomic) unsigned char _pathIndex;                                                    //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,setter=_setPathIdentity:,nonatomic) unsigned char _pathIdentity;                                              //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (nonatomic,readonly) double _pressure;                                                                                //@synthesize pressure=_pressure - In the implementation block
@property (assign,setter=_setZGradient:,nonatomic) float _zGradient;                                                            //@synthesize zGradient=_zGradient - In the implementation block
@property (assign,setter=_setEdgeType:,nonatomic) long long _edgeType;                                                          //@synthesize edgeType=_edgeType - In the implementation block
@property (assign,setter=_setEdgeAim:,nonatomic) unsigned long long _edgeAim;                                                   //@synthesize edgeAim=_edgeAim - In the implementation block
@property (assign,setter=_setEaten:,getter=_isEaten,nonatomic) BOOL _eaten;                                                     //@synthesize eaten=_eaten - In the implementation block
@property (assign,setter=_setDisplacement:,nonatomic) CGSize _displacement;                                                     //@synthesize displacement=_displacement - In the implementation block
@property (setter=_setPhaseChangeDelegate:,nonatomic,retain) id<_UITouchPhaseChangeDelegate> _phaseChangeDelegate;              //@synthesize _phaseChangeDelegate=__phaseChangeDelegate - In the implementation block
@property (setter=_setWindowServerHitTestWindow:,nonatomic,retain) UIWindow * _windowServerHitTestWindow;                       //@synthesize _windowServerHitTestWindow=__windowServerHitTestWindow - In the implementation block
@property (assign,setter=_setType:,nonatomic) long long type;                                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double azimuthAngle; 
@property (assign,setter=_setAzimuthAngleInCADisplay:,nonatomic) double azimuthAngleInCADisplay;                                //@synthesize azimuthAngleInCADisplay=_azimuthAngleInCADisplay - In the implementation block
@property (nonatomic,readonly) double azimuthAngleInWindow;                                                                     //@synthesize azimuthAngleInWindow=_azimuthAngleInWindow - In the implementation block
@property (assign,setter=_setAltitudeAngle:,nonatomic) double altitudeAngle;                                                    //@synthesize altitudeAngle=_altitudeAngle - In the implementation block
@property (assign,setter=_setIsPredictedTouch:,nonatomic) BOOL _isPredictedTouch; 
@property (assign,setter=_setNeedsForceUpdate:,nonatomic) BOOL _needsForceUpdate;                                               //@synthesize needsForceUpdate=_needsForceUpdate - In the implementation block
@property (assign,setter=_setHasForceUpdate:,nonatomic) BOOL _hasForceUpdate;                                                   //@synthesize hasForceUpdate=_hasForceUpdate - In the implementation block
@property (assign,setter=_setForceCorrelationToken:,nonatomic) long long _forceCorrelationToken;                                //@synthesize forceCorrelationToken=_forceCorrelationToken - In the implementation block
@property (assign,setter=_setMaximumPossiblePressure:,nonatomic) double _maximumPossiblePressure;                               //@synthesize maximumPossiblePressure=_maximumPossiblePressure - In the implementation block
@property (nonatomic,readonly) double _unclampedForce; 
@property (assign,setter=_setSenderID:,nonatomic) unsigned long long _senderID;                                                 //@synthesize senderID=_senderID - In the implementation block
@property (assign,setter=_setHidEvent:,nonatomic) IOHIDEventRef _hidEvent;                                                      //@synthesize hidEvent=_hidEvent - In the implementation block
@property (assign,nonatomic) double initialTouchTimestamp;                                                                      //@synthesize initialTouchTimestamp=_initialTouchTimestamp - In the implementation block
@property (assign,nonatomic) double timestamp;                                                                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long phase; 
@property (assign,nonatomic) unsigned long long tapCount; 
@property (assign,nonatomic) BOOL isTap; 
@property (assign,nonatomic) BOOL sentTouchesEnded; 
@property (assign,nonatomic) double majorRadius;                                                                                //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
@property (assign,nonatomic) double majorRadiusTolerance;                                                                       //@synthesize majorRadiusTolerance=_majorRadiusTolerance - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) UIView * view; 
@property (nonatomic,retain) UIView * warpedIntoView; 
@property (nonatomic,readonly) BOOL _respectsCharge; 
@property (nonatomic,copy,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,readonly) double force; 
@property (nonatomic,readonly) double maximumPossibleForce; 
@property (nonatomic,readonly) NSNumber * estimationUpdateIndex; 
@property (nonatomic,readonly) long long estimatedProperties; 
@property (nonatomic,readonly) long long estimatedPropertiesExpectingUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
+(id)_createTouchesWithGSEvent:(GSEventRef)arg1 phase:(long long)arg2 view:(id)arg3 ;
-(UIWindow *)window;
-(CGPoint)locationInView:(id)arg1 ;
-(long long)phase;
-(void)dealloc;
-(NSString *)description;
-(UIView *)view;
-(double)timestamp;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)_setEaten:(BOOL)arg1 ;
-(BOOL)_isEaten;
-(void)setPhase:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(long long)type;
-(double)force;
-(IOHIDEventRef)_hidEvent;
-(NSArray *)gestureRecognizers;
-(void)_setForwardablePhase:(long long)arg1 ;
-(UIResponder *)_responder;
-(void)_setResponder:(id)arg1 ;
-(BOOL)sentTouchesEnded;
-(void)setView:(UIView *)arg1 ;
-(void)setSentTouchesEnded:(BOOL)arg1 ;
-(id)_gestureRecognizers;
-(BOOL)isDelayed;
-(double)majorRadius;
-(void)setMajorRadius:(double)arg1 ;
-(unsigned long long)tapCount;
-(long long)info;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(long long)arg1 ;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3 ;
-(unsigned)_touchIdentifier;
-(double)_unclampedForce;
-(float)_pathMajorRadius;
-(unsigned char)_pathIndex;
-(CGPoint)_locationInSceneReferenceSpace;
-(long long)_edgeType;
-(unsigned long long)_edgeAim;
-(void)_setLocationInWindow:(CGPoint)arg1 resetPrevious:(BOOL)arg2 ;
-(id)_clone;
-(void)_setNeedsForceUpdate:(BOOL)arg1 ;
-(void)_setPreviousTouch:(id)arg1 ;
-(void)_setLocation:(CGPoint)arg1 preciseLocation:(CGPoint)arg2 inWindowResetPreviousLocation:(BOOL)arg3 ;
-(void)_setAltitudeAngle:(double)arg1 ;
-(void)_setAzimuthAngleInCADisplay:(double)arg1 ;
-(void)_setPressure:(double)arg1 resetPrevious:(BOOL)arg2 ;
-(void)_setIsPredictedTouch:(BOOL)arg1 ;
-(long long)_forwardablePhase;
-(BOOL)_isAbandoningForwardingRecord;
-(id)_mutableForwardingRecord;
-(void)_abandonForwardingRecord;
-(void)_clonePropertiesToTouch:(id)arg1 ;
-(void)_setHidEvent:(IOHIDEventRef)arg1 ;
-(void)_updateMovementMagnitudeFromLocation:(CGPoint)arg1 toLocation:(CGPoint)arg2 ;
-(double)azimuthAngleInCADisplay;
-(void)_computeAzimuthAngleInWindow;
-(CGVector)azimuthUnitVectorInView:(id)arg1 ;
-(double)maximumPossibleForce;
-(BOOL)_supportsForce;
-(double)_standardForceAmount;
-(double)_pressure;
-(BOOL)_edgeForcePending;
-(BOOL)_edgeForceActive;
-(void)setTapCount:(unsigned long long)arg1 ;
-(void)_setIsFirstTouchForView:(BOOL)arg1 ;
-(id<_UITouchPhaseChangeDelegate>)_phaseChangeDelegate;
-(id)_phaseDescription;
-(CGPoint)previousLocationInView:(id)arg1 ;
-(CGPoint)_locationInWindow:(id)arg1 ;
-(CGPoint)_previousLocationInWindow:(id)arg1 ;
-(UIWindow *)_windowServerHitTestWindow;
-(BOOL)isTap;
-(void)setIsDelayed:(BOOL)arg1 ;
-(CGPoint)preciseLocationInView:(id)arg1 ;
-(CGPoint)precisePreviousLocationInView:(id)arg1 ;
-(BOOL)_isPredictedTouch;
-(double)azimuthAngle;
-(double)azimuthAngleInView:(id)arg1 ;
-(double)altitudeAngle;
-(void)_loadStateFromTouch:(id)arg1 ;
-(NSNumber *)estimationUpdateIndex;
-(long long)estimatedProperties;
-(long long)estimatedPropertiesExpectingUpdates;
-(BOOL)_mightBeConsideredForForceSystemGesture;
-(void)_setTouchIdentifier:(unsigned)arg1 ;
-(BOOL)_isFirstTouchForView;
-(void)setIsTap:(BOOL)arg1 ;
-(void)setMajorRadiusTolerance:(double)arg1 ;
-(BOOL)_shouldDeliverTouchForTouchesMoved;
-(void)_addGestureRecognizer:(id)arg1 ;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(void)_clearGestureRecognizers;
-(CGPoint)_previousLocationInSceneReferenceSpace;
-(void)_updateWithChildEvent:(IOHIDEventRef)arg1 ;
-(long long)_compareIndex:(id)arg1 ;
-(UIView *)warpedIntoView;
-(void)setWarpedIntoView:(UIView *)arg1 ;
-(BOOL)_respectsCharge;
-(void)_updateMovementMagnitudeForLocation:(CGPoint)arg1 ;
-(BOOL)_isStationaryRelativeToTouches:(id)arg1 ;
-(void)_willBeDispatchedAsEnded;
-(id)_rehitTest;
-(void)_setPathIndex:(unsigned char)arg1 ;
-(unsigned char)_pathIdentity;
-(void)_setPathIdentity:(unsigned char)arg1 ;
-(CGSize)_displacement;
-(void)_setDisplacement:(CGSize)arg1 ;
-(void)_setEdgeType:(long long)arg1 ;
-(void)_setEdgeAim:(unsigned long long)arg1 ;
-(double)majorRadiusTolerance;
-(float)_zGradient;
-(void)_setZGradient:(float)arg1 ;
-(long long)_forceCorrelationToken;
-(void)_setForceCorrelationToken:(long long)arg1 ;
-(BOOL)_needsForceUpdate;
-(BOOL)_hasForceUpdate;
-(void)_setHasForceUpdate:(BOOL)arg1 ;
-(double)_maximumPossiblePressure;
-(void)_setMaximumPossiblePressure:(double)arg1 ;
-(unsigned long long)_senderID;
-(void)_setSenderID:(unsigned long long)arg1 ;
-(void)_setType:(long long)arg1 ;
-(void)_setPhaseChangeDelegate:(id)arg1 ;
-(void)_setWindowServerHitTestWindow:(id)arg1 ;
-(double)azimuthAngleInWindow;
-(double)initialTouchTimestamp;
-(void)setInitialTouchTimestamp:(double)arg1 ;
-(double)_distanceFrom:(id)arg1 inView:(id)arg2 ;
@end

