//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTAnalyticsIdentifier : NSObject
{
}

+ (id)_generateIdentifier;	// IMP=0x000000010005c1b8
+ (_Bool)resetIdentifiersFromCloudIfNeeded;	// IMP=0x000000010005be94
+ (_Bool)isCloudAccountChanged;	// IMP=0x000000010005bddc
+ (void)resetIdentifiersFromSettings;	// IMP=0x000000010005bc44
+ (_Bool)resetIdentifiersIfNeeded;	// IMP=0x000000010005baec
+ (void)updateCloudKeychainEnabled;	// IMP=0x000000010005ba6c
+ (_Bool)isCloudKeychainEnabled;	// IMP=0x000000010005ba28
+ (void)setCloudPersonId:(id)arg1;	// IMP=0x000000010005b978
+ (id)cloudPersonId;	// IMP=0x000000010005b918
+ (id)currentAccountId;	// IMP=0x000000010005b890
+ (id)localPersonIdAccountId;	// IMP=0x000000010005b82c
+ (void)setLocalPersonIdAccountId:(id)arg1;	// IMP=0x000000010005b7b0
+ (void)setLocalPersonId:(id)arg1;	// IMP=0x000000010005b6fc
+ (id)localPersonId;	// IMP=0x000000010005b674
+ (void)resetDeviceId;	// IMP=0x000000010005b600
+ (id)deviceId;	// IMP=0x000000010005b59c

@end
