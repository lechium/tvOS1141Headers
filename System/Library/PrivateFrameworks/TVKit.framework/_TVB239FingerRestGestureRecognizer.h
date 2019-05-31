/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

@interface _TVB239FingerRestGestureRecognizer : UIGestureRecognizer {

	BOOL _selectButtonDepressed;
	int _touchCount;
	long long _stateToEnter;
	double _minimumPressDuration;
	NSTimer* _pressDurationTimer;
	CGPoint _digitizerStartLocation;
	CGPoint _digitizerLocation;

}

@property (assign,nonatomic,__weak) NSTimer * pressDurationTimer;              //@synthesize pressDurationTimer=_pressDurationTimer - In the implementation block
@property (nonatomic,readonly) CGPoint digitizerStartLocation;                 //@synthesize digitizerStartLocation=_digitizerStartLocation - In the implementation block
@property (nonatomic,readonly) CGPoint digitizerLocation;                      //@synthesize digitizerLocation=_digitizerLocation - In the implementation block
@property (assign,nonatomic) double minimumPressDuration;                      //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(double)minimumPressDuration;
-(CGPoint)digitizerLocation;
-(void)recognizeFingerRest;
-(CGPoint)digitizerStartLocation;
-(NSTimer *)pressDurationTimer;
-(void)setPressDurationTimer:(NSTimer *)arg1 ;
@end

