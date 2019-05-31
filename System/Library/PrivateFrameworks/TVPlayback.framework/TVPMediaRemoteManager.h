/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPPlayback, TVPMediaItem;
@class TVPMediaRemoteCommandHandler, NSDate, NSDictionary, TVImageProxy;

@interface TVPMediaRemoteManager : NSObject {

	BOOL _usingPlayerForCommandHandlerOnly;
	BOOL _artworkNeedsUpdate;
	id<TVPPlayback> _player;
	TVPMediaRemoteCommandHandler* _remoteCommandHandler;
	id<TVPMediaItem> _currentMediaItem;
	id _elapsedTimeObserverToken;
	NSDate* _lastPushDate;
	NSDictionary* _lastNowPlayingInfo;
	TVImageProxy* _artworkProxy;

}

@property (nonatomic,retain) id<TVPMediaItem> currentMediaItem;                                //@synthesize currentMediaItem=_currentMediaItem - In the implementation block
@property (nonatomic,retain) id elapsedTimeObserverToken;                                      //@synthesize elapsedTimeObserverToken=_elapsedTimeObserverToken - In the implementation block
@property (nonatomic,retain) NSDate * lastPushDate;                                            //@synthesize lastPushDate=_lastPushDate - In the implementation block
@property (nonatomic,copy) NSDictionary * lastNowPlayingInfo;                                  //@synthesize lastNowPlayingInfo=_lastNowPlayingInfo - In the implementation block
@property (assign,nonatomic) BOOL artworkNeedsUpdate;                                          //@synthesize artworkNeedsUpdate=_artworkNeedsUpdate - In the implementation block
@property (nonatomic,retain) TVImageProxy * artworkProxy;                                      //@synthesize artworkProxy=_artworkProxy - In the implementation block
@property (assign,nonatomic) BOOL usingPlayerForCommandHandlerOnly;                            //@synthesize usingPlayerForCommandHandlerOnly=_usingPlayerForCommandHandlerOnly - In the implementation block
@property (assign,nonatomic,__weak) id<TVPPlayback> player;                                    //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) TVPMediaRemoteCommandHandler * remoteCommandHandler;              //@synthesize remoteCommandHandler=_remoteCommandHandler - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id<TVPMediaItem>)currentMediaItem;
-(void)setPlayer:(id<TVPPlayback>)arg1 ;
-(id<TVPPlayback>)player;
-(void)_currentMediaItemDidChange:(id)arg1 ;
-(void)setCurrentMediaItem:(id<TVPMediaItem>)arg1 ;
-(void)_playbackStateDidChange:(id)arg1 ;
-(TVImageProxy *)artworkProxy;
-(void)setArtworkProxy:(TVImageProxy *)arg1 ;
-(id)SelectedAudioOptionBinding;
-(void)_updateBoundSelectedAudioOption;
-(id)SelectedSubtitleOptionBinding;
-(void)_updateBoundSelectedSubtitleOption;
-(id)ShuffleModeBinding;
-(void)_updateBoundShuffleMode;
-(id)RepeatModeBinding;
-(void)_updateBoundRepeatMode;
-(TVPMediaRemoteCommandHandler *)remoteCommandHandler;
-(id)elapsedTimeObserverToken;
-(void)setElapsedTimeObserverToken:(id)arg1 ;
-(void)setLastNowPlayingInfo:(NSDictionary *)arg1 ;
-(void)_pushNowPlayingInfo:(BOOL)arg1 invalidateArtwork:(BOOL)arg2 pushImmediately:(BOOL)arg3 ;
-(void)_currentMediaItemMetadataDidChange:(id)arg1 ;
-(void)tvs_bindSelectedAudioOptionBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)tvs_bindSelectedSubtitleOptionBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)tvs_bindShuffleModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)tvs_bindRepeatModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)setPlayerForCommandHandler:(id)arg1 ;
-(void)startRespondingToRemoteControlEvents;
-(void)stopRespondingToRemoteControlEvents;
-(void)setRemoteCommandHandler:(TVPMediaRemoteCommandHandler *)arg1 ;
-(BOOL)usingPlayerForCommandHandlerOnly;
-(void)setUsingPlayerForCommandHandlerOnly:(BOOL)arg1 ;
-(NSDate *)lastPushDate;
-(void)setLastPushDate:(NSDate *)arg1 ;
-(NSDictionary *)lastNowPlayingInfo;
-(BOOL)artworkNeedsUpdate;
-(void)setArtworkNeedsUpdate:(BOOL)arg1 ;
@end

