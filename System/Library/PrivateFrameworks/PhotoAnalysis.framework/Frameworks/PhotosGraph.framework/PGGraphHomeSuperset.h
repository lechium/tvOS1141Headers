/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraphNode, NSDateInterval, NSSet;

@interface PGGraphHomeSuperset : NSObject {

	PGGraphNode* _bestAddressNode;
	NSDateInterval* _dateInterval;
	NSSet* _momentNodes;

}

@property (readonly) PGGraphNode * bestAddressNode;              //@synthesize bestAddressNode=_bestAddressNode - In the implementation block
@property (readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (readonly) NSSet * momentNodes;                        //@synthesize momentNodes=_momentNodes - In the implementation block
-(id)description;
-(NSDateInterval *)dateInterval;
-(NSSet *)momentNodes;
-(PGGraphNode *)bestAddressNode;
-(id)initWithBestAddressNode:(id)arg1 dateInterval:(id)arg2 momentNodes:(id)arg3 ;
@end
