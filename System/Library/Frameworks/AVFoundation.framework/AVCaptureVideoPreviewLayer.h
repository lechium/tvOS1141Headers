/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, AVCaptureConnection, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer {

	AVCaptureVideoPreviewLayerInternal* _internal;

}

@property (nonatomic,retain) AVCaptureSession * session; 
@property (nonatomic,readonly) AVCaptureConnection * connection; 
@property (copy) NSString * videoGravity; 
@property (getter=isOrientationSupported,nonatomic,readonly) BOOL orientationSupported; 
@property (assign,nonatomic) long long orientation; 
@property (getter=isMirroringSupported,nonatomic,readonly) BOOL mirroringSupported; 
@property (assign,nonatomic) BOOL automaticallyAdjustsMirroring; 
@property (assign,getter=isMirrored,nonatomic) BOOL mirrored; 
+(id)layerWithSession:(id)arg1 ;
+(id)layerWithSessionWithNoConnection:(id)arg1 ;
+(void)initialize;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(int)changeSeed;
-(void)bumpChangeSeed;
-(id)connectionMediaTypes;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(id)sinkID;
-(BOOL)canAddConnectionForMediaType:(id)arg1 ;
-(BOOL)isFilterRenderingEnabled;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(void)setSinkID:(id)arg1 ;
-(id)videoPreviewFilters;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(unsigned)imageQueueSlot;
-(double)previewRotationDegrees;
-(BOOL)automaticallyAdjustsMirroring;
-(id)initWithSessionWithNoConnection:(id)arg1 ;
-(id)_initWithSession:(id)arg1 makeConnection:(BOOL)arg2 ;
-(void)centerSublayer:(long long)arg1 ;
-(void)setSessionWithNoConnection:(id)arg1 ;
-(BOOL)_automaticallyAdjustsMirroring;
-(BOOL)_isMirrored;
-(BOOL)isDepthDataDeliverySupported;
-(BOOL)isUnoptimizedFilterRenderingEnabled;
-(void)_updatePreviewTransforms;
-(void)_updateDepthDataDeliverySupported;
-(BOOL)isMirroringSupported;
-(BOOL)isChromaNoiseReductionSupported;
-(BOOL)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(BOOL)arg2 exceptionReason:(id*)arg3 ;
-(BOOL)_filtersAreOptimized:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_setSensorAndEstimatedPreviewSizes;
-(void)_updateCaptureDeviceTransform;
-(BOOL)isOrientationSupported;
-(void)setAutomaticallyAdjustsMirroring:(BOOL)arg1 ;
-(void)setMirrored:(BOOL)arg1 ;
-(BOOL)isChromaNoiseReductionEnabled;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setVideoPreviewFilters:(id)arg1 ;
-(void)setUnoptimizedFilterRenderingEnabled:(BOOL)arg1 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 ;
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(long long)orientation;
-(id)_input;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(AVCaptureConnection *)connection;
-(BOOL)isPaused;
-(BOOL)isMirrored;
-(long long)_orientation;
-(NSString *)videoGravity;
-(id)initWithSession:(id)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
@end

