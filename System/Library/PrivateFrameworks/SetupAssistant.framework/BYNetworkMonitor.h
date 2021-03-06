/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SetupAssistant/SetupAssistant-Structs.h>
@class NSHashTable, NSMutableDictionary, NSObject;

@interface BYNetworkMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	NSHashTable* _observers;
	int _currentNetworkType;
	BOOL _roaming;
	NSMutableDictionary* _networkTypeBlocks;
	NSObject*<OS_dispatch_queue> _networkTypeQueue;

}
+(id)sharedInstance;
+(void)setHoldsWiFiAssertion:(BOOL)arg1 ;
+(BOOL)holdsWiFiAssertion;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)withMinimumNetworkType:(int)arg1 timeout:(double)arg2 runBlock:(/*^block*/id)arg3 ;
-(BOOL)_isCurrentlyRoaming;
-(void)_initNetworkObservation;
-(int)currentNetworkType;
-(int)_networkTypeFromFlags:(unsigned)arg1 ;
-(void)setCurrentNetworkType:(int)arg1 ;
-(int)_networkTypeFromCurrentCellularData;
-(BOOL)isNetworkTypeCellular:(int)arg1 ;
-(BOOL)isCellularRoaming;
-(void)setCellularRoaming:(BOOL)arg1 ;
-(BOOL)isCellularDataRoamingEnabled;
-(void)_carrierBundleChanged;
-(void)_operatorBundleChanged;
@end

