/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIMovieScrubberDelegate.h>
#import <UIKit/UIMovieScrubberDataSource.h>
#import <libobjc.A.dylib/PLMoviePlayerControllerDelegate.h>
#import <libobjc.A.dylib/PLSlalomRegionEditorDelegate.h>

@protocol PLVideoViewDelegate, OS_dispatch_queue, PLVideoOverlayButton;
@class PLManagedAsset, NSString, NSURL, PLPhotoTileViewController, PLVideoPosterFrameView, UIView, PLVideoEditingOverlayView, UIImage, NSTimer, NSDictionary, PLPhotoBakedThumbnails, AVAssetExportSession, PLProgressStack, PLMoviePlayerController, NSArray, NSLock, NSObject, NSMutableArray, UIMovieScrubber, PLSlalomRegionEditor, NSMutableDictionary, UIActivityIndicatorView, PFVideoAVObjectBuilder, PFVideoAdjustments, UIImageView;

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate, PLSlalomRegionEditorDelegate> {

	PLManagedAsset* _videoCameraImage;
	NSString* _pathToOriginalVideo;
	NSURL* _videoURL;
	PLPhotoTileViewController* _imageTile;
	PLVideoPosterFrameView* _posterFrameView;
	UIView* _videoOverlayBackgroundView;
	PLVideoEditingOverlayView* _trimMessageView;
	UIImage* _posterFrameImage;
	UIImage* _snapshotImage;
	double _scrubberWidth;
	long long _scaleMode;
	UIView* _scrubberBackgroundView;
	UIView* _scrubberTitleView;
	NSTimer* _scrubberUpdateTimer;
	NSDictionary* _thumbnailOptionsDict;
	CGSize _thumbnailSize;
	PLPhotoBakedThumbnails* _bakedLandscapeThumbnails;
	PLPhotoBakedThumbnails* _bakedPortraitThumbnails;
	AVAssetExportSession* _exportSession;
	double _remakerStartTime;
	double _remakerEndTime;
	NSString* _trimmedPath;
	NSString* _videoPathAfterTrim;
	NSTimer* _trimProgressTimer;
	PLManagedAsset* _trimmedVideoClip;
	PLProgressStack* _trimProgressStack;
	float _progress;
	PLMoviePlayerController* _moviePlayer;
	id<PLVideoViewDelegate> _delegate;
	double _maximumTrimLength;
	double _lastScrubbedValue;
	double _lastActualValue;
	double _duration;
	double _cachedCurrentPlaybackTime;
	NSArray* _imageGenerators;
	NSLock* _thumbnailReqlock;
	NSObject*<OS_dispatch_queue> _thumbnailReqQueue;
	AVAssetExportSession* _airplayExportSession;
	BOOL _isAirPlay;
	unsigned _showsPlayButton : 1;
	unsigned _showsScrubber : 1;
	unsigned _canEdit : 1;
	unsigned _loadMediaImmediately : 1;
	unsigned _scrubberIsSubview : 1;
	unsigned _viewWillAppear : 1;
	unsigned _didLayout : 1;
	unsigned _wasPlayingBeforeScrub : 1;
	unsigned _playFromBeginning : 1;
	unsigned _needsReloadScrubberThumbnails : 1;
	unsigned _playing : 1;
	unsigned _editing : 1;
	unsigned _disableEditAfterTrim : 1;
	unsigned _scrubbing : 1;
	unsigned _scrubbingToRight : 1;
	unsigned _deleteOriginalFile : 1;
	unsigned _passthroughTrimming : 1;
	unsigned _preparingMoviePlayer : 1;
	unsigned _preparedMoviePlayer : 1;
	unsigned _isMoviePlayerActive : 1;
	unsigned _moviePlayerIsReady : 1;
	unsigned _moviePlayerIsReadyForDisplay : 1;
	unsigned _moviePlayerDidBuffer : 1;
	unsigned _showingOverlay : 1;
	unsigned _showingScrubber : 1;
	unsigned _showScrubberWhenMovieIsReady : 1;
	unsigned _playbackDidBegin : 1;
	unsigned _loadScrubberThumbnails : 1;
	unsigned _videoIsLandscape : 1;
	unsigned _canCreateMetadata : 1;
	unsigned _createPreviewPosterFrame : 1;
	unsigned _isTrimming : 1;
	unsigned _wasTrimmedInPlace : 1;
	unsigned _remakingFailed : 1;
	NSMutableArray* _summaryThumbnailRequestTimestamps;
	NSMutableArray* _detailThumbnailRequestTimestamps;
	UIMovieScrubber* _scrubber;
	PLSlalomRegionEditor* _slalomRegionEditor;
	NSMutableDictionary* _cachedThumbnails;
	NSArray* _landscapeSummaryThumbnailTimestamps;
	NSArray* _portraitSummaryThumbnailTimestamps;
	UIActivityIndicatorView* _spinner;
	UIActivityIndicatorView* _shadowSpinner;
	UIView*<PLVideoOverlayButton> _videoOverlayPlayButton;
	BOOL _useLandscapeCache;
	double _videoStreamingStartTime;
	BOOL _allowSlalomEditor;
	BOOL _prepareMoviePlayerForScrubberAutomatically;
	BOOL _shouldPlayVideoWhenViewAppears;
	BOOL __didInsertMoviePlayerView;
	BOOL __didEditSlalom;
	BOOL __isFetchingVideo;
	BOOL __localVideoUnavailable;
	BOOL __canAttemptFetchingVideoDerivative;
	BOOL __attemptFetchingVideoDerivative;
	BOOL __slalomRegionEditorCreatedForScrubber;
	PFVideoAVObjectBuilder* __videoAVObjectBuilder;
	long long __expectedNotificationsCount;
	PFVideoAdjustments* __adjustmentsToCommit;

}

