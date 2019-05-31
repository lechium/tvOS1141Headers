//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TVSettingsBackgroundAppRefreshFacade : NSObject
{
    _Bool _needsUpdate;	// 8 = 0x8
    NSArray *_backgroundAppRefreshSettings;	// 16 = 0x10
}

+ (id)_allowedSystemApps;	// IMP=0x0000000100026ce4
+ (id)sharedInstance;	// IMP=0x0000000100026c64
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) NSArray *backgroundAppRefreshSettings; // @synthesize backgroundAppRefreshSettings=_backgroundAppRefreshSettings;
- (void).cxx_destruct;	// IMP=0x000000010002779c
- (void)_updateAppsCoalesced;	// IMP=0x00000001000275e0
- (void)_updateApps;	// IMP=0x0000000100027178
@property(readonly, nonatomic) _Bool backgroundAppRefreshEnabled;
- (void)setBackgroundAppRefreshEnabled:(_Bool)arg1;	// IMP=0x0000000100026fcc
- (id)backgroundAppRefreshSettingForIdentifier:(id)arg1;	// IMP=0x0000000100026e34
- (id)init;	// IMP=0x0000000100026d74

@end

