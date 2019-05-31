/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBasePlayer.h>
#import <libobjc.A.dylib/ISLivePhotoSettleBehaviorDelegate.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@class NSMutableSet, ISLivePhotoVitalityFilter, NSDate, NSSet, NSString;

@interface ISLivePhotoPlayer : ISBasePlayer <ISLivePhotoSettleBehaviorDelegate, ISChangeObserver> {

	NSMutableSet* _playbackFilters;
	Ai _fadeInRequestID;
	SCD_Struct_IS10 _isValid;
	double _lastAppliedScale;
	BOOL _playingVitality;
	BOOL _hinting;
	BOOL _immediatelyShowsPhotoWhenPlaybackEnds;
	BOOL _playbackAllowed;
	BOOL __settleAutomaticallyWhenReady;
	BOOL __shouldPrepareForVitalityWhenReady;
	BOOL __shouldPlayVitalityWhenReady;
	BOOL __shouldPrepareForHintWhenReady;
	ISLivePhotoVitalityFilter* _vitalityFilter;
	long long _currentPlaybackStyle;
	long long _targetReadiness;
	long long __styleToPlayWhenReady;
	NSDate* __vitalityTimeoutDate;
	SCD_Struct_IS4 _seekTime;
	SCD_Struct_IS5 _trimTimeRange;

}

