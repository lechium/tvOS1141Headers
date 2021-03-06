/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPlayerItem;

@interface MRAudioItem : NSObject {

	float _volume;
	float _duckLevel;
	AVPlayerItem* _avPlayerItem;
	double _startTime;
	double _duration;
	double _localTimeOffset;
	double _fadeInDuration;
	double _fadeOutDuration;
	double _duckInDuration;
	double _duckOutDuration;

}

@property (readonly) AVPlayerItem * avPlayerItem;              //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (readonly) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (readonly) double duration;                          //@synthesize duration=_duration - In the implementation block
@property (assign) double localTimeOffset;                     //@synthesize localTimeOffset=_localTimeOffset - In the implementation block
@property (assign) float volume;                               //@synthesize volume=_volume - In the implementation block
@property (assign) double fadeInDuration;                      //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign) double fadeOutDuration;                     //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign) float duckLevel;                            //@synthesize duckLevel=_duckLevel - In the implementation block
@property (assign) double duckInDuration;                      //@synthesize duckInDuration=_duckInDuration - In the implementation block
@property (assign) double duckOutDuration;                     //@synthesize duckOutDuration=_duckOutDuration - In the implementation block
-(void)gotoTime:(double)arg1 ;
-(void)dealloc;
-(double)duration;
-(double)startTime;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(double)duckInDuration;
-(void)setDuckInDuration:(double)arg1 ;
-(double)duckOutDuration;
-(void)setDuckOutDuration:(double)arg1 ;
-(float)duckLevel;
-(void)setDuckLevel:(float)arg1 ;
-(id)initWithURL:(id)arg1 startTime:(double)arg2 andDuration:(double)arg3 ;
-(void)setLocalTimeOffset:(double)arg1 ;
-(double)localTimeOffset;
-(void)syncVolumeToSong:(id)arg1 ;
-(AVPlayerItem *)avPlayerItem;
-(float)volumeAtTime:(double)arg1 ;
@end

