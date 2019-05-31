/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MKAnnotationSelectionEngineDelegate;
#import <MapKit/MapKit-Structs.h>
@class _MKAnnotationSelectionEngineDebugView, NSSet, MKAnnotationView, _MKAnnotationSelectionPanGestureRecognizer, _UIRepeatingPressGestureRecognizer, _MKGamepadStickGestureRecognizer, CADisplayLink, UIView;

@interface _MKAnnotationSelectionEngine : NSObject {

	_MKAnnotationSelectionEngineDebugView* _debugView;
	BOOL _enabled;
	NSSet* _candidateViews;
	MKAnnotationView* _selectedAnnotationView;
	_MKAnnotationSelectionPanGestureRecognizer* _panRecognizer;
	_UIRepeatingPressGestureRecognizer* _leftPressRecognizer;
	_UIRepeatingPressGestureRecognizer* _rightPressRecognizer;
	_UIRepeatingPressGestureRecognizer* _upPressRecognizer;
	_UIRepeatingPressGestureRecognizer* _downPressRecognizer;
	_MKGamepadStickGestureRecognizer* _gamepadStickRecognizer;
	CGPoint _lastKnownTouchPoint;
	Matrix<double, 2, 1> _progressAccumulator;
	CADisplayLink* _gameControllerDisplayLink;
	BOOL _isPanning;
	id<_MKAnnotationSelectionEngineDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKAnnotationSelectionEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSSet * candidateViews;                                                //@synthesize candidateViews=_candidateViews - In the implementation block
@property (nonatomic,retain) MKAnnotationView * selectedAnnotationView;                             //@synthesize selectedAnnotationView=_selectedAnnotationView - In the implementation block
@property (nonatomic,readonly) UIView * debugView; 
-(id)init;
-(id<_MKAnnotationSelectionEngineDelegate>)delegate;
-(void)setDelegate:(id<_MKAnnotationSelectionEngineDelegate>)arg1 ;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_handleDirectionalPress:(id)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(NSSet *)candidateViews;
-(void)setCandidateViews:(NSSet *)arg1 ;
-(UIView *)debugView;
-(id)initWithGestureTargetView:(id)arg1 moreImportantGestureRecognizers:(id)arg2 ;
-(void)_updateDebugView;
-(void)setSelectedAnnotationView:(MKAnnotationView *)arg1 ;
-(void)_considerChangingSelection;
-(void)_handleGamepadDirectionalPress:(id)arg1 ;
-(void)_updateFromGameController:(id)arg1 ;
-(MKAnnotationView *)selectedAnnotationView;
@end

