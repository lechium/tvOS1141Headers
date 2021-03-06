/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraphCollectionNode, PGTitleTuple;

@interface PGCollectionTitleGenerator : NSObject {

	PGGraphCollectionNode* _collectionNode;
	PGTitleTuple* _titleTuple;

}

@property (nonatomic,retain) PGGraphCollectionNode * collectionNode;              //@synthesize collectionNode=_collectionNode - In the implementation block
@property (nonatomic,retain) PGTitleTuple * titleTuple;                           //@synthesize titleTuple=_titleTuple - In the implementation block
-(PGGraphCollectionNode *)collectionNode;
-(void)_generateTitleTuples;
-(id)_meaningLabelForTitle;
-(id)initWithCollectionNode:(id)arg1 ;
-(id)_sortedMeaningLabels;
-(PGTitleTuple *)titleTuple;
-(void)setCollectionNode:(PGGraphCollectionNode *)arg1 ;
-(void)setTitleTuple:(PGTitleTuple *)arg1 ;
@end

