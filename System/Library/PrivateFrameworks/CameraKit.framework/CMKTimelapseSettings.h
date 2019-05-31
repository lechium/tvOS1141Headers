/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMKTimelapseSettings : NSObject {

	double _initialCaptureTimeInterval;
	double _maxOutputFPS;
	double _maxOutputLength;

}

@property (nonatomic,readonly) double initialCaptureTimeInterval;                 //@synthesize initialCaptureTimeInterval=_initialCaptureTimeInterval - In the implementation block
@property (nonatomic,readonly) double maxOutputFPS;                               //@synthesize maxOutputFPS=_maxOutputFPS - In the implementation block
@property (nonatomic,readonly) double maxOutputLength;                            //@synthesize maxOutputLength=_maxOutputLength - In the implementation block
@property (nonatomic,readonly) long long maxOutputFrames; 
@property (nonatomic,readonly) long long maxMovieWriteAttempts; 
@property (nonatomic,readonly) long long maxFailedStateReadAttempts; 
+(id)sharedInstance;
-(id)init;
-(id)outputSettingsPresetForWidth:(long long)arg1 height:(long long)arg2 ;
-(long long)averageMovieBitrateForWidth:(long long)arg1 height:(long long)arg2 ;
-(double)maxOutputLength;
-(double)maxOutputFPS;
-(long long)maxMovieFileLengthForWidth:(long long)arg1 height:(long long)arg2 ;
-(long long)maxOutputFrames;
-(double)outputFPSForFrameCount:(long long)arg1 ;
-(long long)minAvailableBytesNeededForCaptureForWidth:(long long)arg1 height:(long long)arg2 ;
-(long long)maxMovieWriteAttempts;
-(double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(long long)arg1 ;
-(long long)maxFailedStateReadAttempts;
-(double)initialCaptureTimeInterval;
@end

