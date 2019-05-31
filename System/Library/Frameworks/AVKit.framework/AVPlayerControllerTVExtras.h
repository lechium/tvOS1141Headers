/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVKeyValueObserverCollection, AVDelegateManager, AVTimeRangeCollection, AVTimeRange, NSDate, _AVChapterInfo, NSArray, AVNavigationMarkersGroup, AVPlayerItem;

@interface AVPlayerControllerTVExtras : NSObject {

	Aq _seekCount;
	Aq _seekRequestCount;
	BOOL _isContentDurationIndefinite;
	BOOL _isProgramStartDateExact;
	BOOL _isProgramEndDateExact;
	BOOL _liveStreamEventModePossible;
	BOOL _loadingChapterInfo;
	BOOL _haveLoadedEmbeddedChapters;
	BOOL _lastObservedEffectiveRateNonZero;
	BOOL _resumePlaybackAfterNextSuccessfulSeek;
	AVKeyValueObserverCollection* _kvoPlayer;
	AVKeyValueObserverCollection* _kvoPlayerItem;
	AVDelegateManager* _delegateManager;
	AVTimeRangeCollection* _interstitialTimeRangeCollection;
	AVTimeRange* _interstitialTimeRangeInProgress;
	AVTimeRange* _timeRangeSeekable;
	double _longestSeekableDurationSeenForCurrentItem;
	long long _currentSeekReason;
	double _contentDurationCached;
	NSDate* _programStartDate;
	NSDate* _programEndDate;
	NSDate* _clientSpecifiedDate;
	id _interstitialBoundaryTimeObserver;
	/*^block*/id _didEnterInterstitialTimeRangeBlock;
	/*^block*/id _didLeaveInterstitialTimeRangeBlock;
	_AVChapterInfo* _chapterInfo;
	NSArray* _filteredNavigationMarkerGroups;
	AVNavigationMarkersGroup* _filteredEmbeddedChaptersNavigationMarkersGroup;
	AVPlayerItem* _currentPlayerItemForPlayerItemDelegate;

}

