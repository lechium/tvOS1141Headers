//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TSKSettingItem;

@interface TVSettingsSecureWiFiViewController : TSKViewController
{
    TSKSettingItem *_secureWiFiItem;	// 8 = 0x8
}

@property(retain, nonatomic) TSKSettingItem *secureWiFiItem; // @synthesize secureWiFiItem=_secureWiFiItem;
- (void).cxx_destruct;	// IMP=0x0000000100067bfc
- (void)_secureWiFiProfileLoaded:(id)arg1 error:(id)arg2;	// IMP=0x000000010006759c
- (void)_loadSecureWiFiProfile:(id)arg1;	// IMP=0x00000001000671f4
- (_Bool)_isSecureWiFiProfileLoaded;	// IMP=0x0000000100067038
- (void)_updateStatus;	// IMP=0x000000010006702c
- (id)loadSettingGroups;	// IMP=0x0000000100066a98

@end

