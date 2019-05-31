/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWRendererResourceProvider.h>

@protocol BWRendererResourceProvider, OS_dispatch_queue;
@class BWRenderList, BWRenderListProcessor, BWStillImageMetalSDOFRenderer, BWStillImageMetalBlurMapRenderer, BWMetalColorCubeRenderer, BWColorLookupCache, NSDictionary, BWPixelBufferPool, NSObject, NSString;

@interface BWStillImageFilterNode : BWNode <BWRendererResourceProvider> {

	BWRenderList* _renderList;
	BWRenderListProcessor* _renderListProcessor;
	id<BWRendererResourceProvider> _rendererProvider;
	BWStillImageMetalSDOFRenderer* _metalSDOFRenderer;
	BWStillImageMetalBlurMapRenderer* _metalBlurMapRenderer;
	BWMetalColorCubeRenderer* _metalFilterRenderer;
	BWColorLookupCache* _colorLookupCache;
	BOOL _depthDataDeliveryEnabled;
	SCD_Struct_BW13 _depthDataMapDimensions;
	NSDictionary* _sensorIDDictionary;
	BWPixelBufferPool* _processingBufferPool;
	NSObject*<OS_dispatch_queue> _emitQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)provideStreamingCVAFilterRenderer;
-(id)provideCoreImageFilterRenderer;
-(id)provideStillImageMetalSDOFRenderer;
-(id)provideStillImageMetalBlurMapRenderer;
-(id)provideMetalFilterRenderer;
-(id)provideColorLookupCache;
-(id)sensorIDDictionary;
-(id)initWithDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setSensorIDDictionary:(id)arg1 ;
-(void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 resolvedPhotoManifest:(id)arg3 forInput:(id)arg4 ;
-(id)_initWithDepthDataDeliveryEnabled:(BOOL)arg1 renderResourceProvider:(id)arg2 ;
-(int)_allocateOutputBufferPoolWithVideoFormat:(id)arg1 ;
-(void)_prepareStillImageFilterRenderersForOriginalFilters:(id)arg1 processedFilters:(id)arg2 ;
-(void)_emitSampleBufferAsync:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitNodeErrorForErrorStatus:(int)arg1 numberOfNodeErrors:(int)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 ;
-(id)_debugStringForBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(id)nodeType;
@end

