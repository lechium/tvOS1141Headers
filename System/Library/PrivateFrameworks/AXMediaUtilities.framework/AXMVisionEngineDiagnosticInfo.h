/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray, NSString;

@interface AXMVisionEngineDiagnosticInfo : NSObject {

	BOOL _isProcessingCaptureSessionFrames;
	double _captureSessionProcessingBeginTime;
	double _captureSessionProcessingEndTime;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_pipelineTimings;
	unsigned long long _totalFramesProcessed;
	unsigned long long _totalFramesDropped;

}

@property (assign,nonatomic) unsigned long long totalFramesProcessed;               //@synthesize totalFramesProcessed=_totalFramesProcessed - In the implementation block
@property (assign,nonatomic) unsigned long long totalFramesDropped;                 //@synthesize totalFramesDropped=_totalFramesDropped - In the implementation block
@property (nonatomic,readonly) NSArray * pipelineTimings; 
@property (nonatomic,readonly) double averageFramesProcessedPerSecond; 
@property (nonatomic,readonly) double averageFramesDroppedPerSecond; 
@property (nonatomic,readonly) NSString * diagnosticReport; 
-(id)init;
-(void)addPipelineTiming:(id)arg1 ;
-(void)didBeginProcessingCaptureSessionFrames;
-(void)didEndProcessingCaptureSessionFrames;
-(void)didProcessCaptureSessionFrame;
-(void)didDropCaptureSessionFrame;
-(double)_queue_averageFramesProcessedPerSecond;
-(double)_queue_averageFramesDroppedPerSecond;
-(NSArray *)pipelineTimings;
-(double)averageFramesProcessedPerSecond;
-(double)averageFramesDroppedPerSecond;
-(NSString *)diagnosticReport;
-(unsigned long long)totalFramesProcessed;
-(void)setTotalFramesProcessed:(unsigned long long)arg1 ;
-(unsigned long long)totalFramesDropped;
-(void)setTotalFramesDropped:(unsigned long long)arg1 ;
@end

