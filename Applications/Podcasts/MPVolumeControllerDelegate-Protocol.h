//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPVolumeController, NSString;

@protocol MPVolumeControllerDelegate <NSObject>

@optional
- (void)volumeController:(MPVolumeController *)arg1 EUVolumeLimitEnforcedDidChange:(_Bool)arg2;
- (void)volumeController:(MPVolumeController *)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeWarningStateDidChange:(long long)arg2;
- (void)volumeController:(MPVolumeController *)arg1 mutedStateDidChange:(_Bool)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeControlLabelDidChange:(NSString *)arg2;
- (void)volumeController:(MPVolumeController *)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
@end

