/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {

	AVCaptureAudioChannelInternal* _internal;

}

@property (nonatomic,readonly) float averagePowerLevel; 
@property (nonatomic,readonly) float peakHoldLevel; 
-(float)averagePowerLevel;
-(float)peakHoldLevel;
-(void)invalidate;
-(void)dealloc;
-(id)initWithConnection:(id)arg1 ;
@end

