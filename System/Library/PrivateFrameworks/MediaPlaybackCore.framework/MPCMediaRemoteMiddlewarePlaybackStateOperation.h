/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPMiddlewareOperation.h>

@class NSError, NSArray, MPCMediaRemoteMiddleware, MPCPlayerRequest, MPCFuture, NSString;

@interface MPCMediaRemoteMiddlewarePlaybackStateOperation : MPAsyncOperation <MPMiddlewareOperation> {

	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	MPCMediaRemoteMiddleware* _middleware;
	MPCPlayerRequest* _playerRequest;
	MPCFuture* _playbackStateFuture;

}

@property (nonatomic,retain) MPCMediaRemoteMiddleware * middleware;              //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCPlayerRequest * playerRequest;                   //@synthesize playerRequest=_playerRequest - In the implementation block
@property (nonatomic,retain) MPCFuture * playbackStateFuture;                    //@synthesize playbackStateFuture=_playbackStateFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                               //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                  //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSArray *)invalidationObservers;
-(id)timeoutDescription;
-(MPCMediaRemoteMiddleware *)middleware;
-(void)setMiddleware:(MPCMediaRemoteMiddleware *)arg1 ;
-(void)execute;
-(MPCPlayerRequest *)playerRequest;
-(id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2 ;
-(void)setPlayerRequest:(MPCPlayerRequest *)arg1 ;
-(void)setPlaybackStateFuture:(MPCFuture *)arg1 ;
-(MPCFuture *)playbackStateFuture;
@end

