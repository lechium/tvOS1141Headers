/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMCore/FMCore-Structs.h>
@interface FMReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)currentReachabilityStatus;
-(void)stopNotifier;
-(unsigned long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(unsigned long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)startNotifier;
-(BOOL)connectionRequired;
@end

