/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHKMediaEntityServer, NSString, NSOperationQueue, NSOperation, TVHSMediaServerContentsChange;

@interface TVHKMediaQueryController : NSObject {

	TVHKMediaEntityServer* _mediaEntityServer;
	NSString* _identifier;
	NSString* _logNameSuffix;
	long long _state;
	NSOperationQueue* _processingQueue;
	NSOperationQueue* _serialQueryQueue;
	NSOperation* _contentsChangeQueryOperation;
	NSOperation* _delayContentsChangeOperation;
	TVHSMediaServerContentsChange* _cachedContentsChange;
	NSOperation* _cachedQueryOperation;
	unsigned long long _pauseCount;

}

@property (nonatomic,retain) TVHKMediaEntityServer * mediaEntityServer;                       //@synthesize mediaEntityServer=_mediaEntityServer - In the implementation block
@property (assign,nonatomic) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSOperationQueue * processingQueue;                              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialQueryQueue;                             //@synthesize serialQueryQueue=_serialQueryQueue - In the implementation block
@property (nonatomic,retain) NSOperation * contentsChangeQueryOperation;                      //@synthesize contentsChangeQueryOperation=_contentsChangeQueryOperation - In the implementation block
@property (nonatomic,retain) NSOperation * delayContentsChangeOperation;                      //@synthesize delayContentsChangeOperation=_delayContentsChangeOperation - In the implementation block
@property (nonatomic,copy) TVHSMediaServerContentsChange * cachedContentsChange;              //@synthesize cachedContentsChange=_cachedContentsChange - In the implementation block
@property (nonatomic,retain) NSOperation * cachedQueryOperation;                              //@synthesize cachedQueryOperation=_cachedQueryOperation - In the implementation block
@property (assign,nonatomic) unsigned long long pauseCount;                                   //@synthesize pauseCount=_pauseCount - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * logNameSuffix;                                          //@synthesize logNameSuffix=_logNameSuffix - In the implementation block
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)start;
-(void)stop;
-(void)resume;
-(void)pause;
-(void)setProcessingQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)processingQueue;
-(TVHKMediaEntityServer *)mediaEntityServer;
-(void)setMediaEntityServer:(TVHKMediaEntityServer *)arg1 ;
-(id)initWithMediaEntityServer:(id)arg1 ;
-(BOOL)_updateMutableArray:(id)arg1 withResult:(id)arg2 updateOnNoChanges:(BOOL)arg3 ;
-(id)_queryOperationForQueryReason:(long long)arg1 simulatedContentsChangeObjects:(id)arg2 ;
-(void)_didCompleteQueryOperation:(id)arg1 ;
-(BOOL)_shouldRequeryForContentsChange:(id)arg1 ;
-(void)_stopAndWait:(BOOL)arg1 ;
-(id)_controllerLogString;
-(void)_handleMediaServerContentsDidChangeNotification:(id)arg1 ;
-(void)_enqueueQueryWithQueryReason:(long long)arg1 simulatedContentsChangeObjects:(id)arg2 ;
-(void)setPauseCount:(unsigned long long)arg1 ;
-(unsigned long long)pauseCount;
-(NSOperation *)cachedQueryOperation;
-(void)setCachedQueryOperation:(NSOperation *)arg1 ;
-(TVHSMediaServerContentsChange *)cachedContentsChange;
-(void)_handleMediaEntityServerContentsDidChange:(id)arg1 ;
-(void)setCachedContentsChange:(TVHSMediaServerContentsChange *)arg1 ;
-(NSOperationQueue *)serialQueryQueue;
-(NSOperation *)delayContentsChangeOperation;
-(void)setDelayContentsChangeOperation:(NSOperation *)arg1 ;
-(BOOL)_updateMutableArray:(id)arg1 withLatestObjects:(id)arg2 changes:(id)arg3 updateOnNoChanges:(BOOL)arg4 ;
-(NSString *)logNameSuffix;
-(void)_queryOperationCompleted:(id)arg1 withQueryReason:(long long)arg2 ;
-(NSOperation *)contentsChangeQueryOperation;
-(void)setContentsChangeQueryOperation:(NSOperation *)arg1 ;
-(void)simulateContentsChangeQueryWithObjects:(id)arg1 ;
-(void)setLogNameSuffix:(NSString *)arg1 ;
-(void)setSerialQueryQueue:(NSOperationQueue *)arg1 ;
@end

