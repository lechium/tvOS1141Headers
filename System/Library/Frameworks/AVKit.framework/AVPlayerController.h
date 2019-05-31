/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIResponder.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSArray, NSObject, NSNumber, AVValueTiming, AVPlayer, NSDictionary, AVDelegateManager, AVTimeRangeCollection, AVTimeRange, NSDate, AVQueuePlayer, AVPlayerItem, AVNavigationMarkersGroup, NSError;

@interface AVPlayerController : UIResponder {

	BOOL _jKeyDown;
	BOOL _kKeyDown;
	BOOL _lKeyDown;
	NSArray* _audioMediaSelectionOptions;
	NSArray* _legibleMediaSelectionOptions;
	long long _savedCaptionAppearanceDisplayType;
	NSObject*<OS_dispatch_queue> _seekQueue;
	BOOL _ignoreRateKeyValueChange;
	id _updateAtMinMaxTimePeriodicObserverToken;
	id _timebaseEffectiveRateObserver;
	id _timebaseTimeJumpedObserver;
	id _playerItemTimeJumpedObserver;
	id _playerItemDidPlayToEndTimeObserver;
	id _audioSessionInterruptionObserver;
	id _currentLocaleDidChangeObserver;
	BOOL _pictureInPictureInterrupted;
	NSNumber* _rateToRestoreAfterAudioSessionInterruptionEnds;
	BOOL _isPictureInPictureSupported;
	/*^block*/id _retryPlayingImmediatelyBlock;
	BOOL _shouldPlayImmediately;
	BOOL _looping;
	long long _actionAtItemEnd;
	BOOL _pendingSeek;
	SCD_Struct_AV1 _toleranceBefore;
	SCD_Struct_AV1 _toleranceAfter;
	BOOL _isScanningForward;
	BOOL _isScanningBackward;
	unsigned long long _scanningCount;
	double _preScanningRate;
	AVValueTiming* _liveStreamMinTiming;
	AVValueTiming* _liveStreamMaxTiming;
	BOOL _liveStreamEventModePossible;
	long long _canUseNetworkResourcesForLiveStreamingWhilePausedCount;
	BOOL _previousValueOfCanUseNetworkResourcesForLiveStreamingWhilePaused;
	BOOL _shouldPlayWhenLikelyToKeepUp;
	id _deviceBatteryStateDidChangeObserver;
	BOOL _deviceBatteryMonitoringWasEnabled;
	BOOL _playingOnSecondScreen;
	long long _allowsIdleSleepPreventionCount;
	BOOL _didPreventSleepWhenStartingExternalPlayback;
	BOOL _atMaxTime;
	BOOL _atMinTime;
	BOOL _scrubbing;
	BOOL _seekingInternal;
	BOOL _seeking;
	BOOL _composable;
	BOOL _hasProtectedContent;
	BOOL _compatibleWithAirPlayVideo;
	BOOL _preventingIdleSystemSleep;
	BOOL _preventingIdleDisplaySleep;
	BOOL _disablingAutomaticTermination;
	BOOL _deviceBatteryChargingOrFull;
	AVPlayer* _player;
	AVValueTiming* _timing;
	AVValueTiming* _minTiming;
	AVValueTiming* _maxTiming;
	double _seekToTime;
	NSDictionary* _metadata;
	NSArray* _availableMetadataFormats;
	double _rateBeforeScrubBegan;
	NSObject*<OS_dispatch_source> _seekTimer;
	long long _bestAvailableVideoResolution;
	long long _bestAvailableVideoRange;
	SCD_Struct_AV1 _seekToTimeInternal;
	SCD_Struct_AV1 _cachedContentDuration;
	SCD_Struct_AV1 _forwardPlaybackEndTime;
	SCD_Struct_AV1 _reversePlaybackEndTime;

}

