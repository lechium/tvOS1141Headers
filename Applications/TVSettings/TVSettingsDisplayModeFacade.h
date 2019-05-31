//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSDisplayStateObserver.h"

@class NSArray, NSString, PBSDisplayMode, TSKMappingFormatter, TVSettingsDisplayAssistantActionInfo;

@interface TVSettingsDisplayModeFacade : NSObject <PBSDisplayStateObserver>
{
    PBSDisplayMode *_cachedCurrentDisplayMode;	// 8 = 0x8
    NSArray *_cachedSortedDisplayModes;	// 16 = 0x10
    NSArray *_cachedUnverifiedDisplayModes;	// 24 = 0x18
    _Bool _cachedCanHandleHighBandwidthModes;	// 32 = 0x20
    _Bool _cachedShouldModeSwitchForDynamicRange;	// 33 = 0x21
    _Bool _cachedShouldModeSwitchForFrameRate;	// 34 = 0x22
    _Bool _shouldModeSwitchForDynamicRange;	// 35 = 0x23
    _Bool _shouldModeSwitchForFrameRate;	// 36 = 0x24
    PBSDisplayMode *_selectedSDRColorMappingMode;	// 40 = 0x28
    NSArray *_userVisibleSDRColorMappingModes;	// 48 = 0x30
    PBSDisplayMode *_selectedSDRChromaMode;	// 56 = 0x38
    NSArray *_userVisibleSDRChromaModes;	// 64 = 0x40
    PBSDisplayMode *_selectedHDRChromaMode;	// 72 = 0x48
    NSArray *_userVisibleHDRChromaModes;	// 80 = 0x50
    NSArray *_commonResolutionsModes60Hz;	// 88 = 0x58
    NSArray *_commonResolutionsModes50Hz;	// 96 = 0x60
    NSArray *_commonResolutionsModesOthers;	// 104 = 0x68
    NSArray *_otherResolutionsModes60Hz;	// 112 = 0x70
    NSArray *_otherResolutionsModes50Hz;	// 120 = 0x78
    NSArray *_otherResolutionsModesOthers;	// 128 = 0x80
    NSArray *_userVisibleSortedDisplayModes;	// 136 = 0x88
    NSArray *_unverifiedDisplayModes;	// 144 = 0x90
    TSKMappingFormatter *_dynamicRangeOptionFormatter;	// 152 = 0x98
    TSKMappingFormatter *_dynamicRangeDescriptionFormatter;	// 160 = 0xa0
    TSKMappingFormatter *_frameRateOptionFormatter;	// 168 = 0xa8
    TSKMappingFormatter *_frameRateDescriptionFormatter;	// 176 = 0xb0
    NSString *_localizedCurrentSettings;	// 184 = 0xb8
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000001000869a0
+ (id)sharedInstance;	// IMP=0x0000000100083160
@property(nonatomic) _Bool shouldModeSwitchForFrameRate; // @synthesize shouldModeSwitchForFrameRate=_shouldModeSwitchForFrameRate;
@property(nonatomic) _Bool shouldModeSwitchForDynamicRange; // @synthesize shouldModeSwitchForDynamicRange=_shouldModeSwitchForDynamicRange;
@property(readonly, nonatomic) NSString *localizedCurrentSettings; // @synthesize localizedCurrentSettings=_localizedCurrentSettings;
@property(retain, nonatomic) TSKMappingFormatter *frameRateDescriptionFormatter; // @synthesize frameRateDescriptionFormatter=_frameRateDescriptionFormatter;
@property(retain, nonatomic) TSKMappingFormatter *frameRateOptionFormatter; // @synthesize frameRateOptionFormatter=_frameRateOptionFormatter;
@property(retain, nonatomic) TSKMappingFormatter *dynamicRangeDescriptionFormatter; // @synthesize dynamicRangeDescriptionFormatter=_dynamicRangeDescriptionFormatter;
@property(retain, nonatomic) TSKMappingFormatter *dynamicRangeOptionFormatter; // @synthesize dynamicRangeOptionFormatter=_dynamicRangeOptionFormatter;
@property(retain, nonatomic) NSArray *unverifiedDisplayModes; // @synthesize unverifiedDisplayModes=_unverifiedDisplayModes;
@property(retain, nonatomic) NSArray *userVisibleSortedDisplayModes; // @synthesize userVisibleSortedDisplayModes=_userVisibleSortedDisplayModes;
@property(retain, nonatomic) NSArray *otherResolutionsModesOthers; // @synthesize otherResolutionsModesOthers=_otherResolutionsModesOthers;
@property(retain, nonatomic) NSArray *otherResolutionsModes50Hz; // @synthesize otherResolutionsModes50Hz=_otherResolutionsModes50Hz;
@property(retain, nonatomic) NSArray *otherResolutionsModes60Hz; // @synthesize otherResolutionsModes60Hz=_otherResolutionsModes60Hz;
@property(retain, nonatomic) NSArray *commonResolutionsModesOthers; // @synthesize commonResolutionsModesOthers=_commonResolutionsModesOthers;
@property(retain, nonatomic) NSArray *commonResolutionsModes50Hz; // @synthesize commonResolutionsModes50Hz=_commonResolutionsModes50Hz;
@property(retain, nonatomic) NSArray *commonResolutionsModes60Hz; // @synthesize commonResolutionsModes60Hz=_commonResolutionsModes60Hz;
@property(retain, nonatomic) NSArray *userVisibleHDRChromaModes; // @synthesize userVisibleHDRChromaModes=_userVisibleHDRChromaModes;
@property(retain, nonatomic) PBSDisplayMode *selectedHDRChromaMode; // @synthesize selectedHDRChromaMode=_selectedHDRChromaMode;
@property(retain, nonatomic) NSArray *userVisibleSDRChromaModes; // @synthesize userVisibleSDRChromaModes=_userVisibleSDRChromaModes;
@property(retain, nonatomic) PBSDisplayMode *selectedSDRChromaMode; // @synthesize selectedSDRChromaMode=_selectedSDRChromaMode;
@property(retain, nonatomic) NSArray *userVisibleSDRColorMappingModes; // @synthesize userVisibleSDRColorMappingModes=_userVisibleSDRColorMappingModes;
@property(retain, nonatomic) PBSDisplayMode *selectedSDRColorMappingMode; // @synthesize selectedSDRColorMappingMode=_selectedSDRColorMappingMode;
- (void).cxx_destruct;	// IMP=0x0000000100086d7c
- (void)displayState:(id)arg1 didChangeWithConnection:(long long)arg2;	// IMP=0x000000010008671c
- (void)_reloadDataFromCache;	// IMP=0x0000000100086488
- (id)_sortedDisplayModesForUserPresentation:(id)arg1;	// IMP=0x000000010008594c
- (void)presentManualRunDisplayAssistant;	// IMP=0x00000001000858b4
- (void)resetVideoSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010008578c
- (void)updateDisplayManagerWithDisplayMode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008571c
- (void)updateDisplayManagerWithDisplayMode:(id)arg1 requestConfiguration:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100085510
- (void)_enumerateValidColorModesFromSortedModes:(id)arg1 existingFiltering:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100084ed0
@property(readonly, nonatomic) TVSettingsDisplayAssistantActionInfo *displayAssistantActionInfo;
- (_Bool)shouldShowDisplayAssistant;	// IMP=0x0000000100084a6c
@property(readonly, nonatomic) NSArray *frameRateOptions;
@property(nonatomic) unsigned long long preferredFrameRate;
@property(readonly, nonatomic) NSArray *dynamicRangeOptions;
@property(nonatomic) unsigned long long preferredDynamicRange;
- (id)_recalculatedUnverifiedModes;	// IMP=0x0000000100083bc8
- (id)_recalculatedUserVisibleHDRChromaModes;	// IMP=0x00000001000839d4
- (id)_recalculatedUserVisibleSDRChromaModes;	// IMP=0x00000001000837d0
- (id)_recalculatedUserVisibleSDRColorMappingModes;	// IMP=0x000000010008345c
- (void)dealloc;	// IMP=0x00000001000833d4
- (id)init;	// IMP=0x0000000100083218

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

