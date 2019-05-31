/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAssetCollection, PGManager, PGMoodVector, PGMoodGeneratorOptions;

@interface PGMoodGenerator : NSObject {

	PHAssetCollection* _assetCollection;
	PGManager* _graphManager;
	unsigned long long _suggestedMood;
	PGMoodVector* _positiveMoodVector;
	PGMoodVector* _negativeMoodVector;
	PGMoodVector* _historyWeightedPositiveMoodVector;
	PGMoodGeneratorOptions* _options;
	double _positiveThreshold;
	double _negativeThreshold;

}

@property (retain) PGMoodGeneratorOptions * options;              //@synthesize options=_options - In the implementation block
@property (assign) double positiveThreshold;                      //@synthesize positiveThreshold=_positiveThreshold - In the implementation block
@property (assign) double negativeThreshold;                      //@synthesize negativeThreshold=_negativeThreshold - In the implementation block
-(void)setOptions:(PGMoodGeneratorOptions *)arg1 ;
-(PGMoodGeneratorOptions *)options;
-(unsigned long long)recommendedMoods;
-(unsigned long long)forbiddenMoods;
-(id)positiveMoodVector;
-(id)negativeMoodVector;
-(id)historyWeightedPositiveMoodVector;
-(id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3 ;
-(void)_processMoodSources;
-(id)_moodSources;
-(double)positiveThreshold;
-(void)setPositiveThreshold:(double)arg1 ;
-(double)negativeThreshold;
-(void)setNegativeThreshold:(double)arg1 ;
-(unsigned long long)suggestedMood;
@end

