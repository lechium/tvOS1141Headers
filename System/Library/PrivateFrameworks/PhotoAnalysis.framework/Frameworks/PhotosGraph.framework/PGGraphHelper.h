/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PGGraphHelper : NSObject
+(id)_createSocialGraphWithPersonClusterManager:(id)arg1 persons:(id)arg2 moments:(id)arg3 inferredMePersonIdentifier:(id*)arg4 updateBlock:(/*^block*/id)arg5 ;
+(double)_confidenceForMePersonIdentifier:(id)arg1 withPersonClusters:(id)arg2 inPhotoLibrary:(id)arg3 ;
+(id)_socialGroupsIdentifiersInGraph:(id)arg1 includeMeNode:(BOOL)arg2 includeCouples:(BOOL)arg3 includeInvalid:(BOOL)arg4 ;
+(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
+(id)multiLevelSocialGroupsWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
+(id)socialGroupsOverTheYearsWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
+(id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(/*^block*/id)arg4 ;
@end

