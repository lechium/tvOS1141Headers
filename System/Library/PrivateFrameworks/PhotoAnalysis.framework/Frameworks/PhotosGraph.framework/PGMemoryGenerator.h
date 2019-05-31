/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGMemoryController;

@interface PGMemoryGenerator : NSObject {

	BOOL _isDebug;
	unsigned long long _duration;
	unsigned long long _precision;
	PGMemoryController* _controller;

}

@property (assign) BOOL isDebug;                                          //@synthesize isDebug=_isDebug - In the implementation block
@property (assign) unsigned long long duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign) unsigned long long precision;                          //@synthesize precision=_precision - In the implementation block
@property (__weak,readonly) PGMemoryController * controller;              //@synthesize controller=_controller - In the implementation block
+(id)assetPropertySetsForMemories;
+(long long)titleDateMatchingTypeForMemoryCategory:(long long)arg1 ;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(PGMemoryController *)controller;
-(id)initWithController:(id)arg1 ;
-(BOOL)isDebug;
-(unsigned long long)_numberOfIndependentMomentNodesInMomentNodes:(id)arg1 aggregations:(id)arg2 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)arg1 attemptUpgradesBeforeSorting:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)precision;
-(void)setPrecision:(unsigned long long)arg1 ;
-(void)setIsDebug:(BOOL)arg1 ;
-(id)generateMemory;
-(id)generateAllMemories;
-(id)generateMemories:(unsigned long long)arg1 ;
-(id)_generateMemoryForDryTesting;
-(id)createMemoryWithPotentialMemory:(id)arg1 ;
-(id)_createMemoryDebugWithPotentialMemory:(id)arg1 ;
-(BOOL)canProceedAfterAttemptingWeekendUpgradeForPotentialMemory:(id)arg1 upgradedToWeekend:(BOOL*)arg2 ;
-(BOOL)canProceedAfterAttemptingMeaningfulEventUpgradeForPotentialMemory:(id)arg1 didUpgradeToWeekend:(BOOL)arg2 upgradedToMeaningfulEvent:(BOOL*)arg3 ;
-(void)_generateDefaultTitleAndSubtitleForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(BOOL)_collectionIsAcceptableForUpgrade:(id)arg1 ;
-(BOOL)canProceedAfterAttemptingUpgradesForPotentialMemory:(id)arg1 ;
-(id)_additionalInfoKeywordsForPotentialMemory:(id)arg1 ;
-(void)_mergeCurationSetsIfNeededForMemory:(id)arg1 ;
-(void)setDefaultValuesIfNeededOnNewMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
@end

