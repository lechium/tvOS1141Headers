//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSObject<OS_dispatch_queue>, TVSiCloudAccountManager, UIViewController;

@interface SATVAuthenticationManager : NSObject
{
    UIViewController *_presentingController;	// 8 = 0x8
    TVSiCloudAccountManager *_iCloudAccountManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010007b1f0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) TVSiCloudAccountManager *iCloudAccountManager; // @synthesize iCloudAccountManager=_iCloudAccountManager;
@property(retain, nonatomic) UIViewController *presentingController; // @synthesize presentingController=_presentingController;
- (void).cxx_destruct;	// IMP=0x000000010007e918
- (void)_updateAccountPasswordSettings:(id)arg1;	// IMP=0x000000010007e660
@property(retain, nonatomic) NSNumber *asnFreeSetting;
@property(retain, nonatomic) NSNumber *asnPaidSetting;
- (void)_performASNSettingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010007dbf8
- (void)promptForASNSettingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010007dbec
- (void)_authenticateGameCenterAccountWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010007dbe8
- (void)_performHomeSharingEnablementWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007d88c
- (void)_performiCloudAuthenticationWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007d61c
- (void)_performiTunesStoreAuthenticationWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007d118
- (void)_performIDMSAuthenticationWithUsername:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007cd8c
- (void)_authenticateHomeSharingAccountWithUsername:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007ca4c
- (void)_authenticateiCloudAccountWithUsername:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007c70c
- (void)_authenticateStoreAccountWithUsername:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007c254
- (void)_authenticateAppleIDWithUsername:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007bbd8
- (void)_logOutiCloudAccount;	// IMP=0x000000010007bb54
- (void)_logOutiTunesStoreAccount;	// IMP=0x000000010007bab8
- (void)logOutAccountType:(unsigned long long)arg1;	// IMP=0x000000010007b95c
- (id)usernameForActiveAccountType:(unsigned long long)arg1;	// IMP=0x000000010007b838
@property(readonly, nonatomic) _Bool iTunesAndiCloudAccountsMatch;
- (void)authenticateAccountType:(unsigned long long)arg1 username:(id)arg2 password:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007b318
- (id)init;	// IMP=0x000000010007b270

@end

