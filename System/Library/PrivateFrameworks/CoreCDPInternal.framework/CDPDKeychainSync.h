/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPDCircleProxy;
@interface CDPDKeychainSync : NSObject {

	id<CDPDCircleProxy> _circleProxy;

}
+(id)keyChainSync;
+(id)keyChainSyncWithProxy:(id)arg1 ;
+(id)_defaultUserVisibleViewSet;
-(BOOL)isUserVisibleKeychainSyncEnabled;
-(void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeNonViewAwarePeersFromCircleWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)synchronizeKeychainViewSetWithOtherPeers:(id*)arg1 ;
-(BOOL)matchKeychainViewState:(BOOL)arg1 ;
-(BOOL)_isThisDeviceInCircle;
-(BOOL)_setKeychainSyncState:(BOOL)arg1 ;
-(void)_preflightCircleStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_processAuthFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

