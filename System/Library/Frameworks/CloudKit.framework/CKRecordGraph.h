/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface CKRecordGraph : NSObject {

	NSMutableArray* _nodes;
	NSArray* _sortedRecords;

}

@property (nonatomic,retain) NSMutableArray * nodes;               //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,retain) NSArray * sortedRecords;              //@synthesize sortedRecords=_sortedRecords - In the implementation block
+(id)topologicallySortRecords:(id)arg1 withError:(id*)arg2 ;
-(id)init;
-(id)description;
-(void)setSortedRecords:(NSArray *)arg1 ;
-(NSArray *)sortedRecords;
-(void)setNodes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)nodes;
-(BOOL)addRecords:(id)arg1 error:(id*)arg2 ;
-(id)recordsByTopologicalSortWithError:(id*)arg1 ;
@end

