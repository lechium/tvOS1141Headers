/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@protocol UIKeyboardPinchGestureRecognizerDelegate;
@class NSMutableSet, NSMutableDictionary;

@interface UIKeyboardPinchGestureRecognizer : UIGestureRecognizer {

	id<UIKeyboardPinchGestureRecognizerDelegate> _pinchDelegate;
	BOOL _pinchDetected;
	double _initialPinchSeparation;
	double _pinchSeparationValues[4];
	NSMutableSet* _activeTouches;
	NSMutableDictionary* _initialTouchPoints;

}

@property (nonatomic,readonly) BOOL pinchDetected;                                                    //@synthesize pinchDetected=_pinchDetected - In the implementation block
@property (nonatomic,readonly) double initialPinchSeparation;                                         //@synthesize initialPinchSeparation=_initialPinchSeparation - In the implementation block
@property (assign,nonatomic) id<UIKeyboardPinchGestureRecognizerDelegate> pinchDelegate;              //@synthesize pinchDelegate=_pinchDelegate - In the implementation block
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)pinchDetected;
-(void)resetPinchCalculations;
-(double)finalProgressForInitialProgress:(double)arg1 ;
-(double)initialPinchSeparation;
-(void)setPinchDelegate:(id<UIKeyboardPinchGestureRecognizerDelegate>)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)interpretTouchesForSplit;
-(id<UIKeyboardPinchGestureRecognizerDelegate>)pinchDelegate;
@end

