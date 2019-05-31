/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVCaptureAudioDataOutputSampleBufferDelegate.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@class NSString;

@interface WebCoreAVMediaCaptureSourceObserver : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {

	AVMediaCaptureSource* m_callback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureOutput:(AVCaptureOutput*)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(AVCaptureConnection*)arg3 ;
-(id)initWithCallback:(AVMediaCaptureSource*)arg1 ;
-(void)addNotificationObservers;
-(void)removeNotificationObservers;
-(void)sessionRuntimeError:(id)arg1 ;
-(void)beginSessionInterrupted:(id)arg1 ;
-(void)endSessionInterrupted:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)disconnect;
@end