@property (nonatomic,retain) AVDelegateManager * delegateManager; 
@property (nonatomic,retain) AVTimeRangeCollection * interstitialTimeRangeCollection; 
@property (nonatomic,readonly) long long currentSeekReason; 
@property (nonatomic,readonly) BOOL isSeekingTV; 
@property (nonatomic,readonly) AVTimeRange * timeRangeSeekable; 
@property (nonatomic,readonly) AVTimeRange * timeRangeForNonLivePlayback; 
@property (nonatomic,readonly) AVTimeRange * timeRangeForNavigation; 
@property (nonatomic,readonly) AVTimeRange * displayTimeRangeForNavigation; 
@property (nonatomic,readonly) double contentDurationCached; 
@property (nonatomic,readonly) BOOL isContentDurationIndefinite; 
@property (nonatomic,readonly) double displayedDuration; 
@property (nonatomic,readonly) long long avkitMediaType; 
@property (nonatomic,readonly) BOOL shouldContinuePlaybackInBackground; 
@property (nonatomic,retain) NSDate * programStartDate; 
@property (nonatomic,retain) NSDate * programEndDate; 
@property (nonatomic,readonly) BOOL hasStartAndEndDates; 
@property (nonatomic,readonly) NSDate * exactStartDate; 
@property (nonatomic,readonly) NSDate * exactEndDate; 
@property (nonatomic,readonly) double startTime; 
@property (getter=isEffectiveRateNonZero,nonatomic,readonly) BOOL effectiveRateNonZero; 
@property (nonatomic,readonly) AVQueuePlayer * queuePlayer; 
@property (nonatomic,readonly) BOOL hasMoreEnqueuedContent; 
@property (getter=isLiveStreamEventModePossible,nonatomic,readonly) BOOL liveStreamEventModePossible; 
@property (nonatomic,readonly) double longestSeekableDurationSeenForCurrentItem; 
@property (nonatomic,readonly) AVPlayerItem * currentItem; 
@property (nonatomic,readonly) double currentDisplayTime; 
@property (nonatomic,readonly) AVNavigationMarkersGroup * embeddedChapterNavigationMarkersGroup; 
@property (nonatomic,readonly) NSArray * externalNavigationMarkerGroups; 
@property (nonatomic,readonly) AVNavigationMarkersGroup * primaryNavigationMarkersGroup; 
@property (nonatomic,copy) id didEnterInterstitialTimeRangeBlock; 
@property (nonatomic,copy) id didLeaveInterstitialTimeRangeBlock; 
@property (nonatomic,readonly) BOOL shouldBounceBackAfterScanForwardPastEndTime; 
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen; 
@property (assign,getter=isAtMaxTime,nonatomic) BOOL atMaxTime;                                                      //@synthesize atMaxTime=_atMaxTime - In the implementation block
@property (assign,getter=isAtMinTime,nonatomic) BOOL atMinTime;                                                      //@synthesize atMinTime=_atMinTime - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                      //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVValueTiming * timing;                                                                 //@synthesize timing=_timing - In the implementation block
@property (nonatomic,retain) AVValueTiming * minTiming;                                                              //@synthesize minTiming=_minTiming - In the implementation block
@property (nonatomic,retain) AVValueTiming * maxTiming;                                                              //@synthesize maxTiming=_maxTiming - In the implementation block
@property (getter=isSeekingInternal) BOOL seekingInternal;                                                           //@synthesize seekingInternal=_seekingInternal - In the implementation block
@property (assign,getter=isSeeking,nonatomic) BOOL seeking;                                                          //@synthesize seeking=_seeking - In the implementation block
@property (assign) SCD_Struct_AV1 seekToTimeInternal;                                                                //@synthesize seekToTimeInternal=_seekToTimeInternal - In the implementation block
@property (assign,nonatomic) double seekToTime;                                                                      //@synthesize seekToTime=_seekToTime - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                                                //@synthesize metadata=_metadata - In the implementation block
@property (assign,getter=isComposable,nonatomic) BOOL composable;                                                    //@synthesize composable=_composable - In the implementation block
@property (assign,nonatomic) BOOL hasProtectedContent;                                                               //@synthesize hasProtectedContent=_hasProtectedContent - In the implementation block
@property (nonatomic,retain) NSArray * availableMetadataFormats;                                                     //@synthesize availableMetadataFormats=_availableMetadataFormats - In the implementation block
@property (assign,getter=isCompatibleWithAirPlayVideo,nonatomic) BOOL compatibleWithAirPlayVideo;                    //@synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo - In the implementation block
@property (assign,nonatomic) double rateBeforeScrubBegan;                                                            //@synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan - In the implementation block
@property (assign,getter=isPreventingIdleSystemSleep,nonatomic) BOOL preventingIdleSystemSleep;                      //@synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep - In the implementation block
@property (assign,getter=isPreventingIdleDisplaySleep,nonatomic) BOOL preventingIdleDisplaySleep;                    //@synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep - In the implementation block
@property (assign,getter=isDisablingAutomaticTermination,nonatomic) BOOL disablingAutomaticTermination;              //@synthesize disablingAutomaticTermination=_disablingAutomaticTermination - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV1 cachedContentDuration;                                                   //@synthesize cachedContentDuration=_cachedContentDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV1 forwardPlaybackEndTime;                                                  //@synthesize forwardPlaybackEndTime=_forwardPlaybackEndTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_AV1 reversePlaybackEndTime;                                                  //@synthesize reversePlaybackEndTime=_reversePlaybackEndTime - In the implementation block
@property (assign,getter=isDeviceBatteryChargingOrFull,nonatomic) BOOL deviceBatteryChargingOrFull;                  //@synthesize deviceBatteryChargingOrFull=_deviceBatteryChargingOrFull - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreventIdleDisplaySleep; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> seekTimer;                                              //@synthesize seekTimer=_seekTimer - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate; 
@property (assign,nonatomic) long long bestAvailableVideoResolution;                                                 //@synthesize bestAvailableVideoResolution=_bestAvailableVideoResolution - In the implementation block
@property (assign,nonatomic) long long bestAvailableVideoRange;                                                      //@synthesize bestAvailableVideoRange=_bestAvailableVideoRange - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
+(id)keyPathsForValuesAffectingMuted;
+(void)initialize;
+(id)keyPathsForValuesAffectingStatus;
+(id)keyPathsForValuesAffectingError;
+(id)keyPathsForValuesAffectingSeekableTimeRanges;
+(id)keyPathsForValuesAffectingCompletelySeekable;
+(id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+(id)keyPathsForValuesAffectingRate;
+(id)keyPathsForValuesAffectingCanPlay;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingCanPause;
+(id)keyPathsForValuesAffectingCanTogglePlayback;
+(id)keyPathsForValuesAffectingHasContent;
+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingMinTime;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingLoadedTimeRanges;
+(id)keyPathsForValuesAffectingHasEnabledAudio;
+(id)keyPathsForValuesAffectingHasVideo;
+(id)keyPathsForValuesAffectingHasEnabledVideo;
+(id)keyPathsForValuesAffectingHasContentChapters;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+(id)keyPathsForValuesAffectingHasTrimmableContent;
+(id)keyPathsForValuesAffectingHasShareableContent;
+(id)keyPathsForValuesAffectingTimeControlStatus;
+(id)keyPathsForValuesAffectingCanSeek;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanScanBackward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingCanSeekFrameForward;
+(id)keyPathsForValuesAffectingCanSeekFrameBackward;
+(id)keyPathsForValuesAffectingAllowsExternalPlayback;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+(id)keyPathsForValuesAffectingExternalPlaybackActive;
+(id)keyPathsForValuesAffectingExternalPlaybackType;
+(id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingSegmentDuration;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
-(BOOL)isStreaming;
-(void)play:(id)arg1 ;
-(void)setReversePlaybackEndTime:(SCD_Struct_AV1)arg1 ;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithAirPlayVideo;
-(long long)timeControlStatus;
-(SCD_Struct_AV1)reversePlaybackEndTime;
-(BOOL)playerItem:(id)arg1 shouldSeekToTime:(SCD_Struct_AV1*)arg2 toleranceBefore:(SCD_Struct_AV1*)arg3 toleranceAfter:(SCD_Struct_AV1*)arg4 ;
-(NSDate *)currentDate;
-(BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg1 ;
-(BOOL)hasEnabledVideo;
-(BOOL)hasEnabledAudio;
-(id)audioOptions;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSError *)error;
-(id)init;
-(void)dealloc;
-(double)startTime;
-(BOOL)hasContent;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isLooping;
-(AVPlayerItem *)currentItem;
-(double)currentTime;
-(long long)status;
-(BOOL)canPause;
-(float)nominalFrameRate;
-(id)initWithPlayer:(id)arg1 ;
-(BOOL)isExternalPlaybackActive;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(SCD_Struct_AV1)forwardPlaybackEndTime;
-(void)setForwardPlaybackEndTime:(SCD_Struct_AV1)arg1 ;
-(id)loadedTimeRanges;
-(id)seekableTimeRanges;
-(BOOL)allowsExternalPlayback;
-(BOOL)canSeek;
-(double)maxTime;
-(BOOL)isPlaying;
-(long long)externalPlaybackType;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)seekToTime:(double)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(AVQueuePlayer *)queuePlayer;
-(BOOL)isScrubbing;
-(BOOL)hasProtectedContent;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(BOOL)hasVideo;
-(BOOL)isSeeking;
-(void)setSeeking:(BOOL)arg1 ;
-(double)displayTimeFromTime:(double)arg1 ;
-(double)timeFromDisplayTime:(double)arg1 ;
-(id)kvoPlayer;
-(id)kvoPlayerItem;
-(AVDelegateManager *)delegateManager;
-(void)setDelegateManager:(AVDelegateManager *)arg1 ;
-(AVTimeRangeCollection *)interstitialTimeRangeCollection;
-(void)setInterstitialTimeRangeCollection:(AVTimeRangeCollection *)arg1 ;
-(AVTimeRange *)timeRangeSeekable;
-(double)longestSeekableDurationSeenForCurrentItem;
-(long long)currentSeekReason;
-(double)contentDurationCached;
-(BOOL)isContentDurationIndefinite;
-(NSDate *)programStartDate;
-(void)setProgramStartDate:(NSDate *)arg1 ;
-(NSDate *)programEndDate;
-(void)setProgramEndDate:(NSDate *)arg1 ;
-(id)clientSpecifiedDate;
-(void)setClientSpecifiedDate:(id)arg1 ;
-(id)didEnterInterstitialTimeRangeBlock;
-(void)setDidEnterInterstitialTimeRangeBlock:(id)arg1 ;
-(id)didLeaveInterstitialTimeRangeBlock;
-(void)setDidLeaveInterstitialTimeRangeBlock:(id)arg1 ;
-(id)tvExtras;
-(void)_updateInterstitialTimeRangeCollection;
-(void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;
-(void)_nukeTVExtras;
-(void)_updateNavigationMarkers;
-(void)updateStartAndEndDates;
-(void)_updateTimeRanges;
-(void)_stopObservingInterstitialTimeRanges;
-(void)_sendDidLeaveActiveInterstitialTimeRange;
-(void)_startObservingInterstitialTimeRanges;
-(AVTimeRange *)timeRangeForNonLivePlayback;
-(AVTimeRange *)timeRangeForNavigation;
-(double)displayedDuration;
-(BOOL)isLiveStreamEventModePossible;
-(BOOL)hasMoreEnqueuedContent;
-(long long)avkitMediaType;
-(void)_willBeginSeek;
-(void)_didEndSeek;
-(void)_willRequestSeek;
-(void)_didRequestSeek;
-(void)seekToTime:(double)arg1 seekReason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)seekToDate:(id)arg1 seekReason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)playbackEndTime;
-(BOOL)hasStartAndEndDates;
-(void)requestPlayWithCompletion:(/*^block*/id)arg1 ;
-(void)requestSeekToDate:(id)arg1 seekReason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestSeekToTime:(double)arg1 seekReason:(long long)arg2 permissionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)requestNavigateToTime:(double)arg1 fromTime:(double)arg2 reason:(long long)arg3 playWhenReady:(BOOL)arg4 permissionHandler:(/*^block*/id)arg5 seekCompletion:(/*^block*/id)arg6 ;
-(void)_sendDidEnterInterstitialTimeRange:(id)arg1 ;
-(void)_sendInterstitialBoundaryNotificationsForTime:(double)arg1 ;
-(void)sendPendingInterstitialBoundaryNotificationIfNeeded;
-(void)_loadEmbeddedChapterNavigationMarkersGroupAsynchronously:(/*^block*/id)arg1 ;
-(BOOL)isFirstUnfilteredNavigationGroupChapters;
-(BOOL)isFirstFilteredNavigationGroupChapters;
-(NSArray *)externalNavigationMarkerGroups;
-(AVNavigationMarkersGroup *)embeddedChapterNavigationMarkersGroup;
-(id)initWithTVPlayer:(id)arg1 ;
-(void)invalidateTV;
-(AVTimeRange *)displayTimeRangeForNavigation;
-(double)currentDisplayTime;
-(BOOL)isEffectiveRateNonZero;
-(void)setEffectiveRateNonZero:(BOOL)arg1 ;
-(NSDate *)exactStartDate;
-(NSDate *)exactEndDate;
-(BOOL)shouldBounceBackAfterScanForwardPastEndTime;
-(double)bounceBackReturningDisplayTime;
-(void)loadAspectRatio:(/*^block*/id)arg1 ;
-(BOOL)shouldContinuePlaybackInBackground;
-(BOOL)isSeekingTV;
-(void)requestPauseWithCompletion:(/*^block*/id)arg1 ;
-(void)requestSeekToTime:(double)arg1 reason:(long long)arg2 playWhenReady:(BOOL)arg3 ;
-(void)requestSeekToDate:(id)arg1 reason:(long long)arg2 playWhenReady:(BOOL)arg3 ;
-(void)requestNavigateToDate:(id)arg1 fromDate:(id)arg2 reason:(long long)arg3 playWhenReady:(BOOL)arg4 permissionHandler:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setLimitReadAheadIfAllowed:(BOOL)arg1 ;
-(id)externalChapterNavigationMarkersGroup;
-(AVNavigationMarkersGroup *)primaryNavigationMarkersGroup;
-(id)_videoAssetTracks;
-(void)_updateVideoResolutionAndRange;
-(void)updateVideoResolutionAndRange;
-(void)togglePlayback:(id)arg1 ;
-(BOOL)isPictureInPicturePossible;
-(id)_queuePlayer;
-(BOOL)isCompletelySeekable;
-(BOOL)shouldPreventIdleDisplaySleep;
-(void)_retryPlayImmediatelyIfNeeded;
-(BOOL)canPlayImmediately;
-(void)autoplay:(id)arg1 ;
-(BOOL)canTogglePlayback;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)setLooping:(BOOL)arg1 ;
-(void)updateAtMinMaxTime;
-(void)increaseVolume:(id)arg1 ;
-(void)decreaseVolume:(id)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(double)contentDuration;
-(CGSize)contentDimensions;
-(double)minTime;
-(void)setMinTime:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(double)contentDurationWithinEndTimes;
-(double)currentTimeWithinEndTimes;
-(BOOL)hasContentChapters;
-(BOOL)hasLiveStreamingContent;
-(BOOL)hasSeekableLiveStreamingContent;
-(BOOL)hasTrimmableContent;
-(BOOL)hasShareableContent;
-(BOOL)_isRestrictedFromSavingPlayerItem:(id)arg1 ;
-(BOOL)_isMarkedNotSerializablePlayerItem:(id)arg1 ;
-(void)beginScrubbing;
-(void)endScrubbing;
-(void)seekToCMTime:(SCD_Struct_AV1)arg1 toleranceBefore:(SCD_Struct_AV1)arg2 toleranceAfter:(SCD_Struct_AV1)arg3 ;
-(void)throttledSeekToTime:(SCD_Struct_AV1)arg1 toleranceBefore:(SCD_Struct_AV1)arg2 toleranceAfter:(SCD_Struct_AV1)arg3 ;
-(void)actuallySeekToTime;
-(void)seekByTimeInterval:(double)arg1 ;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(BOOL)canScanForward;
-(void)scanForward:(id)arg1 ;
-(void)beginScanningForward:(id)arg1 ;
-(void)_updateScanningForwardRate;
-(void)endScanningForward:(id)arg1 ;
-(BOOL)canScanBackward;
-(void)scanBackward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)_updateScanningBackwardRate;
-(void)endScanningBackward:(id)arg1 ;
-(BOOL)canSeekToBeginning;
-(void)seekToBeginning:(id)arg1 ;
-(BOOL)canSeekToEnd;
-(void)seekToEnd:(id)arg1 ;
-(BOOL)canSeekFrameForward;
-(void)seekFrameForward:(id)arg1 ;
-(BOOL)canSeekFrameBackward;
-(void)seekFrameBackward:(id)arg1 ;
-(void)seekOrStepByFrameCount:(long long)arg1 ;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(void)updateMinMaxTiming;
-(BOOL)isPlayingOnExternalScreen;
-(BOOL)isPlayingOnSecondScreen;
-(id)externalPlaybackAirPlayDeviceLocalizedName;
-(BOOL)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(BOOL)arg1 ;
-(double)segmentDuration;
-(void)startUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)stopUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)_cancelPendingSeeksIfNeeded;
-(id)scanningDelays;
-(BOOL)isAtMaxTime;
-(void)setAtMaxTime:(BOOL)arg1 ;
-(BOOL)isAtMinTime;
-(void)setAtMinTime:(BOOL)arg1 ;
-(AVValueTiming *)minTiming;
-(void)setMinTiming:(AVValueTiming *)arg1 ;
-(AVValueTiming *)maxTiming;
-(void)setMaxTiming:(AVValueTiming *)arg1 ;
-(BOOL)isSeekingInternal;
-(void)setSeekingInternal:(BOOL)arg1 ;
-(SCD_Struct_AV1)seekToTimeInternal;
-(void)setSeekToTimeInternal:(SCD_Struct_AV1)arg1 ;
-(double)seekToTime;
-(void)setSeekToTime:(double)arg1 ;
-(void)setComposable:(BOOL)arg1 ;
-(void)setHasProtectedContent:(BOOL)arg1 ;
-(void)setAvailableMetadataFormats:(NSArray *)arg1 ;
-(void)setCompatibleWithAirPlayVideo:(BOOL)arg1 ;
-(double)rateBeforeScrubBegan;
-(void)setRateBeforeScrubBegan:(double)arg1 ;
-(BOOL)isPreventingIdleSystemSleep;
-(void)setPreventingIdleSystemSleep:(BOOL)arg1 ;
-(BOOL)isPreventingIdleDisplaySleep;
-(void)setPreventingIdleDisplaySleep:(BOOL)arg1 ;
-(BOOL)isDisablingAutomaticTermination;
-(void)setDisablingAutomaticTermination:(BOOL)arg1 ;
-(SCD_Struct_AV1)cachedContentDuration;
-(void)setCachedContentDuration:(SCD_Struct_AV1)arg1 ;
-(BOOL)isDeviceBatteryChargingOrFull;
-(void)setDeviceBatteryChargingOrFull:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)seekTimer;
-(long long)bestAvailableVideoResolution;
-(void)setBestAvailableVideoResolution:(long long)arg1 ;
-(long long)bestAvailableVideoRange;
-(void)setBestAvailableVideoRange:(long long)arg1 ;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(BOOL)hasAudioMediaSelectionOptions;
-(BOOL)hasLegibleMediaSelectionOptions;
-(BOOL)hasMediaSelectionOptions;
-(id)currentAudioMediaSelectionOption;
-(id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
-(void)setCurrentAudioMediaSelectionOption:(id)arg1 ;
-(id)currentLegibleMediaSelectionOption;
-(id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg1 ;
-(void)toggleCaptions;
-(void)reloadOptions;
-(void)reloadAudioOptions;
-(id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1 ;
-(void)reloadLegibleOptions;
-(void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2 ;
-(id)legibleMediaSelectionOptions;
-(void)_disableLegibleMediaSelectionOptions:(id)arg1 ;
-(void)_enableAutoMediaSelection:(id)arg1 ;
-(void)setSavedCaptionAppearanceDisplayType:(long long)arg1 ;
-(long long)savedCaptionAppearanceDisplayType;
-(id)legibleOptions;
-(void)setAudioMediaSelectionOptions:(id)arg1 ;
-(void)setLegibleMediaSelectionOptions:(id)arg1 ;
-(id)audioMediaSelectionOptions;
-(id)_optionsForGroup:(id)arg1 ;
-(void)setTiming:(AVValueTiming *)arg1 ;
-(AVValueTiming *)timing;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setRate:(double)arg1 ;
-(AVPlayer *)player;
-(double)rate;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)pause:(id)arg1 ;
-(BOOL)isMuted;
-(BOOL)canPlay;
-(NSArray *)availableMetadataFormats;
-(void)_durationDidChange;
-(void)updateTiming;
-(void)setScrubbing:(BOOL)arg1 ;
@end

