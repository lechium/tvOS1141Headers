//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TVSEthernetInterface;

@interface TVSettingsNetworkConfigurationViewController : TSKViewController
{
}

- (void)_updateDNSItem:(id)arg1 value:(id)arg2;	// IMP=0x00000001000bc410
- (void)_updateIPItem:(id)arg1 value:(id)arg2;	// IMP=0x00000001000bc368
- (void)_configureInterfaceForDHCP:(id)arg1;	// IMP=0x00000001000bc2f4
- (id)_autoConfigureViewControllerWithTitle:(id)arg1 message:(id)arg2 interface:(id)arg3 dnsOnly:(_Bool)arg4;	// IMP=0x00000001000bbecc
- (id)_configureItemFormatter;	// IMP=0x00000001000bbdc0
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00000001000bbb5c
@property(readonly, nonatomic) TVSEthernetInterface *interface;
- (id)loadSettingGroups;	// IMP=0x00000001000baa0c

@end
