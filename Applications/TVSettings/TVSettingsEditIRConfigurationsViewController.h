//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class NSArray, PBSExternalControlSystem;

@interface TVSettingsEditIRConfigurationsViewController : TSKViewController
{
    PBSExternalControlSystem *_externalControlSystem;	// 8 = 0x8
    NSArray *_cachedIRVolumeButtonConfigurations;	// 16 = 0x10
}

@property(copy, nonatomic) NSArray *cachedIRVolumeButtonConfigurations; // @synthesize cachedIRVolumeButtonConfigurations=_cachedIRVolumeButtonConfigurations;
@property(retain, nonatomic) PBSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_externalControlSystem;
- (void).cxx_destruct;	// IMP=0x000000010008e87c
- (void)_editIRConfiguration:(id)arg1;	// IMP=0x000000010008d7c0
- (void)_remotePolicyChanged;	// IMP=0x000000010008d7b4
- (void)_cacheIRVolumeButtonConfigurations;	// IMP=0x000000010008d6c4
- (id)loadSettingGroups;	// IMP=0x000000010008d340
- (void)viewDidLoad;	// IMP=0x000000010008d278
- (void)dealloc;	// IMP=0x000000010008d200
- (id)init;	// IMP=0x000000010008d154

@end