@property (assign,setter=_setCurrentPlaybackStyle:,nonatomic) long long currentPlaybackStyle;                                    //@synthesize currentPlaybackStyle=_currentPlaybackStyle - In the implementation block
@property (assign,setter=_setStyleToPlayWhenReady:,nonatomic) long long _styleToPlayWhenReady;                                   //@synthesize _styleToPlayWhenReady=__styleToPlayWhenReady - In the implementation block
@property (assign,setter=_setSettleAutomaticallyWhenReady:,nonatomic) BOOL _settleAutomaticallyWhenReady;                        //@synthesize _settleAutomaticallyWhenReady=__settleAutomaticallyWhenReady - In the implementation block
@property (assign,setter=_setShouldPrepareForVitalityWhenReady:,nonatomic) BOOL _shouldPrepareForVitalityWhenReady;              //@synthesize _shouldPrepareForVitalityWhenReady=__shouldPrepareForVitalityWhenReady - In the implementation block
@property (assign,setter=_setShouldPlayVitalityWhenReady:,nonatomic) BOOL _shouldPlayVitalityWhenReady;                          //@synthesize _shouldPlayVitalityWhenReady=__shouldPlayVitalityWhenReady - In the implementation block
@property (assign,setter=_setShouldPrepareForHintWhenReady:,nonatomic) BOOL _shouldPrepareForHintWhenReady;                      //@synthesize _shouldPrepareForHintWhenReady=__shouldPrepareForHintWhenReady - In the implementation block
@property (assign,setter=_setPlayingVitality:,getter=isPlayingVitality,nonatomic) BOOL playingVitality;                          //@synthesize playingVitality=_playingVitality - In the implementation block
@property (assign,setter=_setHinting:,getter=isHinting,nonatomic) BOOL hinting;                                                  //@synthesize hinting=_hinting - In the implementation block
@property (setter=_setVitalityTimeoutDate:,nonatomic,retain) NSDate * _vitalityTimeoutDate;                                      //@synthesize _vitalityTimeoutDate=__vitalityTimeoutDate - In the implementation block
@property (nonatomic,readonly) BOOL _canPlayVitality; 
@property (nonatomic,readonly) NSSet * playbackFilters; 
@property (nonatomic,retain) ISLivePhotoVitalityFilter * vitalityFilter;                                                         //@synthesize vitalityFilter=_vitalityFilter - In the implementation block
@property (assign,nonatomic) BOOL immediatelyShowsPhotoWhenPlaybackEnds;                                                         //@synthesize immediatelyShowsPhotoWhenPlaybackEnds=_immediatelyShowsPhotoWhenPlaybackEnds - In the implementation block
@property (assign,getter=isPlaybackAllowed,nonatomic) BOOL playbackAllowed;                                                      //@synthesize playbackAllowed=_playbackAllowed - In the implementation block
@property (assign,nonatomic) long long targetReadiness;                                                                          //@synthesize targetReadiness=_targetReadiness - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 seekTime;                                                                          //@synthesize seekTime=_seekTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IS5 trimTimeRange;                                                                       //@synthesize trimTimeRange=_trimTimeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)stopPlayback;
-(void)didPerformChanges;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(SCD_Struct_IS4)seekTime;
-(long long)currentPlaybackStyle;
-(void)livePhotoPlaybackBehaviorDidFinish:(id)arg1 ;
-(void)livePhotoPlaybackBehaviorDidBeginPlaying:(id)arg1 ;
-(BOOL)immediatelyShowsPhotoWhenPlaybackEnds;
-(double)_photoTransitionDuration;
-(void)configurePlayerItem;
-(void)playerItemDidChange;
-(void)activeBehaviorDidChange;
-(double)videoWillPlayToPhotoInterval;
-(void)statusDidChange;
-(double)lastAppliedScale;
-(void)playVitality;
-(void)prepareForVitality;
-(void)vitalityBehaviorDidBeginPlaying:(id)arg1 ;
-(BOOL)vitalityBehaviorShouldEndPlayingAtPhoto:(id)arg1 ;
-(void)vitalityBehaviorDidEndPlaying:(id)arg1 ;
-(void)_updatePlayerItemLoadingTarget;
-(ISLivePhotoVitalityFilter *)vitalityFilter;
-(long long)_coalescedPlaybackFilterState;
-(void)_setCurrentPlaybackStyle:(long long)arg1 ;
-(void)startPlaybackWithStyle:(long long)arg1 ;
-(void)_configurePlaybackFilters;
-(void)_prepareForVitalityIfNeeded;
-(void)_playIfNeeded;
-(void)_updateHintingAndVitality;
-(void)_invalidateScale;
-(void)_invalidateApertureMode;
-(void)startPlaybackWithStyleWhenReady:(long long)arg1 ;
-(void)_configurePlaybackFilter:(id)arg1 ;
-(void)_handleVitalityFilterDidChange:(id)arg1 ;
-(long long)targetReadiness;
-(void)_setStyleToPlayWhenReady:(long long)arg1 ;
-(void)_setSettleAutomaticallyWhenReady:(BOOL)arg1 ;
-(void)startPlaybackWithStyleWhenReady:(long long)arg1 settleAutomatically:(BOOL)arg2 ;
-(void)startPlaybackWithStyle:(long long)arg1 settleAutomatically:(BOOL)arg2 ;
-(void)_setShouldPrepareForVitalityWhenReady:(BOOL)arg1 ;
-(void)_setShouldPlayVitalityWhenReady:(BOOL)arg1 ;
-(SCD_Struct_IS5)trimTimeRange;
-(void)stopPlaybackAnimated:(BOOL)arg1 ;
-(BOOL)isPlaybackAllowed;
-(BOOL)_canPlayVitality;
-(void)_setVitalityTimeoutDate:(id)arg1 ;
-(void)_resetPlaybackFilters;
-(id)_createVitalityBehavior;
-(BOOL)isPlayingVitality;
-(long long)_styleToPlayWhenReady;
-(BOOL)_settleAutomaticallyWhenReady;
-(BOOL)_shouldPrepareForVitalityWhenReady;
-(BOOL)_shouldPlayVitalityWhenReady;
-(NSDate *)_vitalityTimeoutDate;
-(NSSet *)playbackFilters;
-(void)_setPlayingVitality:(BOOL)arg1 ;
-(void)_setHinting:(BOOL)arg1 ;
-(void)_fadeInAudio;
-(void)_updateScaleIfNeeded;
-(void)_updateApertureModeIfNeeded;
-(void)_handlePlaybackFilterDidChange;
-(void)livePhotoSettleBehaviorDidFinish:(id)arg1 ;
-(void)prepareForHintWhenReady;
-(void)playHintWhenReady;
-(void)addPlaybackFilter:(id)arg1 ;
-(void)removePlaybackFilter:(id)arg1 ;
-(void)setVitalityFilter:(ISLivePhotoVitalityFilter *)arg1 ;
-(void)setTargetReadiness:(long long)arg1 ;
-(void)setPlaybackAllowed:(BOOL)arg1 ;
-(void)setSeekTime:(SCD_Struct_IS4)arg1 completion:(/*^block*/id)arg2 ;
-(double)_coalescedPlaybackFilterHintProgress;
-(BOOL)isHinting;
-(void)setImmediatelyShowsPhotoWhenPlaybackEnds:(BOOL)arg1 ;
-(void)setTrimTimeRange:(SCD_Struct_IS5)arg1 ;
-(BOOL)_shouldPrepareForHintWhenReady;
-(void)_setShouldPrepareForHintWhenReady:(BOOL)arg1 ;
@end

