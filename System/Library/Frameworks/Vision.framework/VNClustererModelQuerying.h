/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VNClustererModelQuerying
@required
-(id)getDistances:(id)arg1 to:(id)arg2 error:(id*)arg3;
-(id)maximumFaceIdInModelAndReturnError:(id*)arg1;
-(id)allClusteredFaceIdsAndReturnError:(id*)arg1;
-(id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id*)arg2;
-(id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id*)arg2;
-(id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id*)arg3;
-(id)distanceBetweenLevel1Clusters:(id)arg1 error:(id*)arg2;
-(id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;

@end

