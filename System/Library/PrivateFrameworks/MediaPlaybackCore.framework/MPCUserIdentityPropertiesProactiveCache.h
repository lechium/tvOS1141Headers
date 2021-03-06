/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet;

@interface MPCUserIdentityPropertiesProactiveCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSCountedSet* _proactiveCachingIdentities;

}
+(id)sharedCache;
-(id)_init;
-(void)endProactiveCachingForUserIdentity:(id)arg1 ;
-(void)beginProactiveCachingForUserIdentity:(id)arg1 ;
-(void)_userIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)_proactivelyCacheUserIdentity:(id)arg1 ;
@end

