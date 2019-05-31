/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class CVMLFaceObservation;

@interface VCPFace : NSObject {

	BOOL _leftEyeClosed;
	BOOL _rightEyeClosed;
	BOOL _smile;
	int _trackID;
	float _confidence;
	long long _yaw;
	CVMLFaceObservation* _observation;
	CGRect _bounds;

}

@property (assign) CGRect bounds;                                  //@synthesize bounds=_bounds - In the implementation block
@property (assign) BOOL leftEyeClosed;                             //@synthesize leftEyeClosed=_leftEyeClosed - In the implementation block
@property (assign) BOOL rightEyeClosed;                            //@synthesize rightEyeClosed=_rightEyeClosed - In the implementation block
@property (assign) BOOL smile;                                     //@synthesize smile=_smile - In the implementation block
@property (assign) long long yaw;                                  //@synthesize yaw=_yaw - In the implementation block
@property (assign) int trackID;                                    //@synthesize trackID=_trackID - In the implementation block
@property (assign) float confidence;                               //@synthesize confidence=_confidence - In the implementation block
@property (retain) CVMLFaceObservation * observation;              //@synthesize observation=_observation - In the implementation block
-(void)setObservation:(CVMLFaceObservation *)arg1 ;
-(id)init;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(void)setLeftEyeClosed:(BOOL)arg1 ;
-(void)setRightEyeClosed:(BOOL)arg1 ;
-(void)setYaw:(long long)arg1 ;
-(long long)yaw;
-(int)trackID;
-(CGRect)faceBounds:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(unsigned long long)flagsForOrientation:(BOOL)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(CGRect)faceBoundsWithTransform:(unsigned long long)arg1 height:(unsigned long long)arg2 transform:(CGAffineTransform)arg3 ;
-(BOOL)smile;
-(void)setSmile:(BOOL)arg1 ;
-(CVMLFaceObservation *)observation;
-(BOOL)leftEyeClosed;
-(BOOL)rightEyeClosed;
-(void)setTrackID:(int)arg1 ;
@end

