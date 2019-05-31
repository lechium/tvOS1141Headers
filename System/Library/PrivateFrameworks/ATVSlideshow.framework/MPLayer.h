/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPFilterSupport.h>
#import <libobjc.A.dylib/MPAnimationSupport.h>
#import <libobjc.A.dylib/MPAudioSupport.h>
#import <libobjc.A.dylib/MPActionableSupport.h>
#import <libobjc.A.dylib/MPLayerableSupport.h>
#import <libobjc.A.dylib/MPGeometrySupport.h>
#import <libobjc.A.dylib/MPTimingSupport.h>
#import <libobjc.A.dylib/MPActionSupport.h>

@class MCPlugParallel, NSMutableDictionary, NSMutableArray, MPAudioPlaylist, MCMontage, MPLayerInternal, NSString;

@interface MPLayer : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPLayerableSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport> {

	MCPlugParallel* _plug;
	NSMutableDictionary* _attributes;
	NSMutableArray* _effectContainers;
	NSMutableArray* _filters;
	NSMutableDictionary* _animationPaths;
	NSMutableDictionary* _actions;
	MPAudioPlaylist* _audioPlaylist;
	MCMontage* _montage;
	id _parent;
	MPLayerInternal* _internal;
	BOOL _skipTimeCalculations;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL isAudioLayer; 
@property (assign,nonatomic) long long audioPriority; 
@property (nonatomic,copy) NSString * layerID; 
+(id)layer;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)animatedLayer;
+(id)sequentialLayer;
+(id)effectLayer;
-(void)finalize;
-(void)dump;
-(void)addFilter:(id)arg1 ;
-(id)init;
-(double)scale;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(double)duration;
-(id)actions;
-(NSString *)title;
-(void)setDuration:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(id)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(CGPoint)position;
-(id)filters;
-(void)setZPosition:(double)arg1 ;
-(double)height;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(long long)zIndex;
-(void)setHeight:(double)arg1 ;
-(id)parent;
-(void)cleanup;
-(id)uuid;
-(void)setZIndex:(long long)arg1 ;
-(void)setMontage:(id)arg1 ;
-(double)zPosition;
-(void)removeActionForKey:(id)arg1 ;
-(void)addFilters:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)objectID;
-(id)parentDocument;
-(void)configureActions;
-(id)plugID;
-(void)copyActions:(id)arg1 ;
-(id)montage;
-(void)setTimeIn:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(id)fullDebugLog;
-(BOOL)isTriggered;
-(void)setIsTriggered:(BOOL)arg1 ;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(void)copyStruct:(id)arg1 ;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(void)setPlug:(id)arg1 ;
-(long long)countOfEffectContainers;
-(void)setAudioPriority:(long long)arg1 ;
-(NSString *)layerID;
-(id)effectContainers;
-(void)removeAllEffectContainers;
-(void)addEffectContainers:(id)arg1 ;
-(void)setLayerID:(NSString *)arg1 ;
-(BOOL)isAudioLayer;
-(void)removeEffectContainersAtIndices:(id)arg1 ;
-(void)insertEffectContainers:(id)arg1 atIndex:(long long)arg2 ;
-(void)addEffectContainer:(id)arg1 ;
-(id)objectInEffectContainersAtIndex:(long long)arg1 ;
-(void)setSkipTimeCalculations:(BOOL)arg1 ;
-(void)moveEffectContainersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(double)numberOfLoops;
-(void)setNumberOfLoops:(double)arg1 ;
-(id)allSlides:(BOOL)arg1 ;
-(id)plug;
-(id)allSongs;
-(void)reconnectAllTransitions;
-(double)xRotationAngle;
-(double)yRotationAngle;
-(double)rotationAngle;
-(void)copyFilters:(id)arg1 ;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)setRotationAngle:(double)arg1 ;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)insertFilters:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)removeAllFilters;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(long long)audioPriority;
-(double)yPosition;
-(double)xPosition;
-(long long)countOfFilters;
-(id)objectInFiltersAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inFiltersAtIndex:(long long)arg2 ;
-(void)removeObjectFromFiltersAtIndex:(long long)arg1 ;
-(void)replaceObjectInFiltersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)setXPosition:(double)arg1 ;
-(void)setYPosition:(double)arg1 ;
-(id)scriptingAnimations;
-(void)setScriptingAnimations:(id)arg1 ;
-(void)updateDurationPadding:(double)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(void)setIsAudioLayer:(BOOL)arg1 ;
-(double)timeIn;
-(BOOL)startsPaused;
-(void)copyEffectContainers:(id)arg1 ;
-(void)updateMainDuration;
-(void)resetStartTimes;
-(id)layerKey;
-(BOOL)skipTimeCalculations;
-(void)reconnectTransitionForEffectContainerAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inEffectContainersAtIndex:(long long)arg2 ;
-(void)removeObjectFromEffectContainersAtIndex:(long long)arg1 ;
-(void)replaceObjectInEffectContainersAtIndex:(long long)arg1 withObject:(id)arg2 ;
@end

