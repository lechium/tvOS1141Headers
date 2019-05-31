/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMomentsHistoryBufferDelegate.h>

@protocol VCMovieWriterProtocol, OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSMutableArray, VCMomentsHistoryBuffer, VideoAttributes;

@interface VCMomentsHistory : NSObject <VCMomentsHistoryBufferDelegate> {

	NSMutableDictionary* _writers;
	NSObject*<VCMovieWriterProtocol> _writer;
	NSString* _masterTransactionID;
	NSMutableArray* _pendingRequests;
	NSObject*<OS_dispatch_queue> _momentsQueue;
	VCMomentsHistoryBuffer* _frameBuffer;
	VCMomentsHistoryBuffer* _localAudioBuffer;
	VCMomentsHistoryBuffer* _remoteAudioBuffer;
	NSMutableDictionary* _completionHandlers;
	VideoAttributes* _remoteScreenAttributes;
	CVPixelBufferPoolRef _bufferPool;
	CVPixelBufferPoolRef _copyPool;
	OpaqueVTPixelTransferSessionRef _transferSession;
	OpaqueVTPixelTransferSessionRef _copyTransferSession;
	int _captureHeight;
	int _captureWidth;
	BOOL _resize;
	BOOL _isFirstFrame;

}

@property (nonatomic,retain) VideoAttributes * remoteScreenAttributes;              //@synthesize remoteScreenAttributes=_remoteScreenAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)cleanupTransferSession;
-(void)updateAudioBuffer:(id)arg1 WithSample:(opaqueCMSampleBufferRef)arg2 timestamp:(unsigned)arg3 ;
-(void)updateCaptureSizesWithFirstFrame:(opaqueCMSampleBufferRef)arg1 ;
-(CVBufferRef)copyBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)updateVideoBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_VC25)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned)arg4 ;
-(void)setRemoteScreenAttributes:(VideoAttributes *)arg1 ;
-(BOOL)writeToFileWithTimestamp:(unsigned)arg1 transactionID:(id)arg2 URL:(id*)arg3 ;
-(id)getFilePathWithTransactionID:(id)arg1 type:(unsigned char)arg2 ;
-(void)registerDirectoryWithFilePath:(id)arg1 ;
-(void)setCompeletionHandler:(/*^block*/id)arg1 forTransactionID:(id)arg2 ;
-(SCD_Struct_VC25)setupStillImageWithTimestamp:(unsigned)arg1 transactionID:(id)arg2 visibleRect:(CGRect*)arg3 cameraStatusBit:(char*)arg4 ;
-(void)setupWriterWithTransactionID:(id)arg1 filePath:(id)arg2 stillImageTime:(SCD_Struct_VC25)arg3 visibleRect:(CGRect)arg4 cameraStatusBit:(unsigned char)arg5 ;
-(void)handlePendingRequestsWithSourceURL:(id)arg1 error:(id)arg2 ;
-(void)appendSampleWithWriter:(id)arg1 buffer:(id)arg2 sample:(opaqueCMSampleBufferRef)arg3 ;
-(void)flushHistoryBuffers;
-(void)setupResizingSessionsWithVisibleRect:(CGRect)arg1 cameraStatusBit:(unsigned char)arg2 ;
-(BOOL)writeToLivePhotoToFileWithFrame:(CVBufferRef)arg1 transactionID:(id)arg2 URL:(id*)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(CGSize)calculateVisibleAreaWithVisibleRect:(CGRect)arg1 cameraStatusBit:(unsigned char)arg2 ;
-(int)rewriteMovieMetadataWithURL:(id)arg1 transactionID:(id)arg2 ;
-(void)handleSinglePendingRequestWithTransactionID:(id)arg1 sourceURL:(id)arg2 ;
-(void)handlePendingRequestWithError:(id)arg1 ;
-(void)handlePendingRequestSuccessWithSourceURL:(id)arg1 ;
-(void)historyBuffer:(id)arg1 didDequeueSample:(opaqueCMSampleBufferRef)arg2 timestamp:(unsigned)arg3 ;
-(void)addLocalAudioSample:(opaqueVCAudioBufferListRef)arg1 timestamp:(unsigned)arg2 ;
-(void)addRemoteAudioSample:(opaqueVCAudioBufferListRef)arg1 timestamp:(unsigned)arg2 ;
-(void)addLocalVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned)arg3 ;
-(void)updateRemoteScreenAttributes:(id)arg1 ;
-(void)getPhotoWithTransactionID:(id)arg1 Timestamp:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getLivePhotoWithTransactionID:(id)arg1 timestamp:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startVideoRecording:(id)arg1 timestamp:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)endVideoRecording:(id)arg1 timestamp:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cleanupActiveRequests;
-(void)cancelRequestWithTransactionID:(id)arg1 ;
-(VideoAttributes *)remoteScreenAttributes;
@end

