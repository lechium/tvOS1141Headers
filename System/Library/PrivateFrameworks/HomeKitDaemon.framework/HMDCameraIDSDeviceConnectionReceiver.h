/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraIDSDeviceConnection.h>
#import <libobjc.A.dylib/HMDCameraRemoteStreamReceiverSocketProtocol.h>

@protocol HMDCameraIDSDeviceConnectionReceiverDelegate, OS_dispatch_queue;
@class NSObject, NSString, IDSSession;

@interface HMDCameraIDSDeviceConnectionReceiver : HMDCameraIDSDeviceConnection <HMDCameraRemoteStreamReceiverSocketProtocol> {

	id<HMDCameraIDSDeviceConnectionReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<HMDCameraIDSDeviceConnectionReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IDSSession * session; 
@property (nonatomic,readonly) int remoteAudioSocket; 
@property (nonatomic,readonly) int remoteVideoSocket; 
+(id)logCategory;
-(IDSSession *)session;
-(id<HMDCameraIDSDeviceConnectionReceiverDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraIDSDeviceConnectionReceiverDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)logIdentifier;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(void)setupReceiver:(id)arg1 ;
-(int)remoteAudioSocket;
-(int)remoteVideoSocket;
-(void)_callSessionEnded:(id)arg1 ;
-(void)_socketOpened:(id)arg1 ;
@end

