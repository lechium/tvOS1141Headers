/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData, NSDictionary, AVAudioFormat, NSArray;

@interface AVAudioPlayer : NSObject {

	id _impl;

}

@property (getter=isPlaying,readonly) BOOL playing; 
@property (readonly) unsigned long long numberOfChannels; 
@property (readonly) double duration; 
@property (assign) id<AVAudioPlayerDelegate> delegate; 
@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
@property (assign) float pan; 
@property (assign) float volume; 
@property (assign) BOOL enableRate; 
@property (assign) float rate; 
@property (assign) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (assign) long long numberOfLoops; 
@property (readonly) NSDictionary * settings; 
@property (readonly) AVAudioFormat * format; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
-(void)finalize;
-(BOOL)isMeteringEnabled;
-(id)initBase;
-(void)finishedPlaying:(id)arg1 ;
-(void)decodeError:(id)arg1 ;
-(id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(BOOL)playAtTime:(double)arg1 ;
-(void)setVolume:(float)arg1 fadeDuration:(double)arg2 ;
-(void)setEnableRate:(BOOL)arg1 ;
-(BOOL)enableRate;
-(double)deviceCurrentTime;
-(NSArray *)channelAssignments;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(BOOL)mixToUplink;
-(void)setMixToUplink:(BOOL)arg1 ;
-(id)audioSession;
-(void)setAudioSession:(id)arg1 ;
-(id)impl;
-(unsigned long long)numberOfChannels;
-(id<AVAudioPlayerDelegate>)delegate;
-(void)setDelegate:(id<AVAudioPlayerDelegate>)arg1 ;
-(void)dealloc;
-(double)duration;
-(NSDictionary *)settings;
-(NSURL *)url;
-(AVAudioFormat *)format;
-(NSData *)data;
-(void)stop;
-(double)currentTime;
-(void)pause;
-(void)setPan:(float)arg1 ;
-(float)pan;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareToPlay;
-(BOOL)play;
-(void)setCurrentTime:(double)arg1 ;
-(BOOL)isPlaying;
-(void)beginInterruption;
-(void)endInterruptionWithFlags:(id)arg1 ;
-(void)endInterruption;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(long long)numberOfLoops;
-(void)setNumberOfLoops:(long long)arg1 ;
@end

