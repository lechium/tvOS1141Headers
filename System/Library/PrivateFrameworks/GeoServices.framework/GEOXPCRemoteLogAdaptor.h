/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOBaseLogAdaptor.h>
#import <libobjc.A.dylib/GEOProtobufSessionTaskDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, NSString, NSLock, GEOLogMessageCacheManager, GEOProtobufSessionTask, GEOLogMessageCollectionRequest, NSObject;

@interface GEOXPCRemoteLogAdaptor : GEOBaseLogAdaptor <GEOProtobufSessionTaskDelegate> {

	NSURL* _remoteURL;
	NSString* _debugRequestName;
	unsigned long long _retryInterval;
	unsigned long long _backOffRetryInterval;
	BOOL _shouldAddIntervalJitter;
	unsigned long long _intervalJitter;
	BOOL _shouldCacheOnDisk;
	unsigned long long _cacheEncryptionType;
	long long _cacheMaxAllowedMessageCount;
	long long _logMessagesOverflowPurgeSize;
	long long _cacheMessageExpiryInterval;
	long long _maxMessageChunkSize;
	long long _maxMessageChunkCount;
	BOOL _requireWiFi;
	BOOL _sendInRealtime;
	long long _cacheCountFlushThreshold;
	BOOL _shouldCompressRequest;
	NSLock* _xpcActivityInfoLock;
	NSString* _logMessageCacheFilePath;
	GEOLogMessageCacheManager* _logMessageCacheManager;
	GEOProtobufSessionTask* _logMessageCollectionSessionTask;
	GEOLogMessageCollectionRequest* _request;
	BOOL _logMessageCollectionRequestPending;
	NSLock* _logMessageCollectionRequesterLock;
	NSObject*<OS_dispatch_queue> _logMessageSendQueue;
	NSString* _adaptorIdentifier;
	NSString* _policyIdentifier;
	NSString* _xpcActivityName;
	/*^block*/id _shouldDeferXPCActivityBlock;
	NSLock* _shouldDeferXPCActivityBlockLock;
	BOOL _observingNetworkChange;
	NSObject*<OS_dispatch_queue> _networkChangeObserverQueue;

}

@property (assign,nonatomic) long long xpcActivityTriggerCount; 
@property (readonly) NSString * adaptorIdentifier; 
@property (readonly) int supportedLogMessageType; 
@property (nonatomic,retain) NSURL * remoteURL;                              //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSString * debugRequestName;                    //@synthesize debugRequestName=_debugRequestName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)queueLogMessage:(id)arg1 ;
-(NSString *)debugRequestName;
-(id)initWithAdaptorPolicy:(id)arg1 ;
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(long long)xpcActivityTriggerCount;
-(void)setXpcActivityTriggerCount:(long long)arg1 ;
-(void)incrementXpcActivityTriggerCount;
-(id)initWithRemoteURL:(id)arg1 debugRequestName:(id)arg2 supportedTypes:(id)arg3 ;
-(void)_initializeAdaptor;
-(void)_setupQueueAndNotifications;
-(NSString *)adaptorIdentifier;
-(int)supportedLogMessageType;
-(BOOL)_useInMemoryLogMessageCache;
-(void)_setupLogMessageCache;
-(void)_setupXPCActivity;
-(void)flushLogs;
-(void)forceFlushLogs;
-(BOOL)isLogFrameworkAdaptor;
-(int)logMsgEventNetworkServiceForSupportedLogMsgType;
-(void)updateAdaptorPolicyConfiguration:(id)arg1 ;
-(void)_cleanupLogMessageCollectionRequester;
-(void)_beginSendingLogMessageChunks;
-(void)_queueNextLogMessagesChunkForSending;
-(BOOL)_isLogMessageCollectionRequesterPending;
-(void)_sendNextLogMessageChunk;
-(void)_sendLogMessageRequest:(id)arg1 ;
-(void)_requesterStartSendRequest:(id)arg1 ;
-(void)_continueToSendNextBatch:(BOOL)arg1 ;
-(void)_captureTrafficProbesAndTelemetricEventsFor:(id)arg1 result:(unsigned char)arg2 ;
-(void)_registerXPCActivityTimer;
-(void)_unregisterXPCActivityTimer;
-(void)_purgeAndSendLogMessages;
-(void)_purgeMapsSuggestionsCacheFile;
-(void)_purgeExpiredLogMessagesFromCache;
-(void)_deviceLocking;
-(void)_deviceUnlocked;
-(void)_addNetworkObserver;
-(void)_removeNetworkObserver;
-(void)_networkReachabilityChanged;
-(void)_purgeLogMessageCache;
-(NSURL *)remoteURL;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(void)setDebugRequestName:(NSString *)arg1 ;
-(void)dealloc;
@end

