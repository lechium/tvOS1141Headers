//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "AKAppleIDAuthenticationInAppContextDelegate.h"
#import "HMResidentDeviceDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableSet, NSString, TVSettingsICloudAccountFacade, TVSiCloudAccountManager, UITapGestureRecognizer;

@interface TVSettingsiCloudAccountViewController : TSKViewController <AKAppleIDAuthenticationInAppContextDelegate, UIGestureRecognizerDelegate, HMResidentDeviceDelegate>
{
    UITapGestureRecognizer *_menuGestureRecognizer;	// 8 = 0x8
    _Bool _authenticationInProgress;	// 16 = 0x10
    _Bool _signOutInProgress;	// 17 = 0x11
    TVSiCloudAccountManager *_accountManager;	// 24 = 0x18
    TVSettingsICloudAccountFacade *_iCloudAccountFacade;	// 32 = 0x20
    NSMutableSet *_updatingResidentDevices;	// 40 = 0x28
}

+ (void)_killTVPhotos;	// IMP=0x000000010000de84
+ (void)_cleanupTVPhotosApp;	// IMP=0x000000010000dc9c
@property(retain, nonatomic) NSMutableSet *updatingResidentDevices; // @synthesize updatingResidentDevices=_updatingResidentDevices;
@property(nonatomic, getter=isSignOutInProgress) _Bool signOutInProgress; // @synthesize signOutInProgress=_signOutInProgress;
@property(getter=isAuthenticationInProgress) _Bool authenticationInProgress; // @synthesize authenticationInProgress=_authenticationInProgress;
@property(readonly, nonatomic) TVSettingsICloudAccountFacade *iCloudAccountFacade; // @synthesize iCloudAccountFacade=_iCloudAccountFacade;
@property(readonly, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void).cxx_destruct;	// IMP=0x000000010000e7a0
- (void)_toggleResidenceEnabled:(id)arg1;	// IMP=0x000000010000e3ec
- (void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x000000010000e3e0
- (void)residentDevice:(id)arg1 didUpdateEnabled:(_Bool)arg2;	// IMP=0x000000010000e3d4
- (void)residentDevice:(id)arg1 didUpdateName:(id)arg2;	// IMP=0x000000010000e3c8
- (void)contextDidDismissLoginAlertController:(id)arg1;	// IMP=0x000000010000e3c4
- (void)contextWillDismissLoginAlertController:(id)arg1;	// IMP=0x000000010000e3c0
- (void)contextDidPresentLoginAlertController:(id)arg1;	// IMP=0x000000010000e388
- (_Bool)_myPhotoStreamAvailable;	// IMP=0x000000010000e2bc
- (_Bool)_iCloudHomeScreenSyncEnabled;	// IMP=0x000000010000e244
- (_Bool)_iCloudSettingsEnabled;	// IMP=0x000000010000e1cc
- (void)_updateSignInItem:(id)arg1 value:(id)arg2;	// IMP=0x000000010000deb0
- (void)_signOut:(id)arg1;	// IMP=0x000000010000d938
- (void)_enableAuthenticatedSettingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d5cc
- (void)_toggleiCloudHomeScreenSync:(id)arg1;	// IMP=0x000000010000d464
- (void)_enableMyPhotoStream:(id)arg1;	// IMP=0x000000010000d308
- (void)_enableSharedPhotoStream:(id)arg1;	// IMP=0x000000010000d1ac
- (void)_enableICloudPhotoLibrary:(id)arg1;	// IMP=0x000000010000d050
- (void)_presentiCloudHomeScreenSyncOnAlertController;	// IMP=0x000000010000cb08
- (void)_signIn:(id)arg1;	// IMP=0x000000010000c2d0
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010000c268
- (id)loadSettingGroups;	// IMP=0x000000010000af84
- (void)viewDidLoad;	// IMP=0x000000010000ae8c
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010000adc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

