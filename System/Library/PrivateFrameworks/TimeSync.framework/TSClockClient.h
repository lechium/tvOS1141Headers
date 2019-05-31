/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSClockClient <NSObject>
@optional
-(void)didResetClock:(id)arg1;
-(void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
-(void)didChangeClockMasterForClock:(id)arg1;
-(void)didBeginClockGrandmasterChangeForClock:(id)arg1;
-(void)didEndClockGrandmasterChangeForClock:(id)arg1;
-(void)didProcessSync:(id)arg1;

@end

