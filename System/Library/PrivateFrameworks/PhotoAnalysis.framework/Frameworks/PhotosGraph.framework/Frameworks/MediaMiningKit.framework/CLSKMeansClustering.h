/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSDataClustering.h>

@interface CLSKMeansClustering : CLSDataClustering {

	unsigned long long _k;

}

@property (assign,k,nonatomic) unsigned long long k;              //@synthesize k=_k - In the implementation block
-(unsigned long long)k;
-(id)_performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(double*)_dataArray:(id)arg1 featureCount:(unsigned)arg2 useKeypaths:(BOOL)arg3 ;
-(id)performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setK:(unsigned long long)arg1 ;
@end

