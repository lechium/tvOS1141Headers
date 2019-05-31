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

@class MLFeatureValue;

@interface MLScaler : MLModel <MLModelSpecificationLoader> {

	MLFeatureValue* _shiftValue;
	MLFeatureValue* _scaleValue;

}

@property (nonatomic,readonly) MLFeatureValue * shiftValue;              //@synthesize shiftValue=_shiftValue - In the implementation block
@property (nonatomic,readonly) MLFeatureValue * scaleValue;              //@synthesize scaleValue=_scaleValue - In the implementation block
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
-(id)initWith:(id)arg1 scaleValue:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 error:(id*)arg8 ;
-(MLFeatureValue *)shiftValue;
-(MLFeatureValue *)scaleValue;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

