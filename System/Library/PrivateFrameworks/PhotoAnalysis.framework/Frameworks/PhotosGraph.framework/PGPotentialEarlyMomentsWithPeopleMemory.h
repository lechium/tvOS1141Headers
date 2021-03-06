/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet, NSArray;

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory {

	NSSet* _peopleNodes;
	NSArray* _facedAssets;

}

@property (nonatomic,readonly) NSSet * peopleNodes;              //@synthesize peopleNodes=_peopleNodes - In the implementation block
@property (nonatomic,retain) NSArray * facedAssets;              //@synthesize facedAssets=_facedAssets - In the implementation block
-(id)initWithMomentNodes:(id)arg1 peopleNodes:(id)arg2 ;
-(void)setFacedAssets:(NSArray *)arg1 ;
-(NSSet *)peopleNodes;
-(NSArray *)facedAssets;
@end

