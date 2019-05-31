/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNCrossChannelNormalization : MPSCNNKernel {

	unsigned long long _kernelSize;
	float _alpha;
	float _beta;
	float _delta;

}

@property (assign,nonatomic) float alpha;                                  //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float beta;                                   //@synthesize beta=_beta - In the implementation block
@property (assign,nonatomic) float delta;                                  //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelSize;              //@synthesize kernelSize=_kernelSize - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(NSArray*)arg2 destinationImages:(NSArray*)arg3 ;
-(float)beta;
-(id)initWithDevice:(id)arg1 kernelSize:(unsigned long long)arg2 ;
-(unsigned long long)kernelSize;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(NSArray*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(float)alpha;
-(float)delta;
-(void)setDelta:(float)arg1 ;
-(void)setBeta:(float)arg1 ;
-(id)initWithDevice:(id)arg1 ;
@end

