/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraph, PHMemory, NSSet;

@interface PGMemoryTitleUpdateFactory : NSObject {

	PGGraph* _graph;
	PHMemory* _memory;
	NSSet* _momentNodes;

}

@property (nonatomic,retain) PGGraph * graph;                  //@synthesize graph=_graph - In the implementation block
@property (nonatomic,retain) PHMemory * memory;                //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) NSSet * momentNodes;              //@synthesize momentNodes=_momentNodes - In the implementation block
-(PGGraph *)graph;
-(void)setGraph:(PGGraph *)arg1 ;
-(PHMemory *)memory;
-(void)setMemory:(PHMemory *)arg1 ;
-(NSSet *)momentNodes;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(id)_momentNodesFromMemory:(id)arg1 ;
-(long long)_predominantYearForYearSummaryMemory;
-(id)_startMomentNodeFromMomentNodes:(id)arg1 ;
-(id)_areaNodeForAreaMemory;
-(id)_predominantNeighborNodeFromMomentNodes:(id)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3 ;
-(id)_peopleNodeForPersonMemory;
-(id)_predominantNeighborNodeFromMomentNodes:(id)arg1 withLabel:(id)arg2 domain:(unsigned short)arg3 ignoredNodes:(id)arg4 ;
-(id)initWithMemory:(id)arg1 graph:(id)arg2 ;
-(id)titleGeneratorWithError:(id*)arg1 ;
@end

