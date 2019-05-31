/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FigCaptureStillImageSettings, BWStillImageCaptureSettings, FigCaptureRecordingSettings;

@interface BWNodeError : NSObject {

	long long _uniqueID;
	int _errorCode;
	NSString* _sourceNodeDescription;
	FigCaptureStillImageSettings* _requestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _resolvedStillImageCaptureSettings;
	FigCaptureRecordingSettings* _recordingSettings;

}

@property (readonly) int errorCode; 
@property (readonly) NSString * sourceNodeDescription; 
@property (readonly) FigCaptureStillImageSettings * requestedStillImageCaptureSettings; 
@property (readonly) BWStillImageCaptureSettings * resolvedStillImageCaptureSettings; 
@property (readonly) FigCaptureRecordingSettings * recordingSettings;                                //@synthesize recordingSettings=_recordingSettings - In the implementation block
+(id)newError:(int)arg1 sourceNode:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 ;
+(id)newError:(int)arg1 sourceNode:(id)arg2 ;
+(id)newError:(int)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3 ;
-(FigCaptureStillImageSettings *)requestedStillImageCaptureSettings;
-(BWStillImageCaptureSettings *)resolvedStillImageCaptureSettings;
-(FigCaptureRecordingSettings *)recordingSettings;
-(id)_initWithError:(int)arg1 sourceNode:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 recordingSettings:(id)arg5 ;
-(NSString *)sourceNodeDescription;
-(int)errorCode;
-(void)dealloc;
-(unsigned long long)hash;
@end

