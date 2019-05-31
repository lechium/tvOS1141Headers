/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSDataDensityClustering.h>

@interface CLSDBSCANClustering : CLSDataDensityClustering {

	double maximumDistance;
	unsigned long long minimumNumberOfObjects;
	double _maximumDistance;
	unsigned long long _minimumNumberOfObjects;

}
-(id)init;
-(double)maximumDistance;
-(void)setMaximumDistance:(double)arg1 ;
-(id)_neighborsAtIndex:(unsigned long long)arg1 withDistancesMatrix:(double*)arg2 number:(unsigned long long)arg3 ;
-(id)_expandClusterForObject:(id)arg1 dataset:(id)arg2 objectsMappedToCluster:(CFSetRef)arg3 visitedObjects:(unsigned long long*)arg4 distancesMatrix:(double*)arg5 neighbors:(id)arg6 ;
-(unsigned long long)minimumNumberOfObjects;
-(void)setMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

