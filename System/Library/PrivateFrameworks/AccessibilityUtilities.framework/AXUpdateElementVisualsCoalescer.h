/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface AXUpdateElementVisualsCoalescer : NSObject {

	double _threshold;
	double _progressInterval;
	/*^block*/id _updateVisualsSequenceDidBeginHandler;
	/*^block*/id _updateVisualsSequenceDidFinishHandler;
	/*^block*/id _updateVisualsSequenceInProgressHandler;
	NSTimer* _timer;
	double _lastProgressTime;

}

@property (nonatomic,retain) NSTimer * timer;                                      //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) double lastProgressTime;                              //@synthesize lastProgressTime=_lastProgressTime - In the implementation block
@property (assign,nonatomic) double threshold;                                     //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) double progressInterval;                              //@synthesize progressInterval=_progressInterval - In the implementation block
@property (nonatomic,copy) id updateVisualsSequenceDidBeginHandler;                //@synthesize updateVisualsSequenceDidBeginHandler=_updateVisualsSequenceDidBeginHandler - In the implementation block
@property (nonatomic,copy) id updateVisualsSequenceDidFinishHandler;               //@synthesize updateVisualsSequenceDidFinishHandler=_updateVisualsSequenceDidFinishHandler - In the implementation block
@property (nonatomic,copy) id updateVisualsSequenceInProgressHandler;              //@synthesize updateVisualsSequenceInProgressHandler=_updateVisualsSequenceInProgressHandler - In the implementation block
-(void)setThreshold:(double)arg1 ;
-(double)threshold;
-(id)init;
-(void)dealloc;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)updateVisualsSequenceDidBeginHandler;
-(void)_timerDidFire:(id)arg1 ;
-(id)updateVisualsSequenceInProgressHandler;
-(id)updateVisualsSequenceDidFinishHandler;
-(void)notifyUpdateElementVisualsEventDidOccur;
-(double)progressInterval;
-(void)setProgressInterval:(double)arg1 ;
-(void)setUpdateVisualsSequenceDidBeginHandler:(id)arg1 ;
-(void)setUpdateVisualsSequenceDidFinishHandler:(id)arg1 ;
-(void)setUpdateVisualsSequenceInProgressHandler:(id)arg1 ;
-(double)lastProgressTime;
-(void)setLastProgressTime:(double)arg1 ;
@end

