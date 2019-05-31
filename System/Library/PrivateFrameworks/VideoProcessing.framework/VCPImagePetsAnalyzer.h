/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNModel, NSURL;

@interface VCPImagePetsAnalyzer : VCPImageAnalyzer {

	BOOL _useGPU;
	int _maxNumRegions;
	BOOL _prune;
	VCPCNNModel* _model;
	int _inputChannels;
	NSURL* _modelURL;

}
-(int)createBasicBlock:(int)arg1 stride:(int)arg2 ;
-(int)createGroup4Conv3x3Block:(int)arg1 stride:(int)arg2 ;
-(int)createConv1x1Block:(int)arg1 ;
-(int)createConv3x3Block:(int)arg1 stride:(int)arg2 ;
-(void)nonMaxSuppression:(id)arg1 ;
-(int)createModel;
-(int)createInput:(id)arg1 withBuffer:(CVBufferRef)arg2 width:(int)arg3 height:(int)arg4 ;
-(int)generatePetsRegion:(id)arg1 boxes:(id)arg2 ;
-(int)petsDetection:(CVBufferRef)arg1 petsRegions:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(id)initWithMaxNumRegions:(int)arg1 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
@end

