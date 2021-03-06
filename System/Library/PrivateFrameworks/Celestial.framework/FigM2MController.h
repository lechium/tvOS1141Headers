/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface FigM2MController : NSObject {

	SCD_Struct_Fi75 _cap;
	IOSurfaceAcceleratorRef _accelRef;
	BOOL _useCustomCoeff;
	BOOL _compensateGpuShift;
	CFDictionaryRef _runOptions;

}
-(id)init:(BOOL)arg1 ;
-(int)transform:(CVBufferRef)arg1 srcRect:(CGRect)arg2 dst:(CVBufferRef)arg3 dstRect:(CGRect)arg4 rotate:(int)arg5 sync_m2m:(BOOL)arg6 ;
-(int)downsample:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 sync_m2m:(BOOL)arg3 ;
-(int)queryCapabilities;
-(int)transform:(CVBufferRef)arg1 srcRect:(CGRect)arg2 dst:(CVBufferRef)arg3 sync_m2m:(BOOL)arg4 ;
-(int)setCustomFilter:(int)arg1 src:(CVBufferRef)arg2 dst:(CVBufferRef)arg3 luma_param:(float)arg4 chroma_param:(float)arg5 ;
-(void)dealloc;
@end

