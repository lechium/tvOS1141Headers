/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray, CommunicationsFilterBlockListCache;

@interface CommunicationsFilterBlockList : NSObject {

	NSObject*<OS_xpc_object> _connection;
	int _retries;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _recentObjectsTested;
	CommunicationsFilterBlockListCache* _cache;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)_disconnect;
-(void)_disconnected;
-(BOOL)_connect;
-(id)_sendSynchronousXPCRequest:(id)arg1 ;
-(void)_sendXPCRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addItemForAllServices:(id)arg1 ;
-(void)removeItemForAllServices:(id)arg1 ;
-(BOOL)isItemInList:(id)arg1 ;
-(id)copyAllItems;
@end

