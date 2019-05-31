//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HBFolder, NSHashTable, NSNumber, NSString, PBSBadgeValue;

@interface HBRootItem : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    _Bool _installPaused;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    HBFolder *_parentFolder;	// 32 = 0x20
    NSNumber *_itemOrderId;	// 40 = 0x28
    double _installPercentage;	// 48 = 0x30
    long long _installProgressState;	// 56 = 0x38
    PBSBadgeValue *_badgeValue;	// 64 = 0x40
}

@property(retain, nonatomic) PBSBadgeValue *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic, getter=isInstallPaused) _Bool installPaused; // @synthesize installPaused=_installPaused;
@property(nonatomic) long long installProgressState; // @synthesize installProgressState=_installProgressState;
@property(nonatomic) double installPercentage; // @synthesize installPercentage=_installPercentage;
@property(retain, nonatomic) NSNumber *itemOrderId; // @synthesize itemOrderId=_itemOrderId;
@property(nonatomic) __weak HBFolder *parentFolder; // @synthesize parentFolder=_parentFolder;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;	// IMP=0x000000010003a6a0
- (void)_notifyBadgeValueDidChange;	// IMP=0x000000010003a460
- (void)_notifyDisplayNameDidChange;	// IMP=0x000000010003a318
- (void)_notifyInstallStateChanged;	// IMP=0x000000010003a1d0
- (void)removeObserver:(id)arg1;	// IMP=0x000000010003a1b8
- (void)addObserver:(id)arg1;	// IMP=0x000000010003a198
- (void)setBadgeValue:(id)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x000000010003a0cc
- (void)setInstallPaused:(_Bool)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x000000010003a0a0
- (void)setInstallProgressState:(long long)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x000000010003a074
- (void)setInstallPercentage:(double)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x000000010003a048
@property(readonly, nonatomic) __weak HBFolder *rootFolder;
- (id)init;	// IMP=0x0000000100039f40

@end
