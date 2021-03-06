/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNMultiply;

@interface MPSCNNDropout : MPSCNNKernel {

	float _keepProbability;
	unsigned long long _seed;
	mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> _engine;
	mutex _engineMutex;
	SCD_Struct_MP0 _maskStrideInPixels;
	MPSCNNMultiply* _arithmetic;

}

@property (nonatomic,readonly) float keepProbability;                          //@synthesize keepProbability=_keepProbability - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;                        //@synthesize seed=_seed - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP0 maskStrideInPixels;              //@synthesize maskStrideInPixels=_maskStrideInPixels - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)privateResultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 commandBuffer:(id)arg4 isTemporary:(BOOL)arg5 ;
-(void)resetSeed:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(SCD_Struct_MP0)arg4 ;
-(float)keepProbability;
-(SCD_Struct_MP0)maskStrideInPixels;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(unsigned long long)seed;
@end

