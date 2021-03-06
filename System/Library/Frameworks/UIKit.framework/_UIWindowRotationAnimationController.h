/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIWindowAnimationController.h>

@interface _UIWindowRotationAnimationController : _UIWindowAnimationController {

	BOOL _skipCallbacks;
	BOOL _updateStatusBarIfNecessary;
	/*^block*/id _animations;
	double _duration;

}

@property (nonatomic,copy) id animations;                                  //@synthesize animations=_animations - In the implementation block
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL skipCallbacks;                           //@synthesize skipCallbacks=_skipCallbacks - In the implementation block
@property (assign,nonatomic) BOOL updateStatusBarIfNecessary;              //@synthesize updateStatusBarIfNecessary=_updateStatusBarIfNecessary - In the implementation block
-(void)dealloc;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)skipCallbacks;
-(void)setSkipCallbacks:(BOOL)arg1 ;
-(void)setUpdateStatusBarIfNecessary:(BOOL)arg1 ;
-(void)setAnimations:(id)arg1 ;
-(id)animations;
-(BOOL)updateStatusBarIfNecessary;
@end

