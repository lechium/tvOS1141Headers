/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>

@class UITouch;

@interface MKTiltGestureRecognizer : UIPanGestureRecognizer {

	UITouch* _touch1;
	UITouch* _touch2;
	CGPoint _initialTouch1Point;
	CGPoint _initialTouch2Point;
	double _initialDistance;

}
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(id)_activeTouchesForEvent:(id)arg1 ;
-(double)_distanceFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
@end

