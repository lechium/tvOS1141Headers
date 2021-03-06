/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAssetCollection, PGManager, PGMoodGeneratorOptions, PGMoodVector, NSDictionary;

@interface PGMoodSource : NSObject {

	PHAssetCollection* _assetCollection;
	PGManager* _graphManager;
	PGMoodGeneratorOptions* _options;
	PGMoodVector* _positiveVector;
	PGMoodVector* _negativeVector;
	NSDictionary* _moodSourceDictionary;

}

@property (readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (readonly) PGManager * graphManager;                         //@synthesize graphManager=_graphManager - In the implementation block
@property (readonly) PGMoodGeneratorOptions * options;                 //@synthesize options=_options - In the implementation block
@property (retain) PGMoodVector * positiveVector;                      //@synthesize positiveVector=_positiveVector - In the implementation block
@property (retain) PGMoodVector * negativeVector;                      //@synthesize negativeVector=_negativeVector - In the implementation block
@property (readonly) NSDictionary * moodSourceDictionary;              //@synthesize moodSourceDictionary=_moodSourceDictionary - In the implementation block
+(id)_plistName;
-(PGMoodGeneratorOptions *)options;
-(double)weight;
-(PHAssetCollection *)assetCollection;
-(PGManager *)graphManager;
-(id)_plistMoodIdentifiers;
-(void)_combineMoodVectors;
-(NSDictionary *)moodSourceDictionary;
-(id)_moodVectorForMoodIdentifier:(id)arg1 ;
-(id)_moodVectors;
-(unsigned long long)_sourceInputCount;
-(id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3 ;
-(PGMoodVector *)positiveVector;
-(void)setPositiveVector:(PGMoodVector *)arg1 ;
-(PGMoodVector *)negativeVector;
-(void)setNegativeVector:(PGMoodVector *)arg1 ;
@end

