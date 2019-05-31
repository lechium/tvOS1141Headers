/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWFigVideoCaptureDevice, BWPixelBufferPool;

@interface BWMockVideoSDOFNode : BWNode {

	float _fNumberForRendering;
	BWFigVideoCaptureDevice* _device;
	BWPixelBufferPool* _sdofOutputPool;
	OpaqueVTPixelTransferSessionRef _copyTransferSession;
	opaqueCMFormatDescriptionRef _copyFormatDescription;

}

@property (nonatomic,retain) BWPixelBufferPool * sdofOutputPool;              //@synthesize sdofOutputPool=_sdofOutputPool - In the implementation block
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)initWithCaptureDevice:(id)arg1 ;
-(void)_setDeviceFramerate:(int)arg1 ;
-(void)setFNumberForRendering:(float)arg1 ;
-(float)fNumberForRendering;
-(BWPixelBufferPool *)sdofOutputPool;
-(void)setSdofOutputPool:(BWPixelBufferPool *)arg1 ;
-(void)dealloc;
-(id)nodeType;
@end

