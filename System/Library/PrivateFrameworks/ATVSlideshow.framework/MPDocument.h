/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/MPLayerableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol MPAssetKeyDelegate;
@class MCMontage, NSArray, NSMutableDictionary, MPDocumentInternal;

@interface MPDocument : NSObject <MPLayerableSupportInternal, NSCoding> {

	MCMontage* _montage;
	NSArray* _userProvidedStacks;
	NSMutableDictionary* _documentAttributes;
	NSMutableDictionary* _fileProperties;
	NSMutableDictionary* _layerGroups;
	BOOL _preserveMedia;
	id<MPAssetKeyDelegate> _assetKeyDelegate;
	MPDocumentInternal* _internal;

}
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)unarchiveDocumentFromData:(id)arg1 withAssetKeyDelegate:(id)arg2 error:(id*)arg3 ;
+(id)unarchiveDocumentFromData:(id)arg1 error:(id*)arg2 ;
+(id)writableTypes;
+(id)readableTypes;
+(BOOL)isNativeType:(id)arg1 ;
-(void)finalize;
-(void)dump;
-(void)setFileURL:(id)arg1 ;
-(BOOL)isLive;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(double)duration;
-(id)title;
-(id)currentStyle;
-(id)undoManager;
-(id)layers;
-(unsigned long long)applyStyle:(id)arg1 ;
-(void)cleanup;
-(id)displayName;
-(id)uuid;
-(id)fileURL;
-(void)setUndoManager:(id)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setMontage:(id)arg1 ;
-(id)allEffects;
-(void)addLayer:(id)arg1 ;
-(void)setMediaProperties:(id)arg1 ;
-(id)mediaProperties;
-(double)aspectRatio;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(id)titleEffect;
-(id)actionableObjectForID:(id)arg1 ;
-(void)configureActions;
-(id)montage;
-(id)fullDebugLog;
-(double)startTimeForAssetAtPath:(id)arg1 ;
-(double)stopTimeForAssetAtPath:(id)arg1 ;
-(CGSize)resolutionForAssetAtPath:(id)arg1 ;
-(id)audioPlaylist;
-(unsigned long long)loopingMode;
-(void)setAudioPlaylist:(id)arg1 ;
-(id)documentLayerGroup;
-(long long)countOfLayers;
-(id)videoPaths;
-(id)absolutePathForAssetAtPath:(id)arg1 ;
-(void)setAuthoringOption:(id)arg1 forKey:(id)arg2 ;
-(void)setTemporarilyCacheAbsolutePaths:(BOOL)arg1 ;
-(id)audioPaths;
-(void)setAudioPaths:(id)arg1 ;
-(void)removeAllLayers;
-(void)addLayers:(id)arg1 ;
-(void)setDocumentLayerGroup:(id)arg1 ;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setDocumentAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)styleID;
-(void)setBackgroundCGColor:(CGColorRef)arg1 ;
-(id)mainLayers;
-(void)removeLayersAtIndices:(id)arg1 ;
-(id)allSlides;
-(CGSize)resolutionForPath:(id)arg1 ;
-(id)documentAttributeForKey:(id)arg1 ;
-(void)setLoopingMode:(unsigned long long)arg1 ;
-(id)objectInLayersAtIndex:(long long)arg1 ;
-(void)setVideoPaths:(id)arg1 ;
-(void)_setMediaProperties:(id)arg1 ;
-(id)assetKeyDelegate;
-(void)setAssetKeyDelegate:(id)arg1 ;
-(id)propertiesForMediaPath:(id)arg1 ;
-(id)creationDateForPath:(id)arg1 ;
-(id)regionsOfInterestForPath:(id)arg1 detect:(BOOL)arg2 ;
-(BOOL)isMovieAtPath:(id)arg1 ;
-(double)stopTimeForPath:(id)arg1 ;
-(double)durationForPath:(id)arg1 ;
-(double)startTimeForPath:(id)arg1 ;
-(double)volumeForPath:(id)arg1 ;
-(BOOL)detectFacesInBackground;
-(id)regionsOfInterestForPath:(id)arg1 ;
-(id)orderedVideoPaths;
-(id)areaForPath:(id)arg1 ;
-(id)latitudeForPath:(id)arg1 ;
-(id)longitudeForPath:(id)arg1 ;
-(CGPoint)pointForMap:(id)arg1 withAttributes:(id)arg2 ;
-(id)placeForPath:(id)arg1 ;
-(id)cityForPath:(id)arg1 ;
-(id)stateForPath:(id)arg1 ;
-(id)countryForPath:(id)arg1 ;
-(id)oceanForPath:(id)arg1 ;
-(id)definedPlaceNameForPath:(id)arg1 ;
-(id)neighborhoodForPath:(id)arg1 ;
-(id)tiledMapPathsForAttributes:(id)arg1 ;
-(long long)mapLevelForPath:(id)arg1 ;
-(id)flightPlanFrom:(CGPoint)arg1 to:(CGPoint)arg2 ;
-(CGPoint)latLongPointForMap:(id)arg1 withAttributes:(id)arg2 ;
-(BOOL)isImageAtPath:(id)arg1 ;
-(id)keywordsForPath:(id)arg1 ;
-(id)lastRandomTransition;
-(void)setLastRandomTransition:(id)arg1 ;
-(BOOL)savesPathsAsAbsolute;
-(void)setSavesPathsAsAbsolute:(BOOL)arg1 ;
-(BOOL)isInBatchModify;
-(void)setAlwaysLookupAbsolutePaths:(BOOL)arg1 ;
-(void)setupDocumentLayerGroup;
-(void)beginBatchModify;
-(void)upgradeDocument;
-(void)organizeRandomTransitions;
-(void)endBatchModify;
-(void)setStyleID:(id)arg1 ;
-(id)authoringOptionForKey:(id)arg1 ;
-(double)numberOfLoops;
-(void)setNumberOfLoops:(double)arg1 ;
-(id)allSlides:(BOOL)arg1 ;
-(BOOL)readFromPath:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(BOOL)preserveMedia;
-(void)setPreserveMedia:(BOOL)arg1 ;
-(void)setProperties:(id)arg1 forMediaPath:(id)arg2 ;
-(void)removePropertiesForMediaPath:(id)arg1 ;
-(id)allElements;
-(id)documentAttributes;
-(void)addVideoPath:(id)arg1 ;
-(void)addVideoPaths:(id)arg1 ;
-(void)addAudioPath:(id)arg1 ;
-(void)addAudioPaths:(id)arg1 ;
-(void)removePath:(id)arg1 ;
-(void)removePaths:(id)arg1 ;
-(void)removeAllVideoPaths;
-(void)removeAllAudioPaths;
-(void)addStacks:(id)arg1 ;
-(id)stacks;
-(void)setStacks:(id)arg1 ;
-(void)removeAllStacks;
-(void)insertLayers:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeLayerForKey:(id)arg1 ;
-(void)moveLayersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)setupLayerGroups;
-(id)layerForKey:(id)arg1 ;
-(CGColorRef)backgroundCGColor;
-(id)keyedLayers;
-(id)allEffectContainers;
-(id)allSongs;
-(double)posterTime;
-(id)propertiesForMediaPathAndCreateIfNeeded:(id)arg1 withValue:(id)arg2 forKey:(id)arg3 ;
-(BOOL)isAudioAtPath:(id)arg1 ;
-(id)outroEffect;
-(long long)antialiasLevel;
-(void)reconnectAllTransitions;
-(long long)mediaTypeForPath:(id)arg1 ;
-(id)absoluteVideoPaths;
-(CGImageRef)CGImageForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 thumbnailIfPossible:(BOOL)arg4 now:(BOOL)arg5 ;
-(id)organizedRandomTransitions;
-(BOOL)nearingEndWithOptions:(id)arg1 ;
-(double)aspectRatioDidChange:(double)arg1 atTime:(double)arg2 ;
-(id)captionForPath:(id)arg1 ;
-(id)altitudeForPath:(id)arg1 ;
-(id)descriptionForRandomTransitionPresetID:(id)arg1 ;
-(double)fadeOutAudioDuration;
-(id)cachedAbsolutePathFromPath:(id)arg1 ;
-(void)setAbsolutePath:(id)arg1 forKey:(id)arg2 ;
-(id)cachedAbsoluteStillPathFromPath:(id)arg1 ;
-(void)setAbsoluteStillPath:(id)arg1 forKey:(id)arg2 ;
-(BOOL)layersCanPositionZIndex;
-(id)valueInLayersWithName:(id)arg1 ;
-(void)insertObject:(id)arg1 inLayersAtIndex:(long long)arg2 ;
-(void)removeObjectFromLayersAtIndex:(long long)arg1 ;
-(void)replaceObjectInLayersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(id)absolutePathForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(CGImageRef)CGImageForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(CGImageRef)thumbnailCGImageForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(id)dataForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(IOSurfaceRef)IOSurfaceForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 ;
-(BOOL)isSupportedMovieForAssetAtPath:(id)arg1 ;
-(id)attributeForAssetAtPath:(id)arg1 forKey:(id)arg2 ;
-(id)marimbaDocument;
-(double)videoDuration;
@end

