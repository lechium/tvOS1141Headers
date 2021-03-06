/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLClassifier.h>

@protocol MLClassifier <MLModeling>
@required
-(id)classLabels;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end


@class MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLClassifier : MLModel <MLClassifier>

@property (nonatomic,readonly) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
+(id)predictionFromFeatures:(id)arg1 classifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)sortClassProbabilitiesWithMultiArray:(id)arg1 classLabels:(id)arg2 ;
+(id)sortClassProbabilitiesWithArray:(id)arg1 classLabels:(id)arg2 ;
-(id)classLabels;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithInterface:(id)arg1 metadata:(id)arg2 error:(id*)arg3 ;
-(id)initDescriptionOnlyWithSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
-(id)classifierResultFromOutputFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