@property (nonatomic,retain) AVKeyValueObserverCollection * kvoPlayer;                                                     //@synthesize kvoPlayer=_kvoPlayer - In the implementation block
@property (nonatomic,retain) AVKeyValueObserverCollection * kvoPlayerItem;                                                 //@synthesize kvoPlayerItem=_kvoPlayerItem - In the implementation block
@property (nonatomic,retain) AVDelegateManager * delegateManager;                                                          //@synthesize delegateManager=_delegateManager - In the implementation block
@property (nonatomic,retain) AVTimeRangeCollection * interstitialTimeRangeCollection;                                      //@synthesize interstitialTimeRangeCollection=_interstitialTimeRangeCollection - In the implementation block
@property (nonatomic,retain) AVTimeRange * interstitialTimeRangeInProgress;                                                //@synthesize interstitialTimeRangeInProgress=_interstitialTimeRangeInProgress - In the implementation block
@property (nonatomic,retain) AVTimeRange * timeRangeSeekable;                                                              //@synthesize timeRangeSeekable=_timeRangeSeekable - In the implementation block
@property (assign,nonatomic) double longestSeekableDurationSeenForCurrentItem;                                             //@synthesize longestSeekableDurationSeenForCurrentItem=_longestSeekableDurationSeenForCurrentItem - In the implementation block
@property (assign,nonatomic) long long currentSeekReason;                                                                  //@synthesize currentSeekReason=_currentSeekReason - In the implementation block
@property (assign,nonatomic) double contentDurationCached;                                                                 //@synthesize contentDurationCached=_contentDurationCached - In the implementation block
@property (assign,nonatomic) BOOL isContentDurationIndefinite;                                                             //@synthesize isContentDurationIndefinite=_isContentDurationIndefinite - In the implementation block
@property (nonatomic,retain) NSDate * programStartDate;                                                                    //@synthesize programStartDate=_programStartDate - In the implementation block
@property (assign,nonatomic) BOOL isProgramStartDateExact;                                                                 //@synthesize isProgramStartDateExact=_isProgramStartDateExact - In the implementation block
@property (nonatomic,retain) NSDate * programEndDate;                                                                      //@synthesize programEndDate=_programEndDate - In the implementation block
@property (nonatomic,retain) NSDate * clientSpecifiedDate;                                                                 //@synthesize clientSpecifiedDate=_clientSpecifiedDate - In the implementation block
@property (assign,nonatomic) BOOL isProgramEndDateExact;                                                                   //@synthesize isProgramEndDateExact=_isProgramEndDateExact - In the implementation block
@property (nonatomic,retain) id interstitialBoundaryTimeObserver;                                                          //@synthesize interstitialBoundaryTimeObserver=_interstitialBoundaryTimeObserver - In the implementation block
@property (nonatomic,copy) id didEnterInterstitialTimeRangeBlock;                                                          //@synthesize didEnterInterstitialTimeRangeBlock=_didEnterInterstitialTimeRangeBlock - In the implementation block
@property (nonatomic,copy) id didLeaveInterstitialTimeRangeBlock;                                                          //@synthesize didLeaveInterstitialTimeRangeBlock=_didLeaveInterstitialTimeRangeBlock - In the implementation block
@property (assign,nonatomic) BOOL liveStreamEventModePossible;                                                             //@synthesize liveStreamEventModePossible=_liveStreamEventModePossible - In the implementation block
@property (nonatomic,retain) _AVChapterInfo * chapterInfo;                                                                 //@synthesize chapterInfo=_chapterInfo - In the implementation block
@property (getter=isLoadingChapterInfo) BOOL loadingChapterInfo;                                                           //@synthesize loadingChapterInfo=_loadingChapterInfo - In the implementation block
@property (assign,nonatomic) BOOL haveLoadedEmbeddedChapters;                                                              //@synthesize haveLoadedEmbeddedChapters=_haveLoadedEmbeddedChapters - In the implementation block
@property (nonatomic,retain) NSArray * filteredNavigationMarkerGroups;                                                     //@synthesize filteredNavigationMarkerGroups=_filteredNavigationMarkerGroups - In the implementation block
@property (nonatomic,retain) AVNavigationMarkersGroup * filteredEmbeddedChaptersNavigationMarkersGroup;                    //@synthesize filteredEmbeddedChaptersNavigationMarkersGroup=_filteredEmbeddedChaptersNavigationMarkersGroup - In the implementation block
@property (assign,getter=isLastObservedEffectiveRateNonZero,nonatomic) BOOL lastObservedEffectiveRateNonZero;              //@synthesize lastObservedEffectiveRateNonZero=_lastObservedEffectiveRateNonZero - In the implementation block
@property (readonly) BOOL isSeeking; 
@property (readonly) BOOL isRequestingSeek; 
@property (assign,nonatomic) BOOL resumePlaybackAfterNextSuccessfulSeek;                                                   //@synthesize resumePlaybackAfterNextSuccessfulSeek=_resumePlaybackAfterNextSuccessfulSeek - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerItem * currentPlayerItemForPlayerItemDelegate;                                 //@synthesize currentPlayerItemForPlayerItemDelegate=_currentPlayerItemForPlayerItemDelegate - In the implementation block
-(id)init;
-(BOOL)isSeeking;
-(void)willBeginSeek;
-(void)didEndSeek;
-(BOOL)isRequestingSeek;
-(void)willRequestSeek;
-(void)didRequestSeek;
-(AVKeyValueObserverCollection *)kvoPlayer;
-(void)setKvoPlayer:(AVKeyValueObserverCollection *)arg1 ;
-(AVKeyValueObserverCollection *)kvoPlayerItem;
-(void)setKvoPlayerItem:(AVKeyValueObserverCollection *)arg1 ;
-(AVDelegateManager *)delegateManager;
-(void)setDelegateManager:(AVDelegateManager *)arg1 ;
-(AVTimeRangeCollection *)interstitialTimeRangeCollection;
-(void)setInterstitialTimeRangeCollection:(AVTimeRangeCollection *)arg1 ;
-(AVTimeRange *)interstitialTimeRangeInProgress;
-(void)setInterstitialTimeRangeInProgress:(AVTimeRange *)arg1 ;
-(AVTimeRange *)timeRangeSeekable;
-(void)setTimeRangeSeekable:(AVTimeRange *)arg1 ;
-(double)longestSeekableDurationSeenForCurrentItem;
-(void)setLongestSeekableDurationSeenForCurrentItem:(double)arg1 ;
-(long long)currentSeekReason;
-(void)setCurrentSeekReason:(long long)arg1 ;
-(double)contentDurationCached;
-(void)setContentDurationCached:(double)arg1 ;
-(BOOL)isContentDurationIndefinite;
-(void)setIsContentDurationIndefinite:(BOOL)arg1 ;
-(NSDate *)programStartDate;
-(void)setProgramStartDate:(NSDate *)arg1 ;
-(BOOL)isProgramStartDateExact;
-(void)setIsProgramStartDateExact:(BOOL)arg1 ;
-(NSDate *)programEndDate;
-(void)setProgramEndDate:(NSDate *)arg1 ;
-(NSDate *)clientSpecifiedDate;
-(void)setClientSpecifiedDate:(NSDate *)arg1 ;
-(BOOL)isProgramEndDateExact;
-(void)setIsProgramEndDateExact:(BOOL)arg1 ;
-(id)interstitialBoundaryTimeObserver;
-(void)setInterstitialBoundaryTimeObserver:(id)arg1 ;
-(id)didEnterInterstitialTimeRangeBlock;
-(void)setDidEnterInterstitialTimeRangeBlock:(id)arg1 ;
-(id)didLeaveInterstitialTimeRangeBlock;
-(void)setDidLeaveInterstitialTimeRangeBlock:(id)arg1 ;
-(BOOL)liveStreamEventModePossible;
-(void)setLiveStreamEventModePossible:(BOOL)arg1 ;
-(_AVChapterInfo *)chapterInfo;
-(void)setChapterInfo:(_AVChapterInfo *)arg1 ;
-(BOOL)isLoadingChapterInfo;
-(void)setLoadingChapterInfo:(BOOL)arg1 ;
-(BOOL)haveLoadedEmbeddedChapters;
-(void)setHaveLoadedEmbeddedChapters:(BOOL)arg1 ;
-(NSArray *)filteredNavigationMarkerGroups;
-(void)setFilteredNavigationMarkerGroups:(NSArray *)arg1 ;
-(AVNavigationMarkersGroup *)filteredEmbeddedChaptersNavigationMarkersGroup;
-(void)setFilteredEmbeddedChaptersNavigationMarkersGroup:(AVNavigationMarkersGroup *)arg1 ;
-(BOOL)isLastObservedEffectiveRateNonZero;
-(void)setLastObservedEffectiveRateNonZero:(BOOL)arg1 ;
-(BOOL)resumePlaybackAfterNextSuccessfulSeek;
-(void)setResumePlaybackAfterNextSuccessfulSeek:(BOOL)arg1 ;
-(AVPlayerItem *)currentPlayerItemForPlayerItemDelegate;
-(void)setCurrentPlayerItemForPlayerItemDelegate:(AVPlayerItem *)arg1 ;
@end

