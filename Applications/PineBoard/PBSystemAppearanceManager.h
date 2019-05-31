//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "PBScreenSaverManagerObserver.h"

@class CLLocationManager, GEOAlmanac, NSString;

@interface PBSystemAppearanceManager : NSObject <CLLocationManagerDelegate, PBScreenSaverManagerObserver>
{
    GEOAlmanac *_almanac;	// 8 = 0x8
    CLLocationManager *_locationManager;	// 16 = 0x10
    struct CLLocationCoordinate2D _locationForDaylight;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010006fc10
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) struct CLLocationCoordinate2D locationForDaylight; // @synthesize locationForDaylight=_locationForDaylight;
@property(retain, nonatomic) GEOAlmanac *almanac; // @synthesize almanac=_almanac;
- (void).cxx_destruct;	// IMP=0x0000000100071f04
- (id)_defaultTransitionContext;	// IMP=0x0000000100071dd4
- (void)_updateUserInterfaceStyleForScenesWithUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100071a84
- (long long)_systemAppearanceForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100071a6c
- (long long)_userInterfaceStyleForSystemAppearance:(long long)arg1;	// IMP=0x0000000100071a20
- (void)_updateSystemAppPermissionsToMatchTimeZone;	// IMP=0x0000000100071810
- (void)_migrateSystemAppearanceSettings;	// IMP=0x00000001000716a0
- (void)_updateLocationForDaylight:(id)arg1;	// IMP=0x000000010007155c
- (void)_handleWillWakeNotification:(id)arg1;	// IMP=0x00000001000714a4
- (void)_videoPlayerNowPlayingStateDidChange:(id)arg1;	// IMP=0x0000000100071300
- (void)screenSaverManagerDidDismissScreenSaver:(id)arg1;	// IMP=0x00000001000712fc
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x0000000100071268
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x0000000100071264
- (void)screenSaverManagerWillPresentScreenSaver:(id)arg1;	// IMP=0x0000000100071260
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100071160
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000100071084
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x0000000100070c78
- (long long)effectiveUserInterfaceStyleForBundleIdentifier:(id)arg1;	// IMP=0x0000000100070878
- (long long)effectiveUserInterfaceStyle;	// IMP=0x0000000100070840
- (long long)reportingValueForCurrentSystemAppearance;	// IMP=0x000000010007081c
- (void)toggleSystemAppearance;	// IMP=0x00000001000707b8
@property(readonly, nonatomic, getter=isLocationAvailable) _Bool locationAvailable;
@property(readonly, nonatomic) _Bool isDaylight;
- (void)updateAutomaticSystemAppearanceIfNeeded;	// IMP=0x000000010007046c
- (void)setSystemAppearance:(long long)arg1;	// IMP=0x0000000100070268
- (long long)systemAppearance;	// IMP=0x0000000100070214
- (void)setup;	// IMP=0x000000010006fffc
- (void)dealloc;	// IMP=0x000000010006ff68
- (id)init;	// IMP=0x000000010006fcc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
