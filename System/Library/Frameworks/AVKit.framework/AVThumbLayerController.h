/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVThumbLayerController <NSObject>
@property (assign,nonatomic) double desiredTimeInterval; 
@property (readonly) double toleranceBefore; 
@property (readonly) double toleranceAfter; 
@property (readonly) double actualTimeInterval; 
@property (nonatomic,copy) id actualTimeUpdateBlock; 
@required
-(void)prefetchForTime:(double)arg1;
-(void)prefetchForTimes:(id)arg1;
-(BOOL)isExact;
-(double)desiredTimeInterval;
-(void)setDesiredTimeInterval:(double)arg1;
-(double)toleranceBefore;
-(double)toleranceAfter;
-(double)actualTimeInterval;
-(id)actualTimeUpdateBlock;
-(void)setActualTimeUpdateBlock:(/*^block*/id)arg1;

@end
