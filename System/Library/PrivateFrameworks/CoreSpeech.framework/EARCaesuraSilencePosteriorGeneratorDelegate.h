/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EARCaesuraSilencePosteriorGeneratorDelegate <NSObject>
@optional
-(void)silenceDurationEstimateAvailable:(float*)arg1 numEstimates:(unsigned long long)arg2 clientProcessedAudioMs:(float)arg3;

@required
-(void)clientSilenceFeaturesAvailable:(id)arg1;

@end
