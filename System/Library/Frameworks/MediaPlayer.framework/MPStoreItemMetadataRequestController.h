/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MPStoreItemMetadataRequestController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _lastExpiredMetadataPurgeMachTime;
	NSMutableDictionary* _itemCaches;

}
+(id)sharedStoreItemMetadataRequestController;
+(unsigned long long)optimalBatchSize;
-(id)init;
-(void)addStoreItemMetadata:(id)arg1 ;
-(void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_removeExpiredItemsPeriodically;
-(id)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end

