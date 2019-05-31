//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSBulletinServiceDelegate.h"

@class NSString, PBBulletinService, PBSBulletin;

@interface PBScreenSharingObserver : NSObject <PBSBulletinServiceDelegate>
{
    _Bool _observing;	// 8 = 0x8
    PBBulletinService *_bulletinService;	// 16 = 0x10
    PBSBulletin *_currentBulletin;	// 24 = 0x18
    unsigned long long _currentSessionID;	// 32 = 0x20
}

+ (unsigned long long)nextSessionID;	// IMP=0x00000001000abe24
+ (id)sharedInstance;	// IMP=0x00000001000aaeac
@property(nonatomic) unsigned long long currentSessionID; // @synthesize currentSessionID=_currentSessionID;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) PBSBulletin *currentBulletin; // @synthesize currentBulletin=_currentBulletin;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
- (void).cxx_destruct;	// IMP=0x00000001000ac5cc
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x00000001000ac4ec
- (void)_delayedScreenSharingBulletinRefresh;	// IMP=0x00000001000ac43c
- (void)_updateHUDStateForSessionID:(unsigned long long)arg1;	// IMP=0x00000001000abe38
- (void)_resetBulletinState:(_Bool)arg1;	// IMP=0x00000001000ab624
- (void)_terminateScreenSharing;	// IMP=0x00000001000ab544
- (id)_screenSharingDeviceName;	// IMP=0x00000001000ab4c0
@property(readonly, nonatomic, getter=isScreenSharingActive) _Bool ScreenSharingActive;
- (void)_externalScreenChanged:(id)arg1;	// IMP=0x00000001000ab2f8
- (void)stopObserving;	// IMP=0x00000001000ab210
- (void)startObserving;	// IMP=0x00000001000ab11c
- (id)init;	// IMP=0x00000001000aaf64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

