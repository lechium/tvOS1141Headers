/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface MiroCloudDownloader : NSObject {

	float _progress;
	/*^block*/id _progressBlock;
	/*^block*/id _itemCompletedBlock;
	NSMutableArray* _requests;

}

@property (nonatomic,retain) NSMutableArray * requests;                                      //@synthesize requests=_requests - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> cancellationQueueFor26820423; 
@property (nonatomic,readonly) float progress;                                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSArray * localAssets; 
@property (nonatomic,copy) id progressBlock;                                                 //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id itemCompletedBlock;                                            //@synthesize itemCompletedBlock=_itemCompletedBlock - In the implementation block
+(id)cloudDownloaderWithAssets:(id)arg1 ;
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(float)progress;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)cancelDownloads;
-(id)initWithAssets:(id)arg1 ;
-(void)startDownloadsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setItemCompletedBlock:(id)arg1 ;
-(NSArray *)localAssets;
-(id)itemCompletedBlock;
-(NSObject*<OS_dispatch_queue>)cancellationQueueFor26820423;
@end

