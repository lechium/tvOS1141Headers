/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, RadioPlaybackTimeoutInfo, RadioLoadStoreBagRequest, RadioStoreBag, NSMutableArray, NSDictionary;

@interface RadioPlaybackTimeoutInfoController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	long long _activeAccountIdentifier;
	RadioPlaybackTimeoutInfo* _currentTimeoutInfo;
	RadioLoadStoreBagRequest* _loadStoreBagRequest;
	RadioStoreBag* _storeBag;
	NSMutableArray* _currentTimeoutInfoLoadCompletionHandlers;
	NSDictionary* _syncOverrideTimeoutDictionary;

}
+(void)_clearAccountRelatedTimeoutInfo;
-(id)init;
-(void)dealloc;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(void)_invalidateCurrentTimeoutInfoAllowingChangeNotification:(BOOL)arg1 ;
-(void)_storeBagDidLoadNotification:(id)arg1 ;
-(void)_radioRequestDidFinishNotification:(id)arg1 ;
-(void)_setSyncOverrideTimeoutDictionary:(id)arg1 ;
-(double)_playbackTimeoutForRadioConfigurationKey:(id)arg1 fallbackRadioConfigurationKey:(id)arg2 syncOverrideTimeoutKey:(id)arg3 fallbackSyncOverrideTimeoutKey:(id)arg4 defaultValue:(double)arg5 ;
-(id)_generateCurrentTimeoutInfoReturningReady:(BOOL*)arg1 ;
-(void)getCurrentTimeoutInfoWithCompletionHandler:(/*^block*/id)arg1 ;
@end

