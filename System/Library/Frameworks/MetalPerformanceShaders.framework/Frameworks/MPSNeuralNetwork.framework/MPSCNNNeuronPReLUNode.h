/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNNeuronNode.h>

@class NSData;

@interface MPSCNNNeuronPReLUNode : MPSCNNNeuronNode {

	NSData* _aData;

}
+(id)nodeWithSource:(id)arg1 aData:(id)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(id)initWithSource:(id)arg1 aData:(id)arg2 ;
-(void)dealloc;
-(id)descriptor;
@end

