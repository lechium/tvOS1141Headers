/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNClusteringReadOnly.h>

@class VNClusteringLogger, VNSuggestionsLogger, NSString, NSNumber, NSData;

@interface VNGreedyClusteringReadOnly : NSObject <VNClusteringReadOnly> {

	VNClusteringLogger* _clusteringLogger;
	VNSuggestionsLogger* _suggestionsLogger;
	NSString* _cacheFolderPath;
	NSNumber* _thresholdN;
	NSData* _state;
	NSNumber* _vectorMapReadOnlyFlagN;
	shared_ptr<const vision::mod::GreedyClustererFaces>* m_ClusteringImpl_const;

}
+(void)addFaceObservations:(id)arg1 toFaceDescriptorBuffer:(ImageDescriptorBufferFloat32*)arg2 ;
+(id)getRepresentativenessForFaces:(id)arg1 error:(id*)arg2 ;
-(BOOL)_parseOptions:(id)arg1 error:(id*)arg2 ;
-(void)initializeLogging;
-(id)getLevel0ClusteredIdsForFaceId:(id)arg1 error:(id*)arg2 ;
-(id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3 ;
-(id)getClusterState:(id*)arg1 ;
-(id)getClusteredIds:(id*)arg1 ;
-(id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)arg1 error:(id*)arg2 ;
-(id)getDistanceBetweenLevel0ClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3 ;
-(id)getDistanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2 ;
-(id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)maximumFaceIdInModelAndReturnError:(id*)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)setGreedyClustererFaces_const:(shared_ptr<const vision::mod::GreedyClustererFaces>*)arg1 ;
-(id)convertUpdatePairsToClusters:(vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > >*)arg1 ;
@end

