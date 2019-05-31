//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSURL, SSAccount, TVSStoreFrontLocale;

@interface TVSettingsITMSFacade : NSObject
{
    id _accountStoreObservingToken;	// 8 = 0x8
    NSArray *_availableLocales;	// 16 = 0x10
    TVSStoreFrontLocale *_locale;	// 24 = 0x18
    _Bool _ignoreAccountStoreChangedNotification;	// 32 = 0x20
    _Bool _autoDownloadApps;	// 33 = 0x21
    SSAccount *_preferredAccount;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100052c64
@property(retain, nonatomic) SSAccount *preferredAccount; // @synthesize preferredAccount=_preferredAccount;
@property(nonatomic) _Bool autoDownloadApps; // @synthesize autoDownloadApps=_autoDownloadApps;
- (void).cxx_destruct;	// IMP=0x0000000100054bac
- (void)killStoreApps;	// IMP=0x00000001000548ec
- (void)_updateAutoDownloadApps;	// IMP=0x0000000100054810
- (void)_updateAutoDownloadAppsPerCloudSyncPreferences;	// IMP=0x00000001000545e8
- (void)_automaticDownloadKindsChangedNotification:(id)arg1;	// IMP=0x00000001000544e8
- (void)_updateAccountPasswordSettings:(id)arg1;	// IMP=0x0000000100054174
- (void)_accountStoreChangedNotification:(id)arg1;	// IMP=0x0000000100054078
- (void)_availableLocalesUpdated;	// IMP=0x0000000100053ff0
- (void)_localeUpdated;	// IMP=0x0000000100053f68
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100053e80
- (void)setAsnFreeSetting:(id)arg1;	// IMP=0x0000000100053a08
@property(readonly, retain, nonatomic) NSNumber *asnFreeSetting;
- (void)setAsnPaidSetting:(id)arg1;	// IMP=0x0000000100053864
@property(readonly, retain, nonatomic) NSNumber *asnPaidSetting;
@property(readonly, retain, nonatomic) NSArray *asnValues;
@property(readonly, retain, nonatomic) NSURL *manageSubscriptionsURL;
@property(nonatomic) _Bool addingToPlaylistAddsToLibrary;
@property(readonly, nonatomic, getter=isMatchEnabled) _Bool matchEnabled;
@property(readonly, copy, nonatomic) NSArray *availableLocales;
@property(retain, nonatomic) TVSStoreFrontLocale *locale;
- (void)dealloc;	// IMP=0x0000000100052f04
- (id)init;	// IMP=0x0000000100052ce4

@end

