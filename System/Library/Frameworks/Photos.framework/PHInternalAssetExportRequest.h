/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetExportRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, PHResourceDownloadRequest;

@interface PHInternalAssetExportRequest : PHAssetExportRequest {

	NSObject*<OS_dispatch_queue> _serialQueue;
	PHResourceDownloadRequest* _downloadRequest;

}
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
+(id)_variantsForAsset:(id)arg1 error:(id*)arg2 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithAsset:(id)arg1 variants:(id)arg2 downloadRequest:(id)arg3 ;
-(void)preflightExportWithOptions:(id)arg1 isDownloadingRequired:(BOOL*)arg2 isProcessingRequired:(BOOL*)arg3 fileURLs:(id*)arg4 ;
@end

