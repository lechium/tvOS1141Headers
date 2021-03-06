/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSSet;

@interface PGFeatureVectorBasedMemoryGenerator : PGMemoryGenerator {

	NSSet* _featureVectors;
	unsigned long long _relatedType;
	long long _memoryCategory;
	long long _memorySubcategory;
	double _minimumPeopleMatchingScore;
	double _maximumLocationMatchingDistance;
	double _minimumLocationMatchingScore;

}

@property (nonatomic,retain) NSSet * featureVectors;                              //@synthesize featureVectors=_featureVectors - In the implementation block
@property (assign,nonatomic) unsigned long long relatedType;                      //@synthesize relatedType=_relatedType - In the implementation block
@property (assign,nonatomic) long long memoryCategory;                            //@synthesize memoryCategory=_memoryCategory - In the implementation block
@property (assign,nonatomic) long long memorySubcategory;                         //@synthesize memorySubcategory=_memorySubcategory - In the implementation block
@property (assign,nonatomic) double minimumLocationMatchingScore;                 //@synthesize minimumLocationMatchingScore=_minimumLocationMatchingScore - In the implementation block
@property (assign,nonatomic) double maximumLocationMatchingDistance;              //@synthesize maximumLocationMatchingDistance=_maximumLocationMatchingDistance - In the implementation block
@property (assign,nonatomic) double minimumPeopleMatchingScore;                   //@synthesize minimumPeopleMatchingScore=_minimumPeopleMatchingScore - In the implementation block
-(id)initWithController:(id)arg1 ;
-(id)_potentialMemoriesForDryTesting;
-(id)generateMemories:(unsigned long long)arg1 ;
-(void)setFeatureVectors:(NSSet *)arg1 ;
-(void)setRelatedType:(unsigned long long)arg1 ;
-(void)setMemoryCategory:(long long)arg1 ;
-(void)setMemorySubcategory:(long long)arg1 ;
-(long long)memoryCategory;
-(long long)memorySubcategory;
-(id)_createMemoryDebugWithPotentialMemory:(id)arg1 ;
-(unsigned long long)_postProcessMatch:(id)arg1 ;
-(NSSet *)featureVectors;
-(unsigned long long)relatedType;
-(double)minimumPeopleMatchingScore;
-(void)setMinimumPeopleMatchingScore:(double)arg1 ;
-(double)maximumLocationMatchingDistance;
-(void)setMaximumLocationMatchingDistance:(double)arg1 ;
-(double)minimumLocationMatchingScore;
-(void)setMinimumLocationMatchingScore:(double)arg1 ;
@end

