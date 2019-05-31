/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSSpeechConnectionDelegate
@required
-(void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
-(void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 error:(id)arg4;
-(void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
-(void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
-(void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
-(void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(NSRange)arg4;
-(void)connection:(id)arg1 speechRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
-(void)connection:(id)arg1 synthesisRequest:(id)arg2 didFinishWithInstrumentMetrics:(id)arg3 error:(id)arg4;
-(void)connection:(id)arg1 presynthesizedAudioRequestDidStart:(id)arg2;
-(void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3 error:(id)arg4;

@end

