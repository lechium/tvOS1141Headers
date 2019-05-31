/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCTextJitterBuffer : NSObject {

	tagVCTextJitterBufferConfiguration _configuration;
	BOOL _resetRequested;
	id _delegate;
	JitterPreloadQueue_tRef _preloadQueue;
	JitterQueue_tRef _jitterQueue;
	NSObject*<OS_dispatch_source> _heartbeat;
	unsigned _lastSequenceNumber;
	BOOL _firstFrameReceived;

}
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)start;
-(void)stop;
-(id)initWithConfiguration:(tagVCTextJitterBufferConfiguration*)arg1 ;
-(tagAudioPacket*)allocTextPacket;
-(void)releaseTextPacket:(tagAudioPacket*)arg1 ;
-(void)enqueuePacket:(tagAudioPacket*)arg1 ;
-(tagAudioFrame*)allocTextFrame;
-(BOOL)startHeartbeat;
-(void)stopHeartbeat;
-(void)heartbeat;
-(void)jitterQueuePushPacket:(tagAudioPacket*)arg1 ;
-(void)releaseTextFrame:(tagAudioFrame*)arg1 ;
@end

