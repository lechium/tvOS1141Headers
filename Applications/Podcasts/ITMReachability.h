//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ITMReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;	// 8 = 0x8
}

+ (id)reachabilityForInternetConnection;	// IMP=0x00000001001dae40
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;	// IMP=0x00000001001dadc0
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x00000001001dad10
- (long long)currentReachabilityStatus;	// IMP=0x00000001001db374
- (_Bool)connectionRequired;	// IMP=0x00000001001db274
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x00000001001db240
- (void)dealloc;	// IMP=0x00000001001db1e0
- (void)stopNotifier;	// IMP=0x00000001001db19c
- (_Bool)startNotifier;	// IMP=0x00000001001daea0

@end

