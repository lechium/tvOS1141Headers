/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMediaDataRequesterConsumer.h>
#import <AVFoundation/AVQueuedSampleBufferRenderingInternal.h>
#import <AVFoundation/AVQueuedSampleBufferRendering.h>

@class AVSampleBufferAudioRendererInternal, NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering> {

	AVSampleBufferAudioRendererInternal* _audioRendererInternal;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) NSString * audioOutputDeviceUniqueID; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
+(id)sampleBufferAudioRenderer;
-(void)finalize;
-(NSString *)audioOutputDeviceUniqueID;
-(void)setAudioOutputDeviceUniqueID:(NSString *)arg1 ;
-(id)scheduledAudioParameters;
-(int)_initializeTimebase;
-(int)_installNotificationHandlers;
-(void)_uninstallNotificationHandlers;
-(void)_transitionToStatus:(long long)arg1 error:(id)arg2 ;
-(void)_transitionToFailedStatusWithOSStatus:(int)arg1 ;
-(void)copyFigSampleBufferAudioRenderer:(OpaqueFigSampleBufferAudioRenderer*)arg1 ;
-(BOOL)setRenderSynchronizer:(id)arg1 error:(id*)arg2 ;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)stopRequestingMediaData;
-(void)_triggerMediaRequestCallback;
-(void)_wasFlushedAutomaticallyAtTime:(SCD_Struct_AV2)arg1 ;
-(void)setScheduledAudioParameters:(id)arg1 ;
-(void)flushFromSourceTime:(SCD_Struct_AV2)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSError *)error;
-(id)init;
-(void)dealloc;
-(void)flush;
-(long long)status;
-(OpaqueCMTimebaseRef)timebase;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end
