/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheCreateShareGroupOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheShareGroup* _record;
	/*^block*/id _creationBlock;

}

@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) id creationBlock;                                       //@synthesize creationBlock=_creationBlock - In the implementation block
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
-(id)mainReturningError;
-(HMDBackingStoreCacheShareGroup *)record;
-(void)setRecord:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(id)initWithGroup:(id)arg1 targetOwner:(id)arg2 rootRecord:(id)arg3 creationBlock:(/*^block*/id)arg4 ;
@end
