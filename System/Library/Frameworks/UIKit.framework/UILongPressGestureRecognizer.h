/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>
#import <UIKit/UITapRecognizerDelegate.h>

@class NSArray, NSMutableSet, UIHeldAction, UIDelayedAction, UITapRecognizer, NSObservation, NSString;

@interface UILongPressGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {

	NSArray* _touches;
	NSMutableSet* _activeTouches;
	unsigned long long _numberOfTouchesRequired;
	double _minimumPressDuration;
	double _allowableMovement;
	CGPoint _startPointScreen;
	CGPoint _lastCentroidScreen;
	UIHeldAction* _enoughTimeElapsed;
	UIDelayedAction* _tooMuchTimeElapsed;
	UITapRecognizer* _imp;
	NSObservation* _touchForceObservation;
	long long _impulseObservations;
	double _currentImpulse;
	double _lastForce;
	double _lastForceTimestamp;
	unsigned _gotTouchEnd : 1;
	unsigned _gotTooMany : 1;
	unsigned _gotEnoughTaps : 1;
	unsigned _cancelPastAllowableMovement : 1;
	unsigned _allowsDynamicTouchesList : 1;
	BOOL _requiresQuietImpulse;
	BOOL _requiresQuietImpulseForCurrentTouchSequence;
	long long _buttonType;

}

@property (assign,nonatomic) double delay;                                                                                                           //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (nonatomic,retain) NSArray * touches;                                                                                                      //@synthesize touches=_touches - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint; 
@property (nonatomic,readonly) CGPoint centroid; 
@property (assign,nonatomic) BOOL cancelPastAllowableMovement; 
@property (assign,setter=_setButtonType:,nonatomic) long long _buttonType;                                                                           //@synthesize buttonType=_buttonType - In the implementation block
@property (assign,setter=_setRequiresQuietImpulse:,nonatomic) BOOL _requiresQuietImpulse;                                                            //@synthesize requiresQuietImpulse=_requiresQuietImpulse - In the implementation block
@property (assign,setter=_setRequiresQuietImpulseForCurrentTouchSequence:,nonatomic) BOOL _requiresQuietImpulseForCurrentTouchSequence;              //@synthesize requiresQuietImpulseForCurrentTouchSequence=_requiresQuietImpulseForCurrentTouchSequence - In the implementation block
@property (nonatomic,readonly) CGPoint _centroidScreen; 
@property (assign,nonatomic) unsigned long long numberOfTapsRequired; 
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;                                                                             //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) double minimumPressDuration; 
@property (assign,nonatomic) double allowableMovement;                                                                                               //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelay:(double)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)_buttonType;
-(void)setView:(id)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)_setButtonType:(long long)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(double)_touchSloppinessFactor;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouches;
-(void)enoughTimeElapsed:(id)arg1 ;
-(NSArray *)touches;
-(CGPoint)_centroidInView:(id)arg1 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(CGPoint)startPoint;
-(unsigned long long)numberOfTouchesRequired;
-(unsigned long long)numberOfTapsRequired;
-(double)delay;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(void)setTouches:(NSArray *)arg1 ;
-(double)minimumPressDuration;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)_setRequiresQuietImpulse:(BOOL)arg1 ;
-(CGPoint)centroid;
-(void)_setAllowableSeparation:(double)arg1 ;
-(CGPoint)_translationInView:(id)arg1 ;
-(void)_setTranslation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)clearTimer;
-(void)_setRequiresQuietImpulseForCurrentTouchSequence:(BOOL)arg1 ;
-(double)_allowableSeparation;
-(void)_resetImpulseQuietness;
-(void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg1 ;
-(BOOL)_requiresQuietImpulse;
-(BOOL)_requiresQuietImpulseForCurrentTouchSequence;
-(BOOL)_impulseQuietEnough;
-(void)tooMuchElapsed:(id)arg1 ;
-(CGPoint)_centroidScreen;
-(BOOL)_allowsDynamicTouchesList;
-(void)_changeTouchesListTo:(id)arg1 ;
-(BOOL)activeTouchesExceedAllowableSeparation;
-(void)startTimer;
-(BOOL)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)arg1 ;
-(void)_interactionsEndedWithValidTouches:(BOOL)arg1 ;
-(long long)_finalStateForRecognition;
-(CGPoint)_startPointInView:(id)arg1 ;
-(BOOL)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2 ;
-(void)_startTapFinishedTimer;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1 ;
-(void)tapRecognizerRecognizedTap:(id)arg1 ;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1 ;
-(BOOL)cancelPastAllowableMovement;
-(void)setCancelPastAllowableMovement:(BOOL)arg1 ;
-(void)_setAllowsDynamicTouchesList:(BOOL)arg1 ;
-(double)allowableMovement;
@end

