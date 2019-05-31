/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPCStoreContentMetadataResponse, NSDictionary, NSArray;

@interface MPCStoreContentMetadataOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MPCStoreContentMetadataResponse* _response;
	NSDictionary* _storeBagDictionary;
	NSArray* _storeIDs;

}

@property (copy) NSDictionary * storeBagDictionary; 
@property (copy) NSArray * storeIDs; 
@property (readonly) MPCStoreContentMetadataResponse * response; 
-(id)init;
-(MPCStoreContentMetadataResponse *)response;
-(void)execute;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(NSArray *)storeIDs;
-(NSDictionary *)storeBagDictionary;
-(void)setStoreBagDictionary:(NSDictionary *)arg1 ;
@end

