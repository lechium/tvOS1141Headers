/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSSet;

@interface UIControl : UIView {

	NSMutableArray* _targetActions;
	CGPoint _previousPoint;
	double _downTime;
	struct {
		unsigned disabled : 1;
		unsigned tracking : 1;
		unsigned touchInside : 1;
		unsigned touchDragged : 1;
		unsigned requiresDisplayOnTracking : 1;
		unsigned highlighted : 1;
		unsigned dontHighlightOnTouchDown : 1;
		unsigned delayActions : 1;
		unsigned allowActionsToQueue : 1;
		unsigned pendingUnhighlight : 1;
		unsigned selected : 1;
		unsigned verticalAlignment : 2;
		unsigned horizontalAlignment : 3;
		unsigned wasLastHighlightSuccessful : 1;
		unsigned touchHasHighlighted : 1;
	}  _controlFlags;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) long long contentVerticalAlignment; 
@property (assign,nonatomic) long long contentHorizontalAlignment; 
@property (nonatomic,readonly) long long effectiveContentHorizontalAlignment; 
@property (nonatomic,readonly) unsigned long long state; 
@property (getter=isTracking,nonatomic,readonly) BOOL tracking; 
@property (getter=isTouchInside,nonatomic,readonly) BOOL touchInside; 
@property (nonatomic,readonly) NSSet * allTargets; 
@property (nonatomic,readonly) unsigned long long allControlEvents; 
+(BOOL)_allowActionsToQueue;
+(unsigned long long)_primaryStateForState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_scalarStatisticsForUserValueChangedEvent;
-(unsigned long long)state;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isEnabled;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)setContentHorizontalAlignment:(long long)arg1 ;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)isTracking;
-(BOOL)cancelTouchTracking;
-(BOOL)cancelMouseTracking;
-(BOOL)canBecomeFirstResponder;
-(void)_diagnoseFocusabilityForReport:(id)arg1 ;
-(long long)_focusedSound;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)sendActionsForControlEvents:(unsigned long long)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setTracking:(BOOL)arg1 ;
-(void)_cancelDelayedActions;
-(void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)_unhighlight;
-(void)_setLastHighlightSuccessful:(BOOL)arg1 ;
-(BOOL)requiresDisplayOnTracking;
-(BOOL)shouldTrack;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isTouchInside;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(CGRect)_clippedHighlightBounds;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)_incrementStatisticsForUserActionForEvents:(unsigned long long)arg1 ;
-(void)_sendDelayedActions:(BOOL)arg1 ;
-(void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)_beginInteractionDurationStatisticMeasurements;
-(void)_commitInteractionDurationStatisticMeasurements;
-(long long)contentVerticalAlignment;
-(long long)contentHorizontalAlignment;
-(long long)effectiveContentHorizontalAlignment;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(NSSet *)allTargets;
-(unsigned long long)allControlEvents;
-(id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2 ;
-(double)_highlightCornerRadius;
-(BOOL)_hasActionForEventMask:(unsigned long long)arg1 ;
-(void)_setHighlightOnMouseDown:(BOOL)arg1 ;
-(void)_delayActions;
-(void)_sendDelayedActions;
-(BOOL)_wasLastHighlightSuccessful;
-(BOOL)_touchHasHighlighted;
-(BOOL)touchDragged;
-(void)setRequiresDisplayOnTracking:(BOOL)arg1 ;
-(BOOL)hasOneOrMoreTargets;
-(void)removeTarget:(id)arg1 forEvents:(int)arg2 ;
-(unsigned long long)_stateForFocusUpdateContext:(id)arg1 ;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(id)__scalarStatisticsForUserTouchUpInsideEvent;
-(id)__scalarStatisticsForUserValueChangedEvent;
-(id)__distributionStatisticsForUserInteractionDuration;
-(id)_scalarStatisticsForUserTouchUpInsideEvent;
-(id)_distributionStatisticsForUserInteractionDuration;
@end

