/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRExternalDevice.h>
#import <libobjc.A.dylib/MRProtocolClientConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CURunLoopThread, MRExternalClientConnection, MRSupportedProtocolMessages, _MROriginProtobuf, _MRDeviceInfoMessageProtobuf, _MRNowPlayingPlayerPathProtobuf, NSDictionary, NSData, _MRContentItemProtobuf, MRExternalDeviceTransport, NSString;

@interface MRTransportExternalDevice : MRExternalDevice <MRProtocolClientConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _workerQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	CURunLoopThread* _runLoopThread;
	BOOL _wantsNowPlayingNotifications;
	BOOL _wantsNowPlayingArtworkNotifications;
	BOOL _wantsVolumeNotifications;
	BOOL _usingSystemPairing;
	unsigned _connectionState;
	unsigned _connectionOptions;
	unsigned _cachedServerDisconnectError;
	unsigned long long _reconnectionAttemptCount;
	BOOL _forceReconnectOnConnectionFailure;
	BOOL _disconnecting;
	BOOL _isCallingClientCallback;
	MRExternalClientConnection* _clientConnection;
	MRSupportedProtocolMessages* _supportedMessages;
	_MROriginProtobuf* _customOrigin;
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	NSDictionary* _nowPlayingInfo;
	NSData* _nowPlayingArtwork;
	_MRContentItemProtobuf* _nowPlayingItem;
	MRExternalDeviceTransport* _transport;
	long long _connectionRecoveryBehavior;
	/*^block*/id _pairingCallback;
	NSObject*<OS_dispatch_queue> _pairingCallbackQueue;
	/*^block*/id _connectionStateCallback;
	NSObject*<OS_dispatch_queue> _connectionStateCallbackQueue;
	/*^block*/id _nameCallback;
	NSObject*<OS_dispatch_queue> _nameCallbackQueue;
	/*^block*/id _pairingAllowedCallback;
	NSObject*<OS_dispatch_queue> _pairingAllowedCallbackQueue;
	/*^block*/id _customDataCallback;
	NSObject*<OS_dispatch_queue> _customDataCallbackQueue;
	/*^block*/id _volumeCallback;
	NSObject*<OS_dispatch_queue> _volumeCallbackQueue;
	/*^block*/id _outputContextCallback;
	NSObject*<OS_dispatch_queue> _outputContextCallbackQueue;

}

