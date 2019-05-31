/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVPlayerItemDelegate, NSObjectNSCopying;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSURL, NSObject, AVWeakReference, AVPropertyStorage, NSArray, AVAsset, NSMutableArray, NSMutableDictionary, AVAudioMix, NSError, AVPlayerItem, AVPlayerConnection, NSDate, AVVideoComposition, AVCustomVideoCompositorSession, NSDictionary, NSString;

@interface AVPlayerItemInternal : NSObject {

	NSURL* URL;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	AVWeakReference* weakReference;
	AVPropertyStorage* propertyStorage;
	NSObject*<OS_dispatch_queue> figConfigurationQueue;
	NSObject*<OS_dispatch_queue> figPlaybackItemAccessorQueue;
	NSObject*<OS_dispatch_queue> seekQueue;
	OpaqueFigSimpleMutexRef seekIDMutex;
	OpaqueVTPixelBufferAttributesMediatorRef pixelBufferAttributeMediator;
	OpaqueCMTimebaseRef proxyTimebase;
	NSArray* automaticallyLoadedAssetKeys;
	BOOL wasInitializedWithURL;
	AVAsset* asset;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	NSObject*<OS_dispatch_queue> stateDispatchQueue;
	NSArray* cachedTracks;
	NSMutableArray* syncLayers;
	NSArray* itemOutputs;
	NSMutableArray* itemVideoOutputs;
	NSMutableDictionary* itemLegibleOutputsForKeys;
	NSMutableDictionary* itemMetadataOutputsForKeys;
	BOOL suppressesVideoLayers;
	OpaqueCMTimebaseRef figTimebase;
	BOOL didBecomeReadyForInspectionOfTracks;
	BOOL didBecomeReadyForInspectionOfPresentationSize;
	BOOL didBecomeReadyForInspectionOfDuration;
	BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;
	AVAsset* assetWithFigPlaybackItem;
	NSArray* trackIDsForAssetWithFigPlaybackItem;
	BOOL needTimedMetadataNotification;
	BOOL didBecomeReadyForBasicInspection;
	id<AVPlayerItemDelegate> delegate;
	AVAudioMix* audioMix;
	long long status;
	NSError* error;
	BOOL needToSeekAfterCreatingFigPlaybackItem;
	SCD_Struct_AV2 initialTime;
	unsigned initialSetTimeFlags;
	SCD_Struct_AV2 initialMinSnapTime;
	SCD_Struct_AV2 initialMaxSnapTime;
	unsigned nextSeekIDToGenerate;
	int pendingSeekID;
	/*^block*/id seekCompletionHandler;
	AVPlayerItem* previousItem;
	AVPlayerItem* nextItem;
	AVPlayerConnection* playerConnection;
	BOOL initialLimitReadAhead;
	long long initialPlaybackLikelyToKeepUpTrigger;
	BOOL initialWillNeverSeekBackwardsHint;
	BOOL initialAlwaysMonitorsPlayability;
	BOOL nonForcedSubtitlesEnabled;
	BOOL externalProtectionRequested;
	BOOL savesDownloadedDataToDiskWhenDone;
	NSDate* initialDate;
	NSDate* initialEstimatedDate;
	SCD_Struct_AV2 forwardPlaybackEndTime;
	SCD_Struct_AV2 reversePlaybackEndTime;
	NSArray* imageQueueInterpolationCurve;
	BOOL imageQueueInterpolationCurveWasSet;
	BOOL blendsVideoFrames;
	BOOL blendsVideoFramesWasSet;
	BOOL reversesMoreVideoFramesInMemory;
	BOOL reversesMoreVideoFramesInMemoryWasSet;
	BOOL aggressivelyCachesVideoFrames;
	BOOL aggressivelyCachesVideoFramesWasSet;
	BOOL decodesAllFramesDuringOrdinaryPlayback;
	BOOL decodesAllFramesDuringOrdinaryPlaybackWasSet;
	BOOL initialContinuesPlayingDuringPrerollForSeek;
	BOOL initialContinuesPlayingDuringPrerollForRateChange;
	BOOL usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
	BOOL usesIFrameOnlyPlaybackForHighRateScaledEdits;
	SCD_Struct_AV2 minimumIntervalForIFrameOnlyPlayback;
	BOOL minimumIntervalForIFrameOnlyPlaybackWasSet;
	float speedThresholdForIFrameOnlyPlayback;
	BOOL speedThresholdForIFrameOnlyPlaybackWasSet;
	AVVideoComposition* videoComposition;
	AVWeakReference* clientsOriginalVideoComposition;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	void* figVideoCompositor;
	BOOL seekingWaitsForVideoCompositionRendering;
	NSDictionary* gaplessInfo;
	int eqPreset;
	NSDictionary* rampInOutInfo;
	NSDictionary* audibleDRMInfo;
	float soundCheckVolumeNormalization;
	float volumeAdjustment;
	long long initialVariantIndex;
	CFStringRef initialFigTimePitchAlgorithm;
	NSMutableDictionary* mediaOptionsSelectedByClient;
	NSArray* textStyleRules;
	NSString* mediaKind;
	unsigned long long restrictions;
	NSString* serviceIdentifier;
	BOOL networkUsuallyExceedsMaxBitRate;
	BOOL allowProgressiveSwitchUp;
	BOOL allowProgressiveStartup;
	BOOL allowProgressiveResume;
	CGSize IFramePrefetchTargetDimensions;
	CGSize preferredMaximumResolution;
	double preferredPeakBitRate;
	SCD_Struct_AV2 maximumTrailingBufferDuration;
	SCD_Struct_AV2 maximumForwardBufferDuration;
	BOOL requiresAccessLog;
	BOOL suppressesAudioOnlyVariants;
	NSString* videoApertureMode;
	unsigned RTCReportingFlags;
	NSArray* timedMetadata;
	NSMutableArray* handlersToCallWhenReadyForEnqueueing;
	BOOL haveInitialSamples;
	BOOL haveCPEProtector;
	BOOL didInformObserversAboutAvailabilityOfTracks;
	BOOL didFireKVOForAssetForNonStreamingItem;
	BOOL usesMinimalLatencyForVideoCompositionRendering;
	AVAudioMix* mostRecentlyAppliedAudioMix;
	id<NSObject><NSCopying> AVKitData;
	BOOL canUseExtraNetworking;
	NSArray* itemCollectors;
	NSMutableArray* itemMetadataCollectors;
	AVWeakReference* playerReference;
	BOOL didSetAssetToAssetWithFigPlaybackItem;
	OpaqueFigCPEProtectorRef figCPEProtector;
	BOOL playHapticTracks;

}
@end
