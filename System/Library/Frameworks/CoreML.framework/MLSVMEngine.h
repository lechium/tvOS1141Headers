/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSArray;

@interface MLSVMEngine : NSObject <MLModelSpecificationLoader> {

	BOOL _freeModelOnDealloc;
	BOOL _isInputSizeLowerBoundOnly;
	svm_model* _model;
	unsigned long long _inputSize;
	NSArray* _classLabels;

}

@property (assign) svm_model* model;                                            //@synthesize model=_model - In the implementation block
@property (assign) BOOL freeModelOnDealloc;                                     //@synthesize freeModelOnDealloc=_freeModelOnDealloc - In the implementation block
@property (assign) BOOL isInputSizeLowerBoundOnly;                              //@synthesize isInputSizeLowerBoundOnly=_isInputSizeLowerBoundOnly - In the implementation block
@property (assign) unsigned long long inputSize;                                //@synthesize inputSize=_inputSize - In the implementation block
@property (nonatomic,retain) NSArray * classLabels;                             //@synthesize classLabels=_classLabels - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfClasses; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
-(unsigned long long)numberOfClasses;
-(void)setModel:(svm_model*)arg1 ;
-(void)dealloc;
-(svm_model*)model;
-(NSArray *)classLabels;
-(void)setClassLabels:(NSArray *)arg1 ;
-(svm_node*)allocSVMNodeVector:(unsigned long long)arg1 ;
-(void)fillSVMNodeVector:(svm_node*)arg1 values:(double*)arg2 count:(unsigned long long)arg3 ;
-(void)deallocSVMNodeVector:(svm_node*)arg1 ;
-(id)predict:(id)arg1 ;
-(BOOL)isInputSizeLowerBoundOnly;
-(BOOL)freeModelOnDealloc;
-(void)setFreeModelOnDealloc:(BOOL)arg1 ;
-(id)initWithSVMModel:(svm_model*)arg1 freeOnDealloc:(BOOL)arg2 isInputSizeLowerBoundOnly:(BOOL)arg3 inputSize:(unsigned long long)arg4 classLabels:(id)arg5 ;
-(id)initWithLibSVMFile:(id)arg1 classLabels:(id)arg2 ;
-(BOOL)hasProbabilityPredictionEnabled;
-(void)predictProbabilities:(id)arg1 probabilities:(double*)arg2 ;
-(void)setIsInputSizeLowerBoundOnly:(BOOL)arg1 ;
-(unsigned long long)inputSize;
-(void)setInputSize:(unsigned long long)arg1 ;
@end

