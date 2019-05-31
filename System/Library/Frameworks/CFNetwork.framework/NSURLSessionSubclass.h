/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLSessionSubclass <NSObject>
@required
-(id)dataTaskForRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(/*^block*/id)arg4;
-(id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(/*^block*/id)arg4;
-(id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4;
-(id)AVAggregateAssetDownloadTaskForURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
-(void)_onqueue_flushWithCompletionHandler:(/*^block*/id)arg1;
-(void)_onqueue_completeInvalidation:(BOOL)arg1;
-(void)_onqueue_resetStorageWithCompletionHandler:(/*^block*/id)arg1;
-(void)_onqueue_getTasksWithCompletionHandler:(/*^block*/id)arg1;

@end

