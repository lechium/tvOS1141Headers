/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLPullFromTransportTaskDelegate <CPLEngineSyncTaskDelegate>
@required
-(id)task:(id)arg1 wantsToQueryTaskForCursor:(id)arg2 class:(Class)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(id)task:(id)arg1 wantsToDownloadBatchesFromSyncAnchor:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4;

@end
