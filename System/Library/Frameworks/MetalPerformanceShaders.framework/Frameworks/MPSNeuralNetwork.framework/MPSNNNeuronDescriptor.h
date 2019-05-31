/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MPSNNNeuronDescriptor : NSObject <NSCopying> {

	int _neuronType;
	float _a;
	float _b;
	float _c;
	NSData* _data;
	BOOL _noCopy;
	unsigned long long _count;

}

@property (assign,nonatomic) int neuronType;              //@synthesize neuronType=_neuronType - In the implementation block
@property (assign,a,nonatomic) float a;                   //@synthesize a=_a - In the implementation block
@property (assign,b,nonatomic) float b;                   //@synthesize b=_b - In the implementation block
@property (assign,c,nonatomic) float c;                   //@synthesize c=_c - In the implementation block
@property (nonatomic,retain) NSData * data;               //@synthesize data=_data - In the implementation block
+(id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 ;
+(id)cnnNeuronPReLUDescriptorWithData:(id)arg1 noCopy:(BOOL)arg2 ;
+(id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 ;
+(id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 ;
+(id)cnnNeuronDescriptorWithType:(int)arg1 ;
-(void)setNeuronType:(int)arg1 ;
-(int)neuronType;
-(void)dealloc;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(float)c;
-(void)setC:(float)arg1 ;
-(void)setA:(float)arg1 ;
-(void)setB:(float)arg1 ;
-(float)b;
-(float)a;
@end

