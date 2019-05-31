/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWVideoFormat, BWPixelBufferPool;

@interface BWStillImageScalerNode : BWNode {

	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BWPixelBufferPool* _pool;
	OpaqueVTPixelTransferSessionRef _scalingSession;
	SCD_Struct_BW13 _nativeOutputDimensions;
	BOOL _defersCropToPhotoEncoderWhenPossible;

}
+(void)initialize;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithPoolCapacity:(int)arg1 ;
-(void)_purgeResources;
-(int)_updatePoolWithSettings:(id)arg1 normalizedInputCropRect:(CGRect)arg2 scaledDenormalizedInputCropRectOut:(CGRect*)arg3 ;
-(int)_rebuildBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(int)_buildScalingSession;
-(void)setNativeOutputDimensions:(SCD_Struct_BW13)arg1 ;
-(SCD_Struct_BW13)nativeOutputDimensions;
-(void)setDefersCropToPhotoEncoderWhenPossible:(BOOL)arg1 ;
-(BOOL)defersCropToPhotoEncoderWhenPossible;
-(id)init;
-(void)dealloc;
-(id)nodeType;
@end

