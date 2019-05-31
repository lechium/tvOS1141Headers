/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class CMMotionManager, NSOperationQueue;

@interface VCPCoreMotionDelegate : NSObject {

	CMMotionManager* motionManager;
	NSOperationQueue* operationQueue;
	SCD_Struct_VC38 quaternionBuffer[64];
	double timestampBuffer[64];
	int quaternionBufferIndex;
	opaque_pthread_mutex_t ringMutex;
	SCD_Struct_VC38 lastReadQuaternion;
	VCPCoreMotionDelegate* weakSelf;
	int accelRingIndex;
	float accelRingX[256];
	float accelRingY[256];
	float accelRingZ[256];
	double accelRingTime[256];
	_sFILE* gyroFile;

}
-(int)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(void)didUpdateAcceleration:(Translation)arg1 time:(double)arg2 ;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)processGyroData:(id)arg1 withError:(id)arg2 ;
-(SCD_Struct_VC38)getQuaternionByTimestamp:(double)arg1 ;
@end
