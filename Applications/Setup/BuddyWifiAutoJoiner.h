//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BuddyWifiAutoJoiner : NSObject
{
    struct __WiFiManagerClient *_wifiManagerRef;	// 8 = 0x8
}

+ (void)stopAutojoiningWiFiNetworks;	// IMP=0x00000001000264e0
+ (void)beginAutojoiningWiFiNetworks;	// IMP=0x00000001000264a0
+ (id)_sharedInstance;	// IMP=0x000000010002644c
- (void)stopAutojoiningWiFiNetworks;	// IMP=0x0000000100026934
- (void)beginAutojoiningWiFiNetworks;	// IMP=0x000000010002687c
- (struct __CFArray *)_copyAutoJoinableWiFiNetworks;	// IMP=0x00000001000266ac
- (struct __WiFiNetwork *)createNetworkWithSSID:(id)arg1;	// IMP=0x000000010002656c
- (void)dealloc;	// IMP=0x0000000100026520

@end

