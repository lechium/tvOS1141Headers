//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@interface TVSettingsVPNViewController : TSKViewController
{
    _Bool _loadingProfile;	// 8 = 0x8
    unsigned long long _configurationCheckState;	// 16 = 0x10
}

@property(nonatomic) _Bool loadingProfile; // @synthesize loadingProfile=_loadingProfile;
@property(nonatomic) unsigned long long configurationCheckState; // @synthesize configurationCheckState=_configurationCheckState;
- (void)_warnAboutVPNOnInternalNetwork;	// IMP=0x0000000100022f5c
- (void)_warnAboutMissingAppleConnectCredentials;	// IMP=0x0000000100022db4
- (void)_checkVPNConfiguration;	// IMP=0x00000001000228b0
- (void)_VPNProfileLoaded:(id)arg1 error:(id)arg2;	// IMP=0x00000001000222a0
- (void)_loadVPNProfile;	// IMP=0x0000000100021dcc
- (void)_updateCheckVPNItem:(id)arg1;	// IMP=0x00000001000219e8
- (void)_updateLoadVPNItem:(id)arg1;	// IMP=0x00000001000215d0
- (id)loadSettingGroups;	// IMP=0x00000001000210b4
- (void)viewDidLoad;	// IMP=0x0000000100021050

@end
