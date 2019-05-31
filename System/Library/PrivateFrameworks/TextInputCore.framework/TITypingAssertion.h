/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSTimer;

@interface TITypingAssertion : NSObject {

	BOOL _active;
	NSMutableSet* _restingPathIndices;
	NSTimer* _timer;

}

@property (nonatomic,retain) NSTimer * timer;                          //@synthesize timer=_timer - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
+(id)sharedTypingAssertion;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)timerFired:(id)arg1 ;
-(void)touch;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)restResetTouches;
-(void)restTouchStartWithPathIndex:(long long)arg1 ;
-(void)restTouchEndWithPathIndex:(long long)arg1 ;
-(void)_sbsSetTypingActive:(BOOL)arg1 ;
-(void)touchWithDuration:(double)arg1 ;
-(id)__restingPathIndices;
@end
