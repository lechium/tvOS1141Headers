/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioPlayerNode : AVAudioNode <AVAudioMixing>

@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(void)didAttachToEngine:(id)arg1 ;
-(void)playAtTime:(id)arg1 ;
-(void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionCallbackType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)callLegacyCompletionHandlerForType:(long long)arg1 legacyHandler:(/*^block*/id)arg2 ;
-(void)scheduleFile:(id)arg1 atTime:(id)arg2 completionCallbackType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)scheduleSegment:(id)arg1 startingFrame:(long long)arg2 frameCount:(unsigned)arg3 atTime:(id)arg4 completionCallbackType:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)scheduleBuffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)scheduleBuffer:(id)arg1 completionCallbackType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)scheduleSegment:(id)arg1 startingFrame:(long long)arg2 frameCount:(unsigned)arg3 atTime:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)prepareWithFrameCount:(unsigned)arg1 ;
-(id)nodeTimeForPlayerTime:(id)arg1 ;
-(id)playerTimeForNodeTime:(id)arg1 ;
-(id)init;
-(void)stop;
-(void)pause;
-(void)play;
-(BOOL)isPlaying;
-(void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)scheduleFile:(id)arg1 atTime:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

