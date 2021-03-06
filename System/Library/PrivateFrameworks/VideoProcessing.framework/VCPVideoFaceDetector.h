/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableDictionary, NSDictionary;

@interface VCPVideoFaceDetector : VCPVideoAnalyzer {

	int _angle;
	SCD_Struct_VC6 _timeLastProcess;
	NSMutableDictionary* _activeFaces;
	NSDictionary* _results;

}
+(id)faceDetectorWithTransform:(CGAffineTransform)arg1 withExistingFaceprints:(id)arg2 tracking:(BOOL)arg3 cancel:(/*^block*/id)arg4 ;
-(id)results;
@end

