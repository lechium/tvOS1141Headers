/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MiroAnalysisHelpers : NSObject
+(id)sharedInstance;
+(int)timeInFramesWithDictionaryRepresentation:(id)arg1 naturalFrameRate:(long long)arg2 ;
+(id)buildTransientAggregateRangeTreeWithPersistentRanges:(id)arg1 masterSceneType:(unsigned long long)arg2 ;
-(id)init;
-(id)description;
-(void)cancelAllAnalysisRequests;
-(void)analyzeUsingClientSideAnalyzerWithAsset:(id)arg1 performedAnalysisTypes:(unsigned long long)arg2 ranges:(id)arg3 options:(unsigned long long)arg4 relatedSortedAssets:(id)arg5 cancelGroup:(id)arg6 progressHandler:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)dispatchFullOutOfProcessAnalysisForAssets:(id)arg1 ;
@end

