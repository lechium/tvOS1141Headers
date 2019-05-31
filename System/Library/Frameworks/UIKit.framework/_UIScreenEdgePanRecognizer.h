/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UISettingsKeyObserver.h>

@protocol _UIScreenEdgePanRecognizerDelegate;
@class UIDelayedAction, _UIScreenEdgePanRecognizerSettings, NSString;

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {

	CGRect _screenBounds;
	BOOL _shouldUseGrapeFlags;
	BOOL _hasRecordedData;
	BOOL _hasDoneInitialBackProjectionTest;
	double _gestureRestrictionFactor;
	CGPoint _initialTouchLocation;
	double _initialTouchTimestamp;
	long long _initialInterfaceOrientation;
	unsigned long long _touchedRegion;
	UIDelayedAction* _recognitionTimer;
	CGPoint _lastTouchLocation;
	double _lastTouchTimestamp;
	long long _lastTouchModifier;
	long long _type;
	BOOL _requiresLongPress;
	BOOL _requiresFlatThumb;
	BOOL _recognizeImmediatelyFromEdgeLocked;
	BOOL _recognizeAlongEdge;
	unsigned long long _targetEdges;
	long long _state;
	unsigned long long _recognizedRegion;
	id<_UIScreenEdgePanRecognizerDelegate> _delegate;
	_UIScreenEdgePanRecognizerSettings* _settings;

}

@property (nonatomic,readonly) BOOL hasRecordedData;                                             //@synthesize hasRecordedData=_hasRecordedData - In the implementation block
@property (nonatomic,readonly) BOOL useGrapeFlags; 
@property (assign,nonatomic) BOOL shouldUseGrapeFlags;                                           //@synthesize shouldUseGrapeFlags=_shouldUseGrapeFlags - In the implementation block
@property (nonatomic,readonly) CGPoint _lastTouchLocation;                                       //@synthesize lastTouchLocation=_lastTouchLocation - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerSettings * settings;                      //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) CGRect screenBounds;                                                //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) unsigned long long targetEdges;                                     //@synthesize targetEdges=_targetEdges - In the implementation block
@property (assign,nonatomic) BOOL requiresFlatThumb;                                             //@synthesize requiresFlatThumb=_requiresFlatThumb - In the implementation block
@property (assign,nonatomic) BOOL recognizeImmediatelyFromEdgeLocked;                            //@synthesize recognizeImmediatelyFromEdgeLocked=_recognizeImmediatelyFromEdgeLocked - In the implementation block
@property (assign,nonatomic) BOOL recognizeAlongEdge;                                            //@synthesize recognizeAlongEdge=_recognizeAlongEdge - In the implementation block
@property (nonatomic,readonly) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long recognizedRegion;                              //@synthesize recognizedRegion=_recognizedRegion - In the implementation block
@property (getter=isRequiringLongPress,nonatomic,readonly) BOOL requiringLongPress; 
@property (assign) id<_UIScreenEdgePanRecognizerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_edgeSwipeNavigationGestureEnabled;
-(id<_UIScreenEdgePanRecognizerDelegate>)delegate;
-(void)setDelegate:(id<_UIScreenEdgePanRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(long long)state;
-(_UIScreenEdgePanRecognizerSettings *)settings;
-(void)reset;
-(id)initWithType:(long long)arg1 ;
-(long long)_type;
-(void)incorporateTouchSampleAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 ;
-(unsigned long long)recognizedRegion;
-(void)setScreenBounds:(CGRect)arg1 ;
-(unsigned long long)targetEdges;
-(void)setTargetEdges:(unsigned long long)arg1 ;
-(CGPoint)_lastTouchLocation;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setSettings:(_UIScreenEdgePanRecognizerSettings *)arg1 ;
-(void)setShouldUseGrapeFlags:(BOOL)arg1 ;
-(id)initWithType:(long long)arg1 settings:(id)arg2 ;
-(void)_setState:(long long)arg1 ;
-(void)_incorporateIncrementalSampleAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 ;
-(void)_incorporateInitialTouchAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 ;
-(BOOL)useGrapeFlags;
-(CGRect)screenBounds;
-(unsigned long long)_targetEdges;
-(void)_longPressTimerElapsed:(id)arg1 ;
-(void)_idleTimerElapsed:(id)arg1 ;
-(void)_createOrDestoryAnalysisWindowIfNeeded;
-(BOOL)isRequiringLongPress;
-(unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1 ;
-(void)incorporateTouchSampleAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4 forceState:(long long)arg5 ;
-(BOOL)shouldUseGrapeFlags;
-(BOOL)hasRecordedData;
-(BOOL)requiresFlatThumb;
-(void)setRequiresFlatThumb:(BOOL)arg1 ;
-(BOOL)recognizeImmediatelyFromEdgeLocked;
-(void)setRecognizeImmediatelyFromEdgeLocked:(BOOL)arg1 ;
-(BOOL)recognizeAlongEdge;
-(void)setRecognizeAlongEdge:(BOOL)arg1 ;
@end

