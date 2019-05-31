/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUbiquitousKeyValueStore, NSThread;

@interface WiFiCloudSyncEngineCore : NSObject {

	NSUbiquitousKeyValueStore* keyValueStore;
	void* context;
	/*function pointer*/void* callback;
	NSThread* clientThread;
	BOOL iCloudSyncingEnabled;

}

@property (retain) NSUbiquitousKeyValueStore * keyValueStore; 
@property (assign) void* context; 
@property (assign) /*function pointer*/void* callback; 
@property (retain) NSThread * clientThread; 
@property (assign) BOOL iCloudSyncingEnabled; 
-(/*function pointer*/void*)callback;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(void)dealloc;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(NSUbiquitousKeyValueStore *)keyValueStore;
-(void)setKeyValueStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(void)setClientThread:(NSThread *)arg1 ;
-(void)setICloudSyncingEnabled:(BOOL)arg1 ;
-(void)unSubscribeKVStoreNotfications;
-(BOOL)iCloudSyncingEnabled;
-(void)synchronizeKVS;
-(NSThread *)clientThread;
-(void)relayReadStoreValueAction:(id)arg1 ;
-(id)readCompleteKVStore;
-(void)ubiquitousKeyValueStoreDidChange:(id)arg1 ;
-(void)relayCloudCleanUpEvent;
-(void)relayCloudEvent:(id)arg1 ;
-(void)subscribeKVStoreNotficationsForBundleId:(id)arg1 ;
-(void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg1 ;
-(void)removeFromKVStore:(id)arg1 ;
-(void)relayMergeNetworks:(id)arg1 ;
-(void)relayKeychainSyncState:(id)arg1 ;
-(void)initWithCallback:(/*function pointer*/void*)arg1 callbackContext:(void*)arg2 ;
-(void)addToKVStore:(id)arg1 ;
-(void)readStoreValueForKey:(id)arg1 ;
-(void)printCompleteKVStore;
-(void)clearKVS;
-(void)enableIcloudSyncing:(BOOL)arg1 ForBundleId:(id)arg2 ;
-(void)synchronizeAndCallMergeNetworks;
-(void)queryKeychainSyncState;
@end
