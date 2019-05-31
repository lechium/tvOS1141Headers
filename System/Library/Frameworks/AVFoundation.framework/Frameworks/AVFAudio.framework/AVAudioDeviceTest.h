/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVAudioDeviceTestServiceProtocol;
@class NSXPCConnection;

@interface AVAudioDeviceTest : NSObject {

	NSXPCConnection* _connection;
	id<AVAudioDeviceTestServiceProtocol> _serviceDelegateAsync;
	id<AVAudioDeviceTestServiceProtocol> _serviceDelegateSync;

}

@property (retain) NSXPCConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (retain) id<AVAudioDeviceTestServiceProtocol> serviceDelegateAsync;              //@synthesize serviceDelegateAsync=_serviceDelegateAsync - In the implementation block
@property (retain) id<AVAudioDeviceTestServiceProtocol> serviceDelegateSync;               //@synthesize serviceDelegateSync=_serviceDelegateSync - In the implementation block
-(void)startWithSequence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setServiceDelegateAsync:(id<AVAudioDeviceTestServiceProtocol>)arg1 ;
-(void)setServiceDelegateSync:(id<AVAudioDeviceTestServiceProtocol>)arg1 ;
-(id<AVAudioDeviceTestServiceProtocol>)serviceDelegateSync;
-(id<AVAudioDeviceTestServiceProtocol>)serviceDelegateAsync;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

