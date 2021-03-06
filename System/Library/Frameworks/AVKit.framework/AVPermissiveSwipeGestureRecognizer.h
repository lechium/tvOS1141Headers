/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class _AVDetachedSwipeGestureRecognizer, _AVPermissiveSwipeGestureDelegate;

@interface AVPermissiveSwipeGestureRecognizer : UIGestureRecognizer {

	BOOL _swipeGestureActive;
	BOOL _swipeGestureRecognizedOrFailed;
	_AVDetachedSwipeGestureRecognizer* _swipeGestureRecognizer;
	_AVPermissiveSwipeGestureDelegate* _permissiveDelegate;
	CGPoint _currentTouchLocation;

}

@property (nonatomic,readonly) _AVDetachedSwipeGestureRecognizer * swipeGestureRecognizer;                             //@synthesize swipeGestureRecognizer=_swipeGestureRecognizer - In the implementation block
@property (assign,getter=isSwipeGestureActive,nonatomic) BOOL swipeGestureActive;                                      //@synthesize swipeGestureActive=_swipeGestureActive - In the implementation block
@property (assign,getter=isSwipeGestureRecognizedOrFailed,nonatomic) BOOL swipeGestureRecognizedOrFailed;              //@synthesize swipeGestureRecognizedOrFailed=_swipeGestureRecognizedOrFailed - In the implementation block
@property (assign,nonatomic) CGPoint currentTouchLocation;                                                             //@synthesize currentTouchLocation=_currentTouchLocation - In the implementation block
@property (nonatomic,retain) _AVPermissiveSwipeGestureDelegate * permissiveDelegate;                                   //@synthesize permissiveDelegate=_permissiveDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long direction; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(void)swipeGestureWasRecognized:(id)arg1 ;
-(void)_cancelTouchRestTimeout;
-(void)_fireTouchRestTimeout;
-(void)_scheduleTouchRestTimeout;
-(BOOL)isSwipeGestureActive;
-(void)setSwipeGestureActive:(BOOL)arg1 ;
-(BOOL)isSwipeGestureRecognizedOrFailed;
-(void)setSwipeGestureRecognizedOrFailed:(BOOL)arg1 ;
-(CGPoint)currentTouchLocation;
-(void)setCurrentTouchLocation:(CGPoint)arg1 ;
-(_AVPermissiveSwipeGestureDelegate *)permissiveDelegate;
-(void)setPermissiveDelegate:(_AVPermissiveSwipeGestureDelegate *)arg1 ;
-(_AVDetachedSwipeGestureRecognizer *)swipeGestureRecognizer;
@end

