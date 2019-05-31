/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>
#import <UIKit/_UIScreenEdgePanRecognizingDelegate.h>

@protocol _UIScreenEdgePanRecognizing;
@class NSString;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizingDelegate> {

	id<_UIScreenEdgePanRecognizing> _recognizer;
	BOOL _ignoreSubsequentTouches;

}

@property (assign,nonatomic) unsigned long long edges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldDefaultToTouches;
+(BOOL)_shouldSupportStylusTouches;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEdges:(unsigned long long)arg1 ;
-(void)_setHysteresis:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(double)_edgeRegionSize;
-(id)_recognizer;
-(BOOL)isRequiringLongPress;
-(BOOL)recognizeImmediatelyFromEdgeLocked;
-(void)setRecognizeImmediatelyFromEdgeLocked:(BOOL)arg1 ;
-(BOOL)recognizeAlongEdge;
-(void)setRecognizeAlongEdge:(BOOL)arg1 ;
-(BOOL)_shouldUseGrapeFlags;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(unsigned long long)edges;
-(void)screenEdgePanRecognizingStateDidChange:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 maxTouches:(unsigned long long)arg4 ;
-(CGPoint)_locationForTouch:(id)arg1 ;
-(long long)_touchInterfaceOrientation;
-(void)incorporateTouches:(id)arg1 withEvent:(id)arg2 ;
-(id)recognizerTouchesToIgnoreForEvent:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 ;
-(void)_setEdgeRegionSize:(double)arg1 ;
-(unsigned long long)touchedEdges;
-(BOOL)ignoreSubsequentTouches;
@end

