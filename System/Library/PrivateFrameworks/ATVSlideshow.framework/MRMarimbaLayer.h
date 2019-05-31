/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>
#import <libobjc.A.dylib/MRMarimbaPlayback.h>
#import <libobjc.A.dylib/MRMarimbaHitBlobSupport.h>
#import <libobjc.A.dylib/MRMarimbaBasicPlayback.h>

@class MPDocument, MRRenderer, MPFaceDetector, NSDictionary, NSTimer, NSString, EAGLContext;

@interface MRMarimbaLayer : CAEAGLLayer <MRMarimbaPlayback, MRMarimbaHitBlobSupport, MRMarimbaBasicPlayback> {

	MRRenderer* _renderer;
	MPDocument* _document;
	BOOL _masterClockIsSet;
	BOOL _bailTimeWatcher;
	BOOL _stopWithVideo;
	BOOL _wasSuspended;
	MPFaceDetector* _faceDetector;
	double _morphingToAspectRatio;
	CGSize _frameBufferSize;
	NSDictionary* _nextMorphInfo;
	NSTimer* _faceTimer;
	BOOL _usesNewImageManager;
	BOOL _enableSlideDidChangeNotification;
	NSString* _lastSlideChange;
	EAGLContext* _context;
	unsigned _viewRenderbuffer;
	unsigned _viewFramebuffer;
	unsigned _depthBuffer;
	BOOL _isReadonly;
	BOOL _slidesAreReadonly;

}

@property (readonly) CGSize size; 
@property (assign,nonatomic) double framesPerSecond; 
@property (assign,nonatomic) BOOL isReadonly;                                    //@synthesize isReadonly=_isReadonly - In the implementation block
@property (assign,nonatomic) BOOL slidesAreReadonly;                             //@synthesize slidesAreReadonly=_slidesAreReadonly - In the implementation block
@property (assign,nonatomic) BOOL usesNewImageManager;                           //@synthesize usesNewImageManager=_usesNewImageManager - In the implementation block
@property (nonatomic,retain) MPDocument * document; 
@property (assign,nonatomic) double time; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic) double volume; 
@property (assign,nonatomic) BOOL stopWithVideo; 
@property (assign,nonatomic) BOOL displaysFPS; 
@property (nonatomic,readonly) MRRenderer * renderer; 
@property (assign,nonatomic) BOOL enableSlideDidChangeNotification;              //@synthesize enableSlideDidChangeNotification=_enableSlideDidChangeNotification - In the implementation block
+(void)releaseResources;
+(id)layerWithDocument:(id)arg1 size:(CGSize)arg2 ;
+(id)layerWithDocument:(id)arg1 ;
+(BOOL)shouldRenderOnBackgroundThread;
-(BOOL)isReadonly;
-(double)time;
-(void)setTime:(double)arg1 ;
-(id)init;
-(CGSize)size;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)goBack;
-(MPDocument *)document;
-(void)cleanup;
-(void)setDocument:(MPDocument *)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)pause;
-(double)timeRemaining;
-(void)setFramesPerSecond:(double)arg1 ;
-(double)framesPerSecond;
-(MRRenderer *)renderer;
-(void)play;
-(BOOL)isPlaying;
-(void)togglePlayback;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(void)beginGesture:(id)arg1 ;
-(double)relativeTime;
-(void)setBailTimeWatcher:(BOOL)arg1 ;
-(void)watcherThread:(id)arg1 ;
-(id)_currentEffectContainer;
-(void)moveToEffectContainer:(id)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(BOOL)arg4 ;
-(id)displayedEffectContainers;
-(long long)_mainLayerIndex;
-(id)_firstEffectContainer;
-(id)_effectContainerForTime:(double)arg1 ;
-(BOOL)bailTimeWatcher;
-(id)currentSlides;
-(void)gotoSlide:(id)arg1 ;
-(void)moveToNextEffectContainer;
-(void)moveToPreviousEffectContainer;
-(double)relativeTimeForBackgroundAudio;
-(double)relativeTimeForLayer:(id)arg1 ;
-(void)moveToTitleSlide;
-(void)moveToSubtitleForSlide:(id)arg1 ;
-(id)currentSlide;
-(void)gotoNextSlide;
-(void)gotoPreviousSlide;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
-(BOOL)usesNewImageManager;
-(void)goForth;
-(BOOL)effect:(id)arg1 requestedNumberOfSlides:(unsigned long long)arg2 firstSlideIndexStillNeeded:(unsigned long long)arg3 ;
-(void)requestRendering:(BOOL)arg1 ;
-(BOOL)nearingEndForSerializer:(id)arg1 ;
-(void)callbackThread:(id)arg1 ;
-(id)_currentEffectLayer;
-(void)lockRendering;
-(void)unlockRendering;
-(id)lastSlideChange;
-(void)setLastSlideChange:(id)arg1 ;
-(void)_postNotificationForSlideChange:(id)arg1 ;
-(BOOL)isInTransition;
-(void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2 ;
-(void)removeEffectContainersBeforeTime:(double)arg1 ;
-(void)_slideDidAppear:(id)arg1 ;
-(BOOL)beginLiveUpdateForHitBlob:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toHitBlob:(id)arg2 ;
-(BOOL)endLiveUpdateForHitBlob:(id)arg1 ;
-(void)endGesture:(id)arg1 ;
-(id)blobHitAtPoint:(CGPoint)arg1 fromObjectsForObjectIDs:(id)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getOnScreenVertices:(CGPoint)arg1 forHitBlob:(id)arg2 ;
-(void)doGesture:(id)arg1 ;
-(void)cancelGesture:(id)arg1 ;
-(void)destroyFramebuffer;
-(void)setUsesNewImageManager:(BOOL)arg1 ;
-(BOOL)updateFramebuffer;
-(void)didLiveChanged:(id)arg1 ;
-(void)didAddEffects:(id)arg1 ;
-(void)didApplyStyle:(id)arg1 ;
-(void)pauseWhenStill;
-(BOOL)displaysFPS;
-(void)setDisplaysFPS:(BOOL)arg1 ;
-(void)morphToAspectRatio:(double)arg1 andOrientation:(int)arg2 withDuration:(double)arg3 ;
-(void)_reauthorForAspectRatioChange;
-(BOOL)nearingEndForSerializerAfterDelay:(id)arg1 ;
-(BOOL)effectRequestedSlidesAfterDelay:(id)arg1 ;
-(void)touchesBegan:(id)arg1 ;
-(void)touchesMoved:(id)arg1 ;
-(BOOL)touchesEnded:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 ;
-(void)gotoBeginning;
-(void)gotoEnd;
-(void)nextFrame;
-(void)prevFrame;
-(CGImageRef)snapshotAsCGImageForTime:(double)arg1 withSize:(CGSize)arg2 ;
-(CGImageRef)snapshotAsCGImage;
-(void)warmupRenderer;
-(BOOL)stopWithVideo;
-(void)setStopWithVideo:(BOOL)arg1 ;
-(BOOL)enableSlideDidChangeNotification;
-(void)setEnableSlideDidChangeNotification:(BOOL)arg1 ;
-(BOOL)asynchronous:(BOOL)arg1 ;
-(void)aspectRatioChangedTo:(id)arg1 ;
-(void)beginEditingOfText:(id)arg1 ;
-(void)setIsReadonly:(BOOL)arg1 ;
-(BOOL)slidesAreReadonly;
-(void)setSlidesAreReadonly:(BOOL)arg1 ;
@end

