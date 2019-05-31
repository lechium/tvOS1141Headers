/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@interface UISwipeDismissalGestureRecognizer : UIGestureRecognizer {

	double _allowableMovement;
	CGPoint _originalTouchPoint;

}

@property (assign,nonatomic) CGPoint originalTouchPoint;              //@synthesize originalTouchPoint=_originalTouchPoint - In the implementation block
@property (assign,nonatomic) double allowableMovement;                //@synthesize allowableMovement=_allowableMovement - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setAllowableMovement:(double)arg1 ;
-(double)allowableMovement;
-(void)setOriginalTouchPoint:(CGPoint)arg1 ;
-(CGPoint)originalTouchPoint;
@end
