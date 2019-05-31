/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaStreamSyncDestination.h>

@protocol VCVideoStreamReceiverDelegate, OS_dispatch_queue;
@class VCVideoStreamRateAdaptation, NSObject, VideoAttributes, VCMediaStreamSynchronizer, VCMediaStreamStats, NSString;

@interface VCVideoStreamReceiver : NSObject <VCMediaStreamSyncDestination> {

	tagHANDLE* _hRTP;
	OpaqueCMMemoryPoolRef _blockBufferMemoryPool;
	CFAllocatorRef _blockBufferMemoryPoolAllocator;
	OpaqueVTDecompressionSessionRef _decompressionSession;
	BOOL _receivedFirstPacket;
	BOOL _receivedFirstRemoteFrame;
	unsigned short _lastSequenceNumber;
	int _sequenceNumberOutOfOrder;
	unsigned char _firSequenceNumber;
	double _lastFIRArrivalTime;
	VCVideoStreamRateAdaptation* _rateAdaptation;
	opaqueCMBufferQueueRef _videoQueue;
	unsigned _mostRecentTimestamp;
	unsigned _lastVideoTimestamp;
	double _lastReceivedVideoRTPPacketTime;
	double _lastReceivedVideoRTCPPacketTime;
	unsigned _videoTimestampWrapCount;
	opaqueCMFormatDescriptionRef _formatDescription;
	id<VCVideoStreamReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _videoStreamReceiverQueue;
	OpaqueFigThreadRef _networkReceiveThread;
	BOOL _runNetworkReceiveThread;
	int _sRecvReset;
	VideoPacketBuffer_tRef _videoPacketBuffer;
	VideoAttributes* _remoteVideoAttributes;
	VCMediaStreamSynchronizer* _mediaStreamSynchronizer;
	id _syncSource;
	int _remoteVideoOrientation;
	int _remoteVideoCamera;
	BOOL _enableCVO;
	unsigned long long _cvoExtensionID;
	unsigned long long _lastKeyFrameSampleBufferSize;
	SCD_Struct_VC33 _lastFrameTime;
	SCD_Struct_VC33 _lastDisplayTime;
	VCMediaStreamStats* _stats;
	double _reportingIntervalStartTime;
	double _reportingLastUpdateTime;
	unsigned _receivedBytes;
	double _roundTripTime;
	unsigned _videoStallDurationMillis;
	double _videoStallStartTime;
	opaqueRTCReportingRef _reportingAgent;
	BOOL _enableReceiveBitstreamDump;

}

@property (assign) int remoteVideoOrientation;                                        //@synthesize remoteVideoOrientation=_remoteVideoOrientation - In the implementation block
@property (assign,nonatomic) id<VCVideoStreamReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<VCMediaStreamSyncSource> syncSource;                  //@synthesize syncSource=_syncSource - In the implementation block
@property (assign) double roundTripTime;                                              //@synthesize roundTripTime=_roundTripTime - In the implementation block
@property (readonly) double lastReceivedVideoRTPPacketTime;                           //@synthesize lastReceivedVideoRTPPacketTime=_lastReceivedVideoRTPPacketTime - In the implementation block
@property (readonly) double lastReceivedVideoRTCPPacketTime;                          //@synthesize lastReceivedVideoRTCPPacketTime=_lastReceivedVideoRTCPPacketTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VCVideoStreamReceiverDelegate>)delegate;
-(void)setDelegate:(id<VCVideoStreamReceiverDelegate>)arg1 ;
-(void)dealloc;
-(double)roundTripTime;
-(void)gatherRealtimeStats:(CFDictionaryRef)arg1 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 ;
-(void)startVideo;
-(void)stopVideo;
-(BOOL)startSynchronization:(id)arg1 ;
-(void)stopSynchronization;
-(int)stopNetworkReceiveThread;
-(void)teardownDecodeSession:(BOOL)arg1 ;
-(void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned)arg2 minBitrate:(unsigned)arg3 adaptationInterval:(double)arg4 ;
-(int)startNetworkReceiveThread;
-(void)setSyncSource:(id<VCMediaStreamSyncSource>)arg1 ;
-(void)handleAlarmForTimeStamp:(unsigned)arg1 ;
-(int)processVideoRTP;
-(int)processVideoRTCP;
-(void)updateVideoStallStatus:(BOOL)arg1 ;
-(int)scheduleDecodeForFrameWithBuffer:(char*)arg1 size:(unsigned long long)arg2 timestamp:(unsigned)arg3 hostTime:(double)arg4 showFrame:(BOOL)arg5 ;
-(void)scheduleDecodeForTimestamp:(unsigned)arg1 ;
-(void)scheduleVideoDecode:(unsigned*)arg1 schedule_n:(int)arg2 ;
-(void)updateSequenceNumber:(unsigned short)arg1 ;
-(void)setRoundTripTime:(double)arg1 ;
-(void)processReceptionReportBlock:(tagRTCP_RRB*)arg1 arrivalNTPTime:(tagNTP)arg2 ;
-(int)decodeFrame:(opaqueCMSampleBufferRef)arg1 showFrame:(BOOL)arg2 ;
-(void)createDecodeSession:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)canDequeue:(opaqueCMBufferQueueRef)arg1 forTimestamp:(unsigned)arg2 ;
-(void)dequeueAndDecodeForTimestamp:(unsigned)arg1 ;
-(BOOL)handleRemoteVideoAttributesChange:(CVBufferRef)arg1 ;
-(id)initWithRTP:(tagHANDLE*)arg1 delegate:(id)arg2 reportingAgent:(opaqueRTCReportingRef)arg3 dumpID:(unsigned)arg4 ;
-(void)setEnableCVO:(BOOL)arg1 cvoExtensionID:(unsigned long long)arg2 ;
-(void)pauseVideo;
-(void*)networkReceivePackets;
-(void)rtcpSendIntervalElapsed;
-(int)showDecodedFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_VC33)arg2 ;
-(int)remoteVideoOrientation;
-(void)setRemoteVideoOrientation:(int)arg1 ;
-(double)lastReceivedVideoRTPPacketTime;
-(double)lastReceivedVideoRTCPPacketTime;
-(id<VCMediaStreamSyncSource>)syncSource;
@end