@property (nonatomic,retain,readonly) NSString * _pathForVideoPreviewFile; 
@property (nonatomic,retain,readonly) NSString * _pathForPrebakedLandscapeScrubberThumbnails; 
@property (nonatomic,retain,readonly) NSString * _pathForPrebakedPortraitScrubberThumbnails; 
@property (nonatomic,readonly) BOOL _mediaIsPlayable; 
@property (nonatomic,readonly) BOOL _didSetPhotoData; 
@property (assign,nonatomic) BOOL _didInsertMoviePlayerView;                                                                     //@synthesize _didInsertMoviePlayerView=__didInsertMoviePlayerView - In the implementation block
@property (assign,setter=_setDidEditSlalom:,nonatomic) BOOL _didEditSlalom;                                                      //@synthesize _didEditSlalom=__didEditSlalom - In the implementation block
@property (nonatomic,readonly) PFVideoAVObjectBuilder * _videoAVObjectBuilder;                                                   //@synthesize _videoAVObjectBuilder=__videoAVObjectBuilder - In the implementation block
@property (nonatomic,readonly) BOOL _isFetchingVideo;                                                                            //@synthesize _isFetchingVideo=__isFetchingVideo - In the implementation block
@property (assign,setter=_setLocalVideoUnavailable:,nonatomic) BOOL _localVideoUnavailable;                                      //@synthesize _localVideoUnavailable=__localVideoUnavailable - In the implementation block
@property (nonatomic,readonly) long long _expectedNotificationsCount;                                                            //@synthesize _expectedNotificationsCount=__expectedNotificationsCount - In the implementation block
@property (nonatomic,readonly) PFVideoAdjustments * _adjustmentsToCommit;                                                        //@synthesize _adjustmentsToCommit=__adjustmentsToCommit - In the implementation block
@property (assign,setter=_setCanAttemptFetchingVideoDerivative:,nonatomic) BOOL _canAttemptFetchingVideoDerivative;              //@synthesize _canAttemptFetchingVideoDerivative=__canAttemptFetchingVideoDerivative - In the implementation block
@property (assign,setter=_setAttemptFetchingVideoDerivative:,nonatomic) BOOL _attemptFetchingVideoDerivative;                    //@synthesize _attemptFetchingVideoDerivative=__attemptFetchingVideoDerivative - In the implementation block
@property (nonatomic,retain) PLProgressStack * trimProgressStack;                                                                //@synthesize trimProgressStack=_trimProgressStack - In the implementation block
@property (nonatomic,readonly) BOOL _slalomRegionEditorCreatedForScrubber;                                                       //@synthesize _slalomRegionEditorCreatedForScrubber=__slalomRegionEditorCreatedForScrubber - In the implementation block
@property (nonatomic,retain,readonly) NSString * pathForVideoFile; 
@property (assign,nonatomic) id<PLVideoViewDelegate> delegate; 
@property (assign,nonatomic) PLPhotoTileViewController * imageTile; 
@property (nonatomic,readonly) PLManagedAsset * videoCameraImage; 
@property (nonatomic,retain) PLManagedAsset * trimmedVideoClip; 
@property (assign,nonatomic) BOOL allowSlalomEditor;                                                                             //@synthesize allowSlalomEditor=_allowSlalomEditor - In the implementation block
@property (nonatomic,readonly) UIView * scrubberBackgroundView;                                                                  //@synthesize scrubberBackgroundView=_scrubberBackgroundView - In the implementation block
@property (nonatomic,readonly) UIImage * posterFrameImage; 
@property (nonatomic,retain,readonly) PLVideoPosterFrameView * posterFrameView;                                                  //@synthesize posterFrameView=_posterFrameView - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double endTime; 
@property (nonatomic,readonly) NSString * videoPathAfterTrim; 
@property (nonatomic,readonly) UIImageView * previewImageView; 
@property (assign,nonatomic) BOOL showsPlayOverlay; 
@property (assign,nonatomic) BOOL showsScrubber; 
@property (assign,nonatomic) BOOL prepareMoviePlayerForScrubberAutomatically;                                                    //@synthesize prepareMoviePlayerForScrubberAutomatically=_prepareMoviePlayerForScrubberAutomatically - In the implementation block
@property (assign,nonatomic) BOOL loadMediaImmediately; 
@property (assign,nonatomic) BOOL shouldPlayVideoWhenViewAppears;                                                                //@synthesize shouldPlayVideoWhenViewAppears=_shouldPlayVideoWhenViewAppears - In the implementation block
@property (assign,nonatomic) BOOL canEdit; 
@property (assign,nonatomic) BOOL scrubberIsSubview; 
@property (assign,nonatomic) double scrubberWidth;                                                                               //@synthesize scrubberWidth=_scrubberWidth - In the implementation block
@property (assign,nonatomic) double currentTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)videoViewForVideoFileAtURL:(id)arg1 ;
+(void)_enqueueOverlayPlayButton:(id)arg1 ;
+(id)_dequeueOverlayPlayButton;
-(double)endTime;
-(void)setFrame:(CGRect)arg1 ;
-(id<PLVideoViewDelegate>)delegate;
-(void)setDelegate:(id<PLVideoViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(NSString *)description;
-(double)duration;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_reset;
-(void)_setDuration:(double)arg1 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setProgress:(id)arg1 ;
-(void)stop;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)startTime;
-(double)currentTime;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3 ;
-(void)movieScrubber:(id)arg1 valueDidChange:(double)arg2 ;
-(void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2 ;
-(void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2 ;
-(void)movieScrubberWillBeginRequestingThumbnails:(id)arg1 ;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)arg1 ;
-(void)movieScrubberWillBeginEditing:(id)arg1 ;
-(void)movieScrubberDidCancelEditing:(id)arg1 ;
-(void)movieScrubberDidBeginEditing:(id)arg1 ;
-(void)movieScrubberEditingAnimationFinished:(id)arg1 ;
-(void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3 ;
-(void)movieScrubberDidBeginAnimatingZoom:(id)arg1 ;
-(void)movieScrubberDidEndAnimatingZoom:(id)arg1 ;
-(void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3 ;
-(double)movieScrubberDuration:(id)arg1 ;
-(void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4 ;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 ;
-(double)movieScrubberThumbnailAspectRatio:(id)arg1 ;
-(void)setMaximumTrimLength:(double)arg1 ;
-(void)applicationWillResignActive;
-(void)pause;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(NSString *)pathForVideoFile;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(void)play;
-(void)setCurrentTime:(double)arg1 ;
-(BOOL)isPlaying;
-(void)toggleScaleMode:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 videoCameraImage:(id)arg2 orientation:(long long)arg3 ;
-(void)setLoadMediaImmediately:(BOOL)arg1 ;
-(void)setShowsPlayOverlay:(BOOL)arg1 ;
-(void)setCanEdit:(BOOL)arg1 ;
-(void)setImageTile:(PLPhotoTileViewController *)arg1 ;
-(void)setShowsScrubber:(BOOL)arg1 ;
-(void)setScrubberIsSubview:(BOOL)arg1 ;
-(UIView *)scrubberBackgroundView;
-(PLManagedAsset *)videoCameraImage;
-(void)hideTrimMessage;
-(void)showTrimMessage:(id)arg1 withBottomY:(float)arg2 ;
-(UIImageView *)previewImageView;
-(id)_initWithFrame:(CGRect)arg1 videoCameraImage:(id)arg2 orientation:(long long)arg3 ;
-(BOOL)_canAccessVideo;
-(void)_cancelRemaking:(id)arg1 ;
-(void)_commitPendingAdjustmentsUpdateAndWait:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_tearDownMoviePlayer;
-(void)setTrimProgressStack:(PLProgressStack *)arg1 ;
-(void)_clearImageGenerators;
-(void)_cancelAirplayExportSession;
-(BOOL)_playerIsAirplay;
-(void)_setupMoviePlayerIfNecessary;
-(BOOL)_didInsertMoviePlayerView;
-(BOOL)isTrimming;
-(void)_scrubberAnimationFinished;
-(void)_hideTrimMessageView:(BOOL)arg1 ;
-(double)_scrubberBackgroundHeight;
-(BOOL)_shouldShowSlalomEditor;
-(BOOL)canEdit;
-(void)_removeScrubber;
-(double)scrubberWidth;
-(void)_updateSlalomRegionEditorRange;
-(void)_updateSlalomRegionEditorState;
-(void)_updateForEditing;
-(BOOL)allowSlalomEditor;
-(BOOL)_mediaIsPlayable;
-(void)playButtonClicked:(id)arg1 ;
-(void)removeVideoOverlay;
-(void)_videoOverlayFadeOutDidFinish;
-(void)_updateScaleModeForSize:(CGSize)arg1 ;
-(void)_updateScrubberFrame;
-(void)_reloadScrubberThumbnailsIfNeeded;
-(void)_playbackFinished;
-(BOOL)_shouldStreamVideo;
-(void)_verifyOrRestartPlayback;
-(void)_displayPlaySpinner;
-(void)_updateSnapshotImage;
-(void)_didBeginPlayback;
-(void)moviePlayerHeadsetPlayPausePressed:(id)arg1 ;
-(void)_removePlaySpinner;
-(id)_thumbnailSourceAsset;
-(void)_configureImageGenerator:(id)arg1 thumbnailSize:(CGSize)arg2 forSummaryThumbnails:(BOOL)arg3 ;
-(void)_savePreviewPosterFrameImage:(CGImageRef)arg1 ;
-(NSString *)_pathForVideoPreviewFile;
-(void)_insertMoviePlayerViewIfNecessary;
-(void)_requestPreviewPosterFrameForVideoSize:(CGSize)arg1 ;
-(void)_setNeedsReloadScrubberThumbnails:(BOOL)arg1 ;
-(void)_updateScrubberVisibilityWithDuration:(double)arg1 ;
-(void)_updatePosterFrameVisibility;
-(BOOL)_prepareMoviePlayerIfNeeded;
-(void)_setLocalVideoUnavailable:(BOOL)arg1 ;
-(void)_prepareAndResumePlayback;
-(BOOL)_canHandleAdjustmentData:(id)arg1 ;
-(void)_setCanAttemptFetchingVideoDerivative:(BOOL)arg1 ;
-(void)_updateVideoAVObjectBuilderFromContentEditingInput:(id)arg1 ;
-(void)_fetchNonlocalVideo;
-(BOOL)_mediaIsCloudSharedStreamedVideo;
-(BOOL)_canPlayCloudSharedStreamedVideoWithLocalVideo;
-(id)_assetForVideoURL:(id)arg1 ;
-(BOOL)_localVideoUnavailable;
-(void)_fetchLocalContentEditingInput;
-(BOOL)_shouldPlayFlattenedVideo;
-(BOOL)_isFlattenedVideoUpToDate;
-(id)_filePathForFlattenedVideo;
-(void)_flattenVideoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_configurePlayerForStreamedVideoIfNecessary;
-(id)_assetForVideoPath:(id)arg1 ;
-(void)_updateScrubberForSlowMotion;
-(void)moviePlayerReadyToPlay:(id)arg1 ;
-(id)_optionsForAVURLAsset;
-(double)_movieTimeFromScrubberTime:(double)arg1 ;
-(void)_scrubToMovieTime:(double)arg1 ;
-(void)_setMoviePlayerActive:(BOOL)arg1 ;
-(void)_setPlaybackDidBegin:(BOOL)arg1 ;
-(void)setShowsScrubber:(BOOL)arg1 duration:(double)arg2 ;
-(void)_showVideoOverlay;
-(BOOL)_canAttemptFetchingVideoDerivative;
-(BOOL)_canAirPlayCurrentVideo;
-(double)_movieScrubberDuration;
-(double)_scrubberStartTime;
-(NSString *)_pathForPrebakedLandscapeScrubberThumbnails;
-(NSString *)_pathForPrebakedPortraitScrubberThumbnails;
-(BOOL)_shouldStreamCloudPhotoLibraryVideo;
-(void)_addThumbnailRequestForTimestamp:(id)arg1 isSummaryThumbnail:(BOOL)arg2 ;
-(id)_loadThumbnailsIntoDictionary:(id)arg1 isLandscape:(BOOL)arg2 aspectRatio:(float)arg3 ;
-(void)_updateScrubberValue;
-(void)_removeScrubberUpdateTimer;
-(BOOL)playingToAirTunes;
-(void)_hideVideoOverlay:(BOOL)arg1 ;
-(void)_invalidateSnapshotImage;
-(void)_didScrubToValue:(double)arg1 withHandle:(int)arg2 ;
-(void)_serviceImageGenerationRequests;
-(double)_thumbnailTimeFromScrubberTime:(double)arg1 ;
-(BOOL)_canCreateMetadata;
-(void)_saveCachedThumbnailsIfNecessary;
-(void)_setPlaying:(BOOL)arg1 ;
-(void)setTrimmedVideoClip:(PLManagedAsset *)arg1 ;
-(void)_informDelegateAboutProgressChange:(float)arg1 ;
-(void)_updateTrimProgress;
-(PLProgressStack *)trimProgressStack;
-(void)cancelTrim;
-(void)_removeTrimProgressTimer;
-(void)_thumbnailsWereRegenerated:(id)arg1 error:(id)arg2 contextInfo:(void*)arg3 ;
-(void)_enqueueAdjustmentsForCommit;
-(BOOL)_canEditDuration:(double)arg1 ;
-(void)_exportCompletedWithSuccess:(BOOL)arg1 ;
-(void)_resetTrimProgressTimer;
-(void)_resetScrubberUpdateTimer;
-(void)_createScrubberIfNeeded;
-(void)_updatePosterImageView;
-(BOOL)shouldPlayVideoWhenViewAppears;
-(BOOL)loadMediaImmediately;
-(void)setShouldPlayVideoWhenViewAppears:(BOOL)arg1 ;
-(id)_videoSnapshot;
-(BOOL)_mediaIsVideo;
-(BOOL)_didSetPhotoData;
-(double)_scrubberTimeFromMovieTime:(double)arg1 ;
-(BOOL)_scrubberTimeNeedsMapping;
-(void)_handleScreenConnectionChange:(BOOL)arg1 ;
-(void)_scrubToSlalomRegionEditorStartHandle:(BOOL)arg1 ;
-(BOOL)_didEditSlalom;
-(void)_setDidEditSlalom:(BOOL)arg1 ;
-(void)_cancelDelayedCommitPendingAdjustmentsUpdate;
-(void)_commitPendingAdjustmentsUpdate;
-(id)_filePathForFlattenedVideoMetadata;
-(id)_readMetadataFromPath:(id)arg1 ;
-(id)_metadataForFlattenedVideo;
-(id)_pathForOriginalFile;
-(void)_writeMetadata:(id)arg1 toPath:(id)arg2 ;
-(void)moviePlayerControllerDidBecomeActiveController:(id)arg1 ;
-(void)moviePlayerControllerWillResignAsActiveController:(id)arg1 ;
-(BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2 ;
-(void)moviePlayerReadyToDisplay:(id)arg1 ;
-(void)moviePlayerBufferingStateDidChange:(id)arg1 ;
-(void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned long long)arg2 ;
-(void)moviePlayerPlaybackRateDidChange:(id)arg1 ;
-(void)moviePlayerPlaybackDidEnd:(id)arg1 ;
-(void)moviePlayerDurationAvailable:(id)arg1 ;
-(void)moviePlayerUpdatedDestinationPlaceholder:(id)arg1 ;
-(void)moviePlayerWasSuspendedDuringPlayback:(id)arg1 ;
-(void)moviePlayerEncounteredAuthenticationError:(id)arg1 ;
-(BOOL)moviePlayerShouldNotifyOnPreparationError:(id)arg1 ;
-(BOOL)moviePlayerControllerShouldAllowExternalPlayback:(id)arg1 ;
-(void)moviePlayerDidChangeExternalPlaybackType:(id)arg1 ;
-(id)moviePlayerRequestsPickedAirplayRoute:(id)arg1 ;
-(void)moviePlayerHeadsetNextTrackPressed:(id)arg1 ;
-(void)moviePlayerHeadsetPreviousTrackPressed:(id)arg1 ;
-(void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(BOOL)arg2 ;
-(void)slalomRegionEditorDidEndEditing:(id)arg1 ;
-(void)slalomRegionEditorStartValueChanged:(id)arg1 ;
-(void)slalomRegionEditorEndValueChanged:(id)arg1 ;
-(BOOL)slalomRegionEditorRequestForceZoom:(id)arg1 ;
-(void)slalomRegionEditorRequestForceUnzoom:(id)arg1 ;
-(id)videoScrubber;
-(id)slalomRegionEditor;
-(id)videoOverlayPlayButton;
-(void)updateScaleMode;
-(id)movieScrubber:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(int)arg4 ;
-(void)importerFinishedProcessingTrimmedVideo:(id)arg1 ;
-(BOOL)deleteOriginalFileAfterTrim;
-(BOOL)wasTrimmedInPlace;
-(void)trimUsingMode:(int)arg1 saveACopy:(BOOL)arg2 ;
-(NSString *)videoPathAfterTrim;
-(PLManagedAsset *)trimmedVideoClip;
-(id)newPreviewImageData:(id*)arg1 ;
-(PLPhotoTileViewController *)imageTile;
-(void)handleDoubleTap;
-(BOOL)playingToVideoOut;
-(void)forceStop;
-(void)commitPendingUpdatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)applicationDidEnterBackground;
-(void)setPosterFrameImage:(UIImage *)arg1 ;
-(UIImage *)posterFrameImage;
-(BOOL)showsPlayOverlay;
-(BOOL)showsScrubber;
-(void)prepareMoviePlayer;
-(void)notifyRequiredResourcesDownloaded;
-(BOOL)scrubberIsSubview;
-(void)notifyOfChange:(id)arg1 shouldReloadBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldShowCopyCalloutAtPoint:(CGPoint)arg1 ;
-(id)_moviePlayer;
-(void)updateForRotationWithDuration:(double)arg1 isLandscape:(BOOL)arg2 ;
-(void)setScrubberWidth:(double)arg1 ;
-(PLVideoPosterFrameView *)posterFrameView;
-(void)setAllowSlalomEditor:(BOOL)arg1 ;
-(BOOL)prepareMoviePlayerForScrubberAutomatically;
-(void)setPrepareMoviePlayerForScrubberAutomatically:(BOOL)arg1 ;
-(void)set_didInsertMoviePlayerView:(BOOL)arg1 ;
-(PFVideoAVObjectBuilder *)_videoAVObjectBuilder;
-(BOOL)_isFetchingVideo;
-(long long)_expectedNotificationsCount;
-(PFVideoAdjustments *)_adjustmentsToCommit;
-(BOOL)_attemptFetchingVideoDerivative;
-(void)_setAttemptFetchingVideoDerivative:(BOOL)arg1 ;
-(BOOL)_slalomRegionEditorCreatedForScrubber;
-(void)_deleteFileAtPath:(id)arg1 ;
-(void)viewDidAppear;
-(void)viewDidDisappear;
@end

