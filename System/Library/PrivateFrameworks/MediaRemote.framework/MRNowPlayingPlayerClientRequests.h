/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class _MRPlaybackQueueProtobuf, NSObject, NSMutableDictionary, NSOperationQueue, _MRNowPlayingPlayerPathProtobuf, MRPlaybackQueuePlayerClient;

@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState> {

	_MRPlaybackQueueProtobuf* _playbackQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _responseQueue;
	NSMutableDictionary* _transactionCallbacks;
	NSMutableDictionary* _playbackQueueCompletions;
	NSMutableDictionary* _transactions;
	NSOperationQueue* _enquedNowPlayingInfoRequests;
	NSOperationQueue* _enquedNowPlayingInfoAssetRequests;
	unsigned _playbackState;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	MRPlaybackQueuePlayerClient* _playbackQueueClient;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;                   //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) MRPlaybackQueuePlayerClient * playbackQueueClient;              //@synthesize playbackQueueClient=_playbackQueueClient - In the implementation block
@property (nonatomic,readonly) unsigned playbackState;                                         //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) _MRPlaybackQueueProtobuf * playbackQueue; 
-(void)dealloc;
-(id)debugDescription;
-(void)setPlaybackQueue:(_MRPlaybackQueueProtobuf *)arg1 ;
-(id)initWithPlayerPath:(id)arg1 ;
-(MRPlaybackQueuePlayerClient *)playbackQueueClient;
-(void)restoreNowPlayingClientState;
-(void)receiveTransaction:(unsigned long long)arg1 fromMessage:(id)arg2 ;
-(void)addPlaybackQueueCompletion:(/*^block*/id)arg1 forRequest:(id)arg2 ;
-(void)removePlaybackQueueCompletionForRequest:(id)arg1 ;
-(void)enqueuePlaybackQueueRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerDefaultCallbacks;
-(void)_handleEnqueuedPlaybackQueueRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_transactionDestintationForName:(unsigned long long)arg1 ;
-(void)_handleTransactionPackets:(id)arg1 packets:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)transactionCallbacksForName:(unsigned long long)arg1 ;
-(void)_handlePlaybackStateDidChangeNotification:(id)arg1 ;
-(void)_handlePlaybackQueueDidChangeNotification:(id)arg1 ;
-(void)_handleContentItemsDidChangeNotification:(id)arg1 ;
-(void)_handleContentItemArtworkDidChangeNotification:(id)arg1 ;
-(void)addTransactionCallback:(/*^block*/id)arg1 forName:(unsigned long long)arg2 ;
-(_MRPlaybackQueueProtobuf *)playbackQueue;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(unsigned)playbackState;
@end

