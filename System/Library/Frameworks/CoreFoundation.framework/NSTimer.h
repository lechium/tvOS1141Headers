/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSDate;

@interface NSTimer : NSObject

@property (copy) NSDate * fireDate; 
@property (readonly) double timeInterval; 
@property (assign) double tolerance; 
@property (getter=isValid,readonly) BOOL valid; 
@property (retain,readonly) id userInfo; 
+(id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
+(id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)timerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(CFStringRef)copyDebugDescription;
-(double)fireTime;
-(void)setFireTime:(double)arg1 ;
-(double)_cffireTime;
-(void)invalidate;
-(BOOL)isValid;
-(id)userInfo;
-(void)setFireDate:(NSDate *)arg1 ;
-(SCD_Struct_NS15*)context;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6 ;
-(double)timeInterval;
-(NSDate *)fireDate;
-(long long)order;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(void)fire;
-(double)interval;
@end

