/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSDataClustering.h>

@interface CLSTimeSpanClustering : CLSDataClustering {

	unsigned long long _averageNumberOfObjects;
	double _minimumSpan;

}

@property (assign,nonatomic) unsigned long long averageNumberOfObjects;              //@synthesize averageNumberOfObjects=_averageNumberOfObjects - In the implementation block
@property (assign,nonatomic) double minimumSpan;                                     //@synthesize minimumSpan=_minimumSpan - In the implementation block
-(id)init;
-(void)setAverageNumberOfObjects:(unsigned long long)arg1 ;
-(void)setMinimumSpan:(double)arg1 ;
-(unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)arg1 inDataSet:(id)arg2 ;
-(unsigned long long)averageNumberOfObjects;
-(double)minimumSpan;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

