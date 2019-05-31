/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPMiddlewareAutomaticDependencyOperation.h>

@class NSArray, MPCPlaybackEngineMiddleware, MPCPlayerRequest, NSString, NSError, NSMapTable;

@interface MPCPlaybackEngineMiddlewareOperation : MPAsyncOperation <MPMiddlewareAutomaticDependencyOperation> {

	NSMapTable* _inputOperations;
	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	MPCPlaybackEngineMiddleware* _middleware;
	MPCPlayerRequest* _playerRequest;

}

@property (nonatomic,retain) MPCPlaybackEngineMiddleware * middleware;              //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCPlayerRequest * playerRequest;                      //@synthesize playerRequest=_playerRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                  //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                     //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
@property (nonatomic,readonly) NSArray * inputsProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations;                          //@synthesize inputOperations=_inputOperations - In the implementation block
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSArray *)invalidationObservers;
-(MPCPlaybackEngineMiddleware *)middleware;
-(void)setMiddleware:(MPCPlaybackEngineMiddleware *)arg1 ;
-(void)execute;
-(NSArray *)inputsProtocols;
-(NSArray *)outputProtocols;
-(NSMapTable *)inputOperations;
-(void)setInputOperations:(NSMapTable *)arg1 ;
-(MPCPlayerRequest *)playerRequest;
-(id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2 ;
-(void)setPlayerRequest:(MPCPlayerRequest *)arg1 ;
@end

