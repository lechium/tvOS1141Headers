/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSPlayer.h>
@class NSString, IKJSPlaylist, IKJSMediaItem, NSNumber, NSDate, IKDOMDocument;


@protocol IKJSPlayer <JSExport>
@property (nonatomic,readonly) NSString * playbackState; 
@property (nonatomic,retain) IKJSPlaylist * playlist; 
@property (nonatomic,readonly) IKJSMediaItem * currentMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * nextMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * previousMediaItem; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (assign,nonatomic) double playbackRate; 
@property (nonatomic,retain) IKDOMDocument * overlayDocument; 
@property (nonatomic,retain) IKDOMDocument * interactiveOverlayDocument; 
@property (assign,nonatomic) BOOL interactiveOverlayDismissable; 
@required
-(id)init;
-(void)next;
-(void)previous;
-(void)stop;
-(void)present;
-(void)pause;
-(void)changeToMediaAtIndex:(unsigned long long)arg1;
-(IKJSPlaylist *)playlist;
-(void)setPlaylist:(id)arg1;
-(void)play;
-(void)setPlaybackRate:(double)arg1;
-(void)seekToTime:(double)arg1;
-(IKJSMediaItem *)currentMediaItem;
-(double)playbackRate;
-(NSString *)playbackState;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1;
-(NSDate *)currentMediaItemDate;
-(IKDOMDocument *)overlayDocument;
-(void)setOverlayDocument:(id)arg1;
-(IKDOMDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(id)arg1;
-(BOOL)interactiveOverlayDismissable;
-(NSNumber *)currentMediaItemDuration;
-(IKJSMediaItem *)nextMediaItem;
-(IKJSMediaItem *)previousMediaItem;

@end


@class NSString, IKJSPlaylist, IKJSMediaItem, NSNumber, NSDate, IKDOMDocument, NSMutableDictionary, IKAppPlayerBridge;

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer> {

	IKJSPlaylist* _playlist;
	long long _playerState;
	BOOL _holdingSelfReference;
	NSMutableDictionary* _observedMetadataKeys;
	NSMutableDictionary* _timeListeners;
	NSMutableDictionary* _boundaryListeners;
	IKAppPlayerBridge* _bridge;

}

@property (nonatomic,readonly) IKAppPlayerBridge * bridge;                            //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSString * playbackState; 
@property (nonatomic,retain) IKJSPlaylist * playlist; 
@property (nonatomic,readonly) IKJSMediaItem * currentMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * nextMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * previousMediaItem; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (assign,nonatomic) double playbackRate; 
@property (nonatomic,retain) IKDOMDocument * overlayDocument; 
@property (nonatomic,retain) IKDOMDocument * interactiveOverlayDocument; 
@property (assign,nonatomic) BOOL interactiveOverlayDismissable; 
-(void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)init;
-(void)next;
-(void)previous;
-(void)dealloc;
-(long long)state;
-(void)stop;
-(void)present;
-(void)pause;
-(BOOL)shouldHandleStateEvent:(id)arg1 ;
-(BOOL)requestSeekToTime:(double*)arg1 currentTime:(double)arg2 ;
-(BOOL)shouldChangeToMediaAtIndex:(unsigned long long)arg1 ;
-(id)initWithAppContext:(id)arg1 bridge:(id)arg2 ;
-(void)_addManagedReference;
-(void)removeEventListener:(id)arg1 :(id)arg2 ;
-(void)_removeManagedReference;
-(void)changeToMediaAtIndex:(unsigned long long)arg1 ;
-(IKJSPlaylist *)playlist;
-(void)setPlaylist:(IKJSPlaylist *)arg1 ;
-(void)play;
-(void)setPlaybackRate:(double)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(IKJSMediaItem *)currentMediaItem;
-(double)playbackRate;
-(IKAppPlayerBridge *)bridge;
-(NSString *)playbackState;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1 ;
-(void)timeIntervalElapsed:(double)arg1 time:(double)arg2 ;
-(void)timeBoundaryDidCross:(double)arg1 ;
-(void)timedMetadataDidChange:(id)arg1 value:(id)arg2 ;
-(void)currentMediaItemDurationDidChange:(double)arg1 ;
-(void)stateDidChange:(id)arg1 ;
-(void)mediaItemWillChange:(long long)arg1 ;
-(void)mediaItemDidChange:(long long)arg1 ;
-(void)stateWillChange:(id)arg1 ;
-(void)playbackError:(id)arg1 shouldStopDueToError:(BOOL)arg2 ;
-(void)playbackDidStall:(double)arg1 ;
-(void)transportBarVisibilityDidChange:(BOOL)arg1 ;
-(NSDate *)currentMediaItemDate;
-(IKDOMDocument *)overlayDocument;
-(void)setOverlayDocument:(IKDOMDocument *)arg1 ;
-(IKDOMDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(IKDOMDocument *)arg1 ;
-(BOOL)interactiveOverlayDismissable;
-(NSNumber *)currentMediaItemDuration;
-(IKJSMediaItem *)nextMediaItem;
-(IKJSMediaItem *)previousMediaItem;
@end

