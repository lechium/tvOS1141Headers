/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface CFNetworkTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	double _interval;
	double _lastResumeTime;
	double _lastPauseTime;
	double _runTime;
	int _state;

}

@property (assign) int state;              //@synthesize state=_state - In the implementation block
-(id)initWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pauseTimer;
-(void)resumeTimer;
-(void)suspendCallbacksForTimer;
-(void)resumeCallbacksForTimer;
-(void)setCancelCallbacks:(/*^block*/id)arg1 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setTimer:(double)arg1 ;
-(void)cancelTimer;
@end

