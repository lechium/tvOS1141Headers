/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSNNCustomKernelProvider;
@interface MPSNNCustomNode : MPSNNFilterNode {

	id<MPSNNCustomKernelProvider> _provider;

}
+(id)nodeWithSources:(id)arg1 sourceStates:(id)arg2 provider:(id)arg3 ;
+(id)nodeWithSources:(id)arg1 provider:(id)arg2 ;
+(id)nodeWithSource:(id)arg1 provider:(id)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(id)initWithSources:(id)arg1 sourceStates:(id)arg2 provider:(id)arg3 ;
-(id)initWithSources:(id)arg1 provider:(id)arg2 ;
-(id)initWithSource:(id)arg1 provider:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
@end

