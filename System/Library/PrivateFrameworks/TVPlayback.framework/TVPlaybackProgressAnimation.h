/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CAMediaTimingFunction;

@interface TVPlaybackProgressAnimation : NSObject {

	NSDate* _animationStartDate;
	double _animationDuration;
	double _fromPlaybackTime;
	double _toPlaybackTime;
	CAMediaTimingFunction* _mediaTimingFunction;
	NSDate* _currentDate;

}

@property (nonatomic,copy) NSDate * animationStartDate;                                //@synthesize animationStartDate=_animationStartDate - In the implementation block
@property (assign,nonatomic) double animationDuration;                                 //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double fromPlaybackTime;                                  //@synthesize fromPlaybackTime=_fromPlaybackTime - In the implementation block
@property (assign,nonatomic) double toPlaybackTime;                                    //@synthesize toPlaybackTime=_toPlaybackTime - In the implementation block
@property (assign,nonatomic) CAMediaTimingFunction * mediaTimingFunction;              //@synthesize mediaTimingFunction=_mediaTimingFunction - In the implementation block
@property (nonatomic,copy) NSDate * currentDate;                                       //@synthesize currentDate=_currentDate - In the implementation block
-(NSDate *)currentDate;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setAnimationStartDate:(NSDate *)arg1 ;
-(double)animationDuration;
-(void)setMediaTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)mediaTimingFunction;
-(BOOL)isFinished;
-(double)currentPlaybackTime;
-(NSDate *)animationStartDate;
-(double)fromPlaybackTime;
-(double)toPlaybackTime;
-(void)setFromPlaybackTime:(double)arg1 ;
-(void)setToPlaybackTime:(double)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
@end

