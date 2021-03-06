/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWFigCameraSourceNode.h>

@class BWFigExternalVideoCaptureDevice, BWNodeOutput, NSString, BWFigVideoCaptureDevice, BWFigVideoCaptureStream, NSDictionary;

@interface BWExternalCameraSourceNode : BWSourceNode <BWFigCameraSourceNode> {

	/*^block*/id _videoSBufHandler;
	/*^block*/id _stillImageSBufHandler;
	SCD_Struct_BW13 _outputDimensions;
	BWFigExternalVideoCaptureDevice* _captureDevice;
	int _stillImageCaptureFormatIndex;
	int _livePreviewFormatIndex;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	BOOL _makeCurrentConfigurationLive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWFigVideoCaptureStream * captureStream; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
@property (nonatomic,copy) NSDictionary * videoCaptureOutputColorInfoOverride; 
@property (assign,nonatomic) BOOL videoCaptureOutputPixelBufferAttachmentModificationAllowed; 
+(id)cameraSourceNodeWithCaptureDevice:(id)arg1 ;
+(void)initialize;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setOutputDimensions:(SCD_Struct_BW13)arg1 ;
-(BWNodeOutput *)videoCaptureOutput;
-(BWNodeOutput *)stillImageOutput;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(BWFigVideoCaptureDevice *)captureDevice;
-(BWFigVideoCaptureStream *)captureStream;
-(void)makeOutputsLiveIfNeeded;
-(void)setDetectedFacesOutputEnabled:(BOOL)arg1 ;
-(BOOL)detectedFacesOutputEnabled;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1 ;
-(void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(BOOL)arg1 ;
-(void)setVideoCaptureOutputColorInfoOverride:(NSDictionary *)arg1 ;
-(SCD_Struct_BW13)outputDimensions;
-(id)_initWithCaptureDevice:(id)arg1 ;
-(NSDictionary *)videoCaptureOutputColorInfoOverride;
-(BOOL)videoCaptureOutputPixelBufferAttachmentModificationAllowed;
-(void)_resolveSensorFormatIndex;
-(void)_updateFormatRequirements;
-(void)setStillImageCaptureFormatIndex:(int)arg1 ;
-(int)stillImageCaptureFormatIndex;
-(void)setLivePreviewFormatIndex:(int)arg1 ;
-(int)livePreviewFormatIndex;
-(void)dealloc;
@end

