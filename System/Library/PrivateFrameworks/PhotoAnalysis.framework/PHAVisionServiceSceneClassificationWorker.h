/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/PHAVisionServiceWorker.h>
#import <libobjc.A.dylib/PLPhotoAnalysisVisionServiceTaxonomyProtocol.h>
#import <libobjc.A.dylib/PLPhotoAnalysisVisionServiceSceneClassificationProtocol.h>

@class NSDictionary;

@interface PHAVisionServiceSceneClassificationWorker : PHAVisionServiceWorker <PLPhotoAnalysisVisionServiceTaxonomyProtocol, PLPhotoAnalysisVisionServiceSceneClassificationProtocol> {

	NSDictionary* _imageSourceOptions;
	BOOL _disabledByUserDefaults;

}
+(void)initialize;
+(short)workerType;
+(BOOL)runsExclusively;
+(long long)applicationDataFolderIdentifier;
-(BOOL)isEnabled;
-(void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)localizedLabelForSceneIdentifier:(unsigned)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(BOOL)getLocallyAvailableAssetResource:(id*)arg1 forAnalyzingAsset:(id)arg2 error:(id*)arg3 ;
-(id)_performAndPersistAnalysisWithHandler:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 ;
-(id)_performSceneClassificationOfAsset:(id)arg1 usingRequestHandler:(id)arg2 ;
-(id)_computeImageprintForAsset:(id)arg1 usingRequestHandler:(id)arg2 error:(id*)arg3 ;
-(id)_performAndPersistAnalysisOfImageData:(id)arg1 withOrientation:(unsigned long long)arg2 withAttributes:(id)arg3 forAsset:(id)arg4 ;
-(void)startup;
-(id)sceneTaxonomyHash;
-(void)cooldown;
-(BOOL)canProvideAnalysisJobResultInformation:(id)arg1 withoutRequiringAssetResourceForAsset:(id)arg2 ;
-(void)_recordJunkClassificationForAsset:(id)arg1 ;
-(id)_performAndPersistAnalysisOfImageFileAtURL:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 ;
-(BOOL)_reclassificationOfSceneNeededForAsset:(id)arg1 ;
-(id)preferredAssetResourcesForAnalyzingAsset:(id)arg1 ;
-(id)_performAnalysisOfAssetResource:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 ;
-(CGImageRef)_newCGImageRefForAssetResourceFileURL:(id)arg1 orientation:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)newAssetFetchOptions;
-(unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)processAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsCoalescingResults;
-(void)insidePhotoLibraryTransactionPersistResultsDictionary:(id)arg1 forAsset:(id)arg2 ;
@end

