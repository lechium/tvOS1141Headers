/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelClassifier.h>

@interface VNSmartCamClassifier : VNEspressoModelClassifier
+(void)initDumpDebugIntermediates:(id*)arg1 debugInfo:(id*)arg2 ;
+(shared_ptr<vision::mod::ImageClassifierAbstract>*)createClassifierWithDescriptor:(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)arg1 classifierAbsolutePath:(const char*)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char*)arg5 options:(Options*)arg6 ;
+(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)createDescriprorProcessorWithModelPath:(const char*)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(Options*)arg5 ;
+(id)classifierResourceTypesToNames;
+(Class)espressoModelImageprintClass;
+(id)returnAllResultsOptionKey;
+(id)createObservationWithDescriptors:(id)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)calculateImageDescriptors:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end
