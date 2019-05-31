/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModel, VCPCNNData;

@interface VCPCNNGazeAnalysis : NSObject {

	VCPCNNModel* _modelLandmarks;
	VCPCNNModel* _modelEyeOpenness;
	VCPCNNData* _faceInput;
	VCPCNNData* _eyeInput;

}
-(id)init;
-(int)initLandmarkModel;
-(int)initEyeOpennessModel;
-(int)cropAndRotateEyeImage:(CVBufferRef)arg1 leftCornerX:(int)arg2 leftCornerY:(int)arg3 rightCornerX:(int)arg4 rightCornerY:(int)arg5 ;
-(int)detectEyeOpennessForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 eyeOpenness:(BOOL*)arg3 ;
@end

