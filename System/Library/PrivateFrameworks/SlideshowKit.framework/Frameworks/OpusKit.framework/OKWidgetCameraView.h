/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetView.h>

@protocol OS_dispatch_queue;
@class NSObject, AVCaptureSession, AVCaptureDeviceInput, OKWidgetCameraPreviewView, NSString;

@interface OKWidgetCameraView : OKWidgetView {

	NSObject*<OS_dispatch_queue> _sessionQueue;
	AVCaptureSession* _session;
	AVCaptureDeviceInput* _videoDeviceInput;
	AVCaptureDeviceInput* _audioDeviceInput;
	BOOL _deviceAuthorized;
	id _runtimeErrorHandlingObserver;
	id _deviceConnectedObserver;
	id _deviceDisconnectedObserver;
	OKWidgetCameraPreviewView* _previewView;
	long long _inputType;
	NSString* _inputDeviceName;
	float _volume;

}

@property (assign,getter=isDeviceAuthorized,nonatomic) BOOL deviceAuthorized;                                                  //@synthesize deviceAuthorized=_deviceAuthorized - In the implementation block
@property (getter=isSessionRunningAndDeviceAuthorized,nonatomic,readonly) BOOL sessionRunningAndDeviceAuthorized; 
@property (assign,nonatomic) id deviceConnectedObserver;                                                                       //@synthesize deviceConnectedObserver=_deviceConnectedObserver - In the implementation block
@property (assign,nonatomic) id deviceDisconnectedObserver;                                                                    //@synthesize deviceDisconnectedObserver=_deviceDisconnectedObserver - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)deviceWithInputType:(long long)arg1 inputDeviceName:(id)arg2 ;
+(id)keyPathsForValuesAffectingSessionRunningAndDeviceAuthorized;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(BOOL)isDeviceAuthorized;
-(void)_prepareSessionIfNeeded;
-(void)__stopRunning;
-(void)checkDeviceAuthorizationStatus;
-(void)_startRunning;
-(void)setDeviceAuthorized:(BOOL)arg1 ;
-(BOOL)isSessionRunningAndDeviceAuthorized;
-(void)setSettingInput:(long long)arg1 ;
-(void)setSettingInputDeviceName:(id)arg1 ;
-(void)setSettingVolume:(float)arg1 ;
-(void)_stopRunning;
-(id)deviceConnectedObserver;
-(void)setDeviceConnectedObserver:(id)arg1 ;
-(id)deviceDisconnectedObserver;
-(void)setDeviceDisconnectedObserver:(id)arg1 ;
@end

