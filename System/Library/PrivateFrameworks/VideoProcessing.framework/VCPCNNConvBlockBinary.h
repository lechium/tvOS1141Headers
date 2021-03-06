/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNBlock.h>

@class MPSCNNBinaryConvolution;

@interface VCPCNNConvBlockBinary : VCPCNNBlock {

	int _filterSize;
	int _filterNum;
	unsigned* _filterWeightsBinary;
	int _filterWeightSize;
	float* _filterScaling;
	float* _bias;
	int _padding;
	unsigned long long _convType;
	BOOL _disableReLU;
	MPSCNNBinaryConvolution* _mpsBinaryConv;

}
-(void)dealloc;
-(BOOL)useGPU;
-(int)constructBlock:(id)arg1 context:(id)arg2 ;
-(int)forward;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(BOOL)supportGPU;
-(int)gpuForward;
-(int)fillConvWeightsGPU;
-(id)initWithParameters:(int)arg1 filterNum:(int)arg2 convType:(unsigned long long)arg3 disableReLU:(BOOL)arg4 padding:(BOOL)arg5 ;
@end

