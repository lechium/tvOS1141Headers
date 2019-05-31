/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWPixelBufferPool, FigM2MController;

@interface BWVisionLandmarkDetector : NSObject {

	BWPixelBufferPool* _faceDetectionBufferPool;
	FigM2MController* _m2mController;

}
+(void)initialize;
-(id)_detectLandmarksUsingInputPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 outputFaceDetectionOrientation:(int*)arg3 includePoseAndQuality:(BOOL)arg4 ;
-(int)prepareForDetectionWithInputVideoFormat:(id)arg1 ;
-(int)detectFaceLandmarksUsingSampleBuffer:(opaqueCMSampleBufferRef)arg1 attachingToSampleBuffer:(opaqueCMSampleBufferRef)arg2 includePoseAndQuality:(BOOL)arg3 ;
-(void)prewarmForDetection;
-(id)init;
-(void)dealloc;
@end

