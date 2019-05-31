/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPLayer.h>
#import <libobjc.A.dylib/MPEffectSupportPrivate.h>
#import <libobjc.A.dylib/MPEffectSupport.h>

@protocol MZEffectTiming;
@class MCContainerEffect, NSString, NSMutableArray, NSMutableDictionary, NSObject, NSArray;

@interface MPLayerEffect : MPLayer <MPEffectSupportPrivate, MPEffectSupport> {

	MCContainerEffect* _layerEffect;
	NSString* _effectID;
	NSString* _presetID;
	NSMutableArray* _slides;
	NSMutableArray* _secondarySlides;
	NSMutableArray* _texts;
	NSMutableDictionary* _effectAttributes;
	long long _randomSeed;
	NSObject*<MZEffectTiming> _effectTiming;
	BOOL _supportsEffectTiming;
	BOOL _skipEffectTiming;
	long long _liveIndex;

}

@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming;              //@synthesize effectTiming=_effectTiming - In the implementation block
+(id)layerEffectWithEffectID:(id)arg1 ;
+(id)layerEffectWithEffectID:(id)arg1 andPaths:(id)arg2 ;
+(id)layerEffectWithEffectID:(id)arg1 andStrings:(id)arg2 ;
+(id)layerEffectWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(void)finalize;
-(BOOL)isLive;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)container;
-(NSString *)effectID;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)removeAllSlides;
-(NSArray *)slides;
-(double)fullDuration;
-(double)mainDuration;
-(void)addSlides:(id)arg1 ;
-(long long)liveIndex;
-(void)setLiveIndex:(long long)arg1 ;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(NSArray *)texts;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(void)removeAllTexts;
-(id)initWithEffectID:(id)arg1 ;
-(void)addText:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 andPaths:(id)arg2 ;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)effectAttributes;
-(void)setSkipEffectTiming:(BOOL)arg1 ;
-(void)setEffectAttributes:(id)arg1 ;
-(void)createSecondarySlidesWithPaths:(id)arg1 ;
-(void)updateTiming;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 ;
-(id)effectAttributeForKey:(id)arg1 ;
-(id)secondarySlides;
-(void)setEffectID:(NSString *)arg1 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 fillIn:(BOOL)arg3 ;
-(void)removeAllSecondarySlides;
-(void)addSlide:(id)arg1 ;
-(id)allSlides:(BOOL)arg1 ;
-(id)initWithEffectID:(id)arg1 andStrings:(id)arg2 ;
-(id)initWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(void)createSlidesWithPaths:(id)arg1 ;
-(void)_updateTiming:(BOOL)arg1 ;
-(void)copySlides:(id)arg1 ;
-(void)copySecondarySlides:(id)arg1 ;
-(void)copyTexts:(id)arg1 ;
-(void)applyFormattedAttributes;
-(id)_effectAttributes;
-(void)insertSlides:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2 ;
-(long long)maxNumberOfSlides;
-(void)removeSecondarySlidesAtIndices:(id)arg1 ;
-(id)formattedAttributes;
-(double)lowestDisplayTime;
-(void)insertTexts:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeTextsAtIndices:(id)arg1 ;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)addSecondarySlide:(id)arg1 ;
-(void)addSecondarySlides:(id)arg1 ;
-(void)addTexts:(id)arg1 ;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(long long)randomSeed;
-(void)setRandomSeed:(long long)arg1 ;
-(NSObject*<MZEffectTiming>)effectTiming;
-(long long)maxNumberOfSecondarySlides;
-(id)slideForMCSlide:(id)arg1 ;
-(void)_updateEffectTiming;
-(id)slideInformation;
-(void)setLayerEffect:(id)arg1 ;
@end

