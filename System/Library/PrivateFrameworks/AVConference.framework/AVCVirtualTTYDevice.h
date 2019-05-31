/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, NSObject;

@interface AVCVirtualTTYDevice : NSObject {

	AVConferenceXPCClient* _connection;
	id _delegate;
	BOOL _isStarted;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (assign,nonatomic) id<AVCVirtualTTYDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AVCVirtualTTYDeviceDelegate>)delegate;
-(void)setDelegate:(id<AVCVirtualTTYDeviceDelegate>)arg1 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(id)sendCharacter:(unsigned short)arg1 ;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 streamToken:(long long)arg3 ;
-(id)initWithStreamToken:(long long)arg1 error:(id*)arg2 ;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 ;
@end
