/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

@interface BWSampleBufferSinkNode : BWSinkNode {

	/*^block*/id _sampleBufferAvailableHandler;
	BOOL _aggdIsPhotoFormat;
	BOOL _aggdClientAppIsCameraOrMessages;

}

@property (nonatomic,copy) id sampleBufferAvailableHandler;              //@synthesize sampleBufferAvailableHandler=_sampleBufferAvailableHandler - In the implementation block
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setSampleBufferAvailableHandler:(id)arg1 ;
-(void)setAggdIsPhotoFormat:(BOOL)arg1 ;
-(void)setAggdClientAppIsCameraOrMessages:(BOOL)arg1 ;
-(id)initWithInputMediaType:(unsigned)arg1 ;
-(void)_reportAggdDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 sbuf:(opaqueCMSampleBufferRef)arg3 ;
-(BOOL)aggdIsPhotoFormat;
-(BOOL)aggdClientAppIsCameraOrMessages;
-(id)sampleBufferAvailableHandler;
-(id)init;
-(void)dealloc;
@end

