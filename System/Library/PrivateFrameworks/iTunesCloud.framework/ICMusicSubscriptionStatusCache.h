/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICMusicSubscriptionStatusCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _persistenceQueue;
	NSMutableDictionary* _dsidToSubscriptionStatusResponse;

}
+(id)sharedCache;
-(void)dealloc;
-(id)_init;
-(void)_handleSubscriptionStatusChangedDistributedNotification:(id)arg1 ;
-(void)_loadPersistedCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)_getUserIdentityCacheKeyForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_persistCachePostingGlobalNotification:(BOOL)arg1 ;
-(void)_postLocalChangeNotification;
-(void)getCachedSubscriptionStatusResponseForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedSubscriptionStatusResponse:(id)arg1 forRequestContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCachedSubscriptionStatusResponseNeedsReloadForAllRequestContextsWithCompletion:(/*^block*/id)arg1 ;
-(void)setCachedSubscriptionStatusResponseNeedsReloadForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

