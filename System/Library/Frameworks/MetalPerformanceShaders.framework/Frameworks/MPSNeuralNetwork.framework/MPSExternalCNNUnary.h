/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSExternalPluginBase.h>
#import <MPSNeuralNetwork/MPSExternalCNNUnary.h>

@protocol MPSExternalCNNUnary <MPSExternalPluginBase>
@required
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const SCD_Struct_MP16*)arg5 destinationTexture:(id)arg6 destinationInfo:(const SCD_Struct_MP17*)arg7;

@end


@class NSString;

@interface MPSExternalCNNUnary : MPSExternalPluginBase <MPSExternalCNNUnary>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const SCD_Struct_MP16*)arg5 destinationTexture:(id)arg6 destinationInfo:(const SCD_Struct_MP17*)arg7 ;
-(unsigned long long)encodeWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const SCD_Struct_MP18*)arg4 ;
@end

