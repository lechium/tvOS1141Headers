/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLSAssetsBeautifier : NSObject {

	BOOL _enableStatisticalSampling;
	BOOL _enableNetworkAccess;
	BOOL _enableJunk;
	double _junkThreshold;
	BOOL _enableBlurriness;
	double _blurrinessThreshold;
	BOOL _enableIntermediateNaturalClustering;
	BOOL _enableFinalNaturalClustering;
	BOOL _enableFinalTimeClustering;
	BOOL _usesVision;
	BOOL _usesKMeans;

}

@property (assign,nonatomic) BOOL enableStatisticalSampling;                        //@synthesize enableStatisticalSampling=_enableStatisticalSampling - In the implementation block
@property (assign,nonatomic) BOOL enableNetworkAccess;                              //@synthesize enableNetworkAccess=_enableNetworkAccess - In the implementation block
@property (assign,nonatomic) BOOL enableJunk;                                       //@synthesize enableJunk=_enableJunk - In the implementation block
@property (assign,nonatomic) double junkThreshold;                                  //@synthesize junkThreshold=_junkThreshold - In the implementation block
@property (assign,nonatomic) BOOL enableBlurriness;                                 //@synthesize enableBlurriness=_enableBlurriness - In the implementation block
@property (assign,nonatomic) double blurrinessThreshold;                            //@synthesize blurrinessThreshold=_blurrinessThreshold - In the implementation block
@property (assign,nonatomic) BOOL enableIntermediateNaturalClustering;              //@synthesize enableIntermediateNaturalClustering=_enableIntermediateNaturalClustering - In the implementation block
@property (assign,nonatomic) BOOL enableFinalNaturalClustering;                     //@synthesize enableFinalNaturalClustering=_enableFinalNaturalClustering - In the implementation block
@property (assign,nonatomic) BOOL enableFinalTimeClustering;                        //@synthesize enableFinalTimeClustering=_enableFinalTimeClustering - In the implementation block
@property (assign,nonatomic) BOOL usesVision;                                       //@synthesize usesVision=_usesVision - In the implementation block
@property (assign,nonatomic) BOOL usesKMeans;                                       //@synthesize usesKMeans=_usesKMeans - In the implementation block
+(id)beautifier;
-(id)init;
-(/*^block*/id)hierarchicalClusteringDistanceBlock;
-(/*^block*/id)timeClusteringDistanceBlock;
-(id)_naturalClusteringFromDataset:(id)arg1 withThreshold:(double)arg2 timestampSupport:(BOOL)arg3 ;
-(id)sortedByDateAndIdentifier:(id)arg1 ;
-(BOOL)enableNetworkAccess;
-(id)_naturalClusteringBestItemFromDataset:(id)arg1 ;
-(BOOL)enableStatisticalSampling;
-(BOOL)enableJunk;
-(double)junkThreshold;
-(BOOL)enableBlurriness;
-(double)blurrinessThreshold;
-(BOOL)enableIntermediateNaturalClustering;
-(BOOL)enableFinalNaturalClustering;
-(BOOL)enableFinalTimeClustering;
-(BOOL)usesVision;
-(BOOL)usesKMeans;
-(id)performWithDataset:(id)arg1 maximumNumberOfItems:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)deduplicateItems:(id)arg1 ;
-(void)setEnableStatisticalSampling:(BOOL)arg1 ;
-(void)setEnableNetworkAccess:(BOOL)arg1 ;
-(void)setEnableJunk:(BOOL)arg1 ;
-(void)setJunkThreshold:(double)arg1 ;
-(void)setEnableBlurriness:(BOOL)arg1 ;
-(void)setBlurrinessThreshold:(double)arg1 ;
-(void)setEnableIntermediateNaturalClustering:(BOOL)arg1 ;
-(void)setEnableFinalNaturalClustering:(BOOL)arg1 ;
-(void)setEnableFinalTimeClustering:(BOOL)arg1 ;
-(void)setUsesKMeans:(BOOL)arg1 ;
-(void)setUsesVision:(BOOL)arg1 ;
-(id)bestItemInArray:(id)arg1 ;
@end

