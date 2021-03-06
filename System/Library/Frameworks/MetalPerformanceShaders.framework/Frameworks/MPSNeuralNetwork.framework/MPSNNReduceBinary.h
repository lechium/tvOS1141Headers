/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSNNReduceBinary : MPSCNNBinaryKernel {

	SCD_Struct_MP12 _clipRectPrimarySource;
	SCD_Struct_MP12 _secondarySourceClipRect;
	int _reduceOp;
	SCD_Struct_MP12 _primarySourceClipRect;

}

@property (assign,nonatomic) SCD_Struct_MP12 primarySourceClipRect;                //@synthesize primarySourceClipRect=_primarySourceClipRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP12 secondarySourceClipRect;              //@synthesize secondarySourceClipRect=_secondarySourceClipRect - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 reduceOperation:(int)arg2 ;
-(int)reduceOp;
-(SCD_Struct_MP12)primarySourceClipRect;
-(void)setPrimarySourceClipRect:(SCD_Struct_MP12)arg1 ;
-(SCD_Struct_MP12)secondarySourceClipRect;
-(void)setSecondarySourceClipRect:(SCD_Struct_MP12)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 ;
@end

