/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheFetchRecordMappings : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _group;
	HMDBackingStoreCacheShareGroup* _share;
	/*^block*/id _fetchResult;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,copy) id fetchResult;                                        //@synthesize fetchResult=_fetchResult - In the implementation block
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(id)mainReturningError;
-(id)fetchResult;
-(void)setFetchResult:(id)arg1 ;
-(HMDBackingStoreCacheShareGroup *)share;
-(void)setShare:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(id)initWithShareGroup:(id)arg1 fetchResult:(/*^block*/id)arg2 ;
-(id)initWithGroup:(id)arg1 fetchResult:(/*^block*/id)arg2 ;
@end

