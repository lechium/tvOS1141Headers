/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MCObject.h>
#import <libobjc.A.dylib/MCAnimationPathSupport.h>
#import <libobjc.A.dylib/MCFilterSupport.h>

@class NSSet, NSArray, NSMutableDictionary, NSMutableSet, MCPlugSlide, MCSong, NSString, MCContainerEffect, MCAssetVideo, NSDictionary;

@interface MCSlide : MCObject <MCAnimationPathSupport, MCFilterSupport> {

	id* mSlideAsset;
	NSMutableDictionary* mFrameAttributes;
	NSMutableSet* mAnimationPaths;
	NSMutableSet* mFilters;
	NSArray* mCachedOrderedFilters;
	unsigned long long mFlags;
	float mAudioVolume;
	float mAudioDuckLevel;
	MCPlugSlide* mPlug;
	MCSong* mSong;
	unsigned long long mIndex;
	double mAudioFadeInDuration;
	double mAudioFadeOutDuration;
	double mAudioDuckInDuration;
	double mAudioDuckOutDuration;
	double mStartTime;
	double mDuration;
	NSString* mFrameID;
	MCContainerEffect* mContainer;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@property (readonly) NSSet * filters; 
@property (readonly) NSArray * orderedFilters; 
@property (nonatomic,readonly) unsigned long long countOfFilters; 
@property (assign) MCContainerEffect * container; 
@property (retain) MCAssetVideo * asset; 
@property (retain) MCPlugSlide * plug; 
@property (readonly) MCSong * song; 
@property (assign,nonatomic) unsigned long long index; 
@property (assign,nonatomic) float audioVolume; 
@property (assign,nonatomic) double audioFadeInDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (assign,nonatomic) float audioDuckLevel; 
@property (assign,nonatomic) double audioDuckInDuration; 
@property (assign,nonatomic) double audioDuckOutDuration; 
@property (readonly) BOOL startTimeIsDefined; 
@property (assign,nonatomic) double startTime; 
@property (readonly) BOOL durationIsDefined; 
@property (assign,nonatomic) double duration; 
@property (copy) NSString * frameID; 
@property (copy) NSDictionary * frameAttributes; 
@property (copy) NSString * kenBurnsType; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double rotation; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (readonly) unsigned char countOfLayouts; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(double)scale;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(MCContainerEffect *)container;
-(void)setContainer:(MCContainerEffect *)arg1 ;
-(NSSet *)filters;
-(double)startTime;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(MCAssetVideo *)asset;
-(void)setAsset:(MCAssetVideo *)arg1 ;
-(MCSong *)song;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(void)setAudioFadeInDuration:(double)arg1 ;
-(double)audioFadeInDuration;
-(double)audioFadeOutDuration;
-(void)addAnimationPath:(id)arg1 ;
-(void)removeAllAnimationPaths;
-(NSSet *)animationPaths;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setPlug:(MCPlugSlide *)arg1 ;
-(void)setAudioDuckInDuration:(double)arg1 ;
-(void)setAudioDuckOutDuration:(double)arg1 ;
-(void)setAudioDuckLevel:(float)arg1 ;
-(void)demolish;
-(MCPlugSlide *)plug;
-(id)insertFilterWithFilterID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)moveFiltersAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)removeAllFilters;
-(id)addFilterWithFilterID:(id)arg1 ;
-(unsigned long long)countOfFilters;
-(NSString *)frameID;
-(void)setFrameID:(NSString *)arg1 ;
-(void)setFrameAttribute:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)frameAttributes;
-(id)frameAttributeForKey:(id)arg1 ;
-(void)undefineStartTime;
-(void)undefineDuration;
-(NSString *)kenBurnsType;
-(void)setKenBurnsType:(NSString *)arg1 ;
-(double)audioDuckInDuration;
-(double)audioDuckOutDuration;
-(float)audioDuckLevel;
-(BOOL)startTimeIsDefined;
-(BOOL)durationIsDefined;
-(unsigned char)currentLayoutIndex;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(unsigned long long)countOfAnimationPaths;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(unsigned char)countOfLayouts;
-(void)initFiltersWithImprints:(id)arg1 ;
-(void)demolishFilters;
-(id)imprintsForFilters;
-(void)setSongForAsset:(id)arg1 ;
-(void)setFrameAttributes:(NSDictionary *)arg1 ;
-(void)observeFilter:(id)arg1 ;
-(void)unobserveFilter:(id)arg1 ;
-(NSArray *)orderedFilters;
@end
