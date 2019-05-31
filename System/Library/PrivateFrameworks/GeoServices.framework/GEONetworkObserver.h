/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSLock;

@interface GEONetworkObserver : NSObject {

	NSLock* _lock;
	unsigned _networkReachability;
	SCNetworkReachabilityRef _networkReach;
	BOOL _initialized;
	BOOL _networkNotified;
	BOOL _networkReachable;

}
+(id)sharedNetworkObserver;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)isCellConnection;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)initializeIfNecessary;
-(BOOL)isNetworkReachable;
-(void)_networkObserversInitialize;
-(void)_networkReachableCallBack:(unsigned)arg1 ;
-(void)_networkReachableFirstCallBack:(id)arg1 ;
-(BOOL)isConnectionRequired;
-(id)init;
-(void)dealloc;
@end

