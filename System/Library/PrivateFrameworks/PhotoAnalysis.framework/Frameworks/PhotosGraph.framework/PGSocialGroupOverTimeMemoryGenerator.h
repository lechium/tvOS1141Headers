/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGSocialGroupOverTimeMemoryGenerator : PGFeaturedMemoryGenerator {

	unsigned long long _numberOfInsufficientlyFacedRejects;
	unsigned long long _numberOfBuildFailureRejects;
	long long _socialGroupID;

}

@property (assign,nonatomic) long long socialGroupID;              //@synthesize socialGroupID=_socialGroupID - In the implementation block
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)setSocialGroupID:(long long)arg1 ;
-(long long)socialGroupID;
-(id)_computeOverTheTimeFacedAssetsForPersonUUIDs:(id)arg1 inFacedAssets:(id)arg2 ;
@end

