/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNConcatenation : MPSCNNKernel
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP2*)arg4 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(NSArray*)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(NSArray*)arg2 sourceStates:(id)arg3 destinationImage:(NSArray*)arg4 ;
-(NSArray*)resultStateBatchForSourceImage:(NSArray*)arg1 sourceStates:(id)arg2 destinationImage:(NSArray*)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImage:(id)arg3 ;
-(void)copyToGradientState:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)resultStateForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImage:(NSArray*)arg3 ;
-(NSArray*)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(NSArray*)arg4 ;
-(NSArray*)resultStateBatchForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(NSArray*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
@end

