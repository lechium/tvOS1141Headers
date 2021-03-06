/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSString, NSArray;

@interface MLArrayFeatureExtractor : MLModel <MLModelSpecificationLoader> {

	NSString* _arrayColumnName;
	NSArray* _extractIndices;
	long long _outputType;

}

@property (nonatomic,readonly) NSString * arrayColumnName;              //@synthesize arrayColumnName=_arrayColumnName - In the implementation block
@property (nonatomic,readonly) NSArray * extractIndices;                //@synthesize extractIndices=_extractIndices - In the implementation block
@property (nonatomic,readonly) long long outputType;                    //@synthesize outputType=_outputType - In the implementation block
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
+(id)extractArrayElement:(id)arg1 indices:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 ;
+(id)extractArrayElement:(id)arg1 indices:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 ;
-(long long)outputType;
-(id)initWith:(id)arg1 indices:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 ;
-(NSString *)arrayColumnName;
-(NSArray *)extractIndices;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

