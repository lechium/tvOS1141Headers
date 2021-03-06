/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemVideoOutputInternal;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {

	AVPlayerItemVideoOutputInternal* _videoOutputInternal;

}

@property (nonatomic,readonly) id<AVPlayerItemOutputPullDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(void)finalize;
-(BOOL)suppressesPlayerRendering;
-(OpaqueFigVisualContextRef)_visualContext;
-(id)_pixelBufferAttributes;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_detachFromPlayerItem;
-(long long)clientStateOnRequestedMediaDataChangeNotification;
-(void)_dispatchOutputMediaDataWillChange;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(BOOL)setUpWithOutputSettings:(id)arg1 outputSettingsArePixelBufferAttributes:(BOOL)arg2 withExceptionReason:(id*)arg3 ;
-(void)_respondToPlayerItemFormatDescriptionsChange;
-(BOOL)hasNewPixelBufferForItemTime:(SCD_Struct_AV2)arg1 ;
-(CVBufferRef)_copyPixelBufferForItemTimeWithOptions:(SCD_Struct_AV2)arg1 itemTimeForDisplay:(SCD_Struct_AV2*)arg2 options:(unsigned)arg3 ;
-(void)_stopObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_startObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(id)initWithOutputSettings:(id)arg1 ;
-(SCD_Struct_AV2)earliestAvailablePixelBufferItemTime;
-(void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1 ;
-(void)requestNotificationOfMediaDataChangeAsSoonAsPossible;
-(CVBufferRef)copyPixelBufferForItemTime:(SCD_Struct_AV2)arg1 itemTimeForDisplay:(SCD_Struct_AV2*)arg2 ;
-(CVBufferRef)copyPixelBufferForItemTime:(SCD_Struct_AV2)arg1 remove:(BOOL)arg2 itemTimeForDisplay:(SCD_Struct_AV2*)arg3 ;
-(void)_setTagBuffersWithConversionInformation;
-(void)_dispatchOutputSequenceWasFlushed;
-(id)init;
-(id<AVPlayerItemOutputPullDelegate>)delegate;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end

