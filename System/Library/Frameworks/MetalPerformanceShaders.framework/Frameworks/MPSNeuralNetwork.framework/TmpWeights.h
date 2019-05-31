/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSString;

@interface TmpWeights : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNConvolutionDataSource> _parentObj;
	MPSCNNConvolutionDescriptor* _convDesc;
	BOOL _hasBias;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)dataType;
-(float*)biasTerms;
-(id)initWithWeights:(id)arg1 useBias:(BOOL)arg2 desc:(id)arg3 ;
-(void*)weights;
-(void)dealloc;
-(id)label;
-(void)purge;
-(BOOL)load;
-(id)descriptor;
@end

