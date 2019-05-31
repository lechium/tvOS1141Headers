/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIKBRTObject.h>

@protocol OS_dispatch_queue;
@class _UIKBRTTimerBlock, NSObject;

@interface _UIKBRTTouchInfo : _UIKBRTObject {

	char _currentTouchState;
	char _preRuleTouchState;
	double _originalTimestamp;
	double _maximumRadius;
	double _currentTimestamp;
	double _originalZGradient;
	double _currentZGradient;
	id _touchIdentifier;
	_UIKBRTTimerBlock* _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	CGPoint _originalTouchPoint;
	CGPoint _currentTouchPoint;

}

@property (nonatomic,readonly) _UIKBRTTimerBlock * timer;                            //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> timerQueue;              //@synthesize timerQueue=_timerQueue - In the implementation block
@property (nonatomic,readonly) _UIKBRTTouchInfo * previousTouch; 
@property (nonatomic,readonly) _UIKBRTTouchInfo * nextTouch; 
@property (nonatomic,readonly) double originalTimestamp;                             //@synthesize originalTimestamp=_originalTimestamp - In the implementation block
@property (nonatomic,readonly) CGPoint originalTouchPoint;                           //@synthesize originalTouchPoint=_originalTouchPoint - In the implementation block
@property (nonatomic,readonly) CGPoint currentTouchPoint;                            //@synthesize currentTouchPoint=_currentTouchPoint - In the implementation block
@property (nonatomic,readonly) double maximumRadius;                                 //@synthesize maximumRadius=_maximumRadius - In the implementation block
@property (nonatomic,readonly) double currentTimestamp;                              //@synthesize currentTimestamp=_currentTimestamp - In the implementation block
@property (nonatomic,readonly) double originalZGradient;                             //@synthesize originalZGradient=_originalZGradient - In the implementation block
@property (nonatomic,readonly) double currentZGradient;                              //@synthesize currentZGradient=_currentZGradient - In the implementation block
@property (assign,nonatomic) char currentTouchState;                                 //@synthesize currentTouchState=_currentTouchState - In the implementation block
@property (assign,nonatomic) char preRuleTouchState;                                 //@synthesize preRuleTouchState=_preRuleTouchState - In the implementation block
@property (nonatomic,readonly) id touchIdentifier;                                   //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
+(id)createTouchInfoForTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(BOOL)arg3 ;
+(id)touchInfoForTouch:(id)arg1 withIdentifier:(id)arg2 ;
+(id)touchDict;
+(void)setTouchInfo:(id)arg1 forIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)touchIdentifier;
-(CGPoint)currentTouchPoint;
-(char)preRuleTouchState;
-(double)currentZGradient;
-(CGPoint)originalTouchPoint;
-(void)invalidateTimer;
-(char)currentTouchState;
-(void)setCurrentTouchState:(char)arg1 ;
-(void)setPreRuleTouchState:(char)arg1 ;
-(double)originalTimestamp;
-(double)currentTimestamp;
-(_UIKBRTTouchInfo *)previousTouch;
-(id)setOfTouchesToIgnoreWhenSettingTouchInfo:(id)arg1 toState:(char)arg2 ;
-(_UIKBRTTouchInfo *)nextTouch;
-(void)setTimerWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(/*^block*/id)arg3 ;
-(double)maximumRadius;
-(void)cleanup;
-(BOOL)willChangeTouchInfo:(id)arg1 toState:(char)arg2 ;
-(_UIKBRTTimerBlock *)timer;
-(void)updateTouch:(id)arg1 ;
-(id)initWithTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(BOOL)arg3 ;
-(void)fireTimerNow;
-(double)originalZGradient;
-(NSObject*<OS_dispatch_queue>)timerQueue;
@end

