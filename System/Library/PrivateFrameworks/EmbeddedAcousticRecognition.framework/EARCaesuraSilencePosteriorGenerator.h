/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, EARCaesuraSilencePosteriorGeneratorDelegate;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject;

@interface EARCaesuraSilencePosteriorGenerator : NSObject {

	shared_ptr<quasar::SilencePosteriorGenerator>* _silenceGenerator;
	NSObject*<OS_dispatch_queue> _spgQueue;
	id<EARCaesuraSilencePosteriorGeneratorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EARCaesuraSilencePosteriorGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(id<EARCaesuraSilencePosteriorGeneratorDelegate>)delegate;
-(void)setDelegate:(id<EARCaesuraSilencePosteriorGeneratorDelegate>)arg1 ;
-(void)dealloc;
-(void)_startComputeTask;
-(id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 ;
-(id)initWithConfigFile:(id)arg1 ;
-(void)endAudio;
-(void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(long long)getFrameDurationMs;
-(id)initWithConfigFile:(id)arg1 samplingRate:(unsigned long long)arg2 queue:(id)arg3 ;
@end

