/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPDetailedScrubbing, MPDetailScrubControllerDelegate;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIControl;

@interface MPDetailScrubController : NSObject {

	BOOL _didBeginTracking;
	BOOL _needsCommit;
	float _accumulatedDelta;
	CGPoint _previousLocationInView;
	CGPoint _beginLocationInView;
	CGPoint _lastCommittedLocationInView;
	float _currentValue;
	BOOL _detailedScrubbingEnabled;
	BOOL _isTracking;
	UIControl*<MPDetailedScrubbing> _scrubbingControl;
	id<MPDetailScrubControllerDelegate> _delegate;
	double _duration;
	double _scrubbingVerticalRange;
	long long _currentScrubSpeed;

}

@property (assign,nonatomic,__weak) UIControl*<MPDetailedScrubbing> scrubbingControl;              //@synthesize scrubbingControl=_scrubbingControl - In the implementation block
@property (assign,nonatomic,__weak) id<MPDetailScrubControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double duration;                                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double scrubbingVerticalRange;                                        //@synthesize scrubbingVerticalRange=_scrubbingVerticalRange - In the implementation block
@property (assign,nonatomic) BOOL detailedScrubbingEnabled;                                        //@synthesize detailedScrubbingEnabled=_detailedScrubbingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL durationAllowsForDetailedScrubbing; 
@property (nonatomic,readonly) BOOL isTracking;                                                    //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,readonly) long long currentScrubSpeed;                                        //@synthesize currentScrubSpeed=_currentScrubSpeed - In the implementation block
-(id)init;
-(id<MPDetailScrubControllerDelegate>)delegate;
-(void)setDelegate:(id<MPDetailScrubControllerDelegate>)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)isTracking;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithScrubbingControl:(id)arg1 ;
-(void)setDetailedScrubbingEnabled:(BOOL)arg1 ;
-(BOOL)detailedScrubbingEnabled;
-(BOOL)durationAllowsForDetailedScrubbing;
-(float)scaleForVerticalPosition:(double)arg1 ;
-(long long)currentScrubSpeed;
-(void)_beginScrubbing;
-(float)_minimumScale;
-(void)_commitValue:(float)arg1 ;
-(void)_endScrubbing;
-(float)_scaleForIdealValueForVerticalPosition:(double)arg1 ;
-(UIControl*<MPDetailedScrubbing>)scrubbingControl;
-(void)setScrubbingControl:(UIControl*<MPDetailedScrubbing>)arg1 ;
-(double)scrubbingVerticalRange;
-(void)setScrubbingVerticalRange:(double)arg1 ;
@end

