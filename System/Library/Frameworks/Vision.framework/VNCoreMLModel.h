/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNObservationsCacheKeyProviding.h>

@class NSString, MLModel;

@interface VNCoreMLModel : NSObject <VNObservationsCacheKeyProviding> {

	NSString* _uuidStringForCacheIdentifier;
	int _modelType;
	unsigned _inputImageFormat;
	MLModel* _model;
	NSString* _inputImageKey;
	NSString* _predictedFeatureKey;
	NSString* _predictedProbabilitiesKey;
	unsigned long long _inputImageWidth;
	unsigned long long _inputImageHeight;

}

@property (retain) MLModel * model;                                     //@synthesize model=_model - In the implementation block
@property (assign) int modelType;                                       //@synthesize modelType=_modelType - In the implementation block
@property (retain) NSString * inputImageKey;                            //@synthesize inputImageKey=_inputImageKey - In the implementation block
@property (retain) NSString * predictedFeatureKey;                      //@synthesize predictedFeatureKey=_predictedFeatureKey - In the implementation block
@property (readonly) NSString * predictedProbabilitiesKey;              //@synthesize predictedProbabilitiesKey=_predictedProbabilitiesKey - In the implementation block
@property (readonly) unsigned long long inputImageWidth;                //@synthesize inputImageWidth=_inputImageWidth - In the implementation block
@property (readonly) unsigned long long inputImageHeight;               //@synthesize inputImageHeight=_inputImageHeight - In the implementation block
@property (readonly) unsigned inputImageFormat;                         //@synthesize inputImageFormat=_inputImageFormat - In the implementation block
+(id)modelForMLModel:(id)arg1 error:(id*)arg2 ;
-(void)setModelType:(int)arg1 ;
-(int)modelType;
-(unsigned long long)inputImageWidth;
-(unsigned long long)inputImageHeight;
-(void)setModel:(MLModel *)arg1 ;
-(MLModel *)model;
-(id)observationsCacheKey;
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(BOOL)setupInputImageFromModelDescription:(id)arg1 ;
-(NSString *)inputImageKey;
-(id)predictWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setInputImageKey:(NSString *)arg1 ;
-(NSString *)predictedFeatureKey;
-(void)setPredictedFeatureKey:(NSString *)arg1 ;
-(NSString *)predictedProbabilitiesKey;
-(unsigned)inputImageFormat;
@end

