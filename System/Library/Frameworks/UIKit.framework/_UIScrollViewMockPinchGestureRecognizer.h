/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIScrollViewPinchGestureRecognizer;

@interface _UIScrollViewMockPinchGestureRecognizer : NSObject {

	double _scale;
	double _velocity;
	long long _state;
	UIScrollViewPinchGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) UIScrollViewPinchGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) long long state; 
-(double)scale;
-(void)setGestureRecognizer:(UIScrollViewPinchGestureRecognizer *)arg1 ;
-(UIScrollViewPinchGestureRecognizer *)gestureRecognizer;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CGPoint)anchorPoint;
-(double)velocity;
-(id)_activeTouchesForEvent:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)simulateScale:(double)arg1 velocity:(double)arg2 ;
@end