@property (nonatomic,retain) MRExternalClientConnection * clientConnection;                          //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,retain) _MROriginProtobuf * customOrigin;                                       //@synthesize customOrigin=_customOrigin - In the implementation block
@property (nonatomic,retain) _MRDeviceInfoMessageProtobuf * deviceInfo;                              //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) MRSupportedProtocolMessages * supportedMessages;                        //@synthesize supportedMessages=_supportedMessages - In the implementation block
@property (nonatomic,retain) NSData * nowPlayingArtwork;                                             //@synthesize nowPlayingArtwork=_nowPlayingArtwork - In the implementation block
@property (nonatomic,retain) NSDictionary * nowPlayingInfo;                                          //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) _MRContentItemProtobuf * nowPlayingItem;                                //@synthesize nowPlayingItem=_nowPlayingItem - In the implementation block
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                           //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) id pairingCallback;                                                       //@synthesize pairingCallback=_pairingCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pairingCallbackQueue;                      //@synthesize pairingCallbackQueue=_pairingCallbackQueue - In the implementation block
@property (nonatomic,copy) id connectionStateCallback;                                               //@synthesize connectionStateCallback=_connectionStateCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionStateCallbackQueue;              //@synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue - In the implementation block
@property (nonatomic,copy) id nameCallback;                                                          //@synthesize nameCallback=_nameCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nameCallbackQueue;                         //@synthesize nameCallbackQueue=_nameCallbackQueue - In the implementation block
@property (nonatomic,copy) id pairingAllowedCallback;                                                //@synthesize pairingAllowedCallback=_pairingAllowedCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pairingAllowedCallbackQueue;               //@synthesize pairingAllowedCallbackQueue=_pairingAllowedCallbackQueue - In the implementation block
@property (nonatomic,copy) id customDataCallback;                                                    //@synthesize customDataCallback=_customDataCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> customDataCallbackQueue;                   //@synthesize customDataCallbackQueue=_customDataCallbackQueue - In the implementation block
@property (nonatomic,copy) id volumeCallback;                                                        //@synthesize volumeCallback=_volumeCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> volumeCallbackQueue;                       //@synthesize volumeCallbackQueue=_volumeCallbackQueue - In the implementation block
@property (nonatomic,copy) id outputContextCallback;                                                 //@synthesize outputContextCallback=_outputContextCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> outputContextCallbackQueue;                //@synthesize outputContextCallbackQueue=_outputContextCallbackQueue - In the implementation block
@property (nonatomic,readonly) MRExternalDeviceTransport * transport;                                //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) long long connectionRecoveryBehavior;                                   //@synthesize connectionRecoveryBehavior=_connectionRecoveryBehavior - In the implementation block
@property (assign,nonatomic) BOOL isCallingClientCallback;                                           //@synthesize isCallingClientCallback=_isCallingClientCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hostName;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(BOOL)isValid;
-(long long)port;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(MRSupportedProtocolMessages *)supportedMessages;
-(void)setSupportedMessages:(MRSupportedProtocolMessages *)arg1 ;
-(void)setDeviceInfo:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(void)setUsingSystemPairing:(BOOL)arg1 ;
-(void)connectWithOptions:(unsigned)arg1 ;
-(void)unpair;
-(void)sendCustomData:(id)arg1 withName:(id)arg2 ;
-(void)setConnectionStateCallback:(id)arg1 ;
-(void)setConnectionStateCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNameCallback:(id)arg1 ;
-(void)setNameCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCustomDataCallback:(id)arg1 ;
-(void)setCustomDataCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setVolumeCallback:(id)arg1 ;
-(void)setVolumeCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOutputContextCallback:(id)arg1 ;
-(void)setOutputContextCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)connectionStateCallback;
-(NSObject*<OS_dispatch_queue>)connectionStateCallbackQueue;
-(NSObject*<OS_dispatch_queue>)nameCallbackQueue;
-(id)nameCallback;
-(NSObject*<OS_dispatch_queue>)customDataCallbackQueue;
-(id)customDataCallback;
-(NSObject*<OS_dispatch_queue>)volumeCallbackQueue;
-(id)volumeCallback;
-(NSObject*<OS_dispatch_queue>)outputContextCallbackQueue;
-(id)outputContextCallback;
-(BOOL)wantsNowPlayingNotifications;
-(void)setWantsNowPlayingNotifications:(BOOL)arg1 ;
-(BOOL)wantsVolumeNotifications;
-(void)setWantsVolumeNotifications:(BOOL)arg1 ;
-(SCD_Struct_MR18)systemMusicContextInfo;
-(BOOL)isUsingSystemPairing;
-(_MROriginProtobuf *)customOrigin;
-(void)setPairingCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setConnectionStateCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setNameCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setPairingAllowedCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setCustomDataCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setVolumeCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setOutputContextCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)volumeWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVolume:(float)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)modifyOutputContextOfType:(unsigned)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)ping:(double)arg1 callback:(/*^block*/id)arg2 withQueue:(id)arg3 ;
-(void)sendClientUpdatesConfigMessage;
-(void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(BOOL)wantsNowPlayingArtworkNotifications;
-(id)errorForCurrentState;
-(void)setIsCallingClientCallback:(BOOL)arg1 ;
-(id)currentClientUpdatesConfigMessage;
-(void)setWantsNowPlayingArtworkNotifications:(BOOL)arg1 ;
-(void)_localDeviceInfoDidChangeNotification:(id)arg1 ;
-(void)_transportDeviceInfoDidChangeNotification:(id)arg1 ;
-(void)_contentItemUpdatedNotification:(id)arg1 ;
-(void)_handleDeviceInfoChange:(id)arg1 oldDevice:(id)arg2 ;
-(void)_tearDownCustomOriginWithReason:(long long)arg1 ;
-(void)_onSerialQueue_registerOriginCallbacks;
-(void)_updateNowPlayingInfo;
-(void)setNowPlayingArtwork:(NSData *)arg1 ;
-(void)_callClientConnectionStateCallback:(unsigned)arg1 error:(id)arg2 ;
-(void)setPairingCallback:(id)arg1 ;
-(void)setPairingCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPairingAllowedCallback:(id)arg1 ;
-(void)setPairingAllowedCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_onWorkerQueue_cleanUpWithReason:(long long)arg1 ;
-(id)_onWorkerQueue_initializeConnectionWithOptions:(unsigned)arg1 ;
-(id)_onWorkerQueue_loadDeviceInfo;
-(id)_onWorkerQueue_openSecuritySession;
-(id)_onWorkerQueue_setupCustomOrigin;
-(void)setConnectionState:(unsigned)arg1 error:(id)arg2 ;
-(void)sendClientUpdatesConfigMessageWithCompletion:(/*^block*/id)arg1 ;
-(void)_onWorkerQueue_connectWithOptions:(unsigned)arg1 isRetry:(BOOL)arg2 ;
-(void)_onSerialQueue_connectWithOptions:(unsigned)arg1 ;
-(void)_handleCryptoPairingMessage:(id)arg1 ;
-(void)_handleSetStateMessage:(id)arg1 ;
-(void)_handleSetArtworkMessage:(id)arg1 ;
-(void)_handleSetVolumeControlAvailabilityMessage:(id)arg1 ;
-(void)_handleTransactionMessage:(id)arg1 ;
-(void)_handleDeviceInfoUpdateMessage:(id)arg1 ;
-(void)_handleSetConnectionStateMessage:(id)arg1 ;
-(void)_handleGenericMessage:(id)arg1 ;
-(void)_handleSetNowPlayingClientMessage:(id)arg1 ;
-(void)_handleSetNowPlayingPlayerMessage:(id)arg1 ;
-(void)_handleVolumeDidChangeMessage:(id)arg1 ;
-(void)_handleRemoveClientMessage:(id)arg1 ;
-(void)_handleRemovePlayerMessage:(id)arg1 ;
-(void)_handleUpdateClientMessage:(id)arg1 ;
-(void)_handleUpdateContentItemsMessage:(id)arg1 ;
-(void)_handleUpdateContentItemArtworkMessage:(id)arg1 ;
-(void)_handleUpdatePlayerMessage:(id)arg1 ;
-(void)_handlePromptForRouteAuthorizationMessage:(id)arg1 ;
-(void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1 ;
-(void)setCustomOrigin:(_MROriginProtobuf *)arg1 ;
-(void)_callClientPairingCallback:(/*^block*/id)arg1 ;
-(void)_handleRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 playerPath:(void*)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handlePlaybackQueueRequest:(void*)arg1 forPlayer:(void*)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleLegacyPlaybackQueueRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_handlePlaybackQueueResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createPlaybackQueue:(BOOL)arg1 ;
-(void)_handleSetStateMessageModern:(id)arg1 ;
-(void)_handleSetStateMessageLegacy:(id)arg1 ;
-(void)_handleNotificationMessageModern:(id)arg1 ;
-(void)_handleNotificationMessageLegacy:(id)arg1 ;
-(void)_callClientNameCallback;
-(void)_callClientAllowsPairingCallback;
-(void)_callClientOutputContextCallbackWithInfo:(SCD_Struct_MR18)arg1 ;
-(void)_callClientCustomDataCallback:(id)arg1 name:(id)arg2 ;
-(void)_callVolumeCallback:(float)arg1 endpoint:(id)arg2 outputDevice:(id)arg3 ;
-(void)clientDidDisconnect:(id)arg1 ;
-(NSData *)nowPlayingArtwork;
-(long long)connectionRecoveryBehavior;
-(void)setConnectionRecoveryBehavior:(long long)arg1 ;
-(BOOL)isCallingClientCallback;
-(id)pairingCallback;
-(NSObject*<OS_dispatch_queue>)pairingCallbackQueue;
-(id)pairingAllowedCallback;
-(NSObject*<OS_dispatch_queue>)pairingAllowedCallbackQueue;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(_MRContentItemProtobuf *)nowPlayingItem;
-(void)setNowPlayingItem:(_MRContentItemProtobuf *)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(unsigned)connectionState;
-(void)disconnect:(id)arg1 ;
-(BOOL)isPaired;
-(MRExternalDeviceTransport *)transport;
-(id)initWithTransport:(id)arg1 ;
-(void)_handleNotificationMessage:(id)arg1 ;
-(MRExternalClientConnection *)clientConnection;
-(void)setClientConnection:(MRExternalClientConnection *)arg1 ;
@end
