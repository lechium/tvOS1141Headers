/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

@protocol BWImageQueueSinkNodePreviewTapDelegate, OS_os_transaction, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface BWImageQueueSinkNode : BWSinkNode {

	unsigned _imageQueueCapacity;
	unsigned _imageQueueWidth;
	unsigned _imageQueueHeight;
	unsigned _imageQueueRequiredFreeSlots;
	CAImageQueueRef _imageQueue;
	unsigned _imageQueueSlot;
	unsigned long long _imageQueueCurrentFreeSlots;
	int _syncStrategy;
	BOOL _resetPreviewSynchronizerOnNextFrame;
	OpaqueFigPreviewSynchronizerRef _previewSynchronizer;
	double _lastFramePTS;
	double _lastDisplayTime;
	double _lateFrameIntervalStartPTS;
	double _previousFrameDuration;
	unsigned long long _framesSinceLastHarmonicCompensation;
	id<BWImageQueueSinkNodePreviewTapDelegate> _previewTapDelegate;
	unsigned long long _numFramesReceived;
	NSObject*<OS_os_transaction> _holdingBuffersForClientAssertion;
	NSMutableArray* _sharedSurfaces;
	unsigned long long* _sharedBufferIDs;
	unsigned long long _sharedSurfaceCount;
	BOOL _useGlobalIOSurfaces;
	OpaqueFigSimpleMutexRef _surfaceRegistrationMutex;
	BOOL _surfaceRegistrationComplete;
	NSMutableArray* _bufferIDsInQueue;
	EnqueuedBufferContext* _enqueuedBufferContexts;
	unsigned long long _enqueuedBufferContextCount;
	NSMutableArray* _previewPTSHistory;
	OpaqueFigSimpleMutexRef _previewPTSHistoryMutex;
	NSObject*<OS_dispatch_queue> _previewPTSHistoryQueue;
	SCD_Struct_BW2 _firstFramePTS;
	long long _firstFrameHostTime;
	BOOL _didCallFirstFrameCallback;
	BOOL _packed10BitPixelFormatSupported;

}

@property (nonatomic,readonly) CAImageQueueRef imageQueue; 
@property (nonatomic,readonly) unsigned imageQueueSlot; 
@property (assign,nonatomic) id<BWImageQueueSinkNodePreviewTapDelegate> previewTapDelegate;              //@synthesize previewTapDelegate=_previewTapDelegate - In the implementation block
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(id)initWithHFRSupport:(BOOL)arg1 ;
-(CAImageQueueRef)imageQueue;
-(void)registerSurfacesFromSourcePool:(id)arg1 ;
-(void)inputConnectionWillBeEnabled;
-(void)setPacked10BitPixelFormatSupported:(BOOL)arg1 ;
-(void)setSyncStrategy:(int)arg1 ;
-(void)setPreviewTapDelegate:(id<BWImageQueueSinkNodePreviewTapDelegate>)arg1 ;
-(SCD_Struct_BW2)previewPTSDisplayedAtHostTime:(unsigned long long)arg1 allowingExtrapolation:(BOOL)arg2 ;
-(SCD_Struct_BW2)previewPTSAtHostTime:(unsigned long long)arg1 ;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(BOOL)packed10BitPixelFormatSupported;
-(id)_inputFormatRequirements;
-(void)_cleanupIOSurfaces;
-(void)_ensureImageQueue;
-(unsigned long long)_bufferIDForSurface:(IOSurfaceRef)arg1 ;
-(void)_collectUnconsumedBuffersWithReason:(id)arg1 ;
-(double)_displayTimeSyncedWithFramePTS:(double)arg1 ;
-(EnqueuedBufferContext*)_contextForBuffer:(opaqueCMSampleBufferRef)arg1 node:(id)arg2 bufferId:(unsigned long long)arg3 framePTS:(SCD_Struct_BW2)arg4 ;
-(int)syncStrategy;
-(void)_releaseBufferContext:(EnqueuedBufferContext*)arg1 ;
-(void)_storePreviewPTS:(SCD_Struct_BW2)arg1 withHostTime:(unsigned long long)arg2 ;
-(id<BWImageQueueSinkNodePreviewTapDelegate>)previewTapDelegate;
-(unsigned)imageQueueSlot;
-(void)dealloc;
@end

