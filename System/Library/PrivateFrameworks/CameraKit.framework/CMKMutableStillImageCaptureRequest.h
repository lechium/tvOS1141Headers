/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKStillImageCaptureRequest.h>

@interface CMKMutableStillImageCaptureRequest : CMKStillImageCaptureRequest

@property (assign,getter=isTransient,nonatomic) BOOL transient; 
@property (assign,nonatomic) long long deviceOrientation; 
@property (assign,nonatomic) long long captureDevice; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) int hdrMode; 
@property (assign,nonatomic) BOOL usesStillImageStabilization; 
@property (assign,nonatomic) BOOL wantsAudioForCapture; 
@property (assign,nonatomic,__weak) id<CMKStillImageCaptureRequestDelegate> delegate; 
-(void)setFlashMode:(long long)arg1 ;
-(void)setDelegate:(id<CMKStillImageCaptureRequestDelegate>)arg1 ;
-(void)setDeviceOrientation:(long long)arg1 ;
-(void)setCaptureDevice:(long long)arg1 ;
-(void)setHdrMode:(int)arg1 ;
-(void)setUsesStillImageStabilization:(BOOL)arg1 ;
-(void)setWantsAudioForCapture:(BOOL)arg1 ;
-(void)setParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setTransient:(BOOL)arg1 ;
@end

