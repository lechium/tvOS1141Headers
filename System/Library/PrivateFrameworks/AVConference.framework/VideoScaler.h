/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VideoScaler : NSObject {

	char* _tempBuffer1;
	char* _tempBuffer2;
	unsigned long long _tempBufferWidth;
	unsigned long long _tempBufferHeight;
	IOSurfaceAcceleratorRef _ioSurfaceAccelerator;

}
-(id)init;
-(void)dealloc;
-(int)rotatePixelBuffer:(CVBufferRef)arg1 withPixelFormat:(unsigned)arg2 usingPixelBufferPool:(CVPixelBufferPoolRef)arg3 andStoreTo:(_CVBuffer*)arg4 ;
-(int)convertAndScalePixelBuffer:(CVBufferRef)arg1 toWidth:(int)arg2 toHeight:(int)arg3 withPixelFormat:(unsigned)arg4 usingPixelBufferPool:(CVPixelBufferPoolRef)arg5 andStoreTo:(_CVBuffer*)arg6 ;
@end

