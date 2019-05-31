/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
#import <CoreData/CoreData-Structs.h>
@class NSObject, NSPersistentStore;

@interface PFCloudKitStoreMonitor : NSObject {

	NSObject*<OS_dispatch_group> _monitorGroup;
	os_unfair_lock_s _aliveLock;
	BOOL _storeIsAlive;
	BOOL _declaredDead;
	int _retryCount;
	int _timeoutSeconds;
	NSPersistentStore* _monitoredStore;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> monitorGroup;              //@synthesize monitorGroup=_monitorGroup - In the implementation block
@property (nonatomic,readonly) int retryCount;                                         //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) int timeoutSeconds;                                     //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,readonly) BOOL declaredDead;                                      //@synthesize declaredDead=_declaredDead - In the implementation block
@property (nonatomic,readonly) BOOL storeIsAlive;                                      //@synthesize storeIsAlive=_storeIsAlive - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStore * monitoredStore;              //@synthesize monitoredStore=_monitoredStore - In the implementation block
-(id)initForStore:(id)arg1 ;
-(NSPersistentStore *)monitoredStore;
-(BOOL)storeIsAlive;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(void)declareStoreDead;
-(void)pfcloudstoremonitor_is_holding_your_store_open_waiting_for_cloudkit_activity_to_finish;
-(NSObject*<OS_dispatch_group>)monitorGroup;
-(int)timeoutSeconds;
-(BOOL)declaredDead;
-(int)retryCount;
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 ;
@end

