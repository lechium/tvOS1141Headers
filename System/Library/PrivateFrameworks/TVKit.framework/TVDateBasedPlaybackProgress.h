/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVPlaybackProgress.h>

@class NSDate, TVPDateRange, TVPlaybackDateController;

@interface TVDateBasedPlaybackProgress : TVPlaybackProgress {

	NSDate* _playbackDate;
	TVPDateRange* _seekableDateRange;
	double _roundedDuration;
	TVPlaybackDateController* _firstDateController;
	TVPlaybackDateController* _currentDateController;
	TVPlaybackDateController* _lastDateController;

}

@property (nonatomic,retain) TVPlaybackDateController * firstDateController;                //@synthesize firstDateController=_firstDateController - In the implementation block
@property (nonatomic,retain) TVPlaybackDateController * currentDateController;              //@synthesize currentDateController=_currentDateController - In the implementation block
@property (nonatomic,retain) TVPlaybackDateController * lastDateController;                 //@synthesize lastDateController=_lastDateController - In the implementation block
@property (assign,nonatomic) double roundedDuration;                                        //@synthesize roundedDuration=_roundedDuration - In the implementation block
@property (nonatomic,copy) NSDate * playbackDate;                                           //@synthesize playbackDate=_playbackDate - In the implementation block
@property (nonatomic,retain) TVPDateRange * seekableDateRange;                              //@synthesize seekableDateRange=_seekableDateRange - In the implementation block
@property (nonatomic,copy,readonly) NSDate * roundedStartDate; 
@property (nonatomic,copy,readonly) NSDate * roundedEndDate; 
-(id)init;
-(void)dealloc;
-(TVPlaybackDateController *)firstDateController;
-(TVPlaybackDateController *)lastDateController;
-(void)setPlaybackDate:(NSDate *)arg1 ;
-(NSDate *)roundedStartDate;
-(NSDate *)roundedEndDate;
-(NSDate *)playbackDate;
-(TVPDateRange *)seekableDateRange;
-(void)setSeekableDateRange:(TVPDateRange *)arg1 ;
-(double)roundedDuration;
-(void)setRoundedDuration:(double)arg1 ;
-(void)setFirstDateController:(TVPlaybackDateController *)arg1 ;
-(TVPlaybackDateController *)currentDateController;
-(void)setCurrentDateController:(TVPlaybackDateController *)arg1 ;
-(void)setLastDateController:(TVPlaybackDateController *)arg1 ;
@end
