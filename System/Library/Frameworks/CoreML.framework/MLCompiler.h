/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreML/CoreML-Structs.h>
@interface MLCompiler : NSObject
+(id)compileSpecification:(MLModelSpecification*)arg1 toArchive:(MLModelOutputArchiver*)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)compiledVersionForSpecification:(MLModelSpecification*)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)compileSpecificationAtURL:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)versionInfo;
+(id)compiledVersionForSpecificationAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

