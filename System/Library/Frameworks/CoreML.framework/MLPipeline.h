/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLSpecificationCompiler.h>

@class NSArray;

@interface MLPipeline : MLModel <MLSpecificationCompiler> {

	NSArray* _models;

}

@property (readonly) NSArray * models;              //@synthesize models=_models - In the implementation block
+(id)compileSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)compiledVersionForSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)compileWithModels:(const RepeatedPtrField<CoreML::Specification::Model>*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)batchPredict:(id)arg1 error:(id*)arg2 ;
-(id)retrieveFinalModel:(id*)arg1 ;
-(id)_batchPredict:(id)arg1 start_idx:(unsigned long long)arg2 end_idx:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_predictionFromFeatures:(id)arg1 options:(id)arg2 start_idx:(int)arg3 end_idx:(int)arg4 error:(id*)arg5 ;
-(id)initModelFromMetadataAndArchive:(MLModelInputArchiver*)arg1 versionInfo:(id)arg2 interface:(id)arg3 metadata:(id)arg4 error:(id*)arg5 ;
-(id)predictUntilFinalModelWithSample:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(NSArray *)models;
@end

