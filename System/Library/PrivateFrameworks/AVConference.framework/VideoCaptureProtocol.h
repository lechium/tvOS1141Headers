/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VideoCaptureProtocol
@optional
-(int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(BOOL)arg3;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
-(BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
-(int)previewSlot;

@required
-(int)stop:(BOOL)arg1;
-(int)startPreview;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)copyColorInfo:(const *)arg1;
-(BOOL)isPreviewRunning;
-(int)setCameraWithUID:(id)arg1;
-(id)getCameraUID;
-(BOOL)isFrontCamera;
-(int)setFrameRate:(int)arg1;

@end

