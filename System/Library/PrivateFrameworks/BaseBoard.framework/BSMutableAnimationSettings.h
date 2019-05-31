/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSAnimationSettings.h>

@class CAMediaTimingFunction;

@interface BSMutableAnimationSettings : BSAnimationSettings

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double frameInterval; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
@property (assign,nonatomic) float speed; 
+(id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 ;
+(id)settingsWithDuration:(double)arg1 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 ;
-(void)setSpeed:(float)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setFrameInterval:(double)arg1 ;
@end

