/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CVML/CVML-Structs.h>
@interface CVMLImageClassifier : NSObject
+(id)classifyImageHierarchicallyWithDescriptors:(const ImageDescriptorBufferAbstract*)arg1 usingImageClassifier:(ImageClassifierAbstract*)arg2 andHierarchicalClassifier:(ImageClassifier_HierarchicalModel*)arg3 andMinConfidenceForClassification:(float)arg4 outputDebugDictionary:(id)arg5 options:(id)arg6 metalContext:(id)arg7 error:(id*)arg8 ;
+(BOOL)computeImageDescriptorsWithImage:(id)arg1 regionOfInterest:(CGRect)arg2 usingDescriptorProcessor:(ImageDescriptorProcessorAbstract*)arg3 withTileCount:(int)arg4 andScaleImage:(BOOL)arg5 andAugmentationMode:(unsigned)arg6 andPopulateTheBuffer:(ImageDescriptorBufferAbstract*)arg7 debugIntermediatesDumpPath:(id)arg8 outputDebugDictionary:(id)arg9 options:(id)arg10 metalContext:(id)arg11 error:(id*)arg12 ;
+(id)classifyImageWithDescriptors:(const ImageDescriptorBufferAbstract*)arg1 usingImageClassifier:(ImageClassifierAbstract*)arg2 andMinConfidenceForClassification:(float)arg3 outputDebugDictionary:(id)arg4 options:(id)arg5 metalContext:(id)arg6 error:(id*)arg7 ;
@end
