/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPCMediaRemoteMiddlewareModelObjectsProviding.h>
#import <libobjc.A.dylib/MPMiddlewareAutomaticDependencyOperation.h>

@class MPSectionedCollection, NSIndexPath, NSArray, NSMapTable, MPCMediaRemoteMiddleware, MPCPlayerRequest, MPCFuture, NSString, NSError;

@interface MPCMediaRemoteMiddlewareMetadataOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareModelObjectsProviding, MPMiddlewareAutomaticDependencyOperation> {

	/*^block*/id _invalidationHandler;
	NSArray* _invalidationObservers;
	NSMapTable* _inputOperations;
	MPCMediaRemoteMiddleware* _middleware;
	MPCPlayerRequest* _playerRequest;
	MPCFuture* _playQueueIdentifiersFuture;
	MPCFuture* _playingIdentifierFuture;
	MPCFuture* _queueIdentifierFuture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPSectionedCollection * sourceContentItems; 
@property (nonatomic,readonly) MPSectionedCollection * modelObjects; 
@property (nonatomic,copy,readonly) NSIndexPath * playingIndexPath; 
@property (nonatomic,retain) MPCMediaRemoteMiddleware * middleware;                     //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPCPlayerRequest * playerRequest;                          //@synthesize playerRequest=_playerRequest - In the implementation block
@property (nonatomic,retain) MPCFuture * playQueueIdentifiersFuture;                    //@synthesize playQueueIdentifiersFuture=_playQueueIdentifiersFuture - In the implementation block
@property (nonatomic,retain) MPCFuture * playingIdentifierFuture;                       //@synthesize playingIdentifierFuture=_playingIdentifierFuture - In the implementation block
@property (nonatomic,retain) MPCFuture * queueIdentifierFuture;                         //@synthesize queueIdentifierFuture=_queueIdentifierFuture - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                         //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
@property (nonatomic,readonly) NSArray * inputsProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations;                              //@synthesize inputOperations=_inputOperations - In the implementation block
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSArray *)invalidationObservers;
-(id)timeoutDescription;
-(MPCMediaRemoteMiddleware *)middleware;
-(void)setMiddleware:(MPCMediaRemoteMiddleware *)arg1 ;
-(void)execute;
-(MPSectionedCollection *)modelObjects;
-(NSArray *)inputsProtocols;
-(NSArray *)outputProtocols;
-(NSMapTable *)inputOperations;
-(void)setInputOperations:(NSMapTable *)arg1 ;
-(MPCPlayerRequest *)playerRequest;
-(MSVSignedRange)rangeFromTracklistRange:(SCD_Struct_MP0)arg1 ;
-(void)setPlayQueueIdentifiersFuture:(MPCFuture *)arg1 ;
-(MPCFuture *)playQueueIdentifiersFuture;
-(void)setPlayingIdentifierFuture:(MPCFuture *)arg1 ;
-(MPCFuture *)playingIdentifierFuture;
-(void)setQueueIdentifierFuture:(MPCFuture *)arg1 ;
-(MPCFuture *)queueIdentifierFuture;
-(id)_sectionGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2 ;
-(NSIndexPath *)playingIndexPath;
-(id)_itemGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2 ;
-(void)_loadPlayingIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadItemsWithCompletion:(/*^block*/id)arg1 ;
-(MPSectionedCollection *)sourceContentItems;
-(id)_genericObjectPropertySetForContentItem:(id)arg1 preferredRelationships:(id)arg2 propertySet:(id)arg3 ;
-(id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2 ;
-(void)setPlayerRequest:(MPCPlayerRequest *)arg1 ;
@end
