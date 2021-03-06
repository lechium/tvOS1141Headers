//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "TVPhotosAppDelegateTestingDelegate.h"
#import "UIApplicationDelegate.h"
#import "UIApplicationTestingDelegate.h"

@class NSString, TVPhotosAppDelegateTesting, TVPiCloudPhotoSettings, UIViewController, UIWindow;

@interface TVPhotosAppDelegate : UIResponder <TVPhotosAppDelegateTestingDelegate, UIApplicationTestingDelegate, UIApplicationDelegate>
{
    _Bool _photoPickerModeEnabled;	// 8 = 0x8
    _Bool _didFinishAppLaunch;	// 9 = 0x9
    _Bool _screenSaverModeEnabled;	// 10 = 0xa
    UIWindow *_window;	// 16 = 0x10
    TVPiCloudPhotoSettings *_iCloudSettings;	// 24 = 0x18
    UIViewController *_photoPickerViewController;	// 32 = 0x20
    TVPhotosAppDelegateTesting *_applicationTesting;	// 40 = 0x28
}

@property(readonly, nonatomic) TVPhotosAppDelegateTesting *applicationTesting; // @synthesize applicationTesting=_applicationTesting;
@property(retain, nonatomic) UIViewController *photoPickerViewController; // @synthesize photoPickerViewController=_photoPickerViewController;
@property(nonatomic) _Bool screenSaverModeEnabled; // @synthesize screenSaverModeEnabled=_screenSaverModeEnabled;
@property(nonatomic) _Bool didFinishAppLaunch; // @synthesize didFinishAppLaunch=_didFinishAppLaunch;
@property(retain, nonatomic) TVPiCloudPhotoSettings *iCloudSettings; // @synthesize iCloudSettings=_iCloudSettings;
@property(nonatomic, getter=isPhotoPickerModeEnabled) _Bool photoPickerModeEnabled; // @synthesize photoPickerModeEnabled=_photoPickerModeEnabled;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x0000000100026cb8
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x0000000100026b24
- (void)_tvs_enableSharedPhotoStreamPostUpdateForAccount:(id)arg1;	// IMP=0x00000001000269c8
- (void)_tvs_enableMyPhotoStreamPostUpdateForAccount:(id)arg1;	// IMP=0x000000010002686c
- (void)_setUpScreensaverPickerUI;	// IMP=0x0000000100026760
- (_Bool)_isDisplayingPhotoStreamContent;	// IMP=0x00000001000266f8
- (void)_performAppLaunchForScheme:(id)arg1;	// IMP=0x0000000100025fc4
- (void)_updateApplicationUIWithRootController:(id)arg1 forceRefresh:(_Bool)arg2;	// IMP=0x0000000100025fb0
- (void)_deactivateApplication;	// IMP=0x0000000100025f44
- (void)_displayActivityIndicator;	// IMP=0x0000000100025dac
- (void)_updateCRDPreferencesWithImage:(id)arg1;	// IMP=0x0000000100025ca0
- (void)photoPickerViewController:(id)arg1 selectedPhotoAsset:(id)arg2;	// IMP=0x0000000100025aa0
- (void)internetAvailabilityChanged:(id)arg1;	// IMP=0x0000000100025964
- (void)iCloudAccountStatusChanged:(id)arg1;	// IMP=0x00000001000255bc
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x000000010002556c
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100025524
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100025514
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100025488
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100024da4
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100024d2c
- (id)init;	// IMP=0x0000000100024c98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

