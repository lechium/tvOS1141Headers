/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIAnimation : NSObject {

	id _target;
	SEL _action;
	id _delegate;
	/*^block*/id _completion;
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned useNSTimer : 1;
	}  _animationFlags;
	double _startTime;
	double _duration;
	int _state;

}
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(int)state;
-(void)setDuration:(double)arg1 ;
-(int)type;
-(SEL)action;
-(id)target;
-(void)setAnimationCurve:(int)arg1 ;
-(float)progressForFraction:(float)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)setUsesNSTimer:(BOOL)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(float)fractionForTime:(double)arg1 ;
-(void)markStop;
-(/*^block*/id)completion;
-(void)setCompletion:(/*^block*/id)arg1 ;
-(void)markStart:(double)arg1 ;
-(void)stopAnimation;
-(BOOL)usesNSTimer;
@end

