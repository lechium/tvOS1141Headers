/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSObject, NSURL;

@interface CSAudioFileLog : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	OpaqueExtAudioFileRef _audioFile;
	AudioStreamBasicDescription _asbd;
	NSURL* _url;
	unsigned _audioLength;

}
+(id)sharedInstance;
-(void)stopRecording;
-(id)init;
-(void)dealloc;
-(void)_closeAudioFile;
-(void)startRecording;
-(void)appendAudioData:(id)arg1 ;
@end

